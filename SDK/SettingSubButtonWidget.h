// WidgetBlueprintGeneratedClass SettingSubButtonWidget.SettingSubButtonWidget_C
class USettingSubButtonWidget_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Border; // 0x250 (8)
	struct Unknown Button_222; // 0x258 (8)
	struct Unknown Image_192; // 0x260 (8)
	struct Unknown Title_Text; // 0x268 (8)
	int32_t Index; // 0x270 (4)
	struct Unknown DeActive; // 0x274 (16)
	struct Unknown Active; // 0x284 (16)
	struct FMulticastInlineDelegate ClickEventDispatcher; // 0x298 (16)
	struct FText Title; // 0x2A8 (24)
	enum class Unknow Type; // 0x2C0 (1)
	char IsActive : 0; // 0x2C1 (1)
	struct Unknown Over; // 0x2C4 (16)

	void Click Event(int32_t Index, enum class Unknow Type); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.Click Event(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Construct(); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__Button_221_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__Button_221_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void BndEvt__Button_221_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void UpdateText(); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.UpdateText(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_SettingSubButtonWidget(int32_t EntryPoint); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.ExecuteUbergraph_SettingSubButtonWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ClickEventDispatcher__DelegateSignature(int32_t Index, enum class Unknow Type); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.ClickEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function SettingSubButtonWidget.SettingSubButtonWidget_C.Click Event
inline void USettingSubButtonWidget_C::Click Event(int32_t Index, enum class Unknow Type) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingSubButtonWidget.SettingSubButtonWidget_C.Click Event");

	struct Click Event_Params {
		int32_t Index;
		enum class Unknow Type;
	}; Click Event_Params Params;

	Params.Index = Index;
	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingSubButtonWidget.SettingSubButtonWidget_C.Construct
inline void USettingSubButtonWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function SettingSubButtonWidget.SettingSubButtonWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingSubButtonWidget.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void USettingSubButtonWidget_C::BndEvt__Button_221_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SettingSubButtonWidget.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_221_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_221_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingSubButtonWidget.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
inline void USettingSubButtonWidget_C::BndEvt__Button_221_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SettingSubButtonWidget.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_221_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_221_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingSubButtonWidget.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
inline void USettingSubButtonWidget_C::BndEvt__Button_221_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SettingSubButtonWidget.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_221_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_221_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingSubButtonWidget.SettingSubButtonWidget_C.UpdateText
inline void USettingSubButtonWidget_C::UpdateText() {
	static auto fn = UObject::FindObject<UFunction>("Function SettingSubButtonWidget.SettingSubButtonWidget_C.UpdateText");

	struct UpdateText_Params {
		
	}; UpdateText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingSubButtonWidget.SettingSubButtonWidget_C.ExecuteUbergraph_SettingSubButtonWidget
inline void USettingSubButtonWidget_C::ExecuteUbergraph_SettingSubButtonWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingSubButtonWidget.SettingSubButtonWidget_C.ExecuteUbergraph_SettingSubButtonWidget");

	struct ExecuteUbergraph_SettingSubButtonWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_SettingSubButtonWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingSubButtonWidget.SettingSubButtonWidget_C.ClickEventDispatcher__DelegateSignature
inline void USettingSubButtonWidget_C::ClickEventDispatcher__DelegateSignature(int32_t Index, enum class Unknow Type) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingSubButtonWidget.SettingSubButtonWidget_C.ClickEventDispatcher__DelegateSignature");

	struct ClickEventDispatcher__DelegateSignature_Params {
		int32_t Index;
		enum class Unknow Type;
	}; ClickEventDispatcher__DelegateSignature_Params Params;

	Params.Index = Index;
	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

