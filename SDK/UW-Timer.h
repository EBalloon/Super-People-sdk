// WidgetBlueprintGeneratedClass UW-Timer.UW-Timer_C
class UUW-Timer_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Ani_Countdown; // 0x250 (8)
	struct Unknown TextBlock_RemailTime; // 0x258 (8)
	int32_t PreTime; // 0x260 (4)
	char ActiveTimer : 0; // 0x264 (1)
	int32_t RemainTime; // 0x268 (4)

	struct FText Get_TextBlock_RemailTime_Text_1(); // Function UW-Timer.UW-Timer_C.Get_TextBlock_RemailTime_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-Timer.UW-Timer_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetVisibileState(enum class Unknow CurrentState); // Function UW-Timer.UW-Timer_C.SetVisibileState(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void 鉹@t元_2(enum class Unknow PrevState, enum class Unknow CurrentState); // Function UW-Timer.UW-Timer_C.鉹@t元_2(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetTimer(int32_t RemainTime); // Function UW-Timer.UW-Timer_C.SetTimer(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void 鉹@t元_1(int32_t RemainTime); // Function UW-Timer.UW-Timer_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-Timer(int32_t EntryPoint); // Function UW-Timer.UW-Timer_C.ExecuteUbergraph_UW-Timer(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
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
inline void UUW-Timer_C::SetVisibileState(enum class Unknow CurrentState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Timer.UW-Timer_C.SetVisibileState");

	struct SetVisibileState_Params {
		enum class Unknow CurrentState;
	}; SetVisibileState_Params Params;

	Params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Timer.UW-Timer_C.鉹@t元_2
inline void UUW-Timer_C::鉹@t元_2(enum class Unknow PrevState, enum class Unknow CurrentState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Timer.UW-Timer_C.鉹@t元_2");

	struct 鉹@t元_2_Params {
		enum class Unknow PrevState;
		enum class Unknow CurrentState;
	}; 鉹@t元_2_Params Params;

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

// Function UW-Timer.UW-Timer_C.鉹@t元_1
inline void UUW-Timer_C::鉹@t元_1(int32_t RemainTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Timer.UW-Timer_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		int32_t RemainTime;
	}; 鉹@t元_1_Params Params;

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

