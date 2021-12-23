// WidgetBlueprintGeneratedClass UW_UserNameTooltip.UW_UserNameTooltip_C
struct UUW_UserNameTooltip_C : UUserWidget {
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

	void SetEnableNameButton(char Enable); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.SetEnableNameButton(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnClickPlayerNameButton(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.OnClickPlayerNameButton(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CorrectionScreenPositionByTeamPositionWidget(struct Unknown& ScreenPosition, char& RetOutScreenPosition); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.CorrectionScreenPositionByTeamPositionWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdatePosition(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdatePosition(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void IsReplayTarget(char& IsTarget); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.IsReplayTarget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetPlayerViewPortPosition(struct Unknown& ScreenPosition); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.GetPlayerViewPortPosition(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetVisibilityWidget(char IsShow); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.SetVisibilityWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void IsShowUserNameTooltip(char& IsShow); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.IsShowUserNameTooltip(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdateEquippedWeaponInfo(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateEquippedWeaponInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdateUsingItemInfo(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateUsingItemInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdateItemInfo(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateItemInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdateTeamInfo(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateTeamInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdateHP(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateHP(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdateInfos(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateInfos(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnLoaded_D53F762441681D4069F(struct Unknown Loaded); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.OnLoaded_D53F762441681D4069F(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AsyncLoadIconTexture(struct TSoftObjectPtr<Unknown> IconTexture, struct Unknown ImgWidget); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Construct(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_UW_UserNameTooltip(int32_t EntryPoint); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.ExecuteUbergraph_UW_UserNameTooltip(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

