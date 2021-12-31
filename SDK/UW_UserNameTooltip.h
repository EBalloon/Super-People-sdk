// WidgetBlueprintGeneratedClass UW_UserNameTooltip.UW_UserNameTooltip_C
class UUW_UserNameTooltip_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown BT_UserName; // 0x250 (8)
	struct Unknown CP_Main; // 0x258 (8)
	struct Unknown HB_ItemInfo; // 0x260 (8)
	struct Unknown Image_264; // 0x268 (8)
	struct Unknown Image_265; // 0x270 (8)
	struct Unknown Image_1163; // 0x278 (8)
	struct Unknown IMG_Frontbar; // 0x280 (8)
	struct Unknown IMG_Item; // 0x288 (8)
	struct Unknown Img_TeamColor; // 0x290 (8)
	struct Unknown PB_HP; // 0x298 (8)
	struct Unknown PB_ItemCasting; // 0x2A0 (8)
	struct Unknown T_Item; // 0x2A8 (8)
	struct Unknown T_Quantity; // 0x2B0 (8)
	struct Unknown T_TeamNum; // 0x2B8 (8)
	struct Unknown T_UserName; // 0x2C0 (8)
	struct Unknown PlayerState; // 0x2C8 (8)
	struct Unknown ReplayController; // 0x2D0 (8)
	struct Unknown TargetCharacter; // 0x2D8 (8)
	struct Unknown MaxViewportSize; // 0x2E0 (8)
	struct Unknown LocalScreenPosition; // 0x2E8 (8)
	char IsPositionUpdated : 0; // 0x2F0 (1)
	float DefaultCharacterZLocation; // 0x2F4 (4)

	void SetEnableNameButton(char Enable); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.SetEnableNameButton(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnClickPlayerNameButton(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.OnClickPlayerNameButton(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CorrectionScreenPositionByTeamPositionWidget(struct Unknown& ScreenPosition, char& RetOutScreenPosition); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.CorrectionScreenPositionByTeamPositionWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdatePosition(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdatePosition(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void IsReplayTarget(char& IsTarget); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.IsReplayTarget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetPlayerViewPortPosition(struct Unknown& ScreenPosition); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.GetPlayerViewPortPosition(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetVisibilityWidget(char IsShow); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.SetVisibilityWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void IsShowUserNameTooltip(char& IsShow); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.IsShowUserNameTooltip(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateEquippedWeaponInfo(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateEquippedWeaponInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateUsingItemInfo(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateUsingItemInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateItemInfo(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateItemInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateTeamInfo(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateTeamInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateHP(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateHP(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateInfos(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateInfos(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnLoaded_D53F762441681D4069F6ABB7A27DFBE8(struct Unknown Loaded); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.OnLoaded_D53F762441681D4069F6ABB7A27DFBE8(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void AsyncLoadIconTexture(struct Unknown IconTexture, struct Unknown ImgWidget); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Construct(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW_UserNameTooltip(int32_t EntryPoint); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.ExecuteUbergraph_UW_UserNameTooltip(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW_UserNameTooltip.UW_UserNameTooltip_C.SetEnableNameButton
inline void UUW_UserNameTooltip_C::SetEnableNameButton(char Enable) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_UserNameTooltip.UW_UserNameTooltip_C.SetEnableNameButton");

	struct SetEnableNameButton_Params {
		char Enable;
	}; SetEnableNameButton_Params Params;

	Params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_UserNameTooltip.UW_UserNameTooltip_C.OnClickPlayerNameButton
inline void UUW_UserNameTooltip_C::OnClickPlayerNameButton() {
	static auto fn = UObject::FindObject<UFunction>("Function UW_UserNameTooltip.UW_UserNameTooltip_C.OnClickPlayerNameButton");

	struct OnClickPlayerNameButton_Params {
		
	}; OnClickPlayerNameButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_UserNameTooltip.UW_UserNameTooltip_C.CorrectionScreenPositionByTeamPositionWidget
inline void UUW_UserNameTooltip_C::CorrectionScreenPositionByTeamPositionWidget(struct Unknown& ScreenPosition, char& RetOutScreenPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_UserNameTooltip.UW_UserNameTooltip_C.CorrectionScreenPositionByTeamPositionWidget");

	struct CorrectionScreenPositionByTeamPositionWidget_Params {
		struct Unknown& ScreenPosition;
		char& RetOutScreenPosition;
	}; CorrectionScreenPositionByTeamPositionWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ScreenPosition = Params.ScreenPosition;
	RetOutScreenPosition = Params.RetOutScreenPosition;

}

// Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdatePosition
inline void UUW_UserNameTooltip_C::UpdatePosition() {
	static auto fn = UObject::FindObject<UFunction>("Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdatePosition");

	struct UpdatePosition_Params {
		
	}; UpdatePosition_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_UserNameTooltip.UW_UserNameTooltip_C.IsReplayTarget
inline void UUW_UserNameTooltip_C::IsReplayTarget(char& IsTarget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_UserNameTooltip.UW_UserNameTooltip_C.IsReplayTarget");

	struct IsReplayTarget_Params {
		char& IsTarget;
	}; IsReplayTarget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsTarget = Params.IsTarget;

}

// Function UW_UserNameTooltip.UW_UserNameTooltip_C.GetPlayerViewPortPosition
inline void UUW_UserNameTooltip_C::GetPlayerViewPortPosition(struct Unknown& ScreenPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_UserNameTooltip.UW_UserNameTooltip_C.GetPlayerViewPortPosition");

	struct GetPlayerViewPortPosition_Params {
		struct Unknown& ScreenPosition;
	}; GetPlayerViewPortPosition_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ScreenPosition = Params.ScreenPosition;

}

// Function UW_UserNameTooltip.UW_UserNameTooltip_C.SetVisibilityWidget
inline void UUW_UserNameTooltip_C::SetVisibilityWidget(char IsShow) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_UserNameTooltip.UW_UserNameTooltip_C.SetVisibilityWidget");

	struct SetVisibilityWidget_Params {
		char IsShow;
	}; SetVisibilityWidget_Params Params;

	Params.IsShow = IsShow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_UserNameTooltip.UW_UserNameTooltip_C.IsShowUserNameTooltip
inline void UUW_UserNameTooltip_C::IsShowUserNameTooltip(char& IsShow) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_UserNameTooltip.UW_UserNameTooltip_C.IsShowUserNameTooltip");

	struct IsShowUserNameTooltip_Params {
		char& IsShow;
	}; IsShowUserNameTooltip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsShow = Params.IsShow;

}

// Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateEquippedWeaponInfo
inline void UUW_UserNameTooltip_C::UpdateEquippedWeaponInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateEquippedWeaponInfo");

	struct UpdateEquippedWeaponInfo_Params {
		
	}; UpdateEquippedWeaponInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateUsingItemInfo
inline void UUW_UserNameTooltip_C::UpdateUsingItemInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateUsingItemInfo");

	struct UpdateUsingItemInfo_Params {
		
	}; UpdateUsingItemInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateItemInfo
inline void UUW_UserNameTooltip_C::UpdateItemInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateItemInfo");

	struct UpdateItemInfo_Params {
		
	}; UpdateItemInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateTeamInfo
inline void UUW_UserNameTooltip_C::UpdateTeamInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateTeamInfo");

	struct UpdateTeamInfo_Params {
		
	}; UpdateTeamInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateHP
inline void UUW_UserNameTooltip_C::UpdateHP() {
	static auto fn = UObject::FindObject<UFunction>("Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateHP");

	struct UpdateHP_Params {
		
	}; UpdateHP_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateInfos
inline void UUW_UserNameTooltip_C::UpdateInfos() {
	static auto fn = UObject::FindObject<UFunction>("Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateInfos");

	struct UpdateInfos_Params {
		
	}; UpdateInfos_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_UserNameTooltip.UW_UserNameTooltip_C.OnLoaded_D53F762441681D4069F6ABB7A27DFBE8
inline void UUW_UserNameTooltip_C::OnLoaded_D53F762441681D4069F6ABB7A27DFBE8(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_UserNameTooltip.UW_UserNameTooltip_C.OnLoaded_D53F762441681D4069F6ABB7A27DFBE8");

	struct OnLoaded_D53F762441681D4069F6ABB7A27DFBE8_Params {
		struct Unknown Loaded;
	}; OnLoaded_D53F762441681D4069F6ABB7A27DFBE8_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_UserNameTooltip.UW_UserNameTooltip_C.BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW_UserNameTooltip_C::BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW_UserNameTooltip.UW_UserNameTooltip_C.BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_UserNameTooltip.UW_UserNameTooltip_C.AsyncLoadIconTexture
inline void UUW_UserNameTooltip_C::AsyncLoadIconTexture(struct Unknown IconTexture, struct Unknown ImgWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_UserNameTooltip.UW_UserNameTooltip_C.AsyncLoadIconTexture");

	struct AsyncLoadIconTexture_Params {
		struct Unknown IconTexture;
		struct Unknown ImgWidget;
	}; AsyncLoadIconTexture_Params Params;

	Params.IconTexture = IconTexture;
	Params.ImgWidget = ImgWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_UserNameTooltip.UW_UserNameTooltip_C.Tick
inline void UUW_UserNameTooltip_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_UserNameTooltip.UW_UserNameTooltip_C.Tick");

	struct Tick_Params {
		struct Unknown MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_UserNameTooltip.UW_UserNameTooltip_C.Construct
inline void UUW_UserNameTooltip_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW_UserNameTooltip.UW_UserNameTooltip_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_UserNameTooltip.UW_UserNameTooltip_C.ExecuteUbergraph_UW_UserNameTooltip
inline void UUW_UserNameTooltip_C::ExecuteUbergraph_UW_UserNameTooltip(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_UserNameTooltip.UW_UserNameTooltip_C.ExecuteUbergraph_UW_UserNameTooltip");

	struct ExecuteUbergraph_UW_UserNameTooltip_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW_UserNameTooltip_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

