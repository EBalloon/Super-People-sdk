// WidgetBlueprintGeneratedClass UW-KeyControl.UW-KeyControl_C
class UUW-KeyControl_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct USizeBox Action; // 0x250 (8)
	struct UImage Image_14; // 0x258 (8)
	struct UImage LeftBtn; // 0x260 (8)
	struct UImage MidBtn; // 0x268 (8)
	struct UOverlay Mouse; // 0x270 (8)
	struct UImage RightBtn; // 0x278 (8)
	struct UScaleBox ScaleBox_2; // 0x280 (8)
	struct UImage SideDown; // 0x288 (8)
	struct UImage SideUp; // 0x290 (8)
	struct UTextBlock Text_Action; // 0x298 (8)
	struct UTextBlock Text_Action_UsingAlphaBg; // 0x2A0 (8)
	struct UImage Turn; // 0x2A8 (8)
	struct UImage WheelDown; // 0x2B0 (8)
	struct UImage WheelUp; // 0x2B8 (8)
	struct UWidgetSwitcher WidgetSwitcher_TextStyle; // 0x2C0 (8)
	struct UImage X; // 0x2C8 (8)
	struct UImage Y; // 0x2D0 (8)
	struct Object Temp; // 0x2D8 (8)
	char NewVar_1 : 0; // 0x2E0 (1)
	float DefalutScale; // 0x2E4 (4)

	void SetFontSize(int32_t Size); // Function UW-KeyControl.UW-KeyControl_C.SetFontSize(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void GetKeyNameFromKey(struct FKey Key, struct FString& Name); // Function UW-KeyControl.UW-KeyControl_C.GetKeyNameFromKey(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Set KeyInfo(struct FName KeyString, struct FKey InputKey); // Function UW-KeyControl.UW-KeyControl_C.Set KeyInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void MK3DSpectatorPawn_Turn(); // Function UW-KeyControl.UW-KeyControl_C.MK3DSpectatorPawn_Turn(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Set Using Alpha Bg(char Using); // Function UW-KeyControl.UW-KeyControl_C.Set Using Alpha Bg(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Construct(); // Function UW-KeyControl.UW-KeyControl_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-KeyControl(int32_t EntryPoint); // Function UW-KeyControl.UW-KeyControl_C.ExecuteUbergraph_UW-KeyControl(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
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
inline void UUW-KeyControl_C::GetKeyNameFromKey(struct FKey Key, struct FString& Name) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KeyControl.UW-KeyControl_C.GetKeyNameFromKey");

	struct GetKeyNameFromKey_Params {
		struct FKey Key;
		struct FString& Name;
	}; GetKeyNameFromKey_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Name = Params.Name;

}

// Function UW-KeyControl.UW-KeyControl_C.Set KeyInfo
inline void UUW-KeyControl_C::Set KeyInfo(struct FName KeyString, struct FKey InputKey) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-KeyControl.UW-KeyControl_C.Set KeyInfo");

	struct Set KeyInfo_Params {
		struct FName KeyString;
		struct FKey InputKey;
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

