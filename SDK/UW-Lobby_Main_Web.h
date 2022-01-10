// WidgetBlueprintGeneratedClass UW-Lobby_Main_Web.UW-Lobby_Main_Web_C
class UUW-Lobby_Main_Web_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown NewAnimation_2; // 0x250 (8)
	struct Unknown BackgroundBlur_1; // 0x258 (8)
	struct Unknown Blur; // 0x260 (8)
	struct Unknown CanvasPanel_1; // 0x268 (8)
	struct Unknown Focus; // 0x270 (8)
	struct Unknown FocusPanel; // 0x278 (8)
	struct Unknown Lobby; // 0x280 (8)
	struct Unknown UW-ArmoryWidget; // 0x288 (8)
	struct Unknown UW-CustomizedCharacter; // 0x290 (8)
	struct Unknown UW-Exit_Popup; // 0x298 (8)
	struct Unknown UW-Lobby_ArmoryMain; // 0x2A0 (8)
	struct Unknown UW-ReplayListWidget; // 0x2A8 (8)
	struct Unknown UW-Volume; // 0x2B0 (8)
	struct Unknown NormalTextColor; // 0x2B8 (40)
	struct Unknown HoverTextColor; // 0x2E0 (40)
	struct Unknown LobbyWidgetRef; // 0x308 (8)
	struct Unknown NormalSelectedTextColor; // 0x310 (40)
	struct Unknown HoverSelectedTextColor; // 0x338 (40)
	struct Unknown NormalOptionButtonColor; // 0x360 (16)
	struct Unknown HoverOptionButtonColor; // 0x370 (16)
	struct Unknown MatchingPopupTimerHandle; // 0x380 (8)
	struct Unknown PopupKey; // 0x388 (24)
	char bExitPopupOpen : 0; // 0x3A0 (1)
	char bOptionPopupOpen : 0; // 0x3A1 (1)
	char BattleMode; // 0x3A2 (1)
	struct Unknown LobbyCoherentSprite; // 0x3A8 (8)
	struct Unknown SettingWidget; // 0x3B0 (8)
	struct Unknown LobbySound; // 0x3B8 (8)
	struct FString CurrentTab; // 0x3C0 (16)
	struct Unknown UW-Inventory_ItemSlotHover; // 0x3D0 (8)
	struct Unknown LobbyCoherent2DTexture; // 0x3D8 (8)

	void EndCraft(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.EndCraft(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void StartCraft(struct Unknown& CraftWeapon); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.StartCraft(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void GetHoverWidget(struct Unknown& UW-Inventory_ItemSlotHover); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.GetHoverWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B812B0>
	void CreateHoverWidget(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.CreateHoverWidget(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnChangedArmoryTab(struct FString TabName); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.OnChangedArmoryTab(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnChangedMainTab(struct FString TabName); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.OnChangedMainTab(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void UpdateMouseWheel(float Delta); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.UpdateMouseWheel(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void UpdateMouseY(float Delta); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.UpdateMouseY(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void UpdateMouseX(float Delta); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.UpdateMouseX(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void MatchFailedSound(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.MatchFailedSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void MatchStartSound(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.MatchStartSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowReplayList(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowReplayList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetArmoryInputBox(char Visible); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.SetArmoryInputBox(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void HideSelectGameMode(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.HideSelectGameMode(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowSelectGameMode(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowSelectGameMode(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void HideBlur(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.HideBlur(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowBlur(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowBlur(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void HideUI(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.HideUI(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowArmoryUI(struct FString ArmoryResultName); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowArmoryUI(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void CheckKeyUp(struct Unknown Input, char& bResult); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.CheckKeyUp(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void CheckKeyDown(struct Unknown Input, char& bResult); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.CheckKeyDown(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ProcessInput(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ProcessInput(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ClickExit(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ClickExit(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ClickOption(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ClickOption(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void StartGame(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.StartGame(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ResetMatchingPopup(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ResetMatchingPopup(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ResetStartButton(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ResetStartButton(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowMatchingStart(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowMatchingStart(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void HideMatchingResult(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.HideMatchingResult(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowMatchingResult(int32_t ErrorCode, struct FString ExtraDescription); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowMatchingResult(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetLobbyWidget(struct Unknown LobbyWidget); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.SetLobbyWidget(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void UIButtonClickSound(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.UIButtonClickSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void UIButtonHoverSound(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.UIButtonHoverSound(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	struct Unknown OnGenerateWidget_1(struct FString Item); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.OnGenerateWidget_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Construct(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__BTN-Title_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.BndEvt__BTN-Title_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__BTN-PUBLICMATCH_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.BndEvt__BTN-PUBLICMATCH_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__BTN-CUSTOMMATCH_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.BndEvt__BTN-CUSTOMMATCH_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void CoherentBind(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.CoherentBind(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnMatchingFailed(int32_t ErrorCode, struct FString ExtraDescription); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.OnMatchingFailed(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void PlayUIButtonClickSound(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.PlayUIButtonClickSound(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void PlayUIBtuttonOverSound(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.PlayUIBtuttonOverSound(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Exit(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.Exit(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Option(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.Option(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void FinishLoadEvent(struct FString Path, char isMainFrame); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.FinishLoadEvent(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void FinishLoad_tじ_1(struct FString Path, char isMainFrame); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.FinishLoad_tじ_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetReceiveInput(char ReceiveInput); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.SetReceiveInput(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Destruct(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_UW-Lobby_Main_Web(int32_t EntryPoint); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ExecuteUbergraph_UW-Lobby_Main_Web(Final|UbergraphFunction) // <Game_BE.exe+0x2B812B0>
};

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.EndCraft
inline void UUW-Lobby_Main_Web_C::EndCraft() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.EndCraft");

	struct EndCraft_Params {
		
	}; EndCraft_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.StartCraft
inline void UUW-Lobby_Main_Web_C::StartCraft(struct Unknown& CraftWeapon) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.StartCraft");

	struct StartCraft_Params {
		struct Unknown& CraftWeapon;
	}; StartCraft_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CraftWeapon = Params.CraftWeapon;

}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.GetHoverWidget
inline void UUW-Lobby_Main_Web_C::GetHoverWidget(struct Unknown& UW-Inventory_ItemSlotHover) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.GetHoverWidget");

	struct GetHoverWidget_Params {
		struct Unknown& UW-Inventory_ItemSlotHover;
	}; GetHoverWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	UW-Inventory_ItemSlotHover = Params.UW-Inventory_ItemSlotHover;

}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.CreateHoverWidget
inline void UUW-Lobby_Main_Web_C::CreateHoverWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.CreateHoverWidget");

	struct CreateHoverWidget_Params {
		
	}; CreateHoverWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.OnChangedArmoryTab
inline void UUW-Lobby_Main_Web_C::OnChangedArmoryTab(struct FString TabName) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.OnChangedArmoryTab");

	struct OnChangedArmoryTab_Params {
		struct FString TabName;
	}; OnChangedArmoryTab_Params Params;

	Params.TabName = TabName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.OnChangedMainTab
inline void UUW-Lobby_Main_Web_C::OnChangedMainTab(struct FString TabName) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.OnChangedMainTab");

	struct OnChangedMainTab_Params {
		struct FString TabName;
	}; OnChangedMainTab_Params Params;

	Params.TabName = TabName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.UpdateMouseWheel
inline void UUW-Lobby_Main_Web_C::UpdateMouseWheel(float Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.UpdateMouseWheel");

	struct UpdateMouseWheel_Params {
		float Delta;
	}; UpdateMouseWheel_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.UpdateMouseY
inline void UUW-Lobby_Main_Web_C::UpdateMouseY(float Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.UpdateMouseY");

	struct UpdateMouseY_Params {
		float Delta;
	}; UpdateMouseY_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.UpdateMouseX
inline void UUW-Lobby_Main_Web_C::UpdateMouseX(float Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.UpdateMouseX");

	struct UpdateMouseX_Params {
		float Delta;
	}; UpdateMouseX_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.MatchFailedSound
inline void UUW-Lobby_Main_Web_C::MatchFailedSound() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.MatchFailedSound");

	struct MatchFailedSound_Params {
		
	}; MatchFailedSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.MatchStartSound
inline void UUW-Lobby_Main_Web_C::MatchStartSound() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.MatchStartSound");

	struct MatchStartSound_Params {
		
	}; MatchStartSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowReplayList
inline void UUW-Lobby_Main_Web_C::ShowReplayList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowReplayList");

	struct ShowReplayList_Params {
		
	}; ShowReplayList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.SetArmoryInputBox
inline void UUW-Lobby_Main_Web_C::SetArmoryInputBox(char Visible) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.SetArmoryInputBox");

	struct SetArmoryInputBox_Params {
		char Visible;
	}; SetArmoryInputBox_Params Params;

	Params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.HideSelectGameMode
inline void UUW-Lobby_Main_Web_C::HideSelectGameMode() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.HideSelectGameMode");

	struct HideSelectGameMode_Params {
		
	}; HideSelectGameMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowSelectGameMode
inline void UUW-Lobby_Main_Web_C::ShowSelectGameMode() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowSelectGameMode");

	struct ShowSelectGameMode_Params {
		
	}; ShowSelectGameMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.HideBlur
inline void UUW-Lobby_Main_Web_C::HideBlur() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.HideBlur");

	struct HideBlur_Params {
		
	}; HideBlur_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowBlur
inline void UUW-Lobby_Main_Web_C::ShowBlur() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowBlur");

	struct ShowBlur_Params {
		
	}; ShowBlur_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.HideUI
inline void UUW-Lobby_Main_Web_C::HideUI() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.HideUI");

	struct HideUI_Params {
		
	}; HideUI_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowArmoryUI
inline void UUW-Lobby_Main_Web_C::ShowArmoryUI(struct FString ArmoryResultName) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowArmoryUI");

	struct ShowArmoryUI_Params {
		struct FString ArmoryResultName;
	}; ShowArmoryUI_Params Params;

	Params.ArmoryResultName = ArmoryResultName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.CheckKeyUp
inline void UUW-Lobby_Main_Web_C::CheckKeyUp(struct Unknown Input, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.CheckKeyUp");

	struct CheckKeyUp_Params {
		struct Unknown Input;
		char& bResult;
	}; CheckKeyUp_Params Params;

	Params.Input = Input;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.CheckKeyDown
inline void UUW-Lobby_Main_Web_C::CheckKeyDown(struct Unknown Input, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.CheckKeyDown");

	struct CheckKeyDown_Params {
		struct Unknown Input;
		char& bResult;
	}; CheckKeyDown_Params Params;

	Params.Input = Input;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ProcessInput
inline void UUW-Lobby_Main_Web_C::ProcessInput() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ProcessInput");

	struct ProcessInput_Params {
		
	}; ProcessInput_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ClickExit
inline void UUW-Lobby_Main_Web_C::ClickExit() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ClickExit");

	struct ClickExit_Params {
		
	}; ClickExit_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ClickOption
inline void UUW-Lobby_Main_Web_C::ClickOption() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ClickOption");

	struct ClickOption_Params {
		
	}; ClickOption_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.StartGame
inline void UUW-Lobby_Main_Web_C::StartGame() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.StartGame");

	struct StartGame_Params {
		
	}; StartGame_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ResetMatchingPopup
inline void UUW-Lobby_Main_Web_C::ResetMatchingPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ResetMatchingPopup");

	struct ResetMatchingPopup_Params {
		
	}; ResetMatchingPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ResetStartButton
inline void UUW-Lobby_Main_Web_C::ResetStartButton() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ResetStartButton");

	struct ResetStartButton_Params {
		
	}; ResetStartButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowMatchingStart
inline void UUW-Lobby_Main_Web_C::ShowMatchingStart() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowMatchingStart");

	struct ShowMatchingStart_Params {
		
	}; ShowMatchingStart_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.HideMatchingResult
inline void UUW-Lobby_Main_Web_C::HideMatchingResult() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.HideMatchingResult");

	struct HideMatchingResult_Params {
		
	}; HideMatchingResult_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowMatchingResult
inline void UUW-Lobby_Main_Web_C::ShowMatchingResult(int32_t ErrorCode, struct FString ExtraDescription) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowMatchingResult");

	struct ShowMatchingResult_Params {
		int32_t ErrorCode;
		struct FString ExtraDescription;
	}; ShowMatchingResult_Params Params;

	Params.ErrorCode = ErrorCode;
	Params.ExtraDescription = ExtraDescription;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.SetLobbyWidget
inline void UUW-Lobby_Main_Web_C::SetLobbyWidget(struct Unknown LobbyWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.SetLobbyWidget");

	struct SetLobbyWidget_Params {
		struct Unknown LobbyWidget;
	}; SetLobbyWidget_Params Params;

	Params.LobbyWidget = LobbyWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.UIButtonClickSound
inline void UUW-Lobby_Main_Web_C::UIButtonClickSound() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.UIButtonClickSound");

	struct UIButtonClickSound_Params {
		
	}; UIButtonClickSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.UIButtonHoverSound
inline void UUW-Lobby_Main_Web_C::UIButtonHoverSound() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.UIButtonHoverSound");

	struct UIButtonHoverSound_Params {
		
	}; UIButtonHoverSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.OnGenerateWidget_1
inline struct Unknown UUW-Lobby_Main_Web_C::OnGenerateWidget_1(struct FString Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.OnGenerateWidget_1");

	struct OnGenerateWidget_1_Params {
		struct FString Item;
		struct Unknown ReturnValue;

	}; OnGenerateWidget_1_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.Construct
inline void UUW-Lobby_Main_Web_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.BndEvt__BTN-Title_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-Lobby_Main_Web_C::BndEvt__BTN-Title_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.BndEvt__BTN-Title_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-Title_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-Title_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.BndEvt__BTN-PUBLICMATCH_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
inline void UUW-Lobby_Main_Web_C::BndEvt__BTN-PUBLICMATCH_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.BndEvt__BTN-PUBLICMATCH_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-PUBLICMATCH_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-PUBLICMATCH_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.BndEvt__BTN-CUSTOMMATCH_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature
inline void UUW-Lobby_Main_Web_C::BndEvt__BTN-CUSTOMMATCH_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.BndEvt__BTN-CUSTOMMATCH_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BTN-CUSTOMMATCH_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BTN-CUSTOMMATCH_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.CoherentBind
inline void UUW-Lobby_Main_Web_C::CoherentBind() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.CoherentBind");

	struct CoherentBind_Params {
		
	}; CoherentBind_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.OnMatchingFailed
inline void UUW-Lobby_Main_Web_C::OnMatchingFailed(int32_t ErrorCode, struct FString ExtraDescription) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.OnMatchingFailed");

	struct OnMatchingFailed_Params {
		int32_t ErrorCode;
		struct FString ExtraDescription;
	}; OnMatchingFailed_Params Params;

	Params.ErrorCode = ErrorCode;
	Params.ExtraDescription = ExtraDescription;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.PlayUIButtonClickSound
inline void UUW-Lobby_Main_Web_C::PlayUIButtonClickSound() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.PlayUIButtonClickSound");

	struct PlayUIButtonClickSound_Params {
		
	}; PlayUIButtonClickSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.PlayUIBtuttonOverSound
inline void UUW-Lobby_Main_Web_C::PlayUIBtuttonOverSound() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.PlayUIBtuttonOverSound");

	struct PlayUIBtuttonOverSound_Params {
		
	}; PlayUIBtuttonOverSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.Exit
inline void UUW-Lobby_Main_Web_C::Exit() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.Exit");

	struct Exit_Params {
		
	}; Exit_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.Option
inline void UUW-Lobby_Main_Web_C::Option() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.Option");

	struct Option_Params {
		
	}; Option_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.FinishLoadEvent
inline void UUW-Lobby_Main_Web_C::FinishLoadEvent(struct FString Path, char isMainFrame) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.FinishLoadEvent");

	struct FinishLoadEvent_Params {
		struct FString Path;
		char isMainFrame;
	}; FinishLoadEvent_Params Params;

	Params.Path = Path;
	Params.isMainFrame = isMainFrame;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.FinishLoad_tじ_1
inline void UUW-Lobby_Main_Web_C::FinishLoad_tじ_1(struct FString Path, char isMainFrame) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.FinishLoad_tじ_1");

	struct FinishLoad_tじ_1_Params {
		struct FString Path;
		char isMainFrame;
	}; FinishLoad_tじ_1_Params Params;

	Params.Path = Path;
	Params.isMainFrame = isMainFrame;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.SetReceiveInput
inline void UUW-Lobby_Main_Web_C::SetReceiveInput(char ReceiveInput) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.SetReceiveInput");

	struct SetReceiveInput_Params {
		char ReceiveInput;
	}; SetReceiveInput_Params Params;

	Params.ReceiveInput = ReceiveInput;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.Destruct
inline void UUW-Lobby_Main_Web_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ExecuteUbergraph_UW-Lobby_Main_Web
inline void UUW-Lobby_Main_Web_C::ExecuteUbergraph_UW-Lobby_Main_Web(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ExecuteUbergraph_UW-Lobby_Main_Web");

	struct ExecuteUbergraph_UW-Lobby_Main_Web_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Lobby_Main_Web_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

