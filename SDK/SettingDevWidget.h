// WidgetBlueprintGeneratedClass SettingDevWidget.SettingDevWidget_C
class USettingDevWidget_C : public UBravoHotelSettingSubWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298 (8)
	struct UButton ButtonGod; // 0x2A0 (8)
	struct UDevWidget_C DevWidget; // 0x2A8 (8)
	struct UScrollBox ScrollBox_55; // 0x2B0 (8)

	void Construct(); // Function SettingDevWidget.SettingDevWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void BndEvt__ButtonOpenCheat_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SettingDevWidget.SettingDevWidget_C.BndEvt__ButtonOpenCheat_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_SettingDevWidget(int32_t EntryPoint); // Function SettingDevWidget.SettingDevWidget_C.ExecuteUbergraph_SettingDevWidget(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function SettingDevWidget.SettingDevWidget_C.Construct
inline void USettingDevWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function SettingDevWidget.SettingDevWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingDevWidget.SettingDevWidget_C.BndEvt__ButtonOpenCheat_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void USettingDevWidget_C::BndEvt__ButtonOpenCheat_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SettingDevWidget.SettingDevWidget_C.BndEvt__ButtonOpenCheat_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__ButtonOpenCheat_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__ButtonOpenCheat_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingDevWidget.SettingDevWidget_C.ExecuteUbergraph_SettingDevWidget
inline void USettingDevWidget_C::ExecuteUbergraph_SettingDevWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingDevWidget.SettingDevWidget_C.ExecuteUbergraph_SettingDevWidget");

	struct ExecuteUbergraph_SettingDevWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_SettingDevWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

