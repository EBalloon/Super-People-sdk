// WidgetBlueprintGeneratedClass UW-CoreInfoWidget.UW-CoreInfoWidget_C
class UUW-CoreInfoWidget_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UVerticalBox VB_CoreList; // 0x250 (8)
	int32_t MaxWidgetCount; // 0x258 (4)
	char bStartFromTop : 0; // 0x25C (1)
	char Alignment; // 0x25D (1)
	int32_t SetWidgetSwitcherIndex; // 0x260 (4)

	void CheckCanStackDamageLog(struct FHitDamageLogInfo& DamageLogInfo, char& CanStack); // Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.CheckCanStackDamageLog(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AddCoreInfoDamageLog(struct FHitDamageLogInfo& DamageLogInfo); // Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.AddCoreInfoDamageLog(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AddMyKillMessage(struct FText Message); // Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.AddMyKillMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AddCoreInfoRequestResuscitation(struct ABravoHotelPlayerState PlayerState); // Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.AddCoreInfoRequestResuscitation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AddRequestMessage(struct FText Message, struct ABravoHotelPlayerState PlayerState); // Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.AddRequestMessage(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AddCoreInfoRouteping(struct ABravoHotelPlayerState PlayerState); // Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.AddCoreInfoRouteping(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AddCoreInfoMessage(struct FText Message, struct FString Type); // Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.AddCoreInfoMessage(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AddCoreInfoSmartping(struct ABravoHotelPlayerState PlayerState); // Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.AddCoreInfoSmartping(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowNewWidget(float RemainTime, struct UUW-CoreInfoWidgetItem_C& CoreInfoItemWidget); // Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.ShowNewWidget(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InitChildCoreWidget(); // Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.InitChildCoreWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void PreConstruct(char IsDesignTime); // Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-CoreInfoWidget(int32_t EntryPoint); // Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.ExecuteUbergraph_UW-CoreInfoWidget(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.CheckCanStackDamageLog
inline void UUW-CoreInfoWidget_C::CheckCanStackDamageLog(struct FHitDamageLogInfo& DamageLogInfo, char& CanStack) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.CheckCanStackDamageLog");

	struct CheckCanStackDamageLog_Params {
		struct FHitDamageLogInfo& DamageLogInfo;
		char& CanStack;
	}; CheckCanStackDamageLog_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DamageLogInfo = Params.DamageLogInfo;
	CanStack = Params.CanStack;

}

// Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.AddCoreInfoDamageLog
inline void UUW-CoreInfoWidget_C::AddCoreInfoDamageLog(struct FHitDamageLogInfo& DamageLogInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.AddCoreInfoDamageLog");

	struct AddCoreInfoDamageLog_Params {
		struct FHitDamageLogInfo& DamageLogInfo;
	}; AddCoreInfoDamageLog_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DamageLogInfo = Params.DamageLogInfo;

}

// Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.AddMyKillMessage
inline void UUW-CoreInfoWidget_C::AddMyKillMessage(struct FText Message) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.AddMyKillMessage");

	struct AddMyKillMessage_Params {
		struct FText Message;
	}; AddMyKillMessage_Params Params;

	Params.Message = Message;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.AddCoreInfoRequestResuscitation
inline void UUW-CoreInfoWidget_C::AddCoreInfoRequestResuscitation(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.AddCoreInfoRequestResuscitation");

	struct AddCoreInfoRequestResuscitation_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; AddCoreInfoRequestResuscitation_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.AddRequestMessage
inline void UUW-CoreInfoWidget_C::AddRequestMessage(struct FText Message, struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.AddRequestMessage");

	struct AddRequestMessage_Params {
		struct FText Message;
		struct ABravoHotelPlayerState PlayerState;
	}; AddRequestMessage_Params Params;

	Params.Message = Message;
	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.AddCoreInfoRouteping
inline void UUW-CoreInfoWidget_C::AddCoreInfoRouteping(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.AddCoreInfoRouteping");

	struct AddCoreInfoRouteping_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; AddCoreInfoRouteping_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.AddCoreInfoMessage
inline void UUW-CoreInfoWidget_C::AddCoreInfoMessage(struct FText Message, struct FString Type) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.AddCoreInfoMessage");

	struct AddCoreInfoMessage_Params {
		struct FText Message;
		struct FString Type;
	}; AddCoreInfoMessage_Params Params;

	Params.Message = Message;
	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.AddCoreInfoSmartping
inline void UUW-CoreInfoWidget_C::AddCoreInfoSmartping(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.AddCoreInfoSmartping");

	struct AddCoreInfoSmartping_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; AddCoreInfoSmartping_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.ShowNewWidget
inline void UUW-CoreInfoWidget_C::ShowNewWidget(float RemainTime, struct UUW-CoreInfoWidgetItem_C& CoreInfoItemWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.ShowNewWidget");

	struct ShowNewWidget_Params {
		float RemainTime;
		struct UUW-CoreInfoWidgetItem_C& CoreInfoItemWidget;
	}; ShowNewWidget_Params Params;

	Params.RemainTime = RemainTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CoreInfoItemWidget = Params.CoreInfoItemWidget;

}

// Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.InitChildCoreWidget
inline void UUW-CoreInfoWidget_C::InitChildCoreWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.InitChildCoreWidget");

	struct InitChildCoreWidget_Params {
		
	}; InitChildCoreWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.PreConstruct
inline void UUW-CoreInfoWidget_C::PreConstruct(char IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.PreConstruct");

	struct PreConstruct_Params {
		char IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.ExecuteUbergraph_UW-CoreInfoWidget
inline void UUW-CoreInfoWidget_C::ExecuteUbergraph_UW-CoreInfoWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CoreInfoWidget.UW-CoreInfoWidget_C.ExecuteUbergraph_UW-CoreInfoWidget");

	struct ExecuteUbergraph_UW-CoreInfoWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-CoreInfoWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

