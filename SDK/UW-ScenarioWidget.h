// WidgetBlueprintGeneratedClass UW-ScenarioWidget.UW-ScenarioWidget_C
class UUW-ScenarioWidget_C : public UBravoHotelScenarioWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Ani_TutorialComplete_FadeOut; // 0x250 (8)
	struct Unknown Ani_TutorialComplete; // 0x258 (8)
	struct Unknown Idle; // 0x260 (8)
	struct Unknown CanvasPanel_1; // 0x268 (8)
	struct Unknown UW-ScenarioQuest; // 0x270 (8)

	enum class Unknow GetVisibility_1(); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.GetVisibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B812B0>
	void Finished_1CB7927F4A56CBA0CBA6E698E86EC64F(); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.Finished_1CB7927F4A56CBA0CBA6E698E86EC64F(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Finished_619E7E41423DCBE2E8D2AC87D77B76F6(); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.Finished_619E7E41423DCBE2E8D2AC87D77B76F6(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnUpdateScenarioQuest(struct Unknown& QuestInfo); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnUpdateScenarioQuest(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnStartScenarioQuest(struct Unknown& QuestInfo); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnStartScenarioQuest(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnStopScenarioQuest(struct Unknown& QuestInfo); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnStopScenarioQuest(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnEndScenario(); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnEndScenario(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_UW-ScenarioWidget(int32_t EntryPoint); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.ExecuteUbergraph_UW-ScenarioWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function UW-ScenarioWidget.UW-ScenarioWidget_C.GetVisibility_1
inline enum class Unknow UUW-ScenarioWidget_C::GetVisibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ScenarioWidget.UW-ScenarioWidget_C.GetVisibility_1");

	struct GetVisibility_1_Params {
		
		enum class Unknow ReturnValue;

	}; GetVisibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-ScenarioWidget.UW-ScenarioWidget_C.Finished_1CB7927F4A56CBA0CBA6E698E86EC64F
inline void UUW-ScenarioWidget_C::Finished_1CB7927F4A56CBA0CBA6E698E86EC64F() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ScenarioWidget.UW-ScenarioWidget_C.Finished_1CB7927F4A56CBA0CBA6E698E86EC64F");

	struct Finished_1CB7927F4A56CBA0CBA6E698E86EC64F_Params {
		
	}; Finished_1CB7927F4A56CBA0CBA6E698E86EC64F_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ScenarioWidget.UW-ScenarioWidget_C.Finished_619E7E41423DCBE2E8D2AC87D77B76F6
inline void UUW-ScenarioWidget_C::Finished_619E7E41423DCBE2E8D2AC87D77B76F6() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ScenarioWidget.UW-ScenarioWidget_C.Finished_619E7E41423DCBE2E8D2AC87D77B76F6");

	struct Finished_619E7E41423DCBE2E8D2AC87D77B76F6_Params {
		
	}; Finished_619E7E41423DCBE2E8D2AC87D77B76F6_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnUpdateScenarioQuest
inline void UUW-ScenarioWidget_C::OnUpdateScenarioQuest(struct Unknown& QuestInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnUpdateScenarioQuest");

	struct OnUpdateScenarioQuest_Params {
		struct Unknown& QuestInfo;
	}; OnUpdateScenarioQuest_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	QuestInfo = Params.QuestInfo;

}

// Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnStartScenarioQuest
inline void UUW-ScenarioWidget_C::OnStartScenarioQuest(struct Unknown& QuestInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnStartScenarioQuest");

	struct OnStartScenarioQuest_Params {
		struct Unknown& QuestInfo;
	}; OnStartScenarioQuest_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	QuestInfo = Params.QuestInfo;

}

// Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnStopScenarioQuest
inline void UUW-ScenarioWidget_C::OnStopScenarioQuest(struct Unknown& QuestInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnStopScenarioQuest");

	struct OnStopScenarioQuest_Params {
		struct Unknown& QuestInfo;
	}; OnStopScenarioQuest_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	QuestInfo = Params.QuestInfo;

}

// Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnEndScenario
inline void UUW-ScenarioWidget_C::OnEndScenario() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnEndScenario");

	struct OnEndScenario_Params {
		
	}; OnEndScenario_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ScenarioWidget.UW-ScenarioWidget_C.ExecuteUbergraph_UW-ScenarioWidget
inline void UUW-ScenarioWidget_C::ExecuteUbergraph_UW-ScenarioWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ScenarioWidget.UW-ScenarioWidget_C.ExecuteUbergraph_UW-ScenarioWidget");

	struct ExecuteUbergraph_UW-ScenarioWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ScenarioWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

