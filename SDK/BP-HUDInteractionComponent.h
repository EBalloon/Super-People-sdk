// BlueprintGeneratedClass BP-HUDInteractionComponent.BP-HUDInteractionComponent_C
class UBP-HUDInteractionComponent_C : public UBP-HUDInteractionComponentBase_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140 (8)
	char bHasJustClosed_1 : 0; // 0x148 (1)
	float defaultContrast_1; // 0x14C (4)
	float defaultMaxBrightness_1; // 0x150 (4)
	float defaultMinBrightness_1; // 0x154 (4)
	float MinBrightness_1; // 0x158 (4)
	float MaxBrightness_1; // 0x15C (4)
	float Contrast_1; // 0x160 (4)
	char bUsePostProcessVolumeOption_1 : 0; // 0x164 (1)
	float ColorGradingGlobalGamma_1; // 0x168 (4)
	float FilmToeIntensity_1; // 0x16C (4)
	char IsInWidget_1 : 0; // 0x170 (1)
	char bInputModeUI_1 : 0; // 0x171 (1)
	struct TArray<struct FName> InputActionsToBlock_1; // 0x178 (16)

	void CheckAnyAction(char& AnyAction); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.CheckAnyAction(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void CheckAnyCloseUI(char& AnyClosed); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.CheckAnyCloseUI(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	struct UUserWidget GetSightInfoWidget(); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetSightInfoWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void GetReplayWidget(char WantsToCreateIfNull, struct UUW-ReplayMainWidget_C& Widget); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetReplayWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void GetSpectatorWidget(char WantsToCreateIfNull, struct UUserWidget& Widget); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetSpectatorWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void GetInventoryWidget(char WantsToCreateIfNull, struct UUserWidget& Widget); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetInventoryWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void GetPlayerSpectatorHUD(struct ABravoHotelPlayerHUD& RefSpectatorHUD); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetPlayerSpectatorHUD(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void IsReplay(char& IsReplay); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.IsReplay(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void IsOpenSystemPopup(char& bResult); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.IsOpenSystemPopup(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void GetPlayerMainWidget(char WantsToCreateIfNull, struct UBravoHotelMainWidget& Widget); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetPlayerMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void IsMatchEnd(char& State); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.IsMatchEnd(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void InputMiniMap(); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.InputMiniMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void InputWorldMap(); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.InputWorldMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void InputToggleIngameHUD(); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.InputToggleIngameHUD(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_BP-HUDInteractionComponent(int32_t EntryPoint); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.ExecuteUbergraph_BP-HUDInteractionComponent(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.CheckAnyAction
inline void UBP-HUDInteractionComponent_C::CheckAnyAction(char& AnyAction) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.CheckAnyAction");

	struct CheckAnyAction_Params {
		char& AnyAction;
	}; CheckAnyAction_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnyAction = Params.AnyAction;

}

// Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.CheckAnyCloseUI
inline void UBP-HUDInteractionComponent_C::CheckAnyCloseUI(char& AnyClosed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.CheckAnyCloseUI");

	struct CheckAnyCloseUI_Params {
		char& AnyClosed;
	}; CheckAnyCloseUI_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnyClosed = Params.AnyClosed;

}

// Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetSightInfoWidget
inline struct UUserWidget UBP-HUDInteractionComponent_C::GetSightInfoWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetSightInfoWidget");

	struct GetSightInfoWidget_Params {
		
		struct UUserWidget ReturnValue;

	}; GetSightInfoWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetReplayWidget
inline void UBP-HUDInteractionComponent_C::GetReplayWidget(char WantsToCreateIfNull, struct UUW-ReplayMainWidget_C& Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetReplayWidget");

	struct GetReplayWidget_Params {
		char WantsToCreateIfNull;
		struct UUW-ReplayMainWidget_C& Widget;
	}; GetReplayWidget_Params Params;

	Params.WantsToCreateIfNull = WantsToCreateIfNull;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Widget = Params.Widget;

}

// Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetSpectatorWidget
inline void UBP-HUDInteractionComponent_C::GetSpectatorWidget(char WantsToCreateIfNull, struct UUserWidget& Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetSpectatorWidget");

	struct GetSpectatorWidget_Params {
		char WantsToCreateIfNull;
		struct UUserWidget& Widget;
	}; GetSpectatorWidget_Params Params;

	Params.WantsToCreateIfNull = WantsToCreateIfNull;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Widget = Params.Widget;

}

// Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetInventoryWidget
inline void UBP-HUDInteractionComponent_C::GetInventoryWidget(char WantsToCreateIfNull, struct UUserWidget& Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetInventoryWidget");

	struct GetInventoryWidget_Params {
		char WantsToCreateIfNull;
		struct UUserWidget& Widget;
	}; GetInventoryWidget_Params Params;

	Params.WantsToCreateIfNull = WantsToCreateIfNull;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Widget = Params.Widget;

}

// Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetPlayerSpectatorHUD
inline void UBP-HUDInteractionComponent_C::GetPlayerSpectatorHUD(struct ABravoHotelPlayerHUD& RefSpectatorHUD) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetPlayerSpectatorHUD");

	struct GetPlayerSpectatorHUD_Params {
		struct ABravoHotelPlayerHUD& RefSpectatorHUD;
	}; GetPlayerSpectatorHUD_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	RefSpectatorHUD = Params.RefSpectatorHUD;

}

// Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.IsReplay
inline void UBP-HUDInteractionComponent_C::IsReplay(char& IsReplay) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.IsReplay");

	struct IsReplay_Params {
		char& IsReplay;
	}; IsReplay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsReplay = Params.IsReplay;

}

// Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.IsOpenSystemPopup
inline void UBP-HUDInteractionComponent_C::IsOpenSystemPopup(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.IsOpenSystemPopup");

	struct IsOpenSystemPopup_Params {
		char& bResult;
	}; IsOpenSystemPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetPlayerMainWidget
inline void UBP-HUDInteractionComponent_C::GetPlayerMainWidget(char WantsToCreateIfNull, struct UBravoHotelMainWidget& Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetPlayerMainWidget");

	struct GetPlayerMainWidget_Params {
		char WantsToCreateIfNull;
		struct UBravoHotelMainWidget& Widget;
	}; GetPlayerMainWidget_Params Params;

	Params.WantsToCreateIfNull = WantsToCreateIfNull;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Widget = Params.Widget;

}

// Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.IsMatchEnd
inline void UBP-HUDInteractionComponent_C::IsMatchEnd(char& State) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.IsMatchEnd");

	struct IsMatchEnd_Params {
		char& State;
	}; IsMatchEnd_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	State = Params.State;

}

// Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.InputMiniMap
inline void UBP-HUDInteractionComponent_C::InputMiniMap() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.InputMiniMap");

	struct InputMiniMap_Params {
		
	}; InputMiniMap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.InputWorldMap
inline void UBP-HUDInteractionComponent_C::InputWorldMap() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.InputWorldMap");

	struct InputWorldMap_Params {
		
	}; InputWorldMap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.InputToggleIngameHUD
inline void UBP-HUDInteractionComponent_C::InputToggleIngameHUD() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.InputToggleIngameHUD");

	struct InputToggleIngameHUD_Params {
		
	}; InputToggleIngameHUD_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.ExecuteUbergraph_BP-HUDInteractionComponent
inline void UBP-HUDInteractionComponent_C::ExecuteUbergraph_BP-HUDInteractionComponent(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.ExecuteUbergraph_BP-HUDInteractionComponent");

	struct ExecuteUbergraph_BP-HUDInteractionComponent_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-HUDInteractionComponent_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

