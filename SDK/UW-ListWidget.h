// WidgetBlueprintGeneratedClass UW-ListWidget.UW-ListWidget_C
class UUW-ListWidget_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UUniformGridPanel UniformGridPanel_List; // 0x250 (8)
	struct UClass* WidgetClass; // 0x258 (8)
	char bStartFromTop : 0; // 0x260 (1)
	int32_t MaxWidgetCount; // 0x264 (4)
	char Alignment; // 0x268 (1)
	struct FMargin SlotPadding; // 0x26C (16)

	void AddKillMessage(struct FKillBroadcastUIInfo BroadCastKillInfo); // Function UW-ListWidget.UW-ListWidget_C.AddKillMessage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ChangeMaxCount(int32_t NewMaxCount); // Function UW-ListWidget.UW-ListWidget_C.ChangeMaxCount(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CheckCanStackDamageLog(struct FHitDamageLogInfo& DamageLogInfo, char& CanStack); // Function UW-ListWidget.UW-ListWidget_C.CheckCanStackDamageLog(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddCoreInfoDamageLog(struct FHitDamageLogInfo& DamageLogInfo); // Function UW-ListWidget.UW-ListWidget_C.AddCoreInfoDamageLog(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddMyKillMessage(struct FText Message); // Function UW-ListWidget.UW-ListWidget_C.AddMyKillMessage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddRequestMessage(struct FText Message, struct ABravoHotelPlayerState PlayerState); // Function UW-ListWidget.UW-ListWidget_C.AddRequestMessage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddCoreInfoRequestResuscitation(struct ABravoHotelPlayerState PlayerState); // Function UW-ListWidget.UW-ListWidget_C.AddCoreInfoRequestResuscitation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddCoreInfoRouteping(struct ABravoHotelPlayerState PlayerState); // Function UW-ListWidget.UW-ListWidget_C.AddCoreInfoRouteping(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddCoreInfoSmartping(struct ABravoHotelPlayerState PlayerState); // Function UW-ListWidget.UW-ListWidget_C.AddCoreInfoSmartping(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddCoreInfoMessage(struct FText Message, struct FString Type); // Function UW-ListWidget.UW-ListWidget_C.AddCoreInfoMessage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddGainPerk(struct FPerkUIInfo& PerkUIInfo, int32_t CurrentLevel, int32_t LastLevel, char IsPlayingUltimateSound); // Function UW-ListWidget.UW-ListWidget_C.AddGainPerk(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowNewWidget(float RemainTime, struct UWidget& OutWidget); // Function UW-ListWidget.UW-ListWidget_C.ShowNewWidget(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void InitChildListWidget(); // Function UW-ListWidget.UW-ListWidget_C.InitChildListWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PreConstruct(char IsDesignTime); // Function UW-ListWidget.UW-ListWidget_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-ListWidget(int32_t EntryPoint); // Function UW-ListWidget.UW-ListWidget_C.ExecuteUbergraph_UW-ListWidget(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-ListWidget.UW-ListWidget_C.AddKillMessage
inline void UUW-ListWidget_C::AddKillMessage(struct FKillBroadcastUIInfo BroadCastKillInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget.UW-ListWidget_C.AddKillMessage");

	struct AddKillMessage_Params {
		struct FKillBroadcastUIInfo BroadCastKillInfo;
	}; AddKillMessage_Params Params;

	Params.BroadCastKillInfo = BroadCastKillInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget.UW-ListWidget_C.ChangeMaxCount
inline void UUW-ListWidget_C::ChangeMaxCount(int32_t NewMaxCount) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget.UW-ListWidget_C.ChangeMaxCount");

	struct ChangeMaxCount_Params {
		int32_t NewMaxCount;
	}; ChangeMaxCount_Params Params;

	Params.NewMaxCount = NewMaxCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget.UW-ListWidget_C.CheckCanStackDamageLog
inline void UUW-ListWidget_C::CheckCanStackDamageLog(struct FHitDamageLogInfo& DamageLogInfo, char& CanStack) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget.UW-ListWidget_C.CheckCanStackDamageLog");

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

// Function UW-ListWidget.UW-ListWidget_C.AddCoreInfoDamageLog
inline void UUW-ListWidget_C::AddCoreInfoDamageLog(struct FHitDamageLogInfo& DamageLogInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget.UW-ListWidget_C.AddCoreInfoDamageLog");

	struct AddCoreInfoDamageLog_Params {
		struct FHitDamageLogInfo& DamageLogInfo;
	}; AddCoreInfoDamageLog_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DamageLogInfo = Params.DamageLogInfo;

}

// Function UW-ListWidget.UW-ListWidget_C.AddMyKillMessage
inline void UUW-ListWidget_C::AddMyKillMessage(struct FText Message) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget.UW-ListWidget_C.AddMyKillMessage");

	struct AddMyKillMessage_Params {
		struct FText Message;
	}; AddMyKillMessage_Params Params;

	Params.Message = Message;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget.UW-ListWidget_C.AddRequestMessage
inline void UUW-ListWidget_C::AddRequestMessage(struct FText Message, struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget.UW-ListWidget_C.AddRequestMessage");

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

// Function UW-ListWidget.UW-ListWidget_C.AddCoreInfoRequestResuscitation
inline void UUW-ListWidget_C::AddCoreInfoRequestResuscitation(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget.UW-ListWidget_C.AddCoreInfoRequestResuscitation");

	struct AddCoreInfoRequestResuscitation_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; AddCoreInfoRequestResuscitation_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget.UW-ListWidget_C.AddCoreInfoRouteping
inline void UUW-ListWidget_C::AddCoreInfoRouteping(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget.UW-ListWidget_C.AddCoreInfoRouteping");

	struct AddCoreInfoRouteping_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; AddCoreInfoRouteping_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget.UW-ListWidget_C.AddCoreInfoSmartping
inline void UUW-ListWidget_C::AddCoreInfoSmartping(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget.UW-ListWidget_C.AddCoreInfoSmartping");

	struct AddCoreInfoSmartping_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; AddCoreInfoSmartping_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget.UW-ListWidget_C.AddCoreInfoMessage
inline void UUW-ListWidget_C::AddCoreInfoMessage(struct FText Message, struct FString Type) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget.UW-ListWidget_C.AddCoreInfoMessage");

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

// Function UW-ListWidget.UW-ListWidget_C.AddGainPerk
inline void UUW-ListWidget_C::AddGainPerk(struct FPerkUIInfo& PerkUIInfo, int32_t CurrentLevel, int32_t LastLevel, char IsPlayingUltimateSound) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget.UW-ListWidget_C.AddGainPerk");

	struct AddGainPerk_Params {
		struct FPerkUIInfo& PerkUIInfo;
		int32_t CurrentLevel;
		int32_t LastLevel;
		char IsPlayingUltimateSound;
	}; AddGainPerk_Params Params;

	Params.CurrentLevel = CurrentLevel;
	Params.LastLevel = LastLevel;
	Params.IsPlayingUltimateSound = IsPlayingUltimateSound;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PerkUIInfo = Params.PerkUIInfo;

}

// Function UW-ListWidget.UW-ListWidget_C.ShowNewWidget
inline void UUW-ListWidget_C::ShowNewWidget(float RemainTime, struct UWidget& OutWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget.UW-ListWidget_C.ShowNewWidget");

	struct ShowNewWidget_Params {
		float RemainTime;
		struct UWidget& OutWidget;
	}; ShowNewWidget_Params Params;

	Params.RemainTime = RemainTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutWidget = Params.OutWidget;

}

// Function UW-ListWidget.UW-ListWidget_C.InitChildListWidget
inline void UUW-ListWidget_C::InitChildListWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget.UW-ListWidget_C.InitChildListWidget");

	struct InitChildListWidget_Params {
		
	}; InitChildListWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget.UW-ListWidget_C.PreConstruct
inline void UUW-ListWidget_C::PreConstruct(char IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget.UW-ListWidget_C.PreConstruct");

	struct PreConstruct_Params {
		char IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ListWidget.UW-ListWidget_C.ExecuteUbergraph_UW-ListWidget
inline void UUW-ListWidget_C::ExecuteUbergraph_UW-ListWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ListWidget.UW-ListWidget_C.ExecuteUbergraph_UW-ListWidget");

	struct ExecuteUbergraph_UW-ListWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ListWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

