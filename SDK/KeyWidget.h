// WidgetBlueprintGeneratedClass KeyWidget.KeyWidget_C
class UKeyWidget_C : public UBravoHotelSettingSubWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298 (8)
	struct UButtomButtonWidget_C ButtomButtonWidget; // 0x2A0 (8)
	struct UImage Image_154; // 0x2A8 (8)
	struct UOverlay Overlay_1; // 0x2B0 (8)
	struct UScrollBox ScrollBox_55; // 0x2B8 (8)
	struct UUniformGridPanel UniformGridPanel_119; // 0x2C0 (8)
	enum class EKeySettingType Begin; // 0x2C8 (1)
	enum class EKeySettingType End; // 0x2C9 (1)
	enum class EKeySettingSubType PreSubType; // 0x2CA (1)
	struct FMulticastInlineDelegate EventDispatcher_KeyNotiMessage; // 0x2D0 (16)
	struct FTimerHandle ScrollBarTimer; // 0x2E0 (8)
	struct TMap<enum class EKeySettingSubType, struct FSettingInfo> List; // 0x2E8 (80)
	struct TArray<enum class EKeySettingSubType> SubTypeSort; // 0x338 (16)
	int32_t TempCount; // 0x348 (4)
	struct TMap<struct UButtomButtonWidget_C, struct USubTitleSlotWidget_C> Hot; // 0x350 (80)
	float Size; // 0x3A0 (4)
	struct TMap<struct USubTitleSlotWidget_C, float> Offset; // 0x3A8 (80)

	void EnableShowReplayType(char& bRet); // Function KeyWidget.KeyWidget_C.EnableShowReplayType(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Construct(); // Function KeyWidget.KeyWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CreateSlotList(); // Function KeyWidget.KeyWidget_C.CreateSlotList(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetScrollLock(char Lock); // Function KeyWidget.KeyWidget_C.SetScrollLock(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Destruct(); // Function KeyWidget.KeyWidget_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ??@t??_2(struct FInputChord InKey, struct UBravoHotelSettingSlotWidget Slot); // Function KeyWidget.KeyWidget_C.??@t??_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ??@t??_3(char bIsDuplicate, struct FInputChord InKey, struct FText KeyName); // Function KeyWidget.KeyWidget_C.??@t??_3(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function KeyWidget.KeyWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ??@t??_1(); // Function KeyWidget.KeyWidget_C.??@t??_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ??@t??_4(struct UButtomButtonWidget_C Widget); // Function KeyWidget.KeyWidget_C.??@t??_4(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature(struct UButtomButtonWidget_C Widget); // Function KeyWidget.KeyWidget_C.BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_KeyWidget(int32_t EntryPoint); // Function KeyWidget.KeyWidget_C.ExecuteUbergraph_KeyWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void EventDispatcher_KeyNotiMessage__DelegateSignature(char IsDuplicate, struct FInputChord Key, struct FText KeyName); // Function KeyWidget.KeyWidget_C.EventDispatcher_KeyNotiMessage__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function KeyWidget.KeyWidget_C.EnableShowReplayType
inline void UKeyWidget_C::EnableShowReplayType(char& bRet) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.EnableShowReplayType");

	struct EnableShowReplayType_Params {
		char& bRet;
	}; EnableShowReplayType_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bRet = Params.bRet;

}

// Function KeyWidget.KeyWidget_C.Construct
inline void UKeyWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyWidget.KeyWidget_C.CreateSlotList
inline void UKeyWidget_C::CreateSlotList() {
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.CreateSlotList");

	struct CreateSlotList_Params {
		
	}; CreateSlotList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyWidget.KeyWidget_C.SetScrollLock
inline void UKeyWidget_C::SetScrollLock(char Lock) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.SetScrollLock");

	struct SetScrollLock_Params {
		char Lock;
	}; SetScrollLock_Params Params;

	Params.Lock = Lock;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyWidget.KeyWidget_C.Destruct
inline void UKeyWidget_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyWidget.KeyWidget_C.??@t??_2
inline void UKeyWidget_C::??@t??_2(struct FInputChord InKey, struct UBravoHotelSettingSlotWidget Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.??@t??_2");

	struct ??@t??_2_Params {
		struct FInputChord InKey;
		struct UBravoHotelSettingSlotWidget Slot;
	}; ??@t??_2_Params Params;

	Params.InKey = InKey;
	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyWidget.KeyWidget_C.??@t??_3
inline void UKeyWidget_C::??@t??_3(char bIsDuplicate, struct FInputChord InKey, struct FText KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.??@t??_3");

	struct ??@t??_3_Params {
		char bIsDuplicate;
		struct FInputChord InKey;
		struct FText KeyName;
	}; ??@t??_3_Params Params;

	Params.bIsDuplicate = bIsDuplicate;
	Params.InKey = InKey;
	Params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyWidget.KeyWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
inline void UKeyWidget_C::BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");

	struct BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params {
		float CurrentOffset;
	}; BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params Params;

	Params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyWidget.KeyWidget_C.??@t??_1
inline void UKeyWidget_C::??@t??_1() {
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.??@t??_1");

	struct ??@t??_1_Params {
		
	}; ??@t??_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyWidget.KeyWidget_C.??@t??_4
inline void UKeyWidget_C::??@t??_4(struct UButtomButtonWidget_C Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.??@t??_4");

	struct ??@t??_4_Params {
		struct UButtomButtonWidget_C Widget;
	}; ??@t??_4_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyWidget.KeyWidget_C.BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature
inline void UKeyWidget_C::BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature(struct UButtomButtonWidget_C Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature");

	struct BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature_Params {
		struct UButtomButtonWidget_C Widget;
	}; BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyWidget.KeyWidget_C.ExecuteUbergraph_KeyWidget
inline void UKeyWidget_C::ExecuteUbergraph_KeyWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.ExecuteUbergraph_KeyWidget");

	struct ExecuteUbergraph_KeyWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_KeyWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyWidget.KeyWidget_C.EventDispatcher_KeyNotiMessage__DelegateSignature
inline void UKeyWidget_C::EventDispatcher_KeyNotiMessage__DelegateSignature(char IsDuplicate, struct FInputChord Key, struct FText KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.EventDispatcher_KeyNotiMessage__DelegateSignature");

	struct EventDispatcher_KeyNotiMessage__DelegateSignature_Params {
		char IsDuplicate;
		struct FInputChord Key;
		struct FText KeyName;
	}; EventDispatcher_KeyNotiMessage__DelegateSignature_Params Params;

	Params.IsDuplicate = IsDuplicate;
	Params.Key = Key;
	Params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

