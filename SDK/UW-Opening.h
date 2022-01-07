// WidgetBlueprintGeneratedClass UW-Opening.UW-Opening_C
class UUW-Opening_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_Focus; // 0x250 (8)
	struct Unknown HorizontalBox_1; // 0x258 (8)
	struct Unknown Image_223; // 0x260 (8)
	struct Unknown Img_Movie; // 0x268 (8)
	struct Unknown MediaPlayer; // 0x270 (8)
	char bPopup : 0; // 0x278 (1)
	struct Unknown Media; // 0x280 (8)
	struct Unknown MediaSoundComp; // 0x288 (8)
	struct Unknown Game Settings; // 0x290 (8)
	float GammaIntensity; // 0x298 (4)
	struct Unknown SkipNoticeTimer; // 0x2A0 (8)
	struct Unknown MediaTexture; // 0x2A8 (8)
	struct FName OpeningFileName; // 0x2B0 (8)
	char End : 0; // 0x2B8 (1)
	char NextScene : 0; // 0x2B9 (1)

	void MoveNextScene(); // Function UW-Opening.UW-Opening_C.MoveNextScene(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	struct Unknown OnKeyDown(struct Unknown MyGeometry, struct Unknown InKeyEvent); // Function UW-Opening.UW-Opening_C.OnKeyDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Construct(); // Function UW-Opening.UW-Opening_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CustomEvent_1(); // Function UW-Opening.UW-Opening_C.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-Opening.UW-Opening_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void CustomEvent_2(); // Function UW-Opening.UW-Opening_C.CustomEvent_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__Button_Focus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Opening.UW-Opening_C.BndEvt__Button_Focus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-Opening(int32_t EntryPoint); // Function UW-Opening.UW-Opening_C.ExecuteUbergraph_UW-Opening(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-Opening.UW-Opening_C.MoveNextScene
inline void UUW-Opening_C::MoveNextScene() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Opening.UW-Opening_C.MoveNextScene");

	struct MoveNextScene_Params {
		
	}; MoveNextScene_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Opening.UW-Opening_C.OnKeyDown
inline struct Unknown UUW-Opening_C::OnKeyDown(struct Unknown MyGeometry, struct Unknown InKeyEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Opening.UW-Opening_C.OnKeyDown");

	struct OnKeyDown_Params {
		struct Unknown MyGeometry;
		struct Unknown InKeyEvent;
		struct Unknown ReturnValue;

	}; OnKeyDown_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Opening.UW-Opening_C.Construct
inline void UUW-Opening_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Opening.UW-Opening_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Opening.UW-Opening_C.CustomEvent_1
inline void UUW-Opening_C::CustomEvent_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Opening.UW-Opening_C.CustomEvent_1");

	struct CustomEvent_1_Params {
		
	}; CustomEvent_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Opening.UW-Opening_C.Tick
inline void UUW-Opening_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Opening.UW-Opening_C.Tick");

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

// Function UW-Opening.UW-Opening_C.CustomEvent_2
inline void UUW-Opening_C::CustomEvent_2() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Opening.UW-Opening_C.CustomEvent_2");

	struct CustomEvent_2_Params {
		
	}; CustomEvent_2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Opening.UW-Opening_C.BndEvt__Button_Focus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-Opening_C::BndEvt__Button_Focus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Opening.UW-Opening_C.BndEvt__Button_Focus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Focus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Focus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Opening.UW-Opening_C.ExecuteUbergraph_UW-Opening
inline void UUW-Opening_C::ExecuteUbergraph_UW-Opening(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Opening.UW-Opening_C.ExecuteUbergraph_UW-Opening");

	struct ExecuteUbergraph_UW-Opening_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Opening_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

