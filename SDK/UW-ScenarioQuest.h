// WidgetBlueprintGeneratedClass UW-ScenarioQuest.UW-ScenarioQuest_C
class UUW-ScenarioQuest_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown EndQuest; // 0x250 (8)
	struct Unknown StartQuest; // 0x258 (8)
	struct Unknown Idle; // 0x260 (8)
	struct Unknown Bg; // 0x268 (8)
	struct Unknown Image_308; // 0x270 (8)
	struct Unknown Image_697; // 0x278 (8)
	struct Unknown Image_839; // 0x280 (8)
	struct Unknown TextBlock_QuestDesc; // 0x288 (8)
	struct Unknown TextBlock_QuestTitle; // 0x290 (8)
	struct Unknown UW-ScenarioQuestCell; // 0x298 (8)
	struct Unknown UW-ScenarioQuestCell_2; // 0x2A0 (8)
	struct Unknown UW-ScenarioQuestCell_94; // 0x2A8 (8)
	struct Unknown VerticalBox_Tasks; // 0x2B0 (8)
	struct Unknown QuestInfo; // 0x2B8 (48)
	struct Unknown QuestData; // 0x2E8 (88)
	char ActiveQuest : 0; // 0x340 (1)
	struct TArray<Unknown> PendingQuestInfo; // 0x348 (16)

	void ConsumeQuestInfo(); // Function UW-ScenarioQuest.UW-ScenarioQuest_C.ConsumeQuestInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CompleteQuest(); // Function UW-ScenarioQuest.UW-ScenarioQuest_C.CompleteQuest(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateQuestInfo(struct Unknown QuestInfo); // Function UW-ScenarioQuest.UW-ScenarioQuest_C.UpdateQuestInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetQuestInfo(struct Unknown QuestInfo); // Function UW-ScenarioQuest.UW-ScenarioQuest_C.SetQuestInfo(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Finished_98C3A1304432C887E8D12CAE4AA78DFF(); // Function UW-ScenarioQuest.UW-ScenarioQuest_C.Finished_98C3A1304432C887E8D12CAE4AA78DFF(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CompleteQuestEvent(); // Function UW-ScenarioQuest.UW-ScenarioQuest_C.CompleteQuestEvent(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-ScenarioQuest(int32_t EntryPoint); // Function UW-ScenarioQuest.UW-ScenarioQuest_C.ExecuteUbergraph_UW-ScenarioQuest(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function UW-ScenarioQuest.UW-ScenarioQuest_C.ConsumeQuestInfo
inline void UUW-ScenarioQuest_C::ConsumeQuestInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ScenarioQuest.UW-ScenarioQuest_C.ConsumeQuestInfo");

	struct ConsumeQuestInfo_Params {
		
	}; ConsumeQuestInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ScenarioQuest.UW-ScenarioQuest_C.CompleteQuest
inline void UUW-ScenarioQuest_C::CompleteQuest() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ScenarioQuest.UW-ScenarioQuest_C.CompleteQuest");

	struct CompleteQuest_Params {
		
	}; CompleteQuest_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ScenarioQuest.UW-ScenarioQuest_C.UpdateQuestInfo
inline void UUW-ScenarioQuest_C::UpdateQuestInfo(struct Unknown QuestInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ScenarioQuest.UW-ScenarioQuest_C.UpdateQuestInfo");

	struct UpdateQuestInfo_Params {
		struct Unknown QuestInfo;
	}; UpdateQuestInfo_Params Params;

	Params.QuestInfo = QuestInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ScenarioQuest.UW-ScenarioQuest_C.SetQuestInfo
inline void UUW-ScenarioQuest_C::SetQuestInfo(struct Unknown QuestInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ScenarioQuest.UW-ScenarioQuest_C.SetQuestInfo");

	struct SetQuestInfo_Params {
		struct Unknown QuestInfo;
	}; SetQuestInfo_Params Params;

	Params.QuestInfo = QuestInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ScenarioQuest.UW-ScenarioQuest_C.Finished_98C3A1304432C887E8D12CAE4AA78DFF
inline void UUW-ScenarioQuest_C::Finished_98C3A1304432C887E8D12CAE4AA78DFF() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ScenarioQuest.UW-ScenarioQuest_C.Finished_98C3A1304432C887E8D12CAE4AA78DFF");

	struct Finished_98C3A1304432C887E8D12CAE4AA78DFF_Params {
		
	}; Finished_98C3A1304432C887E8D12CAE4AA78DFF_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ScenarioQuest.UW-ScenarioQuest_C.CompleteQuestEvent
inline void UUW-ScenarioQuest_C::CompleteQuestEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ScenarioQuest.UW-ScenarioQuest_C.CompleteQuestEvent");

	struct CompleteQuestEvent_Params {
		
	}; CompleteQuestEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ScenarioQuest.UW-ScenarioQuest_C.ExecuteUbergraph_UW-ScenarioQuest
inline void UUW-ScenarioQuest_C::ExecuteUbergraph_UW-ScenarioQuest(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ScenarioQuest.UW-ScenarioQuest_C.ExecuteUbergraph_UW-ScenarioQuest");

	struct ExecuteUbergraph_UW-ScenarioQuest_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ScenarioQuest_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

