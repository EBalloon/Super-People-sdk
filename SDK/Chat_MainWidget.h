// WidgetBlueprintGeneratedClass Chat_MainWidget.Chat_MainWidget_C
class UChat_MainWidget_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Chat; // 0x250 (8)
	struct Unknown Chat; // 0x258 (8)
	struct Unknown Tab; // 0x260 (8)
	struct Unknown Whole; // 0x268 (8)
	struct Unknown Chat; // 0x270 (8)
	struct Unknown CurrentDialogBox; // 0x278 (8)
	float Chat; // 0x280 (4)
	char Faded : 0; // 0x284 (1)
	char Was : 0; // 0x285 (1)
	char Use : 0; // 0x286 (1)
	int32_t Message; // 0x288 (4)
	struct FString Text; // 0x290 (16)
	struct FString Text; // 0x2A0 (16)
	int32_t ; // 0x2B0 (4)
	int32_t Clear; // 0x2B4 (4)
	char Show : 0; // 0x2B8 (1)

	struct FText Get(); // Function Chat_MainWidget.Chat_MainWidget_C.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PushItem(struct FString UserName, struct FString Text, struct FString Group); // Function Chat_MainWidget.Chat_MainWidget_C.PushItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function Chat_MainWidget.Chat_MainWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Chat(struct FText& Text, char CommitMethod); // Function Chat_MainWidget.Chat_MainWidget_C.BndEvt__Chat(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Reset(); // Function Chat_MainWidget.Chat_MainWidget_C.Reset(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(); // Function Chat_MainWidget.Chat_MainWidget_C.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function Chat_MainWidget.Chat_MainWidget_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function Chat_MainWidget.Chat_MainWidget_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Chat(struct FText& Text); // Function Chat_MainWidget.Chat_MainWidget_C.BndEvt__Chat(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Widget(); // Function Chat_MainWidget.Chat_MainWidget_C.Widget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Widget(); // Function Chat_MainWidget.Chat_MainWidget_C.Widget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function Chat_MainWidget.Chat_MainWidget_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_Chat_MainWidg(int32_t EntryPoint); // Function Chat_MainWidget.Chat_MainWidget_C.ExecuteUbergraph_Chat_MainWidg(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// Function Chat_MainWidget.Chat_MainWidget_C.Get
inline struct FText UChat_MainWidget_C::Get() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.Get");

	struct Get_Params {
		
		struct FText ReturnValue;

	}; Get_Params Params;


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

// Function Chat_MainWidget.Chat_MainWidget_C.BndEvt__Chat
inline void UChat_MainWidget_C::BndEvt__Chat(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.BndEvt__Chat");

	struct BndEvt__Chat_Params {
		struct FText& Text;
		char CommitMethod;
	}; BndEvt__Chat_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function Chat_MainWidget.Chat_MainWidget_C.Reset
inline void UChat_MainWidget_C::Reset() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.Reset");

	struct Reset_Params {
		
	}; Reset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_MainWidget.Chat_MainWidget_C.Set
inline void UChat_MainWidget_C::Set() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.Set");

	struct Set_Params {
		
	}; Set_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_MainWidget.Chat_MainWidget_C.OnMouseEnter
inline void UChat_MainWidget_C::OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.OnMouseEnter");

	struct OnMouseEnter_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
	}; OnMouseEnter_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function Chat_MainWidget.Chat_MainWidget_C.OnMouseLeave
inline void UChat_MainWidget_C::OnMouseLeave(struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct Unknown& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function Chat_MainWidget.Chat_MainWidget_C.BndEvt__Chat
inline void UChat_MainWidget_C::BndEvt__Chat(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.BndEvt__Chat");

	struct BndEvt__Chat_Params {
		struct FText& Text;
	}; BndEvt__Chat_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function Chat_MainWidget.Chat_MainWidget_C.Widget
inline void UChat_MainWidget_C::Widget() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.Widget");

	struct Widget_Params {
		
	}; Widget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_MainWidget.Chat_MainWidget_C.Widget
inline void UChat_MainWidget_C::Widget() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.Widget");

	struct Widget_Params {
		
	}; Widget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_MainWidget.Chat_MainWidget_C.Tick
inline void UChat_MainWidget_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.Tick");

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

// Function Chat_MainWidget.Chat_MainWidget_C.ExecuteUbergraph_Chat_MainWidg
inline void UChat_MainWidget_C::ExecuteUbergraph_Chat_MainWidg(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_MainWidget.Chat_MainWidget_C.ExecuteUbergraph_Chat_MainWidg");

	struct ExecuteUbergraph_Chat_MainWidg_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_Chat_MainWidg_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

