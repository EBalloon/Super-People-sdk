// BlueprintGeneratedClass BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C
class UBP-HUDInteractionComponentBase_C : public UHUDInteractionComponent {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0xF0 (8)
	struct APlayerController PlayerController; // 0xF8 (8)
	char bAlreadySetOptionWidget : 0; // 0x100 (1)
	float defaultContrast; // 0x104 (4)
	float defaultMaxBrightness; // 0x108 (4)
	float defaultMinBrightness; // 0x10C (4)
	float MinBrightness; // 0x110 (4)
	float MaxBrightness; // 0x114 (4)
	float Contrast; // 0x118 (4)
	char bUsePostProcessVolumeOption : 0; // 0x11C (1)
	float ColorGradingGlobalGamma; // 0x120 (4)
	float FilmToeIntensity; // 0x124 (4)
	char IsInWidget : 0; // 0x128 (1)
	char bInputModeUI : 0; // 0x129 (1)
	struct TArray<struct FName> InputActionsToBlock; // 0x130 (16)

	void CheckAnyAction(char& AnyAction); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.CheckAnyAction(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void CheckAnyCloseUI(char& AnyClosed); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.CheckAnyCloseUI(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void InputCloseUI(); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InputCloseUI(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Callback(); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.Callback(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetMousePositionToCenter(); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.SetMousePositionToCenter(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckInputState(); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.CheckInputState(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetActionBlocked(char WantsToBlock, struct TArray<struct FName>& ActionNames, struct UUserWidget Widget); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.SetActionBlocked(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	char IsGlobalPostProcessVolume(struct Object Other); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.IsGlobalPostProcessVolume(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void SetPostProcessVolumeDefaultOption(); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.SetPostProcessVolumeDefaultOption(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InitOptionWidget(); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InitOptionWidget(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void IsSpectating(char& IsSpectating); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.IsSpectating(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void GetPlayerHUD(char& IsAlive, struct ABravoHotelPlayerHUD& PlayerHUD); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.GetPlayerHUD(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void InputOptionMenu(); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InputOptionMenu(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReceiveTick(float DeltaSeconds); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.ReceiveTick(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InputModeGame(struct UUserWidget Widget); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InputModeGame(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InputModeUI(struct UUserWidget Widget); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InputModeUI(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InputToggleIngameHUD(); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InputToggleIngameHUD(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReceiveBeginPlay(); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.ReceiveBeginPlay(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP-HUDInteractionComponentBase(int32_t EntryPoint); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.ExecuteUbergraph_BP-HUDInteractionComponentBase(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.CheckAnyAction
inline void UBP-HUDInteractionComponentBase_C::CheckAnyAction(char& AnyAction) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.CheckAnyAction");

	struct CheckAnyAction_Params {
		char& AnyAction;
	}; CheckAnyAction_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnyAction = Params.AnyAction;

}

// Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.CheckAnyCloseUI
inline void UBP-HUDInteractionComponentBase_C::CheckAnyCloseUI(char& AnyClosed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.CheckAnyCloseUI");

	struct CheckAnyCloseUI_Params {
		char& AnyClosed;
	}; CheckAnyCloseUI_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnyClosed = Params.AnyClosed;

}

// Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InputCloseUI
inline void UBP-HUDInteractionComponentBase_C::InputCloseUI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InputCloseUI");

	struct InputCloseUI_Params {
		
	}; InputCloseUI_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.Callback
inline void UBP-HUDInteractionComponentBase_C::Callback() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.Callback");

	struct Callback_Params {
		
	}; Callback_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.SetMousePositionToCenter
inline void UBP-HUDInteractionComponentBase_C::SetMousePositionToCenter() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.SetMousePositionToCenter");

	struct SetMousePositionToCenter_Params {
		
	}; SetMousePositionToCenter_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.CheckInputState
inline void UBP-HUDInteractionComponentBase_C::CheckInputState() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.CheckInputState");

	struct CheckInputState_Params {
		
	}; CheckInputState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.SetActionBlocked
inline void UBP-HUDInteractionComponentBase_C::SetActionBlocked(char WantsToBlock, struct TArray<struct FName>& ActionNames, struct UUserWidget Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.SetActionBlocked");

	struct SetActionBlocked_Params {
		char WantsToBlock;
		struct TArray<struct FName>& ActionNames;
		struct UUserWidget Widget;
	}; SetActionBlocked_Params Params;

	Params.WantsToBlock = WantsToBlock;
	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ActionNames = Params.ActionNames;

}

// Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.IsGlobalPostProcessVolume
inline char UBP-HUDInteractionComponentBase_C::IsGlobalPostProcessVolume(struct Object Other) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.IsGlobalPostProcessVolume");

	struct IsGlobalPostProcessVolume_Params {
		struct Object Other;
		char ReturnValue;

	}; IsGlobalPostProcessVolume_Params Params;

	Params.Other = Other;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.SetPostProcessVolumeDefaultOption
inline void UBP-HUDInteractionComponentBase_C::SetPostProcessVolumeDefaultOption() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.SetPostProcessVolumeDefaultOption");

	struct SetPostProcessVolumeDefaultOption_Params {
		
	}; SetPostProcessVolumeDefaultOption_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InitOptionWidget
inline void UBP-HUDInteractionComponentBase_C::InitOptionWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InitOptionWidget");

	struct InitOptionWidget_Params {
		
	}; InitOptionWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.IsSpectating
inline void UBP-HUDInteractionComponentBase_C::IsSpectating(char& IsSpectating) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.IsSpectating");

	struct IsSpectating_Params {
		char& IsSpectating;
	}; IsSpectating_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsSpectating = Params.IsSpectating;

}

// Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.GetPlayerHUD
inline void UBP-HUDInteractionComponentBase_C::GetPlayerHUD(char& IsAlive, struct ABravoHotelPlayerHUD& PlayerHUD) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.GetPlayerHUD");

	struct GetPlayerHUD_Params {
		char& IsAlive;
		struct ABravoHotelPlayerHUD& PlayerHUD;
	}; GetPlayerHUD_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsAlive = Params.IsAlive;
	PlayerHUD = Params.PlayerHUD;

}

// Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InputOptionMenu
inline void UBP-HUDInteractionComponentBase_C::InputOptionMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InputOptionMenu");

	struct InputOptionMenu_Params {
		
	}; InputOptionMenu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.ReceiveTick
inline void UBP-HUDInteractionComponentBase_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InputModeGame
inline void UBP-HUDInteractionComponentBase_C::InputModeGame(struct UUserWidget Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InputModeGame");

	struct InputModeGame_Params {
		struct UUserWidget Widget;
	}; InputModeGame_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InputModeUI
inline void UBP-HUDInteractionComponentBase_C::InputModeUI(struct UUserWidget Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InputModeUI");

	struct InputModeUI_Params {
		struct UUserWidget Widget;
	}; InputModeUI_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InputToggleIngameHUD
inline void UBP-HUDInteractionComponentBase_C::InputToggleIngameHUD() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InputToggleIngameHUD");

	struct InputToggleIngameHUD_Params {
		
	}; InputToggleIngameHUD_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.ReceiveBeginPlay
inline void UBP-HUDInteractionComponentBase_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.ExecuteUbergraph_BP-HUDInteractionComponentBase
inline void UBP-HUDInteractionComponentBase_C::ExecuteUbergraph_BP-HUDInteractionComponentBase(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.ExecuteUbergraph_BP-HUDInteractionComponentBase");

	struct ExecuteUbergraph_BP-HUDInteractionComponentBase_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-HUDInteractionComponentBase_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

