// WidgetBlueprintGeneratedClass UW-Timer.UW-Timer_C
class UUW-Timer_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation Ani_Countdown; // 0x250 (8)
	struct UTextBlock TextBlock_RemailTime; // 0x258 (8)
	int32_t PreTime; // 0x260 (4)
	char ActiveTimer : 0; // 0x264 (1)
	int32_t RemainTime; // 0x268 (4)

	struct FText Get_TextBlock_RemailTime_Text_1(); // Function UW-Timer.UW-Timer_C.Get_TextBlock_RemailTime_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Construct(); // Function UW-Timer.UW-Timer_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetVisibileState(enum class EBattleRoyaleState CurrentState); // Function UW-Timer.UW-Timer_C.SetVisibileState(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ??@t??_2(enum class EBattleRoyaleState PrevState, enum class EBattleRoyaleState CurrentState); // Function UW-Timer.UW-Timer_C.??@t??_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetTimer(int32_t RemainTime); // Function UW-Timer.UW-Timer_C.SetTimer(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ??@t??_1(int32_t RemainTime); // Function UW-Timer.UW-Timer_C.??@t??_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-Timer(int32_t EntryPoint); // Function UW-Timer.UW-Timer_C.ExecuteUbergraph_UW-Timer(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-Timer.UW-Timer_C.Get_TextBlock_RemailTime_Text_1
inline struct FText UUW-Timer_C::Get_TextBlock_RemailTime_Text_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Timer.UW-Timer_C.Get_TextBlock_RemailTime_Text_1");

	struct Get_TextBlock_RemailTime_Text_1_Params {
		
		struct FText ReturnValue;

	}; Get_TextBlock_RemailTime_Text_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Timer.UW-Timer_C.Construct
inline void UUW-Timer_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Timer.UW-Timer_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Timer.UW-Timer_C.SetVisibileState
inline void UUW-Timer_C::SetVisibileState(enum class EBattleRoyaleState CurrentState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Timer.UW-Timer_C.SetVisibileState");

	struct SetVisibileState_Params {
		enum class EBattleRoyaleState CurrentState;
	}; SetVisibileState_Params Params;

	Params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Timer.UW-Timer_C.??@t??_2
inline void UUW-Timer_C::??@t??_2(enum class EBattleRoyaleState PrevState, enum class EBattleRoyaleState CurrentState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Timer.UW-Timer_C.??@t??_2");

	struct ??@t??_2_Params {
		enum class EBattleRoyaleState PrevState;
		enum class EBattleRoyaleState CurrentState;
	}; ??@t??_2_Params Params;

	Params.PrevState = PrevState;
	Params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Timer.UW-Timer_C.SetTimer
inline void UUW-Timer_C::SetTimer(int32_t RemainTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Timer.UW-Timer_C.SetTimer");

	struct SetTimer_Params {
		int32_t RemainTime;
	}; SetTimer_Params Params;

	Params.RemainTime = RemainTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Timer.UW-Timer_C.??@t??_1
inline void UUW-Timer_C::??@t??_1(int32_t RemainTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Timer.UW-Timer_C.??@t??_1");

	struct ??@t??_1_Params {
		int32_t RemainTime;
	}; ??@t??_1_Params Params;

	Params.RemainTime = RemainTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Timer.UW-Timer_C.ExecuteUbergraph_UW-Timer
inline void UUW-Timer_C::ExecuteUbergraph_UW-Timer(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Timer.UW-Timer_C.ExecuteUbergraph_UW-Timer");

	struct ExecuteUbergraph_UW-Timer_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Timer_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

