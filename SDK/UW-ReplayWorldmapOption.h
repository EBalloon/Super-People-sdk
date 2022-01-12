// WidgetBlueprintGeneratedClass UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C
class UUW-ReplayWorldMapOption_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UCanvasPanel Canvas_Main; // 0x250 (8)
	struct UCheckBox CB_DrawDeathPosition; // 0x258 (8)
	struct UCheckBox CB_DrawFireDirection; // 0x260 (8)
	struct UCheckBox CB_DrawHitted; // 0x268 (8)
	struct UCheckBox CB_DrawPersonalSupplyBox; // 0x270 (8)
	struct UCheckBox CB_TransportDropBox; // 0x278 (8)
	struct ABP-MK3DReplayController_C ReplayController; // 0x280 (8)
	struct UBravoHotelMainWidget MainWidget; // 0x288 (8)
	struct ABravoHotelPlayerHUD PlayerHUD; // 0x290 (8)

	void Init(); // Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.Init(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__CB_DrawFireDirection_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.BndEvt__CB_DrawFireDirection_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__CB_DrawHitted_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.BndEvt__CB_DrawHitted_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__CB_DrawDeathPosition_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.BndEvt__CB_DrawDeathPosition_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__CB_DrawPersonalSupplyBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.BndEvt__CB_DrawPersonalSupplyBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__CB_TransportDropBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.BndEvt__CB_TransportDropBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-ReplayWorldMapOption(int32_t EntryPoint); // Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.ExecuteUbergraph_UW-ReplayWorldMapOption(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.Init
inline void UUW-ReplayWorldMapOption_C::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.Init");

	struct Init_Params {
		
	}; Init_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.BndEvt__CB_DrawFireDirection_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
inline void UUW-ReplayWorldMapOption_C::BndEvt__CB_DrawFireDirection_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.BndEvt__CB_DrawFireDirection_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct BndEvt__CB_DrawFireDirection_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params {
		char bIsChecked;
	}; BndEvt__CB_DrawFireDirection_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.BndEvt__CB_DrawHitted_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
inline void UUW-ReplayWorldMapOption_C::BndEvt__CB_DrawHitted_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.BndEvt__CB_DrawHitted_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct BndEvt__CB_DrawHitted_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params {
		char bIsChecked;
	}; BndEvt__CB_DrawHitted_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.BndEvt__CB_DrawDeathPosition_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
inline void UUW-ReplayWorldMapOption_C::BndEvt__CB_DrawDeathPosition_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.BndEvt__CB_DrawDeathPosition_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct BndEvt__CB_DrawDeathPosition_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params {
		char bIsChecked;
	}; BndEvt__CB_DrawDeathPosition_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.BndEvt__CB_DrawPersonalSupplyBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
inline void UUW-ReplayWorldMapOption_C::BndEvt__CB_DrawPersonalSupplyBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.BndEvt__CB_DrawPersonalSupplyBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct BndEvt__CB_DrawPersonalSupplyBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params {
		char bIsChecked;
	}; BndEvt__CB_DrawPersonalSupplyBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.BndEvt__CB_TransportDropBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
inline void UUW-ReplayWorldMapOption_C::BndEvt__CB_TransportDropBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.BndEvt__CB_TransportDropBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct BndEvt__CB_TransportDropBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params {
		char bIsChecked;
	}; BndEvt__CB_TransportDropBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.ExecuteUbergraph_UW-ReplayWorldMapOption
inline void UUW-ReplayWorldMapOption_C::ExecuteUbergraph_UW-ReplayWorldMapOption(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.ExecuteUbergraph_UW-ReplayWorldMapOption");

	struct ExecuteUbergraph_UW-ReplayWorldMapOption_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ReplayWorldMapOption_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

