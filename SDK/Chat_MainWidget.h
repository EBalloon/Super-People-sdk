// WidgetBlueprintGeneratedClass Chat_MainWidget.Chat_MainWidget_C
class UChat_MainWidget_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UEditableTextBox Chat Input; // 0x250 (8)
	struct UWidgetSwitcher Chat Switcher; // 0x258 (8)
	struct UScrollBox Tab Scrollbox; // 0x260 (8)
	struct UCanvasPanel Whole Widget Container; // 0x268 (8)
	struct AChat_System_C Chat System; // 0x270 (8)
	struct UChat_DialogBox_C CurrentDialogBox; // 0x278 (8)
	float Chat Inactivity Hide Delay; // 0x280 (4)
	char Faded? : 0; // 0x284 (1)
	char Was Previously Faded? : 0; // 0x285 (1)
	char Use Autohide? : 0; // 0x286 (1)
	int32_t Message Character Limit; // 0x288 (4)
	struct FString Text Input - Inactive Hint Text; // 0x290 (16)
	struct FString Text Input - Active Hint Text; // 0x2A0 (16)
	int32_t # Messages to Keep; // 0x2B0 (4)
	int32_t Clear Messages at # Messages; // 0x2B4 (4)
	char Show Mouse on Enter? : 0; // 0x2B8 (1)

	struct FText Get Chat Input Hint Text(); // Function Chat_MainWidget.Chat_MainWidget_C.Get Chat Input Hint Text(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PushItem(struct FString UserName, struct FString Text, struct FString Group); // Function Chat_MainWidget.Chat_MainWidget_C.PushItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Construct(); // Function Chat_MainWidget.Chat_MainWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__Chat Input_K2Node_ComponentBoundEvent_790_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod); // Function Chat_MainWidget.Chat_MainWidget_C.BndEvt__Chat Input_K2Node_ComponentBoundEvent_790_OnEditableTextBoxCommittedEvent__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Reset Inactivity Timer(); // Function Chat_MainWidget.Chat_MainWidget_C.Reset Inactivity Timer(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Set Keyboard Focus(); // Function Chat_MainWidget.Chat_MainWidget_C.Set Keyboard Focus(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function Chat_MainWidget.Chat_MainWidget_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function Chat_MainWidget.Chat_MainWidget_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BndEvt__Chat Input_K2Node_ComponentBoundEvent_1051_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function Chat_MainWidget.Chat_MainWidget_C.BndEvt__Chat Input_K2Node_ComponentBoundEvent_1051_OnEditableTextBoxChangedEvent__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Widget Mouse Enter(); // Function Chat_MainWidget.Chat_MainWidget_C.Widget Mouse Enter(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Widget Mouse Leave(); // Function Chat_MainWidget.Chat_MainWidget_C.Widget Mouse Leave(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Chat_MainWidget.Chat_MainWidget_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_Chat_MainWidget(int32_t EntryPoint); // Function Chat_MainWidget.Chat_MainWidget_C.ExecuteUbergraph_Chat_MainWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function Chat_MainWidget.Chat_MainWidget_C.Get Chat Input Hint Text
inline struct FText UChat_MainWidget_C::Get Chat Input Hint Text() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.Get Chat Input Hint Text");

	struct Get Chat Input Hint Text_Params {
		
		struct FText ReturnValue;

	}; Get Chat Input Hint Text_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Chat_MainWidget.Chat_MainWidget_C.PushItem
inline void UChat_MainWidget_C::PushItem(struct FString UserName, struct FString Text, struct FString Group) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.PushItem");

	struct PushItem_Params {
		struct FString UserName;
		struct FString Text;
		struct FString Group;
	}; PushItem_Params Params;

	Params.UserName = UserName;
	Params.Text = Text;
	Params.Group = Group;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_MainWidget.Chat_MainWidget_C.Construct
inline void UChat_MainWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_MainWidget.Chat_MainWidget_C.BndEvt__Chat Input_K2Node_ComponentBoundEvent_790_OnEditableTextBoxCommittedEvent__DelegateSignature
inline void UChat_MainWidget_C::BndEvt__Chat Input_K2Node_ComponentBoundEvent_790_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.BndEvt__Chat Input_K2Node_ComponentBoundEvent_790_OnEditableTextBoxCommittedEvent__DelegateSignature");

	struct BndEvt__Chat Input_K2Node_ComponentBoundEvent_790_OnEditableTextBoxCommittedEvent__DelegateSignature_Params {
		struct FText& Text;
		char CommitMethod;
	}; BndEvt__Chat Input_K2Node_ComponentBoundEvent_790_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function Chat_MainWidget.Chat_MainWidget_C.Reset Inactivity Timer
inline void UChat_MainWidget_C::Reset Inactivity Timer() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.Reset Inactivity Timer");

	struct Reset Inactivity Timer_Params {
		
	}; Reset Inactivity Timer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_MainWidget.Chat_MainWidget_C.Set Keyboard Focus
inline void UChat_MainWidget_C::Set Keyboard Focus() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.Set Keyboard Focus");

	struct Set Keyboard Focus_Params {
		
	}; Set Keyboard Focus_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_MainWidget.Chat_MainWidget_C.OnMouseEnter
inline void UChat_MainWidget_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.OnMouseEnter");

	struct OnMouseEnter_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
	}; OnMouseEnter_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function Chat_MainWidget.Chat_MainWidget_C.OnMouseLeave
inline void UChat_MainWidget_C::OnMouseLeave(struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct FPointerEvent& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function Chat_MainWidget.Chat_MainWidget_C.BndEvt__Chat Input_K2Node_ComponentBoundEvent_1051_OnEditableTextBoxChangedEvent__DelegateSignature
inline void UChat_MainWidget_C::BndEvt__Chat Input_K2Node_ComponentBoundEvent_1051_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.BndEvt__Chat Input_K2Node_ComponentBoundEvent_1051_OnEditableTextBoxChangedEvent__DelegateSignature");

	struct BndEvt__Chat Input_K2Node_ComponentBoundEvent_1051_OnEditableTextBoxChangedEvent__DelegateSignature_Params {
		struct FText& Text;
	}; BndEvt__Chat Input_K2Node_ComponentBoundEvent_1051_OnEditableTextBoxChangedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function Chat_MainWidget.Chat_MainWidget_C.Widget Mouse Enter
inline void UChat_MainWidget_C::Widget Mouse Enter() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.Widget Mouse Enter");

	struct Widget Mouse Enter_Params {
		
	}; Widget Mouse Enter_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_MainWidget.Chat_MainWidget_C.Widget Mouse Leave
inline void UChat_MainWidget_C::Widget Mouse Leave() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.Widget Mouse Leave");

	struct Widget Mouse Leave_Params {
		
	}; Widget Mouse Leave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_MainWidget.Chat_MainWidget_C.Tick
inline void UChat_MainWidget_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.Tick");

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

// Function Chat_MainWidget.Chat_MainWidget_C.ExecuteUbergraph_Chat_MainWidget
inline void UChat_MainWidget_C::ExecuteUbergraph_Chat_MainWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.ExecuteUbergraph_Chat_MainWidget");

	struct ExecuteUbergraph_Chat_MainWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_Chat_MainWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

