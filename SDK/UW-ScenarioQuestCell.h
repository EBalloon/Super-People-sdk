// WidgetBlueprintGeneratedClass UW-ScenarioQuestCell.UW-ScenarioQuestCell_C
class UUW-ScenarioQuestCell_C : public UUserWidget {

public:

	struct UWidgetAnimation Ani_Complete; // 0x248 (8)
	struct UImage Ani_BG; // 0x250 (8)
	struct UImage Bg; // 0x258 (8)
	struct UImage Complete; // 0x260 (8)
	struct UTextBlock TextBlock_QuestDesc; // 0x268 (8)
	struct UTextBlock TextBlock_QuestTitle; // 0x270 (8)
	struct UUW-ImageText_C UW-ImageText; // 0x278 (8)
	struct UUW-ScenarioQuestCell_Sub_C UW-ScenarioQuestCell_Sub; // 0x280 (8)
	struct UUW-ScenarioQuestCell_Sub_C UW-ScenarioQuestCell_Sub_2; // 0x288 (8)
	struct UUW-ScenarioQuestCell_Sub_C UW-ScenarioQuestCell_Sub_3; // 0x290 (8)
	struct FQuestTaskInfo TaskInfo; // 0x298 (32)
	struct FQuestTaskElement TaskData; // 0x2B8 (176)

	void SetTaskInfo(struct FQuestTaskInfo TaskInfo); // Function UW-ScenarioQuestCell.UW-ScenarioQuestCell_C.SetTaskInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-ScenarioQuestCell.UW-ScenarioQuestCell_C.SetTaskInfo
inline void UUW-ScenarioQuestCell_C::SetTaskInfo(struct FQuestTaskInfo TaskInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ScenarioQuestCell.UW-ScenarioQuestCell_C.SetTaskInfo");

	struct SetTaskInfo_Params {
		struct FQuestTaskInfo TaskInfo;
	}; SetTaskInfo_Params Params;

	Params.TaskInfo = TaskInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

