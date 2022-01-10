// WidgetBlueprintGeneratedClass UW-KeyControl.UW-KeyControl_C
class UUW-KeyControl_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Action; // 0x250 (8)
	struct Unknown Image_14; // 0x258 (8)
	struct Unknown LeftBtn; // 0x260 (8)
	struct Unknown MidBtn; // 0x268 (8)
	struct Unknown Mouse; // 0x270 (8)
	struct Unknown RightBtn; // 0x278 (8)
	struct Unknown ScaleBox_2; // 0x280 (8)
	struct Unknown SideDown; // 0x288 (8)
	struct Unknown SideUp; // 0x290 (8)
	struct Unknown Text_Action; // 0x298 (8)
	struct Unknown Text_Action_UsingAlphaBg; // 0x2A0 (8)
	struct Unknown Turn; // 0x2A8 (8)
	struct Unknown WheelDown; // 0x2B0 (8)
	struct Unknown WheelUp; // 0x2B8 (8)
	struct Unknown WidgetSwitcher_TextStyle; // 0x2C0 (8)
	struct Unknown X; // 0x2C8 (8)
	struct Unknown Y; // 0x2D0 (8)
	struct Unknown Temp; // 0x2D8 (8)
	char NewVar_1 : 0; // 0x2E0 (1)
	float DefalutScale; // 0x2E4 (4)

	void SetFontSize(int32_t Size); // Function UW-KeyControl.UW-KeyControl_C.SetFontSize(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void GetKeyNameFromKey(struct Unknown Key, struct FString& Name); // Function UW-KeyControl.UW-KeyControl_C.GetKeyNameFromKey(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Set KeyInfo(struct FName KeyString, struct Unknown InputKey); // Function UW-KeyControl.UW-KeyControl_C.Set KeyInfo(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void MK3DSpectatorPawn_Turn(); // Function UW-KeyControl.UW-KeyControl_C.MK3DSpectatorPawn_Turn(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Set Using Alpha Bg(char Using); // Function UW-KeyControl.UW-KeyControl_C.Set Using Alpha Bg(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Construct(); // Function UW-KeyControl.UW-KeyControl_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_UW-KeyControl(int32_t EntryPoint); // Function UW-KeyControl.UW-KeyControl_C.ExecuteUbergraph_UW-KeyControl(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function UW-KeyControl.UW-KeyControl_C.SetFontSize
inline void UUW-KeyControl_C::SetFontSize(int32_t Size) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KeyControl.UW-KeyControl_C.SetFontSize");

	struct SetFontSize_Params {
		int32_t Size;
	}; SetFontSize_Params Params;

	Params.Size = Size;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-KeyControl.UW-KeyControl_C.GetKeyNameFromKey
inline void UUW-KeyControl_C::GetKeyNameFromKey(struct Unknown Key, struct FString& Name) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KeyControl.UW-KeyControl_C.GetKeyNameFromKey");

	struct GetKeyNameFromKey_Params {
		struct Unknown Key;
		struct FString& Name;
	}; GetKeyNameFromKey_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Name = Params.Name;

}

// Function UW-KeyControl.UW-KeyControl_C.Set KeyInfo
inline void UUW-KeyControl_C::Set KeyInfo(struct FName KeyString, struct Unknown InputKey) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KeyControl.UW-KeyControl_C.Set KeyInfo");

	struct Set KeyInfo_Params {
		struct FName KeyString;
		struct Unknown InputKey;
	}; Set KeyInfo_Params Params;

	Params.KeyString = KeyString;
	Params.InputKey = InputKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-KeyControl.UW-KeyControl_C.MK3DSpectatorPawn_Turn
inline void UUW-KeyControl_C::MK3DSpectatorPawn_Turn() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KeyControl.UW-KeyControl_C.MK3DSpectatorPawn_Turn");

	struct MK3DSpectatorPawn_Turn_Params {
		
	}; MK3DSpectatorPawn_Turn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-KeyControl.UW-KeyControl_C.Set Using Alpha Bg
inline void UUW-KeyControl_C::Set Using Alpha Bg(char Using) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KeyControl.UW-KeyControl_C.Set Using Alpha Bg");

	struct Set Using Alpha Bg_Params {
		char Using;
	}; Set Using Alpha Bg_Params Params;

	Params.Using = Using;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-KeyControl.UW-KeyControl_C.Construct
inline void UUW-KeyControl_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KeyControl.UW-KeyControl_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-KeyControl.UW-KeyControl_C.ExecuteUbergraph_UW-KeyControl
inline void UUW-KeyControl_C::ExecuteUbergraph_UW-KeyControl(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KeyControl.UW-KeyControl_C.ExecuteUbergraph_UW-KeyControl");

	struct ExecuteUbergraph_UW-KeyControl_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-KeyControl_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

