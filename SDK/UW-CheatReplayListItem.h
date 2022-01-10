// WidgetBlueprintGeneratedClass UW-CheatReplayListItem.UW-CheatReplayListItem_C
class UUW-CheatReplayListItem_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_98; // 0x250 (8)
	struct Unknown Time_2; // 0x258 (8)
	struct Unknown SavedEvent; // 0x260 (40)
	struct FString SavedReplayFileName; // 0x288 (16)
	struct Unknown ReplayListWidget; // 0x298 (8)

	void Init(struct Unknown Event, struct FString ReplayFileName, struct Unknown ReplayListWidget); // Function UW-CheatReplayListItem.UW-CheatReplayListItem_C.Init(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__Button_97_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-CheatReplayListItem.UW-CheatReplayListItem_C.BndEvt__Button_97_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_UW-CheatReplayListItem(int32_t EntryPoint); // Function UW-CheatReplayListItem.UW-CheatReplayListItem_C.ExecuteUbergraph_UW-CheatReplayListItem(Final|UbergraphFunction) // <Game_BE.exe+0x2B812B0>
};

// Function UW-CheatReplayListItem.UW-CheatReplayListItem_C.Init
inline void UUW-CheatReplayListItem_C::Init(struct Unknown Event, struct FString ReplayFileName, struct Unknown ReplayListWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CheatReplayListItem.UW-CheatReplayListItem_C.Init");

	struct Init_Params {
		struct Unknown Event;
		struct FString ReplayFileName;
		struct Unknown ReplayListWidget;
	}; Init_Params Params;

	Params.Event = Event;
	Params.ReplayFileName = ReplayFileName;
	Params.ReplayListWidget = ReplayListWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CheatReplayListItem.UW-CheatReplayListItem_C.BndEvt__Button_97_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-CheatReplayListItem_C::BndEvt__Button_97_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CheatReplayListItem.UW-CheatReplayListItem_C.BndEvt__Button_97_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_97_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_97_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CheatReplayListItem.UW-CheatReplayListItem_C.ExecuteUbergraph_UW-CheatReplayListItem
inline void UUW-CheatReplayListItem_C::ExecuteUbergraph_UW-CheatReplayListItem(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CheatReplayListItem.UW-CheatReplayListItem_C.ExecuteUbergraph_UW-CheatReplayListItem");

	struct ExecuteUbergraph_UW-CheatReplayListItem_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-CheatReplayListItem_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

