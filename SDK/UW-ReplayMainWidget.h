// WidgetBlueprintGeneratedClass UW-ReplayMainWidget.UW-ReplayMainWidget_C
class UUW-ReplayMainWidget_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation Anim_ToggleItemList; // 0x250 (8)
	struct UWidgetAnimation Anim_TogglePlayerList; // 0x258 (8)
	struct UWidgetAnimation Anim_ToggleTimeline; // 0x260 (8)
	struct UUW-ReplayFreeCamSpeedWidget_C UW-ReplayFreeCamSpeedWidget; // 0x268 (8)
	struct UUW-ReplayGuideWidget_C UW-ReplayGuideWidget; // 0x270 (8)
	struct UUW-ReplayItemList_C UW-ReplayItemList; // 0x278 (8)
	struct UUW-ReplayPlayerListWidget_C UW-ReplayPlayerListWidget; // 0x280 (8)
	struct UUW-ReplayTimelineBasic_C UW-ReplayTimelineBasic; // 0x288 (8)
	struct UUW-ReplayWorldMapOption_C UW-ReplayWorldMapOption; // 0x290 (8)
	struct UUW-SpectatingTargetInfo_C UW-SpectatingTargetInfo; // 0x298 (8)
	struct ABP-MK3DReplayController_C ReplayController; // 0x2A0 (8)
	struct TArray<struct UUW_ReplayUserNameTooltip_C> UserNameTooltips; // 0x2A8 (16)
	struct UBravoHotelMainWidget MainWidget; // 0x2B8 (8)
	int32_t UserNameTooltipsNum; // 0x2C0 (4)

	void SetTargetPawnInfo(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.SetTargetPawnInfo(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetEnableUserNameTooltips(enum class ECameraType CameraType); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.SetEnableUserNameTooltips(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckWorldMapOption(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.CheckWorldMapOption(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void GetMainWidget(char& IsValid, struct UBravoHotelMainWidget& MainWidget); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.GetMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void RemoveAllUserNameTooltips(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.RemoveAllUserNameTooltips(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CreateUserNameTooltip(struct ABravoHotelPlayerState PlayerState); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.CreateUserNameTooltip(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Set User Name Tooltip(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.Set User Name Tooltip(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Init(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.Init(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ToggleTimeline(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.ToggleTimeline(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void TogglePlayerList(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.TogglePlayerList(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ToggleItemList(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.ToggleItemList(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ChangeCameraTypeDelegate_Event_1(enum class ECameraType CameraType, struct FString TargetPlayerName); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.ChangeCameraTypeDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InitWorldMapOption(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.InitWorldMapOption(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnChangedFreeCamSpeedLevel(float SpeedLevel); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.OnChangedFreeCamSpeedLevel(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnChangedPlayerInfosDelegate_Event_2(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.OnChangedPlayerInfosDelegate_Event_2(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-ReplayMainWidget(int32_t EntryPoint); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.ExecuteUbergraph_UW-ReplayMainWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.SetTargetPawnInfo
inline void UUW-ReplayMainWidget_C::SetTargetPawnInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.SetTargetPawnInfo");

	struct SetTargetPawnInfo_Params {
		
	}; SetTargetPawnInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.SetEnableUserNameTooltips
inline void UUW-ReplayMainWidget_C::SetEnableUserNameTooltips(enum class ECameraType CameraType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.SetEnableUserNameTooltips");

	struct SetEnableUserNameTooltips_Params {
		enum class ECameraType CameraType;
	}; SetEnableUserNameTooltips_Params Params;

	Params.CameraType = CameraType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.CheckWorldMapOption
inline void UUW-ReplayMainWidget_C::CheckWorldMapOption() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.CheckWorldMapOption");

	struct CheckWorldMapOption_Params {
		
	}; CheckWorldMapOption_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.GetMainWidget
inline void UUW-ReplayMainWidget_C::GetMainWidget(char& IsValid, struct UBravoHotelMainWidget& MainWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.GetMainWidget");

	struct GetMainWidget_Params {
		char& IsValid;
		struct UBravoHotelMainWidget& MainWidget;
	}; GetMainWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsValid = Params.IsValid;
	MainWidget = Params.MainWidget;

}

// Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.RemoveAllUserNameTooltips
inline void UUW-ReplayMainWidget_C::RemoveAllUserNameTooltips() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.RemoveAllUserNameTooltips");

	struct RemoveAllUserNameTooltips_Params {
		
	}; RemoveAllUserNameTooltips_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.CreateUserNameTooltip
inline void UUW-ReplayMainWidget_C::CreateUserNameTooltip(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.CreateUserNameTooltip");

	struct CreateUserNameTooltip_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; CreateUserNameTooltip_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.Set User Name Tooltip
inline void UUW-ReplayMainWidget_C::Set User Name Tooltip() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.Set User Name Tooltip");

	struct Set User Name Tooltip_Params {
		
	}; Set User Name Tooltip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.Init
inline void UUW-ReplayMainWidget_C::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.Init");

	struct Init_Params {
		
	}; Init_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.Construct
inline void UUW-ReplayMainWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.ToggleTimeline
inline void UUW-ReplayMainWidget_C::ToggleTimeline() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.ToggleTimeline");

	struct ToggleTimeline_Params {
		
	}; ToggleTimeline_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.TogglePlayerList
inline void UUW-ReplayMainWidget_C::TogglePlayerList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.TogglePlayerList");

	struct TogglePlayerList_Params {
		
	}; TogglePlayerList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.ToggleItemList
inline void UUW-ReplayMainWidget_C::ToggleItemList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.ToggleItemList");

	struct ToggleItemList_Params {
		
	}; ToggleItemList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.ChangeCameraTypeDelegate_Event_1
inline void UUW-ReplayMainWidget_C::ChangeCameraTypeDelegate_Event_1(enum class ECameraType CameraType, struct FString TargetPlayerName) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.ChangeCameraTypeDelegate_Event_1");

	struct ChangeCameraTypeDelegate_Event_1_Params {
		enum class ECameraType CameraType;
		struct FString TargetPlayerName;
	}; ChangeCameraTypeDelegate_Event_1_Params Params;

	Params.CameraType = CameraType;
	Params.TargetPlayerName = TargetPlayerName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.Tick
inline void UUW-ReplayMainWidget_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.Tick");

	struct Tick_Params {
		struct FGeometry MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.InitWorldMapOption
inline void UUW-ReplayMainWidget_C::InitWorldMapOption() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.InitWorldMapOption");

	struct InitWorldMapOption_Params {
		
	}; InitWorldMapOption_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.OnChangedFreeCamSpeedLevel
inline void UUW-ReplayMainWidget_C::OnChangedFreeCamSpeedLevel(float SpeedLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.OnChangedFreeCamSpeedLevel");

	struct OnChangedFreeCamSpeedLevel_Params {
		float SpeedLevel;
	}; OnChangedFreeCamSpeedLevel_Params Params;

	Params.SpeedLevel = SpeedLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.OnChangedPlayerInfosDelegate_Event_2
inline void UUW-ReplayMainWidget_C::OnChangedPlayerInfosDelegate_Event_2() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.OnChangedPlayerInfosDelegate_Event_2");

	struct OnChangedPlayerInfosDelegate_Event_2_Params {
		
	}; OnChangedPlayerInfosDelegate_Event_2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.ExecuteUbergraph_UW-ReplayMainWidget
inline void UUW-ReplayMainWidget_C::ExecuteUbergraph_UW-ReplayMainWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.ExecuteUbergraph_UW-ReplayMainWidget");

	struct ExecuteUbergraph_UW-ReplayMainWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ReplayMainWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

