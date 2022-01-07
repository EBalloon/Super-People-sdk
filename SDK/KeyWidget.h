// WidgetBlueprintGeneratedClass KeyWidget.KeyWidget_C
class UKeyWidget_C : public UBravoHotelSettingSubWidget {

public:

	struct Unknown UberGraphFrame; // 0x298 (8)
	struct Unknown ButtomButtonWidget; // 0x2A0 (8)
	struct Unknown Image_154; // 0x2A8 (8)
	struct Unknown Overlay_1; // 0x2B0 (8)
	struct Unknown ScrollBox_55; // 0x2B8 (8)
	struct Unknown UniformGridPanel_119; // 0x2C0 (8)
	enum class Unknow Begin; // 0x2C8 (1)
	enum class Unknow End; // 0x2C9 (1)
	enum class Unknow PreSubType; // 0x2CA (1)
	struct FMulticastInlineDelegate EventDispatcher_KeyNotiMessage; // 0x2D0 (16)
	struct Unknown ScrollBarTimer; // 0x2E0 (8)
	struct TMap<Unknown, Unknown> List; // 0x2E8 (80)
	struct TArray<Unknown> SubTypeSort; // 0x338 (16)
	int32_t TempCount; // 0x348 (4)
	struct TMap<Unknown, Unknown> Hot; // 0x350 (80)
	float Size; // 0x3A0 (4)
	struct TMap<Unknown, Unknown> Offset; // 0x3A8 (80)

	void EnableShowReplayType(char& bRet); // Function KeyWidget.KeyWidget_C.EnableShowReplayType(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Construct(); // Function KeyWidget.KeyWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CreateSlotList(); // Function KeyWidget.KeyWidget_C.CreateSlotList(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetScrollLock(char Lock); // Function KeyWidget.KeyWidget_C.SetScrollLock(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Destruct(); // Function KeyWidget.KeyWidget_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void 鉹@t元_2(struct Unknown InKey, struct Unknown Slot); // Function KeyWidget.KeyWidget_C.鉹@t元_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void 鉹@t元_3(char bIsDuplicate, struct Unknown InKey, struct FText KeyName); // Function KeyWidget.KeyWidget_C.鉹@t元_3(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function KeyWidget.KeyWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void 鉹@t元_1(); // Function KeyWidget.KeyWidget_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void 鉹@t元_4(struct Unknown Widget); // Function KeyWidget.KeyWidget_C.鉹@t元_4(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature(struct Unknown Widget); // Function KeyWidget.KeyWidget_C.BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_KeyWidget(int32_t EntryPoint); // Function KeyWidget.KeyWidget_C.ExecuteUbergraph_KeyWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void EventDispatcher_KeyNotiMessage__DelegateSignature(char IsDuplicate, struct Unknown Key, struct FText KeyName); // Function KeyWidget.KeyWidget_C.EventDispatcher_KeyNotiMessage__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
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

// Function KeyWidget.KeyWidget_C.鉹@t元_2
inline void UKeyWidget_C::鉹@t元_2(struct Unknown InKey, struct Unknown Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.鉹@t元_2");

	struct 鉹@t元_2_Params {
		struct Unknown InKey;
		struct Unknown Slot;
	}; 鉹@t元_2_Params Params;

	Params.InKey = InKey;
	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyWidget.KeyWidget_C.鉹@t元_3
inline void UKeyWidget_C::鉹@t元_3(char bIsDuplicate, struct Unknown InKey, struct FText KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.鉹@t元_3");

	struct 鉹@t元_3_Params {
		char bIsDuplicate;
		struct Unknown InKey;
		struct FText KeyName;
	}; 鉹@t元_3_Params Params;

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

// Function KeyWidget.KeyWidget_C.鉹@t元_1
inline void UKeyWidget_C::鉹@t元_1() {
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		
	}; 鉹@t元_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyWidget.KeyWidget_C.鉹@t元_4
inline void UKeyWidget_C::鉹@t元_4(struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.鉹@t元_4");

	struct 鉹@t元_4_Params {
		struct Unknown Widget;
	}; 鉹@t元_4_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyWidget.KeyWidget_C.BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature
inline void UKeyWidget_C::BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature(struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature");

	struct BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature_Params {
		struct Unknown Widget;
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
inline void UKeyWidget_C::EventDispatcher_KeyNotiMessage__DelegateSignature(char IsDuplicate, struct Unknown Key, struct FText KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidget.KeyWidget_C.EventDispatcher_KeyNotiMessage__DelegateSignature");

	struct EventDispatcher_KeyNotiMessage__DelegateSignature_Params {
		char IsDuplicate;
		struct Unknown Key;
		struct FText KeyName;
	}; EventDispatcher_KeyNotiMessage__DelegateSignature_Params Params;

	Params.IsDuplicate = IsDuplicate;
	Params.Key = Key;
	Params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

