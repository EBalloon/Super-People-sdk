// WidgetBlueprintGeneratedClass UW-ReplayListWidget.UW-ReplayListWidget_C
class UUW-ReplayListWidget_C : public UBravoHotelReplayListWidget {

public:

	struct Unknown UberGraphFrame; // 0x260 (8)
	struct Unknown Button_Delete; // 0x268 (8)
	struct Unknown Button_Keep; // 0x270 (8)
	struct Unknown Button_OldFileDelete; // 0x278 (8)
	struct Unknown Button_Play; // 0x280 (8)
	struct Unknown Button_Refresh; // 0x288 (8)
	struct Unknown DetailInfo; // 0x290 (8)
	struct Unknown HorizontalBox_3; // 0x298 (8)
	struct Unknown HorizontalBox_4; // 0x2A0 (8)
	struct Unknown HorizontalBox_5; // 0x2A8 (8)
	struct Unknown HorizontalBox_01; // 0x2B0 (8)
	struct Unknown HorizontalBox_Version; // 0x2B8 (8)
	struct Unknown Image_1; // 0x2C0 (8)
	struct Unknown Image_483; // 0x2C8 (8)
	struct Unknown Image_1010; // 0x2D0 (8)
	struct Unknown Image_2531; // 0x2D8 (8)
	struct Unknown Image_2533; // 0x2E0 (8)
	struct Unknown Image_2535; // 0x2E8 (8)
	struct Unknown Image_3059; // 0x2F0 (8)
	struct Unknown Image_3229; // 0x2F8 (8)
	struct Unknown Image_3231; // 0x300 (8)
	struct Unknown Image_; // 0x308 (8)
	struct Unknown Image_ClassImage; // 0x310 (8)
	struct Unknown Image_Icon1; // 0x318 (8)
	struct Unknown Image_Icon2; // 0x320 (8)
	struct Unknown Image_Icon3; // 0x328 (8)
	struct Unknown Image_Icon4; // 0x330 (8)
	struct Unknown Image_MapImage; // 0x338 (8)
	struct Unknown Overlay; // 0x340 (8)
	struct Unknown ReplayListBox; // 0x348 (8)
	struct Unknown TextBlock_2388; // 0x350 (8)
	struct Unknown TextBlock_BattleMode; // 0x358 (8)
	struct Unknown TextBlock_BlueZoneMaxPlayerCount; // 0x360 (8)
	struct Unknown TextBlock_BlueZoneTitle; // 0x368 (8)
	struct Unknown TextBlock_ClassLevel1; // 0x370 (8)
	struct Unknown TextBlock_ClassLevel2; // 0x378 (8)
	struct Unknown TextBlock_ClassLevel3; // 0x380 (8)
	struct Unknown TextBlock_ClassLevel4; // 0x388 (8)
	struct Unknown TextBlock_ClassName1; // 0x390 (8)
	struct Unknown TextBlock_ClassName2; // 0x398 (8)
	struct Unknown TextBlock_ClassName3; // 0x3A0 (8)
	struct Unknown TextBlock_ClassName4; // 0x3A8 (8)
	struct Unknown TextBlock_CurrentFileCount; // 0x3B0 (8)
	struct Unknown TextBlock_Damage; // 0x3B8 (8)
	struct Unknown TextBlock_FPP; // 0x3C0 (8)
	struct Unknown TextBlock_Keep; // 0x3C8 (8)
	struct Unknown TextBlock_Kill; // 0x3D0 (8)
	struct Unknown TextBlock_LifeTime; // 0x3D8 (8)
	struct Unknown TextBlock_MapName; // 0x3E0 (8)
	struct Unknown TextBlock_Name1; // 0x3E8 (8)
	struct Unknown TextBlock_Name2; // 0x3F0 (8)
	struct Unknown TextBlock_Name3; // 0x3F8 (8)
	struct Unknown TextBlock_Name4; // 0x400 (8)
	struct Unknown TextBlock_Rank; // 0x408 (8)
	struct Unknown TextBlock_Time; // 0x410 (8)
	struct Unknown TextBlock_TotalPlayerCount; // 0x418 (8)
	struct Unknown TextBlock_TotalSize; // 0x420 (8)
	struct Unknown TextBlock_Weapon1; // 0x428 (8)
	struct Unknown TextBlock_Weapon2; // 0x430 (8)
	struct Unknown TextBlock_Weapon3; // 0x438 (8)
	struct Unknown TextBlock_Weapon4; // 0x440 (8)
	struct Unknown UW-ReplayListItemWidget; // 0x448 (8)
	struct Unknown UW-ReplayListItemWidget_C_3; // 0x450 (8)
	struct Unknown UW-ReplayListItemWidget_C_4; // 0x458 (8)
	struct Unknown UW-ReplayListItemWidget_C_5; // 0x460 (8)
	struct Unknown UW-ReplayListItemWidget_C_6; // 0x468 (8)
	struct Unknown UW-ReplayListItemWidget_C_7; // 0x470 (8)
	struct Unknown UW-ReplayListItemWidget_C_8; // 0x478 (8)
	struct Unknown UW-ReplayListItemWidget_C_9; // 0x480 (8)
	struct Unknown UW-ReplayListItemWidget_C_10; // 0x488 (8)
	struct Unknown UW-ReplayListItemWidget_C_11; // 0x490 (8)
	struct Unknown UW-ReplayListItemWidget_C_12; // 0x498 (8)
	struct Unknown UW-ReplayListItemWidget_C_13; // 0x4A0 (8)
	struct Unknown SelectedItemInfo; // 0x4A8 (296)

	void GetBattleModeString(int32_t Idx, struct FText& Str); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.GetBattleModeString(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Activate(enum class Unknow Visibility); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.Activate(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateKeep(); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.UpdateKeep(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateTotalSize(); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.UpdateTotalSize(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SelectedListItem(struct Unknown ItemInfo); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.SelectedListItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_40713CDC488A1CF8D5EDBDBAEA95837C(struct Unknown Loaded); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.OnLoaded_40713CDC488A1CF8D5EDBDBAEA95837C(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_167167B5465D6F8A61D1C89B5E25D686(struct Unknown Loaded); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.OnLoaded_167167B5465D6F8A61D1C89B5E25D686(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_2738E50F4D6EF574498E78A88D8D1A93(struct Unknown Loaded); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.OnLoaded_2738E50F4D6EF574498E78A88D8D1A93(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_945B406843BC9B1A380D21ACD9EE830F(struct Unknown Loaded); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.OnLoaded_945B406843BC9B1A380D21ACD9EE830F(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_F91776604E3BB97FDD80308C25A54425(struct Unknown Loaded); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.OnLoaded_F91776604E3BB97FDD80308C25A54425(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_156EB2D94B8C00F9352201B8E4AAD20A(struct Unknown Loaded); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.OnLoaded_156EB2D94B8C00F9352201B8E4AAD20A(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateReplayListItems(); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.UpdateReplayListItems(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__Button_OldFileDelete_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.BndEvt__Button_OldFileDelete_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__Button_SizeRefresh_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.BndEvt__Button_SizeRefresh_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__Button_Lock_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.BndEvt__Button_Lock_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__Button_Play_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__Button_Delete_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.BndEvt__Button_Delete_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CustomEvent_2(struct Unknown ItemInfo); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.CustomEvent_2(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AsyncIcon1(struct Unknown Image, struct Unknown Target); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.AsyncIcon1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AsyncClassIcon(struct Unknown Image, struct Unknown Target); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.AsyncClassIcon(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AsyncMapImage(struct Unknown Image, struct Unknown Target); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.AsyncMapImage(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AsyncIcon2(struct Unknown Image, struct Unknown Target); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.AsyncIcon2(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AsyncIcon3(struct Unknown Image, struct Unknown Target); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.AsyncIcon3(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AsyncIcon4(struct Unknown Image, struct Unknown Target); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.AsyncIcon4(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-ReplayListWidget(int32_t EntryPoint); // Function UW-ReplayListWidget.UW-ReplayListWidget_C.ExecuteUbergraph_UW-ReplayListWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.GetBattleModeString
inline void UUW-ReplayListWidget_C::GetBattleModeString(int32_t Idx, struct FText& Str) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.GetBattleModeString");

	struct GetBattleModeString_Params {
		int32_t Idx;
		struct FText& Str;
	}; GetBattleModeString_Params Params;

	Params.Idx = Idx;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Str = Params.Str;

}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.Activate
inline void UUW-ReplayListWidget_C::Activate(enum class Unknow Visibility) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.Activate");

	struct Activate_Params {
		enum class Unknow Visibility;
	}; Activate_Params Params;

	Params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.UpdateKeep
inline void UUW-ReplayListWidget_C::UpdateKeep() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.UpdateKeep");

	struct UpdateKeep_Params {
		
	}; UpdateKeep_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.UpdateTotalSize
inline void UUW-ReplayListWidget_C::UpdateTotalSize() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.UpdateTotalSize");

	struct UpdateTotalSize_Params {
		
	}; UpdateTotalSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.SelectedListItem
inline void UUW-ReplayListWidget_C::SelectedListItem(struct Unknown ItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.SelectedListItem");

	struct SelectedListItem_Params {
		struct Unknown ItemInfo;
	}; SelectedListItem_Params Params;

	Params.ItemInfo = ItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.OnLoaded_40713CDC488A1CF8D5EDBDBAEA95837C
inline void UUW-ReplayListWidget_C::OnLoaded_40713CDC488A1CF8D5EDBDBAEA95837C(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.OnLoaded_40713CDC488A1CF8D5EDBDBAEA95837C");

	struct OnLoaded_40713CDC488A1CF8D5EDBDBAEA95837C_Params {
		struct Unknown Loaded;
	}; OnLoaded_40713CDC488A1CF8D5EDBDBAEA95837C_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.OnLoaded_167167B5465D6F8A61D1C89B5E25D686
inline void UUW-ReplayListWidget_C::OnLoaded_167167B5465D6F8A61D1C89B5E25D686(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.OnLoaded_167167B5465D6F8A61D1C89B5E25D686");

	struct OnLoaded_167167B5465D6F8A61D1C89B5E25D686_Params {
		struct Unknown Loaded;
	}; OnLoaded_167167B5465D6F8A61D1C89B5E25D686_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.OnLoaded_2738E50F4D6EF574498E78A88D8D1A93
inline void UUW-ReplayListWidget_C::OnLoaded_2738E50F4D6EF574498E78A88D8D1A93(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.OnLoaded_2738E50F4D6EF574498E78A88D8D1A93");

	struct OnLoaded_2738E50F4D6EF574498E78A88D8D1A93_Params {
		struct Unknown Loaded;
	}; OnLoaded_2738E50F4D6EF574498E78A88D8D1A93_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.OnLoaded_945B406843BC9B1A380D21ACD9EE830F
inline void UUW-ReplayListWidget_C::OnLoaded_945B406843BC9B1A380D21ACD9EE830F(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.OnLoaded_945B406843BC9B1A380D21ACD9EE830F");

	struct OnLoaded_945B406843BC9B1A380D21ACD9EE830F_Params {
		struct Unknown Loaded;
	}; OnLoaded_945B406843BC9B1A380D21ACD9EE830F_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.OnLoaded_F91776604E3BB97FDD80308C25A54425
inline void UUW-ReplayListWidget_C::OnLoaded_F91776604E3BB97FDD80308C25A54425(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.OnLoaded_F91776604E3BB97FDD80308C25A54425");

	struct OnLoaded_F91776604E3BB97FDD80308C25A54425_Params {
		struct Unknown Loaded;
	}; OnLoaded_F91776604E3BB97FDD80308C25A54425_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.OnLoaded_156EB2D94B8C00F9352201B8E4AAD20A
inline void UUW-ReplayListWidget_C::OnLoaded_156EB2D94B8C00F9352201B8E4AAD20A(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.OnLoaded_156EB2D94B8C00F9352201B8E4AAD20A");

	struct OnLoaded_156EB2D94B8C00F9352201B8E4AAD20A_Params {
		struct Unknown Loaded;
	}; OnLoaded_156EB2D94B8C00F9352201B8E4AAD20A_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.UpdateReplayListItems
inline void UUW-ReplayListWidget_C::UpdateReplayListItems() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.UpdateReplayListItems");

	struct UpdateReplayListItems_Params {
		
	}; UpdateReplayListItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.BndEvt__Button_OldFileDelete_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-ReplayListWidget_C::BndEvt__Button_OldFileDelete_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.BndEvt__Button_OldFileDelete_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_OldFileDelete_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_OldFileDelete_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.BndEvt__Button_SizeRefresh_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
inline void UUW-ReplayListWidget_C::BndEvt__Button_SizeRefresh_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.BndEvt__Button_SizeRefresh_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_SizeRefresh_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_SizeRefresh_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.BndEvt__Button_Lock_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
inline void UUW-ReplayListWidget_C::BndEvt__Button_Lock_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.BndEvt__Button_Lock_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Lock_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Lock_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
inline void UUW-ReplayListWidget_C::BndEvt__Button_Play_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Play_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Play_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.BndEvt__Button_Delete_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
inline void UUW-ReplayListWidget_C::BndEvt__Button_Delete_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.BndEvt__Button_Delete_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Delete_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Delete_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.CustomEvent_2
inline void UUW-ReplayListWidget_C::CustomEvent_2(struct Unknown ItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.CustomEvent_2");

	struct CustomEvent_2_Params {
		struct Unknown ItemInfo;
	}; CustomEvent_2_Params Params;

	Params.ItemInfo = ItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.AsyncIcon1
inline void UUW-ReplayListWidget_C::AsyncIcon1(struct Unknown Image, struct Unknown Target) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.AsyncIcon1");

	struct AsyncIcon1_Params {
		struct Unknown Image;
		struct Unknown Target;
	}; AsyncIcon1_Params Params;

	Params.Image = Image;
	Params.Target = Target;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.AsyncClassIcon
inline void UUW-ReplayListWidget_C::AsyncClassIcon(struct Unknown Image, struct Unknown Target) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.AsyncClassIcon");

	struct AsyncClassIcon_Params {
		struct Unknown Image;
		struct Unknown Target;
	}; AsyncClassIcon_Params Params;

	Params.Image = Image;
	Params.Target = Target;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.AsyncMapImage
inline void UUW-ReplayListWidget_C::AsyncMapImage(struct Unknown Image, struct Unknown Target) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.AsyncMapImage");

	struct AsyncMapImage_Params {
		struct Unknown Image;
		struct Unknown Target;
	}; AsyncMapImage_Params Params;

	Params.Image = Image;
	Params.Target = Target;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.AsyncIcon2
inline void UUW-ReplayListWidget_C::AsyncIcon2(struct Unknown Image, struct Unknown Target) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.AsyncIcon2");

	struct AsyncIcon2_Params {
		struct Unknown Image;
		struct Unknown Target;
	}; AsyncIcon2_Params Params;

	Params.Image = Image;
	Params.Target = Target;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.AsyncIcon3
inline void UUW-ReplayListWidget_C::AsyncIcon3(struct Unknown Image, struct Unknown Target) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.AsyncIcon3");

	struct AsyncIcon3_Params {
		struct Unknown Image;
		struct Unknown Target;
	}; AsyncIcon3_Params Params;

	Params.Image = Image;
	Params.Target = Target;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.AsyncIcon4
inline void UUW-ReplayListWidget_C::AsyncIcon4(struct Unknown Image, struct Unknown Target) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.AsyncIcon4");

	struct AsyncIcon4_Params {
		struct Unknown Image;
		struct Unknown Target;
	}; AsyncIcon4_Params Params;

	Params.Image = Image;
	Params.Target = Target;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayListWidget.UW-ReplayListWidget_C.ExecuteUbergraph_UW-ReplayListWidget
inline void UUW-ReplayListWidget_C::ExecuteUbergraph_UW-ReplayListWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayListWidget.UW-ReplayListWidget_C.ExecuteUbergraph_UW-ReplayListWidget");

	struct ExecuteUbergraph_UW-ReplayListWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ReplayListWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

