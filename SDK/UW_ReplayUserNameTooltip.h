// WidgetBlueprintGeneratedClass UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C
class UUW_ReplayUserNameTooltip_C : public UBravoHotelItemUseWidget {

public:

	struct Unknown UberGraphFrame; // 0x268 (8)
	struct Unknown BT_UserName; // 0x270 (8)
	struct Unknown CP_Main; // 0x278 (8)
	struct Unknown HB_ItemInfo; // 0x280 (8)
	struct Unknown Image_264; // 0x288 (8)
	struct Unknown Image_265; // 0x290 (8)
	struct Unknown Image_1163; // 0x298 (8)
	struct Unknown IMG_Frontbar; // 0x2A0 (8)
	struct Unknown IMG_Item; // 0x2A8 (8)
	struct Unknown Img_TeamColor; // 0x2B0 (8)
	struct Unknown PB_HP; // 0x2B8 (8)
	struct Unknown PB_ItemCasting; // 0x2C0 (8)
	struct Unknown PB_Message; // 0x2C8 (8)
	struct Unknown SizeBox_Message; // 0x2D0 (8)
	struct Unknown Switcher_Casting; // 0x2D8 (8)
	struct Unknown T_Item; // 0x2E0 (8)
	struct Unknown T_Message; // 0x2E8 (8)
	struct Unknown T_Quantity; // 0x2F0 (8)
	struct Unknown T_TeamNum; // 0x2F8 (8)
	struct Unknown T_UserName; // 0x300 (8)
	struct Unknown PlayerState; // 0x308 (8)
	struct Unknown ReplayController; // 0x310 (8)
	struct Unknown TargetCharacter; // 0x318 (8)
	struct Unknown MaxViewportSize; // 0x320 (8)
	struct Unknown LocalScreenPosition; // 0x328 (8)
	char IsPositionUpdated : 0; // 0x330 (1)
	float DefaultCharacterZLocation; // 0x334 (4)
	struct Unknown TargetPawn; // 0x338 (8)

	void SetEquippedWeapon(char& SUCCESS); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetEquippedWeapon(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetUsingItem(char& IsVisible); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetUsingItem(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCastingMessage(char& SUCCESS); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetCastingMessage(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateCastingGauge(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdateCastingGauge(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetCastingInfo(char& IsVisible); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetCastingInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetEnableNameButton(char Enable); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetEnableNameButton(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnClickPlayerNameButton(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.OnClickPlayerNameButton(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CorrectionScreenPositionByTeamPositionWidget(struct Unknown& ScreenPosition, char& RetOutScreenPosition); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.CorrectionScreenPositionByTeamPositionWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdatePosition(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdatePosition(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsReplayTarget(char& IsTarget); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.IsReplayTarget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetPlayerViewPortPosition(struct Unknown& ScreenPosition); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.GetPlayerViewPortPosition(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetVisibilityWidget(char IsShow); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetVisibilityWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void IsShowUserNameTooltip(char& IsShow); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.IsShowUserNameTooltip(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateItemInfo(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdateItemInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateTeamInfo(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdateTeamInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateHP(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdateHP(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateInfos(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdateInfos(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnLoaded_E231BB6440132C19B46345A570B8E8BF(struct Unknown Loaded); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.OnLoaded_E231BB6440132C19B46345A570B8E8BF(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AsyncLoadIconTexture(struct Unknown IconTexture, struct Unknown ImgWidget); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_UW_ReplayUserNameTooltip(int32_t EntryPoint); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.ExecuteUbergraph_UW_ReplayUserNameTooltip(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

