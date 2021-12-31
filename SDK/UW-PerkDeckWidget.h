// WidgetBlueprintGeneratedClass UW-PerkDeckWidget.UW-PerkDeckWidget_C
class UUW-PerkDeckWidget_C : public UBravoHotelPerkDeckWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Msg_open; // 0x250 (8)
	struct Unknown POPUP_OPEN; // 0x258 (8)
	struct Unknown Idle; // 0x260 (8)
	struct Unknown btn_Choose; // 0x268 (8)
	struct Unknown btn_OK; // 0x270 (8)
	struct Unknown btn_OK_6; // 0x278 (8)
	struct Unknown btn_PerkDeck; // 0x280 (8)
	struct Unknown Button_CloseMovie; // 0x288 (8)
	struct Unknown Button_PlayMovie; // 0x290 (8)
	struct Unknown Button_Refresh; // 0x298 (8)
	struct Unknown Button_Reselect; // 0x2A0 (8)
	struct Unknown Button_SelectMode; // 0x2A8 (8)
	struct Unknown Canvas_CantSelectMessage; // 0x2B0 (8)
	struct Unknown Canvas_MovieScreen; // 0x2B8 (8)
	struct Unknown CanvasPanel_ClassList; // 0x2C0 (8)
	struct Unknown CanvasPanel_NewbieAdvantage; // 0x2C8 (8)
	struct Unknown CheckBox_PerkDeckNotReOpen; // 0x2D0 (8)
	struct Unknown GoldLack; // 0x2D8 (8)
	struct Unknown HorizontalBox_ClassList; // 0x2E0 (8)
	struct Unknown HorizontalBox_PerkDeckReOpen; // 0x2E8 (8)
	struct Unknown Image_1; // 0x2F0 (8)
	struct Unknown Image_2; // 0x2F8 (8)
	struct Unknown Image_5; // 0x300 (8)
	struct Unknown Image_10; // 0x308 (8)
	struct Unknown Image_11; // 0x310 (8)
	struct Unknown Image_13; // 0x318 (8)
	struct Unknown Image_134; // 0x320 (8)
	struct Unknown Image_213; // 0x328 (8)
	struct Unknown Image_247; // 0x330 (8)
	struct Unknown Image_271; // 0x338 (8)
	struct Unknown Image_276; // 0x340 (8)
	struct Unknown Image_335; // 0x348 (8)
	struct Unknown Image_342; // 0x350 (8)
	struct Unknown Image_484; // 0x358 (8)
	struct Unknown Image_566; // 0x360 (8)
	struct Unknown Image_1200; // 0x368 (8)
	struct Unknown Image_1511; // 0x370 (8)
	struct Unknown Image_Class; // 0x378 (8)
	struct Unknown Image_ClassIcon; // 0x380 (8)
	struct Unknown Image_Cycle; // 0x388 (8)
	struct Unknown Image_Cycle_2; // 0x390 (8)
	struct Unknown Image_Cycle_4; // 0x398 (8)
	struct Unknown Image_Weapon; // 0x3A0 (8)
	struct Unknown Img_Movie; // 0x3A8 (8)
	struct Unknown ReseletTextGroup1; // 0x3B0 (8)
	struct Unknown ReseletTextGroup1_2; // 0x3B8 (8)
	struct Unknown ReseletTextGroup2; // 0x3C0 (8)
	struct Unknown ReseletTextGroup2_2; // 0x3C8 (8)
	struct Unknown ReseletTextGroup2_4; // 0x3D0 (8)
	struct Unknown ScaleBox_ClassList; // 0x3D8 (8)
	struct Unknown ScaleBox_SelectNotifyMessage; // 0x3E0 (8)
	struct Unknown SizeBox_Choose; // 0x3E8 (8)
	struct Unknown SizeBox_Ok; // 0x3F0 (8)
	struct Unknown SizeBox_Ok2; // 0x3F8 (8)
	struct Unknown SizeBox_Random; // 0x400 (8)
	struct Unknown SizeBox_Refrest; // 0x408 (8)
	struct Unknown SizeBox_Select; // 0x410 (8)
	struct Unknown T_AmmoName; // 0x418 (8)
	struct Unknown T_ClassDeckName; // 0x420 (8)
	struct Unknown T_ClassDesc; // 0x428 (8)
	struct Unknown T_CurrentGold; // 0x430 (8)
	struct Unknown T_WeaponDesc; // 0x438 (8)
	struct Unknown T_WeaponName; // 0x440 (8)
	struct Unknown TextBlock_Close; // 0x448 (8)
	struct Unknown TextBlock_Close_2; // 0x450 (8)
	struct Unknown TextBlock_Close_7; // 0x458 (8)
	struct Unknown TextBlock_MaxReset; // 0x460 (8)
	struct Unknown TextBlock_MaxReset_2; // 0x468 (8)
	struct Unknown TextBlock_Price_ChangeDeckList; // 0x470 (8)
	struct Unknown TextBlock_Price_Random; // 0x478 (8)
	struct Unknown TextBlock_Price_Select; // 0x480 (8)
	struct Unknown TextBlock_RandomRemainCount; // 0x488 (8)
	struct Unknown TextBlock_RefreshRemainCount; // 0x490 (8)
	struct Unknown TextBlock_Reselect; // 0x498 (8)
	struct Unknown TextBlock_Reselect_2; // 0x4A0 (8)
	struct Unknown TextBlock_Reselect_4; // 0x4A8 (8)
	struct Unknown UW-Inventory_Perk; // 0x4B0 (8)
	struct Unknown UW-Timer; // 0x4B8 (8)
	struct Unknown WidgetSwitcher_ChangeDeck; // 0x4C0 (8)
	struct Unknown WidgetSwitcher_ChangeDeck_2; // 0x4C8 (8)
	struct Unknown WidgetSwitcher_Reselect; // 0x4D0 (8)
	struct Unknown WidgetSwitcher_Reselect_2; // 0x4D8 (8)
	struct Unknown WidgetSwitcher_Reselect_4; // 0x4E0 (8)
	struct Unknown InventoryWidget; // 0x4E8 (8)
	struct TArray<Unknown> Slots; // 0x4F0 (16)
	struct Unknown IconBrush; // 0x500 (136)
	struct Unknown HoverWidget; // 0x588 (8)
	struct Unknown HoverTimerHandle; // 0x590 (8)
	int64_t LocalTemp; // 0x598 (8)
	struct Unknown MediaPlayer; // 0x5A0 (8)
	struct TMap<Unknown, Unknown> ClassVideo_Map; // 0x5A8 (80)
	char bBlockButton : 0; // 0x5F8 (1)
	char bButtonEnabled : 0; // 0x5F9 (1)
	char bCanRemainCount : 0; // 0x5FA (1)
	char bCanCurrentGold : 0; // 0x5FB (1)
	char bWaitingResponse : 0; // 0x5FC (1)
	int64_t CurrentGold; // 0x600 (8)
	int32_t ChangeDeckCount; // 0x608 (4)
	int32_t ChangeDeckListCount; // 0x60C (4)
	int32_t PerkDeckID; // 0x610 (4)
	int32_t DisableTime; // 0x614 (4)
	struct TMap<Unknown, Unknown> ClassInfoWidgetMap; // 0x618 (80)
	struct Unknown CurrentPerkDeckSelectInfo; // 0x668 (24)
	int32_t LocalPerkMode; // 0x680 (4)
	float ClassListPadding; // 0x684 (4)
	struct Unknown Handle_PlayMovie; // 0x688 (8)
	struct Unknown CurrentClassVideo; // 0x690 (8)
	struct Unknown Handle_SetPerkInfoByHoverClassButton; // 0x698 (8)
	char LastClassButtonHovered : 0; // 0x6A0 (1)
	int32_t LastClassIndex; // 0x6A4 (4)

	void SequenceEvent__ENTRYPOINTUW-PerkDeckWidget_3(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SequenceEvent__ENTRYPOINTUW-PerkDeckWidget_3(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SequenceEvent__ENTRYPOINTUW-PerkDeckWidget_2(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SequenceEvent__ENTRYPOINTUW-PerkDeckWidget_2(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SequenceEvent__ENTRYPOINTUW-PerkDeckWidget_1(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SequenceEvent__ENTRYPOINTUW-PerkDeckWidget_1(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetPerkDeckReOpenCheck(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetPerkDeckReOpenCheck(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetComingSoonClass(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetComingSoonClass(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetComingSoonClass(struct FName& ClassRow); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.GetComingSoonClass(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateNewbieAdvantage(struct Unknown& PerkDeckData); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.UpdateNewbieAdvantage(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void DisableClassButtonWithoutSelected(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.DisableClassButtonWithoutSelected(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetPerkInfoByHoverClassButton(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetPerkInfoByHoverClassButton(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void PlayChangeDeckSound(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.PlayChangeDeckSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void PlayChooseSound(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.PlayChooseSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void PlayClickSound(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.PlayClickSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void PlayHoverSound(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.PlayHoverSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void HasPerkDeckClassInfo(char& NewParam); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.HasPerkDeckClassInfo(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetButtonInfo(struct Unknown Button, struct Unknown TextPrice, int32_t Price, struct Unknown TextRemainCount, int32_t RemainCount); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetButtonInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateButtonInfos(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.UpdateButtonInfos(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CanUseButton(char& Enabled); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.CanUseButton(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetButtonEnabled(char IsEnabled); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetButtonEnabled(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetPerkDeckSelectInfo(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetPerkDeckSelectInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ChooseClassButton(int32_t ClassIndex); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.ChooseClassButton(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void HoverClassButton(int32_t ClassIndex, char IsHoverd); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.HoverClassButton(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ResetSelectedClassInfo(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.ResetSelectedClassInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void RefreshSelectedClassInfo(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.RefreshSelectedClassInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetClassList(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetClassList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetPerkModeInfo(int32_t PerkMode); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetPerkModeInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetClassVideoSource(int32_t PerkDeckID, struct Unknown& VideoSource); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.GetClassVideoSource(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReadyMovie(int32_t PerkDeckID); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.ReadyMovie(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CloseMovie(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.CloseMovie(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	enum class Unknow GetVisibility_RemainTime(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.GetVisibility_RemainTime(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetInventoryItemDetailInfo(struct FName Name, struct Unknown& Info); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.GetInventoryItemDetailInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct FText Get_TextBlock_RemailTime_Text_1(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.Get_TextBlock_RemailTime_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetServerWaiting(char bWait); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetServerWaiting(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetGoldInfo(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetGoldInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetPerkInfo(char UseLocalPlayerInfo, struct Unknown PerkDeckClassInfo); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetPerkInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CheckInfos(char ForceUpdate); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.CheckInfos(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void InitInfos(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.InitInfos(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct Unknown OnMouseWheel(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnMouseWheel(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Hide(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.Hide(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Show(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.Show(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnLoaded_A83B5F164320A0E753E9088699009EB0(struct Unknown Loaded); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnLoaded_A83B5F164320A0E753E9088699009EB0(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Finished_68D0074544AABC70455E90A37E1ED67B(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.Finished_68D0074544AABC70455E90A37E1ED67B(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnLoaded_C916107845AEFBC703CB8F9D00DAC0F0(struct Unknown Loaded); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnLoaded_C916107845AEFBC703CB8F9D00DAC0F0(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnLoaded_19FB202A430BEE3458DBA2B7F1362CC8(struct Unknown Loaded); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnLoaded_19FB202A430BEE3458DBA2B7F1362CC8(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void AsyncLoadingWeapon(struct Unknown IconTexture); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.AsyncLoadingWeapon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void AsyncLoadingClass(struct Unknown Texture); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.AsyncLoadingClass(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnDelegatePayGoldOnChangeDeck(char bSuccess); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnDelegatePayGoldOnChangeDeck(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnAnimationFinished(struct Unknown Animation); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_Movie_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_Movie_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_CloseMovie_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_CloseMovie_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Destruct(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnBattleRoyalStateChanged(enum class Unknow PrevState, enum class Unknow CurrentState); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnBattleRoyalStateChanged(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_Reselect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_Reselect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ClosePopup(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.ClosePopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_Reselect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_Reselect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CustomEvent_1(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ChangeClassOnScenario(int32_t DeckIndex); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.ChangeClassOnScenario(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Construct(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void AsyncLoadingClassIcon(struct Unknown Texture); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.AsyncLoadingClassIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void HideAnim(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.HideAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ShowAnim(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.ShowAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnChangePerkModeDelegate_Event_1(int32_t PerkMode); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnChangePerkModeDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OpenPopup(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OpenPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_SelectMode_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_SelectMode_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__btn_Choose_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__btn_Choose_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__btn_OK_5_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__btn_OK_5_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void DelegatePayGoldOnSelectDeck_Event_1(char bSuccess); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.DelegatePayGoldOnSelectDeck_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnChangedTeamPlayerClass(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnChangedTeamPlayerClass(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetPerkInfoImpl(char bUseLocalPlayerInfo, struct Unknown& PerkDeckClassInfo); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetPerkInfoImpl(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnChangedCurrentPerkDeckSelectInfo(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnChangedCurrentPerkDeckSelectInfo(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CheckSelectMode(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.CheckSelectMode(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void DelegateChoosePerkDeck_Event_1(char bSuccess); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.DelegateChoosePerkDeck_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void PlayMovie(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.PlayMovie(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void DelegatePayGoldOnChangeDeckList_Event_1(char bSuccess); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.DelegatePayGoldOnChangeDeckList_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_SelectMode_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_SelectMode_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__btn_OK_5_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__btn_OK_5_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void TryChangeSelectDeck(); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.TryChangeSelectDeck(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__CheckBox_PerkDeckReOpen_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__CheckBox_PerkDeckReOpen_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-PerkDeckWidget(int32_t EntryPoint); // Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.ExecuteUbergraph_UW-PerkDeckWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SequenceEvent__ENTRYPOINTUW-PerkDeckWidget_3
inline void UUW-PerkDeckWidget_C::SequenceEvent__ENTRYPOINTUW-PerkDeckWidget_3() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SequenceEvent__ENTRYPOINTUW-PerkDeckWidget_3");

	struct SequenceEvent__ENTRYPOINTUW-PerkDeckWidget_3_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-PerkDeckWidget_3_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SequenceEvent__ENTRYPOINTUW-PerkDeckWidget_2
inline void UUW-PerkDeckWidget_C::SequenceEvent__ENTRYPOINTUW-PerkDeckWidget_2() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SequenceEvent__ENTRYPOINTUW-PerkDeckWidget_2");

	struct SequenceEvent__ENTRYPOINTUW-PerkDeckWidget_2_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-PerkDeckWidget_2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SequenceEvent__ENTRYPOINTUW-PerkDeckWidget_1
inline void UUW-PerkDeckWidget_C::SequenceEvent__ENTRYPOINTUW-PerkDeckWidget_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SequenceEvent__ENTRYPOINTUW-PerkDeckWidget_1");

	struct SequenceEvent__ENTRYPOINTUW-PerkDeckWidget_1_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-PerkDeckWidget_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetPerkDeckReOpenCheck
inline void UUW-PerkDeckWidget_C::SetPerkDeckReOpenCheck() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetPerkDeckReOpenCheck");

	struct SetPerkDeckReOpenCheck_Params {
		
	}; SetPerkDeckReOpenCheck_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetComingSoonClass
inline void UUW-PerkDeckWidget_C::SetComingSoonClass() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetComingSoonClass");

	struct SetComingSoonClass_Params {
		
	}; SetComingSoonClass_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.GetComingSoonClass
inline void UUW-PerkDeckWidget_C::GetComingSoonClass(struct FName& ClassRow) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.GetComingSoonClass");

	struct GetComingSoonClass_Params {
		struct FName& ClassRow;
	}; GetComingSoonClass_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ClassRow = Params.ClassRow;

}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.UpdateNewbieAdvantage
inline void UUW-PerkDeckWidget_C::UpdateNewbieAdvantage(struct Unknown& PerkDeckData) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.UpdateNewbieAdvantage");

	struct UpdateNewbieAdvantage_Params {
		struct Unknown& PerkDeckData;
	}; UpdateNewbieAdvantage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PerkDeckData = Params.PerkDeckData;

}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.DisableClassButtonWithoutSelected
inline void UUW-PerkDeckWidget_C::DisableClassButtonWithoutSelected() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.DisableClassButtonWithoutSelected");

	struct DisableClassButtonWithoutSelected_Params {
		
	}; DisableClassButtonWithoutSelected_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetPerkInfoByHoverClassButton
inline void UUW-PerkDeckWidget_C::SetPerkInfoByHoverClassButton() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetPerkInfoByHoverClassButton");

	struct SetPerkInfoByHoverClassButton_Params {
		
	}; SetPerkInfoByHoverClassButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.PlayChangeDeckSound
inline void UUW-PerkDeckWidget_C::PlayChangeDeckSound() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.PlayChangeDeckSound");

	struct PlayChangeDeckSound_Params {
		
	}; PlayChangeDeckSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.PlayChooseSound
inline void UUW-PerkDeckWidget_C::PlayChooseSound() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.PlayChooseSound");

	struct PlayChooseSound_Params {
		
	}; PlayChooseSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.PlayClickSound
inline void UUW-PerkDeckWidget_C::PlayClickSound() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.PlayClickSound");

	struct PlayClickSound_Params {
		
	}; PlayClickSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.PlayHoverSound
inline void UUW-PerkDeckWidget_C::PlayHoverSound() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.PlayHoverSound");

	struct PlayHoverSound_Params {
		
	}; PlayHoverSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.HasPerkDeckClassInfo
inline void UUW-PerkDeckWidget_C::HasPerkDeckClassInfo(char& NewParam) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.HasPerkDeckClassInfo");

	struct HasPerkDeckClassInfo_Params {
		char& NewParam;
	}; HasPerkDeckClassInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewParam = Params.NewParam;

}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetButtonInfo
inline void UUW-PerkDeckWidget_C::SetButtonInfo(struct Unknown Button, struct Unknown TextPrice, int32_t Price, struct Unknown TextRemainCount, int32_t RemainCount) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetButtonInfo");

	struct SetButtonInfo_Params {
		struct Unknown Button;
		struct Unknown TextPrice;
		int32_t Price;
		struct Unknown TextRemainCount;
		int32_t RemainCount;
	}; SetButtonInfo_Params Params;

	Params.Button = Button;
	Params.TextPrice = TextPrice;
	Params.Price = Price;
	Params.TextRemainCount = TextRemainCount;
	Params.RemainCount = RemainCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.UpdateButtonInfos
inline void UUW-PerkDeckWidget_C::UpdateButtonInfos() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.UpdateButtonInfos");

	struct UpdateButtonInfos_Params {
		
	}; UpdateButtonInfos_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.CanUseButton
inline void UUW-PerkDeckWidget_C::CanUseButton(char& Enabled) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.CanUseButton");

	struct CanUseButton_Params {
		char& Enabled;
	}; CanUseButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Enabled = Params.Enabled;

}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetButtonEnabled
inline void UUW-PerkDeckWidget_C::SetButtonEnabled(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetButtonEnabled");

	struct SetButtonEnabled_Params {
		char IsEnabled;
	}; SetButtonEnabled_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetPerkDeckSelectInfo
inline void UUW-PerkDeckWidget_C::SetPerkDeckSelectInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetPerkDeckSelectInfo");

	struct SetPerkDeckSelectInfo_Params {
		
	}; SetPerkDeckSelectInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.ChooseClassButton
inline void UUW-PerkDeckWidget_C::ChooseClassButton(int32_t ClassIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.ChooseClassButton");

	struct ChooseClassButton_Params {
		int32_t ClassIndex;
	}; ChooseClassButton_Params Params;

	Params.ClassIndex = ClassIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.HoverClassButton
inline void UUW-PerkDeckWidget_C::HoverClassButton(int32_t ClassIndex, char IsHoverd) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.HoverClassButton");

	struct HoverClassButton_Params {
		int32_t ClassIndex;
		char IsHoverd;
	}; HoverClassButton_Params Params;

	Params.ClassIndex = ClassIndex;
	Params.IsHoverd = IsHoverd;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.ResetSelectedClassInfo
inline void UUW-PerkDeckWidget_C::ResetSelectedClassInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.ResetSelectedClassInfo");

	struct ResetSelectedClassInfo_Params {
		
	}; ResetSelectedClassInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.RefreshSelectedClassInfo
inline void UUW-PerkDeckWidget_C::RefreshSelectedClassInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.RefreshSelectedClassInfo");

	struct RefreshSelectedClassInfo_Params {
		
	}; RefreshSelectedClassInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetClassList
inline void UUW-PerkDeckWidget_C::SetClassList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetClassList");

	struct SetClassList_Params {
		
	}; SetClassList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetPerkModeInfo
inline void UUW-PerkDeckWidget_C::SetPerkModeInfo(int32_t PerkMode) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetPerkModeInfo");

	struct SetPerkModeInfo_Params {
		int32_t PerkMode;
	}; SetPerkModeInfo_Params Params;

	Params.PerkMode = PerkMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnMouseButtonDown
inline struct Unknown UUW-PerkDeckWidget_C::OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnMouseButtonDown");

	struct OnMouseButtonDown_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseButtonDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.GetClassVideoSource
inline void UUW-PerkDeckWidget_C::GetClassVideoSource(int32_t PerkDeckID, struct Unknown& VideoSource) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.GetClassVideoSource");

	struct GetClassVideoSource_Params {
		int32_t PerkDeckID;
		struct Unknown& VideoSource;
	}; GetClassVideoSource_Params Params;

	Params.PerkDeckID = PerkDeckID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	VideoSource = Params.VideoSource;

}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.ReadyMovie
inline void UUW-PerkDeckWidget_C::ReadyMovie(int32_t PerkDeckID) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.ReadyMovie");

	struct ReadyMovie_Params {
		int32_t PerkDeckID;
	}; ReadyMovie_Params Params;

	Params.PerkDeckID = PerkDeckID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.CloseMovie
inline void UUW-PerkDeckWidget_C::CloseMovie() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.CloseMovie");

	struct CloseMovie_Params {
		
	}; CloseMovie_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.GetVisibility_RemainTime
inline enum class Unknow UUW-PerkDeckWidget_C::GetVisibility_RemainTime() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.GetVisibility_RemainTime");

	struct GetVisibility_RemainTime_Params {
		
		enum class Unknow ReturnValue;

	}; GetVisibility_RemainTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.GetInventoryItemDetailInfo
inline void UUW-PerkDeckWidget_C::GetInventoryItemDetailInfo(struct FName Name, struct Unknown& Info) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.GetInventoryItemDetailInfo");

	struct GetInventoryItemDetailInfo_Params {
		struct FName Name;
		struct Unknown& Info;
	}; GetInventoryItemDetailInfo_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Info = Params.Info;

}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.Get_TextBlock_RemailTime_Text_1
inline struct FText UUW-PerkDeckWidget_C::Get_TextBlock_RemailTime_Text_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.Get_TextBlock_RemailTime_Text_1");

	struct Get_TextBlock_RemailTime_Text_1_Params {
		
		struct FText ReturnValue;

	}; Get_TextBlock_RemailTime_Text_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetServerWaiting
inline void UUW-PerkDeckWidget_C::SetServerWaiting(char bWait) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetServerWaiting");

	struct SetServerWaiting_Params {
		char bWait;
	}; SetServerWaiting_Params Params;

	Params.bWait = bWait;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetGoldInfo
inline void UUW-PerkDeckWidget_C::SetGoldInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetGoldInfo");

	struct SetGoldInfo_Params {
		
	}; SetGoldInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetPerkInfo
inline void UUW-PerkDeckWidget_C::SetPerkInfo(char UseLocalPlayerInfo, struct Unknown PerkDeckClassInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetPerkInfo");

	struct SetPerkInfo_Params {
		char UseLocalPlayerInfo;
		struct Unknown PerkDeckClassInfo;
	}; SetPerkInfo_Params Params;

	Params.UseLocalPlayerInfo = UseLocalPlayerInfo;
	Params.PerkDeckClassInfo = PerkDeckClassInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.CheckInfos
inline void UUW-PerkDeckWidget_C::CheckInfos(char ForceUpdate) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.CheckInfos");

	struct CheckInfos_Params {
		char ForceUpdate;
	}; CheckInfos_Params Params;

	Params.ForceUpdate = ForceUpdate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.InitInfos
inline void UUW-PerkDeckWidget_C::InitInfos() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.InitInfos");

	struct InitInfos_Params {
		
	}; InitInfos_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnMouseWheel
inline struct Unknown UUW-PerkDeckWidget_C::OnMouseWheel(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnMouseWheel");

	struct OnMouseWheel_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseWheel_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.Hide
inline void UUW-PerkDeckWidget_C::Hide() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.Hide");

	struct Hide_Params {
		
	}; Hide_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.Show
inline void UUW-PerkDeckWidget_C::Show() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.Show");

	struct Show_Params {
		
	}; Show_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnLoaded_A83B5F164320A0E753E9088699009EB0
inline void UUW-PerkDeckWidget_C::OnLoaded_A83B5F164320A0E753E9088699009EB0(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnLoaded_A83B5F164320A0E753E9088699009EB0");

	struct OnLoaded_A83B5F164320A0E753E9088699009EB0_Params {
		struct Unknown Loaded;
	}; OnLoaded_A83B5F164320A0E753E9088699009EB0_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.Finished_68D0074544AABC70455E90A37E1ED67B
inline void UUW-PerkDeckWidget_C::Finished_68D0074544AABC70455E90A37E1ED67B() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.Finished_68D0074544AABC70455E90A37E1ED67B");

	struct Finished_68D0074544AABC70455E90A37E1ED67B_Params {
		
	}; Finished_68D0074544AABC70455E90A37E1ED67B_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnLoaded_C916107845AEFBC703CB8F9D00DAC0F0
inline void UUW-PerkDeckWidget_C::OnLoaded_C916107845AEFBC703CB8F9D00DAC0F0(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnLoaded_C916107845AEFBC703CB8F9D00DAC0F0");

	struct OnLoaded_C916107845AEFBC703CB8F9D00DAC0F0_Params {
		struct Unknown Loaded;
	}; OnLoaded_C916107845AEFBC703CB8F9D00DAC0F0_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnLoaded_19FB202A430BEE3458DBA2B7F1362CC8
inline void UUW-PerkDeckWidget_C::OnLoaded_19FB202A430BEE3458DBA2B7F1362CC8(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnLoaded_19FB202A430BEE3458DBA2B7F1362CC8");

	struct OnLoaded_19FB202A430BEE3458DBA2B7F1362CC8_Params {
		struct Unknown Loaded;
	}; OnLoaded_19FB202A430BEE3458DBA2B7F1362CC8_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.AsyncLoadingWeapon
inline void UUW-PerkDeckWidget_C::AsyncLoadingWeapon(struct Unknown IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.AsyncLoadingWeapon");

	struct AsyncLoadingWeapon_Params {
		struct Unknown IconTexture;
	}; AsyncLoadingWeapon_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.AsyncLoadingClass
inline void UUW-PerkDeckWidget_C::AsyncLoadingClass(struct Unknown Texture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.AsyncLoadingClass");

	struct AsyncLoadingClass_Params {
		struct Unknown Texture;
	}; AsyncLoadingClass_Params Params;

	Params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnDelegatePayGoldOnChangeDeck
inline void UUW-PerkDeckWidget_C::OnDelegatePayGoldOnChangeDeck(char bSuccess) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnDelegatePayGoldOnChangeDeck");

	struct OnDelegatePayGoldOnChangeDeck_Params {
		char bSuccess;
	}; OnDelegatePayGoldOnChangeDeck_Params Params;

	Params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnAnimationFinished
inline void UUW-PerkDeckWidget_C::OnAnimationFinished(struct Unknown Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnAnimationFinished");

	struct OnAnimationFinished_Params {
		struct Unknown Animation;
	}; OnAnimationFinished_Params Params;

	Params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_Movie_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
inline void UUW-PerkDeckWidget_C::BndEvt__Button_Movie_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_Movie_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Movie_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Movie_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_CloseMovie_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
inline void UUW-PerkDeckWidget_C::BndEvt__Button_CloseMovie_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_CloseMovie_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_CloseMovie_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_CloseMovie_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.Destruct
inline void UUW-PerkDeckWidget_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnBattleRoyalStateChanged
inline void UUW-PerkDeckWidget_C::OnBattleRoyalStateChanged(enum class Unknow PrevState, enum class Unknow CurrentState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnBattleRoyalStateChanged");

	struct OnBattleRoyalStateChanged_Params {
		enum class Unknow PrevState;
		enum class Unknow CurrentState;
	}; OnBattleRoyalStateChanged_Params Params;

	Params.PrevState = PrevState;
	Params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_Reselect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
inline void UUW-PerkDeckWidget_C::BndEvt__Button_Reselect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_Reselect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_Reselect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Reselect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.ClosePopup
inline void UUW-PerkDeckWidget_C::ClosePopup() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.ClosePopup");

	struct ClosePopup_Params {
		
	}; ClosePopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_Reselect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-PerkDeckWidget_C::BndEvt__Button_Reselect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_Reselect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Reselect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Reselect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
inline void UUW-PerkDeckWidget_C::BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_PerkDeck_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.CustomEvent_1
inline void UUW-PerkDeckWidget_C::CustomEvent_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.CustomEvent_1");

	struct CustomEvent_1_Params {
		
	}; CustomEvent_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.ChangeClassOnScenario
inline void UUW-PerkDeckWidget_C::ChangeClassOnScenario(int32_t DeckIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.ChangeClassOnScenario");

	struct ChangeClassOnScenario_Params {
		int32_t DeckIndex;
	}; ChangeClassOnScenario_Params Params;

	Params.DeckIndex = DeckIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
inline void UUW-PerkDeckWidget_C::BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.Construct
inline void UUW-PerkDeckWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.Tick
inline void UUW-PerkDeckWidget_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.Tick");

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

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.AsyncLoadingClassIcon
inline void UUW-PerkDeckWidget_C::AsyncLoadingClassIcon(struct Unknown Texture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.AsyncLoadingClassIcon");

	struct AsyncLoadingClassIcon_Params {
		struct Unknown Texture;
	}; AsyncLoadingClassIcon_Params Params;

	Params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.HideAnim
inline void UUW-PerkDeckWidget_C::HideAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.HideAnim");

	struct HideAnim_Params {
		
	}; HideAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.ShowAnim
inline void UUW-PerkDeckWidget_C::ShowAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.ShowAnim");

	struct ShowAnim_Params {
		
	}; ShowAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnChangePerkModeDelegate_Event_1
inline void UUW-PerkDeckWidget_C::OnChangePerkModeDelegate_Event_1(int32_t PerkMode) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnChangePerkModeDelegate_Event_1");

	struct OnChangePerkModeDelegate_Event_1_Params {
		int32_t PerkMode;
	}; OnChangePerkModeDelegate_Event_1_Params Params;

	Params.PerkMode = PerkMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OpenPopup
inline void UUW-PerkDeckWidget_C::OpenPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OpenPopup");

	struct OpenPopup_Params {
		
	}; OpenPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_SelectMode_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
inline void UUW-PerkDeckWidget_C::BndEvt__Button_SelectMode_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_SelectMode_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_SelectMode_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_SelectMode_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__btn_Choose_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
inline void UUW-PerkDeckWidget_C::BndEvt__btn_Choose_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__btn_Choose_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_Choose_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_Choose_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__btn_OK_5_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
inline void UUW-PerkDeckWidget_C::BndEvt__btn_OK_5_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__btn_OK_5_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_OK_5_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_OK_5_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.DelegatePayGoldOnSelectDeck_Event_1
inline void UUW-PerkDeckWidget_C::DelegatePayGoldOnSelectDeck_Event_1(char bSuccess) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.DelegatePayGoldOnSelectDeck_Event_1");

	struct DelegatePayGoldOnSelectDeck_Event_1_Params {
		char bSuccess;
	}; DelegatePayGoldOnSelectDeck_Event_1_Params Params;

	Params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnChangedTeamPlayerClass
inline void UUW-PerkDeckWidget_C::OnChangedTeamPlayerClass() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnChangedTeamPlayerClass");

	struct OnChangedTeamPlayerClass_Params {
		
	}; OnChangedTeamPlayerClass_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetPerkInfoImpl
inline void UUW-PerkDeckWidget_C::SetPerkInfoImpl(char bUseLocalPlayerInfo, struct Unknown& PerkDeckClassInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.SetPerkInfoImpl");

	struct SetPerkInfoImpl_Params {
		char bUseLocalPlayerInfo;
		struct Unknown& PerkDeckClassInfo;
	}; SetPerkInfoImpl_Params Params;

	Params.bUseLocalPlayerInfo = bUseLocalPlayerInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PerkDeckClassInfo = Params.PerkDeckClassInfo;

}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnChangedCurrentPerkDeckSelectInfo
inline void UUW-PerkDeckWidget_C::OnChangedCurrentPerkDeckSelectInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.OnChangedCurrentPerkDeckSelectInfo");

	struct OnChangedCurrentPerkDeckSelectInfo_Params {
		
	}; OnChangedCurrentPerkDeckSelectInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.CheckSelectMode
inline void UUW-PerkDeckWidget_C::CheckSelectMode() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.CheckSelectMode");

	struct CheckSelectMode_Params {
		
	}; CheckSelectMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.DelegateChoosePerkDeck_Event_1
inline void UUW-PerkDeckWidget_C::DelegateChoosePerkDeck_Event_1(char bSuccess) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.DelegateChoosePerkDeck_Event_1");

	struct DelegateChoosePerkDeck_Event_1_Params {
		char bSuccess;
	}; DelegateChoosePerkDeck_Event_1_Params Params;

	Params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.PlayMovie
inline void UUW-PerkDeckWidget_C::PlayMovie() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.PlayMovie");

	struct PlayMovie_Params {
		
	}; PlayMovie_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
inline void UUW-PerkDeckWidget_C::BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.DelegatePayGoldOnChangeDeckList_Event_1
inline void UUW-PerkDeckWidget_C::DelegatePayGoldOnChangeDeckList_Event_1(char bSuccess) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.DelegatePayGoldOnChangeDeckList_Event_1");

	struct DelegatePayGoldOnChangeDeckList_Event_1_Params {
		char bSuccess;
	}; DelegatePayGoldOnChangeDeckList_Event_1_Params Params;

	Params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_SelectMode_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
inline void UUW-PerkDeckWidget_C::BndEvt__Button_SelectMode_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_SelectMode_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_SelectMode_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_SelectMode_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
inline void UUW-PerkDeckWidget_C::BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__btn_OK_5_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
inline void UUW-PerkDeckWidget_C::BndEvt__btn_OK_5_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__btn_OK_5_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__btn_OK_5_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_OK_5_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.TryChangeSelectDeck
inline void UUW-PerkDeckWidget_C::TryChangeSelectDeck() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.TryChangeSelectDeck");

	struct TryChangeSelectDeck_Params {
		
	}; TryChangeSelectDeck_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__CheckBox_PerkDeckReOpen_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
inline void UUW-PerkDeckWidget_C::BndEvt__CheckBox_PerkDeckReOpen_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.BndEvt__CheckBox_PerkDeckReOpen_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct BndEvt__CheckBox_PerkDeckReOpen_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params {
		char bIsChecked;
	}; BndEvt__CheckBox_PerkDeckReOpen_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.ExecuteUbergraph_UW-PerkDeckWidget
inline void UUW-PerkDeckWidget_C::ExecuteUbergraph_UW-PerkDeckWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckWidget.UW-PerkDeckWidget_C.ExecuteUbergraph_UW-PerkDeckWidget");

	struct ExecuteUbergraph_UW-PerkDeckWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-PerkDeckWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

