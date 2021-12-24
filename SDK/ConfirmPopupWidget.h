// WidgetBlueprintGeneratedClass ConfirmPopupWidget.ConfirmPopupWidget_C
class UConfirmPopupWidget_C : public UBravoHotelConfirmPopupWidget {

public:

	struct Unknown UberGraphFrame; // 0x250 (8)
	struct Unknown Bg; // 0x258 (8)
	struct Unknown btn_Cancel; // 0x260 (8)
	struct Unknown btn_OK; // 0x268 (8)
	struct Unknown Image_2; // 0x270 (8)
	struct Unknown Overlay_2; // 0x278 (8)
	struct Unknown TextBlock_1; // 0x280 (8)
	struct Unknown TextBlock_17; // 0x288 (8)
	struct Unknown TextBlock_18; // 0x290 (8)
	struct Unknown TextBlock_19; // 0x298 (8)
	char PopupType; // 0x2A0 (1)
	struct Unknown SettingWidget; // 0x2A8 (8)
	int32_t CurrentSelectIndex; // 0x2B0 (4)
	enum class Unknow CurrentSelectType; // 0x2B4 (1)
	struct TArray<Unknown> BackupSlots; // 0x2B8 (16)
	struct Unknown Timer; // 0x2C8 (8)
	int32_t TimerCount; // 0x2D0 (4)

	void SetTimerCount(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.SetTimerCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(struct Unknown SettingWidget, int32_t Index, enum class Unknow SelectType, char PopupType); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.Init(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseWheel(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.OnMouseWheel(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSign(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSign(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CancelImpl(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.CancelImpl(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_ConfirmPopupWidget(int32_t EntryPoint); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.ExecuteUbergraph_ConfirmPopupWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

