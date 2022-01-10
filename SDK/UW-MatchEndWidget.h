// WidgetBlueprintGeneratedClass UW-MatchEndWidget.UW-MatchEndWidget_C
class UUW-MatchEndWidget_C : public UBravoHotelGameMatchEndWidget {

public:

	struct Unknown UberGraphFrame; // 0x360 (8)
	struct Unknown UW-MatchEnd_Animation_02; // 0x368 (8)
	struct Unknown UW-MatchEnd_Ranking2; // 0x370 (8)
	struct Unknown UW_SimpleResult; // 0x378 (8)
	struct Unknown MainWidgetRef; // 0x380 (8)
	struct Unknown PlayerHUDRef; // 0x388 (8)
	struct Unknown UW_FinalResult; // 0x390 (8)
	struct Unknown UW_Animation; // 0x398 (8)
	struct Unknown PlayerControllerRef; // 0x3A0 (8)
	char NewResult : 0; // 0x3A8 (1)
	struct Unknown ResultData; // 0x3A9 (4)
	char IsGiveUp : 0; // 0x3AD (1)
	float WinMatchEndResultShowTime; // 0x3B0 (4)
	struct Unknown ResultMatchEndAnimation; // 0x3B4 (2)

	char IsVisibleMatchEndWidget(); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.IsVisibleMatchEndWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void GetPlayerState(struct Unknown& PlayerState); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.GetPlayerState(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void K2_ShowSimpleResult(struct Unknown& SimpleResult); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_ShowSimpleResult(Event|Protected|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void K2_HideSimpleResult(); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_HideSimpleResult(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void K2_ShowFinalResult(struct Unknown& FinalResult); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_ShowFinalResult(Event|Protected|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void K2_HideFinalResult(); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_HideFinalResult(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Construct(); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void K2_ShowMatchEndAnimation(struct Unknown& MatchEndAnimation, struct Unknown& SimpleResult, char bIsRetired); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_ShowMatchEndAnimation(Event|Protected|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void K2_HideMatchEndAnimation(); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_HideMatchEndAnimation(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Init(); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.Init(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void 鉹@t元_1(); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_UW-MatchEndWidget(int32_t EntryPoint); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.ExecuteUbergraph_UW-MatchEndWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function UW-MatchEndWidget.UW-MatchEndWidget_C.IsVisibleMatchEndWidget
inline char UUW-MatchEndWidget_C::IsVisibleMatchEndWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEndWidget.UW-MatchEndWidget_C.IsVisibleMatchEndWidget");

	struct IsVisibleMatchEndWidget_Params {
		
		char ReturnValue;

	}; IsVisibleMatchEndWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-MatchEndWidget.UW-MatchEndWidget_C.GetPlayerState
inline void UUW-MatchEndWidget_C::GetPlayerState(struct Unknown& PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEndWidget.UW-MatchEndWidget_C.GetPlayerState");

	struct GetPlayerState_Params {
		struct Unknown& PlayerState;
	}; GetPlayerState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PlayerState = Params.PlayerState;

}

// Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_ShowSimpleResult
inline void UUW-MatchEndWidget_C::K2_ShowSimpleResult(struct Unknown& SimpleResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_ShowSimpleResult");

	struct K2_ShowSimpleResult_Params {
		struct Unknown& SimpleResult;
	}; K2_ShowSimpleResult_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SimpleResult = Params.SimpleResult;

}

// Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_HideSimpleResult
inline void UUW-MatchEndWidget_C::K2_HideSimpleResult() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_HideSimpleResult");

	struct K2_HideSimpleResult_Params {
		
	}; K2_HideSimpleResult_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_ShowFinalResult
inline void UUW-MatchEndWidget_C::K2_ShowFinalResult(struct Unknown& FinalResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_ShowFinalResult");

	struct K2_ShowFinalResult_Params {
		struct Unknown& FinalResult;
	}; K2_ShowFinalResult_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	FinalResult = Params.FinalResult;

}

// Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_HideFinalResult
inline void UUW-MatchEndWidget_C::K2_HideFinalResult() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_HideFinalResult");

	struct K2_HideFinalResult_Params {
		
	}; K2_HideFinalResult_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEndWidget.UW-MatchEndWidget_C.Construct
inline void UUW-MatchEndWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEndWidget.UW-MatchEndWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_ShowMatchEndAnimation
inline void UUW-MatchEndWidget_C::K2_ShowMatchEndAnimation(struct Unknown& MatchEndAnimation, struct Unknown& SimpleResult, char bIsRetired) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_ShowMatchEndAnimation");

	struct K2_ShowMatchEndAnimation_Params {
		struct Unknown& MatchEndAnimation;
		struct Unknown& SimpleResult;
		char bIsRetired;
	}; K2_ShowMatchEndAnimation_Params Params;

	Params.bIsRetired = bIsRetired;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MatchEndAnimation = Params.MatchEndAnimation;
	SimpleResult = Params.SimpleResult;

}

// Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_HideMatchEndAnimation
inline void UUW-MatchEndWidget_C::K2_HideMatchEndAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_HideMatchEndAnimation");

	struct K2_HideMatchEndAnimation_Params {
		
	}; K2_HideMatchEndAnimation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEndWidget.UW-MatchEndWidget_C.Init
inline void UUW-MatchEndWidget_C::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEndWidget.UW-MatchEndWidget_C.Init");

	struct Init_Params {
		
	}; Init_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEndWidget.UW-MatchEndWidget_C.鉹@t元_1
inline void UUW-MatchEndWidget_C::鉹@t元_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEndWidget.UW-MatchEndWidget_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		
	}; 鉹@t元_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-MatchEndWidget.UW-MatchEndWidget_C.ExecuteUbergraph_UW-MatchEndWidget
inline void UUW-MatchEndWidget_C::ExecuteUbergraph_UW-MatchEndWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-MatchEndWidget.UW-MatchEndWidget_C.ExecuteUbergraph_UW-MatchEndWidget");

	struct ExecuteUbergraph_UW-MatchEndWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-MatchEndWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

