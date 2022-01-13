// WidgetBlueprintGeneratedClass UW-ScenarioWidget.UW-ScenarioWidget_C
class UUW-ScenarioWidget_C : public UBravoHotelScenarioWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation Ani_TutorialComplete_FadeOut; // 0x250 (8)
	struct UWidgetAnimation Ani_TutorialComplete; // 0x258 (8)
	struct UWidgetAnimation Idle; // 0x260 (8)
	struct UCanvasPanel CanvasPanel_1; // 0x268 (8)
	struct UUW-ScenarioQuest_C UW-ScenarioQuest; // 0x270 (8)

	enum class ESlateVisibility GetVisibility_1(); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.GetVisibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Finished_1CB7927F4A56CBA0CBA6E698E86EC64F(); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.Finished_1CB7927F4A56CBA0CBA6E698E86EC64F(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Finished_619E7E41423DCBE2E8D2AC87D77B76F6(); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.Finished_619E7E41423DCBE2E8D2AC87D77B76F6(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnUpdateScenarioQuest(struct FQuestInfo& QuestInfo); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnUpdateScenarioQuest(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnStartScenarioQuest(struct FQuestInfo& QuestInfo); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnStartScenarioQuest(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnStopScenarioQuest(struct FQuestInfo& QuestInfo); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnStopScenarioQuest(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnEndScenario(); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnEndScenario(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-ScenarioWidget(int32_t EntryPoint); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.ExecuteUbergraph_UW-ScenarioWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-ScenarioWidget.UW-ScenarioWidget_C.GetVisibility_1
inline enum class ESlateVisibility UUW-ScenarioWidget_C::GetVisibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ScenarioWidget.UW-ScenarioWidget_C.GetVisibility_1");

	struct GetVisibility_1_Params {
		
		enum class ESlateVisibility ReturnValue;

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
inline void UUW-ScenarioWidget_C::OnUpdateScenarioQuest(struct FQuestInfo& QuestInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnUpdateScenarioQuest");

	struct OnUpdateScenarioQuest_Params {
		struct FQuestInfo& QuestInfo;
	}; OnUpdateScenarioQuest_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	QuestInfo = Params.QuestInfo;

}

// Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnStartScenarioQuest
inline void UUW-ScenarioWidget_C::OnStartScenarioQuest(struct FQuestInfo& QuestInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnStartScenarioQuest");

	struct OnStartScenarioQuest_Params {
		struct FQuestInfo& QuestInfo;
	}; OnStartScenarioQuest_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	QuestInfo = Params.QuestInfo;

}

// Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnStopScenarioQuest
inline void UUW-ScenarioWidget_C::OnStopScenarioQuest(struct FQuestInfo& QuestInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnStopScenarioQuest");

	struct OnStopScenarioQuest_Params {
		struct FQuestInfo& QuestInfo;
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

