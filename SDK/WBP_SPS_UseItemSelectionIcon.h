// WidgetBlueprintGeneratedClass WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C
class UWBP_SPS_UseItemSelectionIcon_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown IconImage; // 0x250 (8)
	struct FMulticastInlineDelegate Hovered; // 0x258 (16)
	struct FMulticastInlineDelegate Unhovered; // 0x268 (16)
	struct FMulticastInlineDelegate Pressed; // 0x278 (16)
	struct Unknown SmartPingComponent; // 0x288 (8)
	int32_t Index; // 0x290 (4)
	struct Unknown TintColorToUse; // 0x294 (16)
	char Found Setting : 0; // 0x2A4 (1)
	struct Unknown Settings; // 0x2A8 (184)
	struct FName TableID; // 0x360 (8)
	struct Unknown Image; // 0x368 (40)

	void OnLoaded_6834BC7D48AF986BC5969685C4D6D2B3(struct Unknown Loaded); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.OnLoaded_6834BC7D48AF986BC5969685C4D6D2B3(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Unselected(); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Unselected(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Construct(); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Selected(); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Selected(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Init(struct Unknown Data, struct FName ItemKey, char IsHaveItem); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Init(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_WBP_SPS_UseItemSelectionIcon(int32_t EntryPoint); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.ExecuteUbergraph_WBP_SPS_UseItemSelectionIcon(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Pressed__DelegateSignature(); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Pressed__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Unhovered__DelegateSignature(int32_t Index); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Unhovered__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Hovered__DelegateSignature(int32_t Index); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Hovered__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.OnLoaded_6834BC7D48AF986BC5969685C4D6D2B3
inline void UWBP_SPS_UseItemSelectionIcon_C::OnLoaded_6834BC7D48AF986BC5969685C4D6D2B3(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.OnLoaded_6834BC7D48AF986BC5969685C4D6D2B3");

	struct OnLoaded_6834BC7D48AF986BC5969685C4D6D2B3_Params {
		struct Unknown Loaded;
	}; OnLoaded_6834BC7D48AF986BC5969685C4D6D2B3_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Unselected
inline void UWBP_SPS_UseItemSelectionIcon_C::Unselected() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Unselected");

	struct Unselected_Params {
		
	}; Unselected_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Construct
inline void UWBP_SPS_UseItemSelectionIcon_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Selected
inline void UWBP_SPS_UseItemSelectionIcon_C::Selected() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Selected");

	struct Selected_Params {
		
	}; Selected_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Init
inline void UWBP_SPS_UseItemSelectionIcon_C::Init(struct Unknown Data, struct FName ItemKey, char IsHaveItem) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Init");

	struct Init_Params {
		struct Unknown Data;
		struct FName ItemKey;
		char IsHaveItem;
	}; Init_Params Params;

	Params.Data = Data;
	Params.ItemKey = ItemKey;
	Params.IsHaveItem = IsHaveItem;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.ExecuteUbergraph_WBP_SPS_UseItemSelectionIcon
inline void UWBP_SPS_UseItemSelectionIcon_C::ExecuteUbergraph_WBP_SPS_UseItemSelectionIcon(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.ExecuteUbergraph_WBP_SPS_UseItemSelectionIcon");

	struct ExecuteUbergraph_WBP_SPS_UseItemSelectionIcon_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_WBP_SPS_UseItemSelectionIcon_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Pressed__DelegateSignature
inline void UWBP_SPS_UseItemSelectionIcon_C::Pressed__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Pressed__DelegateSignature");

	struct Pressed__DelegateSignature_Params {
		
	}; Pressed__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Unhovered__DelegateSignature
inline void UWBP_SPS_UseItemSelectionIcon_C::Unhovered__DelegateSignature(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Unhovered__DelegateSignature");

	struct Unhovered__DelegateSignature_Params {
		int32_t Index;
	}; Unhovered__DelegateSignature_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Hovered__DelegateSignature
inline void UWBP_SPS_UseItemSelectionIcon_C::Hovered__DelegateSignature(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Hovered__DelegateSignature");

	struct Hovered__DelegateSignature_Params {
		int32_t Index;
	}; Hovered__DelegateSignature_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

