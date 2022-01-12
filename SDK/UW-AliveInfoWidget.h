// WidgetBlueprintGeneratedClass UW-AliveInfoWidget.UW-AliveInfoWidget_C
class UUW-AliveInfoWidget_C : public UBravoHotelAliveInfoWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288 (8)
	struct UWidgetAnimation GoldDesc_Hide; // 0x290 (8)
	struct UWidgetAnimation GoldDesc_Show; // 0x298 (8)
	struct UWidgetAnimation Revival_Add; // 0x2A0 (8)
	struct UTextBlock AliveCount_Text; // 0x2A8 (8)
	struct UTextBlock AliveCount_Text_2; // 0x2B0 (8)
	struct UHorizontalBox HorizontalBox_8; // 0x2B8 (8)
	struct UHorizontalBox HorizontalBox_16; // 0x2C0 (8)
	struct UHorizontalBox HorizontalBox_89; // 0x2C8 (8)
	struct UHorizontalBox HorizontalBox_Alive; // 0x2D0 (8)
	struct UHorizontalBox HorizontalBox_Assist; // 0x2D8 (8)
	struct UHorizontalBox HorizontalBox_CurrentGold; // 0x2E0 (8)
	struct UHorizontalBox HorizontalBox_Kill; // 0x2E8 (8)
	struct UHorizontalBox HorizontalBox_Team; // 0x2F0 (8)
	struct UImage Image; // 0x2F8 (8)
	struct UImage Image_1; // 0x300 (8)
	struct UImage Image_2; // 0x308 (8)
	struct UImage Image_6; // 0x310 (8)
	struct UImage Image_102; // 0x318 (8)
	struct UImage Image_271; // 0x320 (8)
	struct UImage Image_376; // 0x328 (8)
	struct UImage Image_378; // 0x330 (8)
	struct UImage Image_1584; // 0x338 (8)
	struct UImage KillAliveBG; // 0x340 (8)
	struct UImage KillAliveBG_2; // 0x348 (8)
	struct UImage KillAliveBG_3; // 0x350 (8)
	struct UImage KillAliveBG_4; // 0x358 (8)
	struct UTextBlock KillCount_Text; // 0x360 (8)
	struct UTextBlock KillCount_Text_2; // 0x368 (8)
	struct URichTextBlock RichTextBlock_275; // 0x370 (8)
	struct USizeBox SizeBox_1; // 0x378 (8)
	struct USizeBox SizeBox_3; // 0x380 (8)
	struct USpacer Spacer_2; // 0x388 (8)
	struct UTextBlock T_AliveCount; // 0x390 (8)
	struct UTextBlock T_AssistCount; // 0x398 (8)
	struct UTextBlock T_KillCount; // 0x3A0 (8)
	struct UTextBlock T_TeamCount; // 0x3A8 (8)
	struct UTextBlock TextBlock_1; // 0x3B0 (8)
	struct UTextBlock TextBlock_CurrentGold; // 0x3B8 (8)
	char ShowKillCountUI : 0; // 0x3C0 (1)
	int32_t CurrentKillCount; // 0x3C4 (4)
	int32_t NewVar_1; // 0x3C8 (4)
	struct FTimerHandle ShowGoldDescHandle; // 0x3D0 (8)
	struct UTextBlock AliveCount_Text_1_1; // 0x3D8 (8)
	struct UTextBlock KillCount_Text_1_1; // 0x3E0 (8)

	enum class ESlateVisibility Get_HorizontalBox_CurrentGold_Visibility_1(); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.Get_HorizontalBox_CurrentGold_Visibility_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void SetBGImageMarginValue(int32_t AliveCount); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetBGImageMarginValue(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetAliveCount(int32_t AliveCount); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetAliveCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetKillCount(int32_t KillCount); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetKillCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void HideKillCount(); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.HideKillCount(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowKillCount(); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.ShowKillCount(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetKillCount_BP(int32_t NewKillCount); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetKillCount_BP(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetAliveTeamCount_BP(int32_t NewAliveTeamCount, int32_t TeamSize); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetAliveTeamCount_BP(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ShowResuscitation(); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.ShowResuscitation(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Show_GoldDesc(); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.Show_GoldDesc(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Hide_GoldDesc(); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.Hide_GoldDesc(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetAssistCount_BP(int32_t NewKillCount); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetAssistCount_BP(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetAliveCount_BP(int32_t NewAliveCount); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetAliveCount_BP(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-AliveInfoWidget(int32_t EntryPoint); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.ExecuteUbergraph_UW-AliveInfoWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.Get_HorizontalBox_CurrentGold_Visibility_1
inline enum class ESlateVisibility UUW-AliveInfoWidget_C::Get_HorizontalBox_CurrentGold_Visibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.Get_HorizontalBox_CurrentGold_Visibility_1");

	struct Get_HorizontalBox_CurrentGold_Visibility_1_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; Get_HorizontalBox_CurrentGold_Visibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetBGImageMarginValue
inline void UUW-AliveInfoWidget_C::SetBGImageMarginValue(int32_t AliveCount) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetBGImageMarginValue");

	struct SetBGImageMarginValue_Params {
		int32_t AliveCount;
	}; SetBGImageMarginValue_Params Params;

	Params.AliveCount = AliveCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetAliveCount
inline void UUW-AliveInfoWidget_C::SetAliveCount(int32_t AliveCount) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetAliveCount");

	struct SetAliveCount_Params {
		int32_t AliveCount;
	}; SetAliveCount_Params Params;

	Params.AliveCount = AliveCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetKillCount
inline void UUW-AliveInfoWidget_C::SetKillCount(int32_t KillCount) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetKillCount");

	struct SetKillCount_Params {
		int32_t KillCount;
	}; SetKillCount_Params Params;

	Params.KillCount = KillCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.HideKillCount
inline void UUW-AliveInfoWidget_C::HideKillCount() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.HideKillCount");

	struct HideKillCount_Params {
		
	}; HideKillCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.ShowKillCount
inline void UUW-AliveInfoWidget_C::ShowKillCount() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.ShowKillCount");

	struct ShowKillCount_Params {
		
	}; ShowKillCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetKillCount_BP
inline void UUW-AliveInfoWidget_C::SetKillCount_BP(int32_t NewKillCount) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetKillCount_BP");

	struct SetKillCount_BP_Params {
		int32_t NewKillCount;
	}; SetKillCount_BP_Params Params;

	Params.NewKillCount = NewKillCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetAliveTeamCount_BP
inline void UUW-AliveInfoWidget_C::SetAliveTeamCount_BP(int32_t NewAliveTeamCount, int32_t TeamSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetAliveTeamCount_BP");

	struct SetAliveTeamCount_BP_Params {
		int32_t NewAliveTeamCount;
		int32_t TeamSize;
	}; SetAliveTeamCount_BP_Params Params;

	Params.NewAliveTeamCount = NewAliveTeamCount;
	Params.TeamSize = TeamSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.ShowResuscitation
inline void UUW-AliveInfoWidget_C::ShowResuscitation() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.ShowResuscitation");

	struct ShowResuscitation_Params {
		
	}; ShowResuscitation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.Show_GoldDesc
inline void UUW-AliveInfoWidget_C::Show_GoldDesc() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.Show_GoldDesc");

	struct Show_GoldDesc_Params {
		
	}; Show_GoldDesc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.Hide_GoldDesc
inline void UUW-AliveInfoWidget_C::Hide_GoldDesc() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.Hide_GoldDesc");

	struct Hide_GoldDesc_Params {
		
	}; Hide_GoldDesc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetAssistCount_BP
inline void UUW-AliveInfoWidget_C::SetAssistCount_BP(int32_t NewKillCount) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetAssistCount_BP");

	struct SetAssistCount_BP_Params {
		int32_t NewKillCount;
	}; SetAssistCount_BP_Params Params;

	Params.NewKillCount = NewKillCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetAliveCount_BP
inline void UUW-AliveInfoWidget_C::SetAliveCount_BP(int32_t NewAliveCount) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetAliveCount_BP");

	struct SetAliveCount_BP_Params {
		int32_t NewAliveCount;
	}; SetAliveCount_BP_Params Params;

	Params.NewAliveCount = NewAliveCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.ExecuteUbergraph_UW-AliveInfoWidget
inline void UUW-AliveInfoWidget_C::ExecuteUbergraph_UW-AliveInfoWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.ExecuteUbergraph_UW-AliveInfoWidget");

	struct ExecuteUbergraph_UW-AliveInfoWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-AliveInfoWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

