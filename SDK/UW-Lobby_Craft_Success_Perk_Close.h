// WidgetBlueprintGeneratedClass UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C
class UUW-Lobby_Craft_Success_Perk_Close_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UButton Button_96; // 0x250 (8)
	struct UImage Image; // 0x258 (8)
	struct UImage Image_193; // 0x260 (8)
	struct UImage Image_395; // 0x268 (8)
	struct UImage Image_Arrow_Guide; // 0x270 (8)
	struct UImage Img_hover; // 0x278 (8)
	struct UImage Img_Pressed; // 0x280 (8)
	struct UUW-Lobby_Craft_Success_Perk_Slot_C UW-Lobby_Craft_Success_Perk_Slot; // 0x288 (8)
	struct UWidgetSwitcher WidgetSwitcher_263; // 0x290 (8)
	struct FMulticastInlineDelegate EventDispatcher_EndOpen; // 0x298 (16)
	struct FItemOption ItemOption; // 0x2A8 (184)
	char IsOpened : 0; // 0x360 (1)
	float CurrentHoverOpacity; // 0x364 (4)
	struct UMaterialInstanceDynamic PressedMaterialInstance; // 0x368 (8)
	float CurrentPressedAnim; // 0x370 (4)
	struct FMulticastInlineDelegate EventDispatcher_StartOpen; // 0x378 (16)

	void SetItemOption(struct FItemOption& ItemOption); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.SetItemOption(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Button_95_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.BndEvt__Button_95_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetIsOpened(); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.SetIsOpened(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void PlayPressed(); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.PlayPressed(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void StopPressed(); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.StopPressed(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OpenPerk(); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.OpenPerk(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Button_95_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.BndEvt__Button_95_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ReversePerk(); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.ReversePerk(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Close(int32_t EntryPoint); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Close(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void EventDispatcher_StartOpen__DelegateSignature(); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.EventDispatcher_StartOpen__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void EventDispatcher_EndOpen__DelegateSignature(struct FItemOption ItemOption); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.EventDispatcher_EndOpen__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.SetItemOption
inline void UUW-Lobby_Craft_Success_Perk_Close_C::SetItemOption(struct FItemOption& ItemOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.SetItemOption");

	struct SetItemOption_Params {
		struct FItemOption& ItemOption;
	}; SetItemOption_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemOption = Params.ItemOption;

}

// Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.Tick
inline void UUW-Lobby_Craft_Success_Perk_Close_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.Tick");

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

// Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.BndEvt__Button_95_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-Lobby_Craft_Success_Perk_Close_C::BndEvt__Button_95_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.BndEvt__Button_95_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_95_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_95_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.SetIsOpened
inline void UUW-Lobby_Craft_Success_Perk_Close_C::SetIsOpened() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.SetIsOpened");

	struct SetIsOpened_Params {
		
	}; SetIsOpened_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.PlayPressed
inline void UUW-Lobby_Craft_Success_Perk_Close_C::PlayPressed() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.PlayPressed");

	struct PlayPressed_Params {
		
	}; PlayPressed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.StopPressed
inline void UUW-Lobby_Craft_Success_Perk_Close_C::StopPressed() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.StopPressed");

	struct StopPressed_Params {
		
	}; StopPressed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.OpenPerk
inline void UUW-Lobby_Craft_Success_Perk_Close_C::OpenPerk() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.OpenPerk");

	struct OpenPerk_Params {
		
	}; OpenPerk_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.BndEvt__Button_95_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
inline void UUW-Lobby_Craft_Success_Perk_Close_C::BndEvt__Button_95_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.BndEvt__Button_95_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_95_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_95_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.ReversePerk
inline void UUW-Lobby_Craft_Success_Perk_Close_C::ReversePerk() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.ReversePerk");

	struct ReversePerk_Params {
		
	}; ReversePerk_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Close
inline void UUW-Lobby_Craft_Success_Perk_Close_C::ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Close(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Close");

	struct ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Close_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Close_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.EventDispatcher_StartOpen__DelegateSignature
inline void UUW-Lobby_Craft_Success_Perk_Close_C::EventDispatcher_StartOpen__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.EventDispatcher_StartOpen__DelegateSignature");

	struct EventDispatcher_StartOpen__DelegateSignature_Params {
		
	}; EventDispatcher_StartOpen__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.EventDispatcher_EndOpen__DelegateSignature
inline void UUW-Lobby_Craft_Success_Perk_Close_C::EventDispatcher_EndOpen__DelegateSignature(struct FItemOption ItemOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.EventDispatcher_EndOpen__DelegateSignature");

	struct EventDispatcher_EndOpen__DelegateSignature_Params {
		struct FItemOption ItemOption;
	}; EventDispatcher_EndOpen__DelegateSignature_Params Params;

	Params.ItemOption = ItemOption;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

