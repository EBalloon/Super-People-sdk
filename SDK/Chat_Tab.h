// WidgetBlueprintGeneratedClass Chat_Tab.Chat_Tab_C
class UChat_Tab_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button; // 0x250 (8)
	struct Unknown Button Text Block; // 0x258 (8)
	struct FText Button Text; // 0x260 (24)
	struct Unknown Active Text Color; // 0x278 (16)
	struct Unknown Inactive Text Color; // 0x288 (16)
	char Tab Is Active? : 0; // 0x298 (1)
	struct Unknown Current Text Color; // 0x29C (16)
	struct Unknown Parent Widget; // 0x2B0 (8)
	struct Unknown Chat Switcher Widget; // 0x2B8 (8)
	struct Unknown Notification Text Color; // 0x2C0 (16)
	float Interp Time; // 0x2D0 (4)
	float Notification Color Hold Time; // 0x2D4 (4)
	float Notification Fade Time; // 0x2D8 (4)
	char Fading to Notification? : 0; // 0x2DC (1)

	struct Unknown OnFocusReceived(struct Unknown MyGeometry, struct Unknown InFocusEvent); // Function Chat_Tab.Chat_Tab_C.OnFocusReceived(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Construct(); // Function Chat_Tab.Chat_Tab_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void BndEvt__Button_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature(); // Function Chat_Tab.Chat_Tab_C.BndEvt__Button_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Set as Active Tab(); // Function Chat_Tab.Chat_Tab_C.Set as Active Tab(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Flash Notification Color(); // Function Chat_Tab.Chat_Tab_C.Flash Notification Color(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function Chat_Tab.Chat_Tab_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_Chat_Tab(int32_t EntryPoint); // Function Chat_Tab.Chat_Tab_C.ExecuteUbergraph_Chat_Tab(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function Chat_Tab.Chat_Tab_C.OnFocusReceived
inline struct Unknown UChat_Tab_C::OnFocusReceived(struct Unknown MyGeometry, struct Unknown InFocusEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_Tab.Chat_Tab_C.OnFocusReceived");

	struct OnFocusReceived_Params {
		struct Unknown MyGeometry;
		struct Unknown InFocusEvent;
		struct Unknown ReturnValue;

	}; OnFocusReceived_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Chat_Tab.Chat_Tab_C.Construct
inline void UChat_Tab_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_Tab.Chat_Tab_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_Tab.Chat_Tab_C.BndEvt__Button_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
inline void UChat_Tab_C::BndEvt__Button_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_Tab.Chat_Tab_C.BndEvt__Button_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_Tab.Chat_Tab_C.Set as Active Tab
inline void UChat_Tab_C::Set as Active Tab() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_Tab.Chat_Tab_C.Set as Active Tab");

	struct Set as Active Tab_Params {
		
	}; Set as Active Tab_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_Tab.Chat_Tab_C.Flash Notification Color
inline void UChat_Tab_C::Flash Notification Color() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_Tab.Chat_Tab_C.Flash Notification Color");

	struct Flash Notification Color_Params {
		
	}; Flash Notification Color_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_Tab.Chat_Tab_C.Tick
inline void UChat_Tab_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_Tab.Chat_Tab_C.Tick");

	struct Tick_Params {
		struct Unknown MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_Tab.Chat_Tab_C.ExecuteUbergraph_Chat_Tab
inline void UChat_Tab_C::ExecuteUbergraph_Chat_Tab(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_Tab.Chat_Tab_C.ExecuteUbergraph_Chat_Tab");

	struct ExecuteUbergraph_Chat_Tab_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_Chat_Tab_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

