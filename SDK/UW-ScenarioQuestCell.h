// WidgetBlueprintGeneratedClass UW-ScenarioQuestCell.UW-ScenarioQuestCell_C
class UUW-ScenarioQuestCell_C : public UUserWidget {

public:

	struct Unknown Ani_Complete; // 0x248 (8)
	struct Unknown Ani_BG; // 0x250 (8)
	struct Unknown Bg; // 0x258 (8)
	struct Unknown Complete; // 0x260 (8)
	struct Unknown TextBlock_QuestDesc; // 0x268 (8)
	struct Unknown TextBlock_QuestTitle; // 0x270 (8)
	struct Unknown UW-ImageText; // 0x278 (8)
	struct Unknown UW-ScenarioQuestCell_Sub; // 0x280 (8)
	struct Unknown UW-ScenarioQuestCell_Sub_2; // 0x288 (8)
	struct Unknown UW-ScenarioQuestCell_Sub_3; // 0x290 (8)
	struct Unknown TaskInfo; // 0x298 (32)
	struct Unknown TaskData; // 0x2B8 (176)

	void SetTaskInfo(struct Unknown TaskInfo); // Function UW-ScenarioQuestCell.UW-ScenarioQuestCell_C.SetTaskInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
};

// Function UW-ScenarioQuestCell.UW-ScenarioQuestCell_C.SetTaskInfo
inline void UUW-ScenarioQuestCell_C::SetTaskInfo(struct Unknown TaskInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ScenarioQuestCell.UW-ScenarioQuestCell_C.SetTaskInfo");

	struct SetTaskInfo_Params {
		struct Unknown TaskInfo;
	}; SetTaskInfo_Params Params;

	Params.TaskInfo = TaskInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

