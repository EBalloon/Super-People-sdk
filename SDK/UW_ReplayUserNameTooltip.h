// WidgetBlueprintGeneratedClass UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C
class UUW_ReplayUserNameTooltip_C : public UBravoHotelItemUseWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268 (8)
	struct UButton BT_UserName; // 0x270 (8)
	struct UCanvasPanel CP_Main; // 0x278 (8)
	struct UHorizontalBox HB_ItemInfo; // 0x280 (8)
	struct UImage Image_264; // 0x288 (8)
	struct UImage Image_265; // 0x290 (8)
	struct UImage Image_1163; // 0x298 (8)
	struct UImage IMG_Frontbar; // 0x2A0 (8)
	struct UImage IMG_Item; // 0x2A8 (8)
	struct UImage Img_TeamColor; // 0x2B0 (8)
	struct UProgressBar PB_HP; // 0x2B8 (8)
	struct UProgressBar PB_ItemCasting; // 0x2C0 (8)
	struct UProgressBar PB_Message; // 0x2C8 (8)
	struct USizeBox SizeBox_Message; // 0x2D0 (8)
	struct UWidgetSwitcher Switcher_Casting; // 0x2D8 (8)
	struct UTextBlock T_Class; // 0x2E0 (8)
	struct UTextBlock T_ExpertWeapon; // 0x2E8 (8)
	struct UTextBlock T_Item; // 0x2F0 (8)
	struct UTextBlock T_Level; // 0x2F8 (8)
	struct UTextBlock T_Message; // 0x300 (8)
	struct UTextBlock T_Quantity; // 0x308 (8)
	struct UTextBlock T_TeamNum; // 0x310 (8)
	struct UTextBlock T_UserName; // 0x318 (8)
	struct UTextBlock T_UserName_2; // 0x320 (8)
	struct ABravoHotelPlayerState PlayerState; // 0x328 (8)
	struct APlayerController ReplayController; // 0x330 (8)
	struct ABravoHotelCharacter TargetCharacter; // 0x338 (8)
	struct FVector2D MaxViewportSize; // 0x340 (8)
	struct FVector2D LocalScreenPosition; // 0x348 (8)
	char IsPositionUpdated : 0; // 0x350 (1)
	float DefaultCharacterZLocation; // 0x354 (4)
	struct APawn TargetPawn; // 0x358 (8)

	void InitNameButton(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.InitNameButton(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void IsKillCamTarget(char& IsTarget); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.IsKillCamTarget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetEquippedWeapon(char& SUCCESS); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetEquippedWeapon(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetUsingItem(char& IsVisible); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetUsingItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetCastingMessage(char& SUCCESS); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetCastingMessage(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void UpdateCastingGauge(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdateCastingGauge(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetCastingInfo(char& IsVisible); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetCastingInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetEnableNameButton(char Enable); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetEnableNameButton(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnClickPlayerNameButton(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.OnClickPlayerNameButton(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void CorrectionScreenPositionByTeamPositionWidget(struct FVector2D& ScreenPosition, char& RetOutScreenPosition); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.CorrectionScreenPositionByTeamPositionWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void UpdatePosition(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdatePosition(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void IsReplayTarget(char& IsTarget); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.IsReplayTarget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void GetPlayerViewPortPosition(struct FVector2D& ScreenPosition); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.GetPlayerViewPortPosition(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetVisibilityWidget(char IsShow); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetVisibilityWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void IsShowUserNameTooltip(char& IsShow); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.IsShowUserNameTooltip(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void UpdateItemInfo(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdateItemInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void InitPlayerInfo(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.InitPlayerInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void UpdatePlayerInfo(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdatePlayerInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void UpdateInfos(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdateInfos(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnLoaded_E231BB6440132C19B46345A570B8E8BF(struct Object Loaded); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.OnLoaded_E231BB6440132C19B46345A570B8E8BF(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture, struct UImage ImgWidget); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Construct(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW_ReplayUserNameTooltip(int32_t EntryPoint); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.ExecuteUbergraph_UW_ReplayUserNameTooltip(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.InitNameButton
inline void UUW_ReplayUserNameTooltip_C::InitNameButton() {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.InitNameButton");

	struct InitNameButton_Params {
		
	}; InitNameButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.IsKillCamTarget
inline void UUW_ReplayUserNameTooltip_C::IsKillCamTarget(char& IsTarget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.IsKillCamTarget");

	struct IsKillCamTarget_Params {
		char& IsTarget;
	}; IsKillCamTarget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsTarget = Params.IsTarget;

}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetEquippedWeapon
inline void UUW_ReplayUserNameTooltip_C::SetEquippedWeapon(char& SUCCESS) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetEquippedWeapon");

	struct SetEquippedWeapon_Params {
		char& SUCCESS;
	}; SetEquippedWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SUCCESS = Params.SUCCESS;

}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetUsingItem
inline void UUW_ReplayUserNameTooltip_C::SetUsingItem(char& IsVisible) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetUsingItem");

	struct SetUsingItem_Params {
		char& IsVisible;
	}; SetUsingItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsVisible = Params.IsVisible;

}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetCastingMessage
inline void UUW_ReplayUserNameTooltip_C::SetCastingMessage(char& SUCCESS) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetCastingMessage");

	struct SetCastingMessage_Params {
		char& SUCCESS;
	}; SetCastingMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SUCCESS = Params.SUCCESS;

}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdateCastingGauge
inline void UUW_ReplayUserNameTooltip_C::UpdateCastingGauge() {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdateCastingGauge");

	struct UpdateCastingGauge_Params {
		
	}; UpdateCastingGauge_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetCastingInfo
inline void UUW_ReplayUserNameTooltip_C::SetCastingInfo(char& IsVisible) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetCastingInfo");

	struct SetCastingInfo_Params {
		char& IsVisible;
	}; SetCastingInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsVisible = Params.IsVisible;

}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetEnableNameButton
inline void UUW_ReplayUserNameTooltip_C::SetEnableNameButton(char Enable) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetEnableNameButton");

	struct SetEnableNameButton_Params {
		char Enable;
	}; SetEnableNameButton_Params Params;

	Params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.OnClickPlayerNameButton
inline void UUW_ReplayUserNameTooltip_C::OnClickPlayerNameButton() {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.OnClickPlayerNameButton");

	struct OnClickPlayerNameButton_Params {
		
	}; OnClickPlayerNameButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.CorrectionScreenPositionByTeamPositionWidget
inline void UUW_ReplayUserNameTooltip_C::CorrectionScreenPositionByTeamPositionWidget(struct FVector2D& ScreenPosition, char& RetOutScreenPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.CorrectionScreenPositionByTeamPositionWidget");

	struct CorrectionScreenPositionByTeamPositionWidget_Params {
		struct FVector2D& ScreenPosition;
		char& RetOutScreenPosition;
	}; CorrectionScreenPositionByTeamPositionWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ScreenPosition = Params.ScreenPosition;
	RetOutScreenPosition = Params.RetOutScreenPosition;

}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdatePosition
inline void UUW_ReplayUserNameTooltip_C::UpdatePosition() {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdatePosition");

	struct UpdatePosition_Params {
		
	}; UpdatePosition_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.IsReplayTarget
inline void UUW_ReplayUserNameTooltip_C::IsReplayTarget(char& IsTarget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.IsReplayTarget");

	struct IsReplayTarget_Params {
		char& IsTarget;
	}; IsReplayTarget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsTarget = Params.IsTarget;

}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.GetPlayerViewPortPosition
inline void UUW_ReplayUserNameTooltip_C::GetPlayerViewPortPosition(struct FVector2D& ScreenPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.GetPlayerViewPortPosition");

	struct GetPlayerViewPortPosition_Params {
		struct FVector2D& ScreenPosition;
	}; GetPlayerViewPortPosition_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ScreenPosition = Params.ScreenPosition;

}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetVisibilityWidget
inline void UUW_ReplayUserNameTooltip_C::SetVisibilityWidget(char IsShow) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetVisibilityWidget");

	struct SetVisibilityWidget_Params {
		char IsShow;
	}; SetVisibilityWidget_Params Params;

	Params.IsShow = IsShow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.IsShowUserNameTooltip
inline void UUW_ReplayUserNameTooltip_C::IsShowUserNameTooltip(char& IsShow) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.IsShowUserNameTooltip");

	struct IsShowUserNameTooltip_Params {
		char& IsShow;
	}; IsShowUserNameTooltip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsShow = Params.IsShow;

}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdateItemInfo
inline void UUW_ReplayUserNameTooltip_C::UpdateItemInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdateItemInfo");

	struct UpdateItemInfo_Params {
		
	}; UpdateItemInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.InitPlayerInfo
inline void UUW_ReplayUserNameTooltip_C::InitPlayerInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.InitPlayerInfo");

	struct InitPlayerInfo_Params {
		
	}; InitPlayerInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdatePlayerInfo
inline void UUW_ReplayUserNameTooltip_C::UpdatePlayerInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdatePlayerInfo");

	struct UpdatePlayerInfo_Params {
		
	}; UpdatePlayerInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdateInfos
inline void UUW_ReplayUserNameTooltip_C::UpdateInfos() {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdateInfos");

	struct UpdateInfos_Params {
		
	}; UpdateInfos_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.OnLoaded_E231BB6440132C19B46345A570B8E8BF
inline void UUW_ReplayUserNameTooltip_C::OnLoaded_E231BB6440132C19B46345A570B8E8BF(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.OnLoaded_E231BB6440132C19B46345A570B8E8BF");

	struct OnLoaded_E231BB6440132C19B46345A570B8E8BF_Params {
		struct Object Loaded;
	}; OnLoaded_E231BB6440132C19B46345A570B8E8BF_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW_ReplayUserNameTooltip_C::BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.AsyncLoadIconTexture
inline void UUW_ReplayUserNameTooltip_C::AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture, struct UImage ImgWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.AsyncLoadIconTexture");

	struct AsyncLoadIconTexture_Params {
		struct TSoftObjectPtr<UPaperSprite> IconTexture;
		struct UImage ImgWidget;
	}; AsyncLoadIconTexture_Params Params;

	Params.IconTexture = IconTexture;
	Params.ImgWidget = ImgWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.Tick
inline void UUW_ReplayUserNameTooltip_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.Tick");

	struct Tick_Params {
		struct FGeometry MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.Construct
inline void UUW_ReplayUserNameTooltip_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.ExecuteUbergraph_UW_ReplayUserNameTooltip
inline void UUW_ReplayUserNameTooltip_C::ExecuteUbergraph_UW_ReplayUserNameTooltip(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.ExecuteUbergraph_UW_ReplayUserNameTooltip");

	struct ExecuteUbergraph_UW_ReplayUserNameTooltip_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW_ReplayUserNameTooltip_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

