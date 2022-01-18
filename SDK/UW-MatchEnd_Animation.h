// WidgetBlueprintGeneratedClass UW-MatchEnd_Animation.UW-MatchEnd_Animation_C
class UUW-MatchEnd_Animation_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation Infos_Ani; // 0x250 (8)
	struct UWidgetAnimation SimpleResult_Events; // 0x258 (8)
	struct UWidgetAnimation Lose_ani; // 0x260 (8)
	struct UWidgetAnimation Win_ani; // 0x268 (8)
	struct UWidgetAnimation Lose_Events; // 0x270 (8)
	struct UWidgetAnimation Win_Events; // 0x278 (8)
	struct UTextBlock ClassName; // 0x280 (8)
	struct UTextBlock ClassWeaponName; // 0x288 (8)
	struct UTextBlock HeadShot; // 0x290 (8)
	struct UHorizontalBox HorizontalBox_KillerWeaponInfo; // 0x298 (8)
	struct UHorizontalBox HorizontalBox_Rarity; // 0x2A0 (8)
	struct UImage Icon_KillerClass; // 0x2A8 (8)
	struct UImage Image_894; // 0x2B0 (8)
	struct UImage Image_2002; // 0x2B8 (8)
	struct UTextBlock Level; // 0x2C0 (8)
	struct UTextBlock LoseMessage; // 0x2C8 (8)
	struct UOverlay Overlay_DropItems; // 0x2D0 (8)
	struct UOverlay Overlay_KillerInfo; // 0x2D8 (8)
	struct UOverlay Overlay_WeaponLevel; // 0x2E0 (8)
	struct UTextBlock T_DamageType; // 0x2E8 (8)
	struct UTextBlock T_WeaponLevel; // 0x2F0 (8)
	struct UTextBlock TextBlock_ItemCount; // 0x2F8 (8)
	struct UUniformGridPanel Uniform_ItemList; // 0x300 (8)
	struct UTextBlock UserName; // 0x308 (8)
	struct UUW-MatchEnd_RewardSlot_C UW-MatchEnd_RewardSlot_C_1; // 0x310 (8)
	struct UUW-MatchEnd_ButtonBase_C UW-SkipButton; // 0x318 (8)
	struct UTextBlock WeaponName; // 0x320 (8)
	struct UWidgetSwitcher WidgetSwitcher_DamageCauser; // 0x328 (8)
	struct FMatchEndAnimation AnimationData; // 0x330 (2)
	struct UUW-MatchEndWidget_C MatchEndWidgetRef; // 0x338 (8)
	struct FMatchEndSimpleResult SimpleResult; // 0x340 (168)
	char MatchEnd : 0; // 0x3E8 (1)

	void SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_10(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_10(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_9(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_9(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_8(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_8(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_7(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_7(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_6(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_6(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_5(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_5(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_4(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_4(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_3(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_3(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_2(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_2(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_1(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_1(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetDropedItem(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SetDropedItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void UpdateInputMode(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.UpdateInputMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void RemoveOverlapedWidgets(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.RemoveOverlapedWidgets(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void HideHUDMessageWidget(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.HideHUDMessageWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void HideMainWidget(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.HideMainWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetSimpleResult(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SetSimpleResult(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetMatchEnd(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SetMatchEnd(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetKillerInfo(struct FMatchEndSimpleResult& Result); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SetKillerInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ReleaseSlomo(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.ReleaseSlomo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ApplySlomo(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.ApplySlomo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PlayWidgetLoseAni(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.PlayWidgetLoseAni(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PlayWidgetWinAni(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.PlayWidgetWinAni(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SkipMatchEndAnimation(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SkipMatchEndAnimation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PlayCharacterWinAnimation(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.PlayCharacterWinAnimation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PlayDefeatBGM(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.PlayDefeatBGM(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PlayWinBGM(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.PlayWinBGM(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnLoaded_75D3BA16496147EA282F81A6BD982AD6(struct Object Loaded); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.OnLoaded_75D3BA16496147EA282F81A6BD982AD6(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Construct(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Destruct(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void AsyncIcon(struct TSoftObjectPtr<Object> Image); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.AsyncIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnClicked_SkipButton(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.OnClicked_SkipButton(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void DelegateOnWhoKilledMe_Event_1(struct FMatchEndSimpleResult& SimpleResult); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.DelegateOnWhoKilledMe_Event_1(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void 鉹@t元_1(); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-MatchEnd_Animation(int32_t EntryPoint); // Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.ExecuteUbergraph_UW-MatchEnd_Animation(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_10
inline void UUW-MatchEnd_Animation_C::SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_10() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_10");

	struct SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_10_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_10_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_9
inline void UUW-MatchEnd_Animation_C::SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_9() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_9");

	struct SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_9_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_9_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_8
inline void UUW-MatchEnd_Animation_C::SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_8() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_8");

	struct SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_8_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_8_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_7
inline void UUW-MatchEnd_Animation_C::SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_7() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_7");

	struct SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_7_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_7_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_6
inline void UUW-MatchEnd_Animation_C::SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_6() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_6");

	struct SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_6_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_6_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_5
inline void UUW-MatchEnd_Animation_C::SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_5() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_5");

	struct SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_5_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_5_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_4
inline void UUW-MatchEnd_Animation_C::SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_4() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_4");

	struct SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_4_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_4_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_3
inline void UUW-MatchEnd_Animation_C::SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_3() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_3");

	struct SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_3_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_3_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_2
inline void UUW-MatchEnd_Animation_C::SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_2() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_2");

	struct SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_2_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_1
inline void UUW-MatchEnd_Animation_C::SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_1");

	struct SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_1_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-MatchEnd_Animation_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SetDropedItem
inline void UUW-MatchEnd_Animation_C::SetDropedItem() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SetDropedItem");

	struct SetDropedItem_Params {
		
	}; SetDropedItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.UpdateInputMode
inline void UUW-MatchEnd_Animation_C::UpdateInputMode() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.UpdateInputMode");

	struct UpdateInputMode_Params {
		
	}; UpdateInputMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.RemoveOverlapedWidgets
inline void UUW-MatchEnd_Animation_C::RemoveOverlapedWidgets() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.RemoveOverlapedWidgets");

	struct RemoveOverlapedWidgets_Params {
		
	}; RemoveOverlapedWidgets_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.HideHUDMessageWidget
inline void UUW-MatchEnd_Animation_C::HideHUDMessageWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.HideHUDMessageWidget");

	struct HideHUDMessageWidget_Params {
		
	}; HideHUDMessageWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.HideMainWidget
inline void UUW-MatchEnd_Animation_C::HideMainWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.HideMainWidget");

	struct HideMainWidget_Params {
		
	}; HideMainWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SetSimpleResult
inline void UUW-MatchEnd_Animation_C::SetSimpleResult() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SetSimpleResult");

	struct SetSimpleResult_Params {
		
	}; SetSimpleResult_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SetMatchEnd
inline void UUW-MatchEnd_Animation_C::SetMatchEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SetMatchEnd");

	struct SetMatchEnd_Params {
		
	}; SetMatchEnd_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SetKillerInfo
inline void UUW-MatchEnd_Animation_C::SetKillerInfo(struct FMatchEndSimpleResult& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SetKillerInfo");

	struct SetKillerInfo_Params {
		struct FMatchEndSimpleResult& Result;
	}; SetKillerInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.ReleaseSlomo
inline void UUW-MatchEnd_Animation_C::ReleaseSlomo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.ReleaseSlomo");

	struct ReleaseSlomo_Params {
		
	}; ReleaseSlomo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.ApplySlomo
inline void UUW-MatchEnd_Animation_C::ApplySlomo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.ApplySlomo");

	struct ApplySlomo_Params {
		
	}; ApplySlomo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.PlayWidgetLoseAni
inline void UUW-MatchEnd_Animation_C::PlayWidgetLoseAni() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.PlayWidgetLoseAni");

	struct PlayWidgetLoseAni_Params {
		
	}; PlayWidgetLoseAni_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.PlayWidgetWinAni
inline void UUW-MatchEnd_Animation_C::PlayWidgetWinAni() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.PlayWidgetWinAni");

	struct PlayWidgetWinAni_Params {
		
	}; PlayWidgetWinAni_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SkipMatchEndAnimation
inline void UUW-MatchEnd_Animation_C::SkipMatchEndAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.SkipMatchEndAnimation");

	struct SkipMatchEndAnimation_Params {
		
	}; SkipMatchEndAnimation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.PlayCharacterWinAnimation
inline void UUW-MatchEnd_Animation_C::PlayCharacterWinAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.PlayCharacterWinAnimation");

	struct PlayCharacterWinAnimation_Params {
		
	}; PlayCharacterWinAnimation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.PlayDefeatBGM
inline void UUW-MatchEnd_Animation_C::PlayDefeatBGM() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.PlayDefeatBGM");

	struct PlayDefeatBGM_Params {
		
	}; PlayDefeatBGM_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.PlayWinBGM
inline void UUW-MatchEnd_Animation_C::PlayWinBGM() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.PlayWinBGM");

	struct PlayWinBGM_Params {
		
	}; PlayWinBGM_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.OnLoaded_75D3BA16496147EA282F81A6BD982AD6
inline void UUW-MatchEnd_Animation_C::OnLoaded_75D3BA16496147EA282F81A6BD982AD6(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.OnLoaded_75D3BA16496147EA282F81A6BD982AD6");

	struct OnLoaded_75D3BA16496147EA282F81A6BD982AD6_Params {
		struct Object Loaded;
	}; OnLoaded_75D3BA16496147EA282F81A6BD982AD6_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.Construct
inline void UUW-MatchEnd_Animation_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.Destruct
inline void UUW-MatchEnd_Animation_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.AsyncIcon
inline void UUW-MatchEnd_Animation_C::AsyncIcon(struct TSoftObjectPtr<Object> Image) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.AsyncIcon");

	struct AsyncIcon_Params {
		struct TSoftObjectPtr<Object> Image;
	}; AsyncIcon_Params Params;

	Params.Image = Image;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.OnClicked_SkipButton
inline void UUW-MatchEnd_Animation_C::OnClicked_SkipButton() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.OnClicked_SkipButton");

	struct OnClicked_SkipButton_Params {
		
	}; OnClicked_SkipButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.DelegateOnWhoKilledMe_Event_1
inline void UUW-MatchEnd_Animation_C::DelegateOnWhoKilledMe_Event_1(struct FMatchEndSimpleResult& SimpleResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.DelegateOnWhoKilledMe_Event_1");

	struct DelegateOnWhoKilledMe_Event_1_Params {
		struct FMatchEndSimpleResult& SimpleResult;
	}; DelegateOnWhoKilledMe_Event_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SimpleResult = Params.SimpleResult;

}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.Tick
inline void UUW-MatchEnd_Animation_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.Tick");

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

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.鉹@t元_1
inline void UUW-MatchEnd_Animation_C::鉹@t元_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		
	}; 鉹@t元_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.ExecuteUbergraph_UW-MatchEnd_Animation
inline void UUW-MatchEnd_Animation_C::ExecuteUbergraph_UW-MatchEnd_Animation(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEnd_Animation.UW-MatchEnd_Animation_C.ExecuteUbergraph_UW-MatchEnd_Animation");

	struct ExecuteUbergraph_UW-MatchEnd_Animation_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-MatchEnd_Animation_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

