// WidgetBlueprintGeneratedClass SettingSubButtonWidget.SettingSubButtonWidget_C
struct USettingSubButtonWidget_C : UUserWidget {
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

	void Click(int32_t Index, enum class Unknow Type); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.Click(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Construct(); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__Button_221_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__Button_221_K2Node_ComponentBoundEvent_1_OnButtonHoverEv(); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_1_OnButtonHoverEv(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__Button_221_K2Node_ComponentBoundEvent_2_OnButtonHoverEv(); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_2_OnButtonHoverEv(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdateText(); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.UpdateText(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_SettingSubButtonWidget(int32_t EntryPoint); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.ExecuteUbergraph_SettingSubButtonWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ClickEventDispatcher__DelegateSignature(int32_t Index, enum class Unknow Type); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.ClickEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

