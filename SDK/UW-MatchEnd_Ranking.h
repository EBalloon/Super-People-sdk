// WidgetBlueprintGeneratedClass UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C
class UUW-MatchEnd_Ranking_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation FadeIn3; // 0x250 (8)
	struct UWidgetAnimation FadeIn2; // 0x258 (8)
	struct UWidgetAnimation RankDown; // 0x260 (8)
	struct UWidgetAnimation RankUp; // 0x268 (8)
	struct UWidgetAnimation FadeOut; // 0x270 (8)
	struct UWidgetAnimation FadeIn; // 0x278 (8)
	struct UButton Button_DeathCam; // 0x280 (8)
	struct UButton Button_Exit; // 0x288 (8)
	struct UButton Button_Report; // 0x290 (8)
	struct UButton Button_Spectate; // 0x298 (8)
	struct UImage Image; // 0x2A0 (8)
	struct UImage Image_2; // 0x2A8 (8)
	struct UImage Image_3; // 0x2B0 (8)
	struct UImage Image_4; // 0x2B8 (8)
	struct UImage Image_5; // 0x2C0 (8)
	struct UImage Image_6; // 0x2C8 (8)
	struct UImage Image_7; // 0x2D0 (8)
	struct UImage Image_8; // 0x2D8 (8)
	struct UImage Image_135; // 0x2E0 (8)
	struct UImage Image_149; // 0x2E8 (8)
	struct UImage Image_239; // 0x2F0 (8)
	struct UImage Image_314; // 0x2F8 (8)
	struct UImage Image_377; // 0x300 (8)
	struct UImage Image_444; // 0x308 (8)
	struct UImage Image_477; // 0x310 (8)
	struct UImage Image_518; // 0x318 (8)
	struct UImage Image_531; // 0x320 (8)
	struct UImage Image_745; // 0x328 (8)
	struct UImage Image_992; // 0x330 (8)
	struct UImage Image_1373; // 0x338 (8)
	struct UImage Image_1459; // 0x340 (8)
	struct UImage Image_1506; // 0x348 (8)
	struct UImage Image_1508; // 0x350 (8)
	struct UImage Image_1925; // 0x358 (8)
	struct UImage Image_NextTireIcon; // 0x360 (8)
	struct UImage Light_01; // 0x368 (8)
	struct UImage Light_02; // 0x370 (8)
	struct UImage Light_03; // 0x378 (8)
	struct UImage Light_04; // 0x380 (8)
	struct UImage Light_05; // 0x388 (8)
	struct UImage Light_06; // 0x390 (8)
	struct UImage Light_07; // 0x398 (8)
	struct UImage Light_08; // 0x3A0 (8)
	struct UOverlay Overlay_Rank; // 0x3A8 (8)
	struct UOverlay Overlay_Report; // 0x3B0 (8)
	struct UOverlay Overlay_Spectate; // 0x3B8 (8)
	struct UProgressBar ProgressBar_Current; // 0x3C0 (8)
	struct UProgressBar ProgressBar_Down; // 0x3C8 (8)
	struct UProgressBar ProgressBar_Up; // 0x3D0 (8)
	struct UScrollBox ScrollBox_GoldList; // 0x3D8 (8)
	struct UScrollBox ScrollBox_ItemList; // 0x3E0 (8)
	struct USizeBox SizeBox_8; // 0x3E8 (8)
	struct USpacer Spacer_6018; // 0x3F0 (8)
	struct USpacer Spacer_6217; // 0x3F8 (8)
	struct USpacer Spacer_Center; // 0x400 (8)
	struct UTextBlock T_RemainTime; // 0x408 (8)
	struct UCanvasPanel team_kill; // 0x410 (8)
	struct UCanvasPanel Team_Revives; // 0x418 (8)
	struct UTextBlock Text_Report; // 0x420 (8)
	struct UTextBlock TextBlock_1425; // 0x428 (8)
	struct UTextBlock TextBlock_CurrentRP; // 0x430 (8)
	struct UTextBlock TextBlock_ItemCount; // 0x438 (8)
	struct UTextBlock TextBlock_Kill; // 0x440 (8)
	struct UTextBlock TextBlock_MatchRP; // 0x448 (8)
	struct UTextBlock TextBlock_NextRP; // 0x450 (8)
	struct UTextBlock TextBlock_Rank; // 0x458 (8)
	struct UTextBlock TextBlock_Resuscitates; // 0x460 (8)
	struct UTextBlock TextBlock_Title; // 0x468 (8)
	struct UTextBlock TextBlock_TotalGold; // 0x470 (8)
	struct UTextBlock TextBlock_TotalTeamCount; // 0x478 (8)
	struct UUW-MatchEnd_RewardSlot_C UW-MatchEnd_RewardSlot; // 0x480 (8)
	struct UUW-MatchEnd_RewardSlot_C UW-MatchEnd_RewardSlot_C; // 0x488 (8)
	struct UUW-MatchEnd_RewardSlot_C UW-MatchEnd_RewardSlot_C_1; // 0x490 (8)
	struct UUW-MatchEnd_RewardSlot_C UW-MatchEnd_RewardSlot_C_2; // 0x498 (8)
	struct UUW-RewardGoldSlot_C UW-RewardGoldSlot; // 0x4A0 (8)
	struct UVerticalBox VerticalBox_188; // 0x4A8 (8)
	struct FMatchEndFinalResult FinalResultData; // 0x4B0 (4)
	struct ABravoHotelPlayerState PlayerState; // 0x4B8 (8)
	struct FTimerHandle Timehandle_Rank; // 0x4C0 (8)
	int32_t PlayerOriRP; // 0x4C8 (4)
	int32_t TargetRP; // 0x4CC (4)
	int32_t CurrentRP; // 0x4D0 (4)
	int32_t NextTireRP; // 0x4D4 (4)
	char Increase : 0; // 0x4D8 (1)
	int32_t CurrentTierID; // 0x4DC (4)
	char bMaxPrograssbar : 0; // 0x4E0 (1)
	struct UUW-MatchEndWidget_C MatchEndWidgetRef; // 0x4E8 (8)
	int32_t RandomGold; // 0x4F0 (4)
	struct FTimerHandle GoldHandle; // 0x4F8 (8)
	char IsWinningCam : 0; // 0x500 (1)
	int32_t GainGoldValue; // 0x504 (4)
	struct FTimerHandle GainGoldHandle; // 0x508 (8)
	struct FAudioPlayingHandle StartSound; // 0x510 (4)

	void SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_4(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_4(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_3(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_3(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_2(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_2(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_1(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_1(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateInputMode(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.UpdateInputMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Check Report Enablefrom User Name(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Check Report Enablefrom User Name(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Check Exist Report User(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Check Exist Report User(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ReportSended(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.ReportSended(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HideSimpleWidget(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.HideSimpleWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HideSimpleWidgetSlowly(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.HideSimpleWidgetSlowly(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetRankImage(int32_t ID, struct UImage Widget); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetRankImage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetNextRank(int32_t TierID); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetNextRank(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PlayRankDown(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.PlayRankDown(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PlayRankUp(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.PlayRankUp(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Init(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PlayRankAnimation(int32_t StartRP, int32_t MatchRP, int32_t MaxRP); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.PlayRankAnimation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateRank(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.UpdateRank(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetColorTextWidget(struct UTextBlock Widget, int32_t Value, struct FSlateColor Color); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetColorTextWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetPlayInfo(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetPlayInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetItem(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetRank(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetRank(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetGold(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetGold(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnLoaded_5C9A4A6341FF221002168F953DF28124(struct Object Loaded); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.OnLoaded_5C9A4A6341FF221002168F953DF28124(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Construct(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_161_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_161_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_DeathCam_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_DeathCam_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void EventRankAnimation(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.EventRankAnimation(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CustomEvent_1(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AsyncLoadTexture(struct TSoftObjectPtr<Object> Imge, struct UImage Widget); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.AsyncLoadTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_Report_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Close(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Close(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowDeathCam(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.ShowDeathCam(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowGold(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.ShowGold(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Destruct(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-MatchEnd_Ranking(int32_t EntryPoint); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.ExecuteUbergraph_UW-MatchEnd_Ranking(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_4
inline void UUW-MatchEnd_Ranking_C::SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_4() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_4");

	struct SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_4_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_4_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_3
inline void UUW-MatchEnd_Ranking_C::SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_3() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_3");

	struct SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_3_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_3_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_2
inline void UUW-MatchEnd_Ranking_C::SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_2() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_2");

	struct SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_2_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_1
inline void UUW-MatchEnd_Ranking_C::SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_1");

	struct SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_1_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.UpdateInputMode
inline void UUW-MatchEnd_Ranking_C::UpdateInputMode() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.UpdateInputMode");

	struct UpdateInputMode_Params {
		
	}; UpdateInputMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Check Report Enablefrom User Name
inline void UUW-MatchEnd_Ranking_C::Check Report Enablefrom User Name() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Check Report Enablefrom User Name");

	struct Check Report Enablefrom User Name_Params {
		
	}; Check Report Enablefrom User Name_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Check Exist Report User
inline void UUW-MatchEnd_Ranking_C::Check Exist Report User() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Check Exist Report User");

	struct Check Exist Report User_Params {
		
	}; Check Exist Report User_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.ReportSended
inline void UUW-MatchEnd_Ranking_C::ReportSended() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.ReportSended");

	struct ReportSended_Params {
		
	}; ReportSended_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.HideSimpleWidget
inline void UUW-MatchEnd_Ranking_C::HideSimpleWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.HideSimpleWidget");

	struct HideSimpleWidget_Params {
		
	}; HideSimpleWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.HideSimpleWidgetSlowly
inline void UUW-MatchEnd_Ranking_C::HideSimpleWidgetSlowly() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.HideSimpleWidgetSlowly");

	struct HideSimpleWidgetSlowly_Params {
		
	}; HideSimpleWidgetSlowly_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetRankImage
inline void UUW-MatchEnd_Ranking_C::SetRankImage(int32_t ID, struct UImage Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetRankImage");

	struct SetRankImage_Params {
		int32_t ID;
		struct UImage Widget;
	}; SetRankImage_Params Params;

	Params.ID = ID;
	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetNextRank
inline void UUW-MatchEnd_Ranking_C::SetNextRank(int32_t TierID) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetNextRank");

	struct SetNextRank_Params {
		int32_t TierID;
	}; SetNextRank_Params Params;

	Params.TierID = TierID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.PlayRankDown
inline void UUW-MatchEnd_Ranking_C::PlayRankDown() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.PlayRankDown");

	struct PlayRankDown_Params {
		
	}; PlayRankDown_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.PlayRankUp
inline void UUW-MatchEnd_Ranking_C::PlayRankUp() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.PlayRankUp");

	struct PlayRankUp_Params {
		
	}; PlayRankUp_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Init
inline void UUW-MatchEnd_Ranking_C::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Init");

	struct Init_Params {
		
	}; Init_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.PlayRankAnimation
inline void UUW-MatchEnd_Ranking_C::PlayRankAnimation(int32_t StartRP, int32_t MatchRP, int32_t MaxRP) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.PlayRankAnimation");

	struct PlayRankAnimation_Params {
		int32_t StartRP;
		int32_t MatchRP;
		int32_t MaxRP;
	}; PlayRankAnimation_Params Params;

	Params.StartRP = StartRP;
	Params.MatchRP = MatchRP;
	Params.MaxRP = MaxRP;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.UpdateRank
inline void UUW-MatchEnd_Ranking_C::UpdateRank() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.UpdateRank");

	struct UpdateRank_Params {
		
	}; UpdateRank_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetColorTextWidget
inline void UUW-MatchEnd_Ranking_C::SetColorTextWidget(struct UTextBlock Widget, int32_t Value, struct FSlateColor Color) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetColorTextWidget");

	struct SetColorTextWidget_Params {
		struct UTextBlock Widget;
		int32_t Value;
		struct FSlateColor Color;
	}; SetColorTextWidget_Params Params;

	Params.Widget = Widget;
	Params.Value = Value;
	Params.Color = Color;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetPlayInfo
inline void UUW-MatchEnd_Ranking_C::SetPlayInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetPlayInfo");

	struct SetPlayInfo_Params {
		
	}; SetPlayInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetItem
inline void UUW-MatchEnd_Ranking_C::SetItem() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetItem");

	struct SetItem_Params {
		
	}; SetItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetRank
inline void UUW-MatchEnd_Ranking_C::SetRank() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetRank");

	struct SetRank_Params {
		
	}; SetRank_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetGold
inline void UUW-MatchEnd_Ranking_C::SetGold() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetGold");

	struct SetGold_Params {
		
	}; SetGold_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.OnLoaded_5C9A4A6341FF221002168F953DF28124
inline void UUW-MatchEnd_Ranking_C::OnLoaded_5C9A4A6341FF221002168F953DF28124(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.OnLoaded_5C9A4A6341FF221002168F953DF28124");

	struct OnLoaded_5C9A4A6341FF221002168F953DF28124_Params {
		struct Object Loaded;
	}; OnLoaded_5C9A4A6341FF221002168F953DF28124_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Construct
inline void UUW-MatchEnd_Ranking_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_161_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-MatchEnd_Ranking_C::BndEvt__Button_161_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_161_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_161_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_161_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
inline void UUW-MatchEnd_Ranking_C::BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
inline void UUW-MatchEnd_Ranking_C::BndEvt__Button_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_DeathCam_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
inline void UUW-MatchEnd_Ranking_C::BndEvt__Button_DeathCam_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_DeathCam_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_DeathCam_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_DeathCam_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
inline void UUW-MatchEnd_Ranking_C::BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
inline void UUW-MatchEnd_Ranking_C::BndEvt__Button_Exit_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_Exit_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Exit_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.EventRankAnimation
inline void UUW-MatchEnd_Ranking_C::EventRankAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.EventRankAnimation");

	struct EventRankAnimation_Params {
		
	}; EventRankAnimation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.CustomEvent_1
inline void UUW-MatchEnd_Ranking_C::CustomEvent_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.CustomEvent_1");

	struct CustomEvent_1_Params {
		
	}; CustomEvent_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.AsyncLoadTexture
inline void UUW-MatchEnd_Ranking_C::AsyncLoadTexture(struct TSoftObjectPtr<Object> Imge, struct UImage Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.AsyncLoadTexture");

	struct AsyncLoadTexture_Params {
		struct TSoftObjectPtr<Object> Imge;
		struct UImage Widget;
	}; AsyncLoadTexture_Params Params;

	Params.Imge = Imge;
	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Tick
inline void UUW-MatchEnd_Ranking_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Tick");

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

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
inline void UUW-MatchEnd_Ranking_C::BndEvt__Button_Report_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Report_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Report_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
inline void UUW-MatchEnd_Ranking_C::BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Close
inline void UUW-MatchEnd_Ranking_C::Close() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Close");

	struct Close_Params {
		
	}; Close_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.ShowDeathCam
inline void UUW-MatchEnd_Ranking_C::ShowDeathCam() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.ShowDeathCam");

	struct ShowDeathCam_Params {
		
	}; ShowDeathCam_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.ShowGold
inline void UUW-MatchEnd_Ranking_C::ShowGold() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.ShowGold");

	struct ShowGold_Params {
		
	}; ShowGold_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Destruct
inline void UUW-MatchEnd_Ranking_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.ExecuteUbergraph_UW-MatchEnd_Ranking
inline void UUW-MatchEnd_Ranking_C::ExecuteUbergraph_UW-MatchEnd_Ranking(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.ExecuteUbergraph_UW-MatchEnd_Ranking");

	struct ExecuteUbergraph_UW-MatchEnd_Ranking_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-MatchEnd_Ranking_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

