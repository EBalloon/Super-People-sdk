// WidgetBlueprintGeneratedClass UW-VoiceTalkSlot.UW-VoiceTalkSlot_C
class UUW-VoiceTalkSlot_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UButton Button_1; // 0x250 (8)
	struct UImage death; // 0x258 (8)
	struct UImage Image_168; // 0x260 (8)
	struct UImage Image_216; // 0x268 (8)
	struct UImage Image_506; // 0x270 (8)
	struct UImage Image_623; // 0x278 (8)
	struct UImage Img_LogOut; // 0x280 (8)
	struct UImage Img_Voice; // 0x288 (8)
	struct UImage Img_Voice_2; // 0x290 (8)
	struct UOverlay Overlay_Death; // 0x298 (8)
	struct USlider Slider_139; // 0x2A0 (8)
	struct UTextBlock T_PlayerIndex; // 0x2A8 (8)
	struct UTextBlock T_PlayerName; // 0x2B0 (8)
	struct UTextBlock TextBlock_209; // 0x2B8 (8)
	struct UVerticalBox VerticalBox_1; // 0x2C0 (8)
	struct UWidgetSwitcher WidgetSwitcher; // 0x2C8 (8)
	struct FMulticastInlineDelegate EventDispatcher_ChangeVolumeState; // 0x2D0 (16)
	struct FVoiceTalkState CurVoiceTalkState; // 0x2E0 (32)
	struct UPaperSprite PingImage; // 0x300 (8)

	void SetInfo(struct FVoiceTalkState VoiceTalkState); // Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.SetInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Slider_138_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-VoiceTalkSlot(int32_t EntryPoint); // Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.ExecuteUbergraph_UW-VoiceTalkSlot(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void EventDispatcher_ChangeVolumeState__DelegateSignature(struct FVoiceTalkState VoiceTalkState); // Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.EventDispatcher_ChangeVolumeState__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.SetInfo
inline void UUW-VoiceTalkSlot_C::SetInfo(struct FVoiceTalkState VoiceTalkState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.SetInfo");

	struct SetInfo_Params {
		struct FVoiceTalkState VoiceTalkState;
	}; SetInfo_Params Params;

	Params.VoiceTalkState = VoiceTalkState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
inline void UUW-VoiceTalkSlot_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
inline void UUW-VoiceTalkSlot_C::BndEvt__Slider_138_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	struct BndEvt__Slider_138_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params {
		float Value;
	}; BndEvt__Slider_138_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.ExecuteUbergraph_UW-VoiceTalkSlot
inline void UUW-VoiceTalkSlot_C::ExecuteUbergraph_UW-VoiceTalkSlot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.ExecuteUbergraph_UW-VoiceTalkSlot");

	struct ExecuteUbergraph_UW-VoiceTalkSlot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-VoiceTalkSlot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.EventDispatcher_ChangeVolumeState__DelegateSignature
inline void UUW-VoiceTalkSlot_C::EventDispatcher_ChangeVolumeState__DelegateSignature(struct FVoiceTalkState VoiceTalkState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.EventDispatcher_ChangeVolumeState__DelegateSignature");

	struct EventDispatcher_ChangeVolumeState__DelegateSignature_Params {
		struct FVoiceTalkState VoiceTalkState;
	}; EventDispatcher_ChangeVolumeState__DelegateSignature_Params Params;

	Params.VoiceTalkState = VoiceTalkState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

