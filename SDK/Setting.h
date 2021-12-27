// UserDefinedEnum Setting.ConfirmPopupType
enum class ConfirmPopupType : uint8_t {
	ConfirmPopupType = 0,
	ConfirmPopupType = 1,
	ConfirmPopupType = 2,
	ConfirmPopupType = 3,
	ConfirmPopupType = 4,
	ConfirmPopupType = 5,
};

// WidgetBlueprintGeneratedClass Setting.SubTitleSlotWidget_C
class USubTitleSlotWidget_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image; // 0x250 (8)
	struct Unknown Image_2; // 0x258 (8)
	struct Unknown Image_4; // 0x260 (8)
	struct Unknown Image_5; // 0x268 (8)
	struct Unknown Image_6; // 0x270 (8)
	struct Unknown Image_473; // 0x278 (8)
	struct Unknown TextBlock_1; // 0x280 (8)
	struct FText Title; // 0x288 (24)

	void Construct(); // Function Setting.SubTitleSlotWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(enum class Unknow SubType); // Function Setting.SubTitleSlotWidget_C.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_SubTitleSlotWidget(int32_t EntryPoint); // Function Setting.SubTitleSlotWidget_C.ExecuteUbergraph_SubTitleSlotWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass Setting.selectTypeBtn_C
class UselectTypeBtn_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_43; // 0x250 (8)
	struct Unknown Image_43; // 0x258 (8)
	struct FMulticastInlineDelegate SelectEventDispatcher; // 0x260 (16)
	int32_t Index; // 0x270 (4)

	void BndEvt__Button_42_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignatu(); // Function Setting.selectTypeBtn_C.BndEvt__Button_42_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignatu(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SelectIndex(int32_t Index); // Function Setting.selectTypeBtn_C.SelectIndex(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_selectTypeBtn(int32_t EntryPoint); // Function Setting.selectTypeBtn_C.ExecuteUbergraph_selectTypeBtn(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SelectEventDispatcher__DelegateSignature(int32_t Index); // Function Setting.selectTypeBtn_C.SelectEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass Setting.KeyImageWidget_C
class UKeyImageWidget_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Alt; // 0x250 (8)
	struct Unknown Alt; // 0x258 (8)
	struct Unknown Ctrl; // 0x260 (8)
	struct Unknown Ctrl; // 0x268 (8)
	struct Unknown HorizontalBox_169; // 0x270 (8)
	struct Unknown Key; // 0x278 (8)
	struct Unknown ScaleBox_1; // 0x280 (8)
	struct Unknown Shift; // 0x288 (8)
	struct Unknown Shift; // 0x290 (8)
	char Horizontal; // 0x298 (1)
	char vertical; // 0x299 (1)
	char UsingAlphaBg : 0; // 0x29A (1)
	enum class Unknow PreKeyType; // 0x29B (1)
	struct Unknown PreKeyMappingData; // 0x2A0 (40)
	char UsingKeyMappingData : 0; // 0x2C8 (1)
	float DefaultScale; // 0x2CC (4)
	char OverrideFontSize : 0; // 0x2D0 (1)
	int32_t FontSize; // 0x2D4 (4)

	void SetFontSize(char Override); // Function Setting.KeyImageWidget_C.SetFontSize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetKeyNameFromKey(struct Unknown Key, struct FString& Name, char& bRet); // Function Setting.KeyImageWidget_C.GetKeyNameFromKey(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(struct Unknown Key); // Function Setting.KeyImageWidget_C.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(struct Unknown AxisKey); // Function Settinge.KeyImageWidget_C.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetInfo(struct Unknown Key, char Shift, char Alt, char Ctrl); // Function Setting.KeyImageWidget_C.SetInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetEmpty(); // Function Setting.KeyImageWidget_C.SetEmpty(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function Setting.KeyImageWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetInfoFromActionKeyMap(struct Unknown ActionKeyMap); // Function Setting.KeyImageWidget_C.SetInfoFromActionKeyMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetKeyType(enum class Unknow KeyType); // Function Setting.KeyImageWidget_C.SetKeyType(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PreConstruct(char IsDesignTime); // Function Setting.KeyImageWidget_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RefreshKey(); // Function Setting.KeyImageWidget_C.RefreshKey(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_KeyImageWidget(int32_t EntryPoint); // Function Setting.KeyImageWidget_C.ExecuteUbergraph_KeyImageWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass Setting.ComboBoxText_C
class UComboBoxText_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_43; // 0x250 (8)
	struct Unknown Image_269; // 0x258 (8)
	struct Unknown TextBlock_67; // 0x260 (8)
	struct FText Text; // 0x268 (24)

	struct Unknown NewFunction_1(); // Function Setting.ComboBoxText_C.NewFunction_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Setting.ComboBoxText_C.BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetColor(struct Unknown Color); // Function Setting.ComboBoxText_C.SetColor(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_ComboBoxText(int32_t EntryPoint); // Function Setting.ComboBoxText_C.ExecuteUbergraph_ComboBoxText(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass Setting.WB_ClassicSettingsText_C
class UWB_ClassicSettingsText_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown TextField; // 0x250 (8)
	struct FText Text; // 0x258 (24)

	void Construct(); // Function Setting.WB_ClassicSettingsText_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Update(struct FText Text); // Function Setting.WB_ClassicSettingsText_C.Update(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_WB_ClassicSettingsText(int32_t EntryPoint); // Function Setting.WB_ClassicSettingsText_C.ExecuteUbergraph_WB_ClassicSettingsText(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass Setting.ArrowBtn_C
class UArrowBtn_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button_68; // 0x250 (8)
	struct Unknown Normal; // 0x258 (8)
	struct Unknown Over; // 0x260 (8)
	struct Unknown Overlay_113; // 0x268 (8)
	struct Unknown Press; // 0x270 (8)
	struct FMulticastInlineDelegate CilckBtn; // 0x278 (16)
	char IsLeft : 0; // 0x288 (1)

	void Construct(); // Function Settingure.ArrowBtn_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_67_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignatu(); // Function Setting.ArrowBtn_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignatu(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_67_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignatu(); // Function Setting.ArrowBtn_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignatu(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_67_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function Setting.ArrowBtn_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_67_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function Setting.ArrowBtn_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_67_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function Setting.ArrowBtn_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_ArrowBtn(int32_t EntryPoint); // Function Setting.ArrowBtn_C.ExecuteUbergraph_ArrowBtn(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CilckBtn__DelegateSignature(); // Function Setting.ArrowBtn_C.CilckBtn__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass Setting.ButtomButtonWidget_C
class UButtomButtonWidget_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown ApplyBtn; // 0x250 (8)
	struct Unknown ApplyDisable; // 0x258 (8)
	struct Unknown ApplyNormalBg; // 0x260 (8)
	struct Unknown ApplyOverBg; // 0x268 (8)
	struct Unknown ApplyPressBg; // 0x270 (8)
	struct Unknown Button_31; // 0x278 (8)
	struct Unknown Lock; // 0x280 (8)
	struct Unknown NormalBg; // 0x288 (8)
	struct Unknown NormalBtn; // 0x290 (8)
	struct Unknown OverBG; // 0x298 (8)
	struct Unknown PressBg; // 0x2A0 (8)
	struct Unknown Title_Text; // 0x2A8 (8)
	struct FText Title; // 0x2B0 (24)
	struct FMulticastInlineDelegate OnClickEventDispatcher; // 0x2C8 (16)
	char IsDisableBnt : 0; // 0x2D8 (1)
	int32_t CurType; // 0x2DC (4)
	char ColorType : 0; // 0x2E0 (1)
	char Applytype : 0; // 0x2E1 (1)
	char NewVar_1 : 0; // 0x2E2 (1)

	void Set(char IsDisable); // Function Setting.ButtomButtonWidget_C.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_30_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function Setting.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_30_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignatu(); // Function Setting.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignatuur(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_30_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Setting.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_30_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Setting.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_30_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignatu(); // Function Setting.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignatu(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetState(int32_t Type, int32_t Selection); // Function Setting.ButtomButtonWidget_C.SetState(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetColortype(char ColorType); // Function Setting.ButtomButtonWidget_C.SetColortype(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function Setting.ButtomButtonWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_ButtomButtonWidget(int32_t EntryPoint); // Function Setting.ButtomButtonWidget_C.ExecuteUbergraph_ButtomButtonWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnClickEventDispatcher__DelegateSignature(struct Unknown Widget); // Function Setting.ButtomButtonWidget_C.OnClickEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass SettingonLibrary.WB_ToolTipDesign_C
class UWB_ToolTipDesign_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct FText My; // 0x250 (24)

	void Set(struct FText Tool, char& ); // Function Setting.WB_ToolTipDesign_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function Setting.WB_ToolTipDesign_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_WB_ToolTipDesign(int32_t EntryPoint); // Function Setting.WB_ToolTipDesign_C.ExecuteUbergraph_WB_ToolTipDesign(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass Setting.WB_ClassicComboBoxItem_C
class UWB_ClassicComboBoxItem_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown TextComboBoxItem; // 0x250 (8)
	struct Unknown WB_ClassicComboBoxButton; // 0x258 (8)
	struct FString ItemOption; // 0x260 (16)
	struct Unknown Resolution; // 0x270 (8)

	void Construct(); // Function Setting.WB_ClassicComboBoxItem_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_WB_ClassicComboBoxItem(int32_t EntryPoint); // Function Setting.WB_ClassicComboBoxItem_C.ExecuteUbergraph_WB_ClassicComboBoxItem(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass Settingm.SettingDevWidget_C
class USettingDevWidget_C : public UBravoHotelSettingSubWidget {

public:

	struct Unknown UberGraphFrame; // 0x298 (8)
	struct Unknown ButtonGod; // 0x2A0 (8)
	struct Unknown Dev; // 0x2A8 (8)
	struct Unknown ScrollBox_55; // 0x2B0 (8)

	void Construct(); // Function Setting.SettingDevWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ButtonOpenCheat_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Setting.SettingDevWidget_C.BndEvt__ButtonOpenCheat_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_SettingDevWidget(int32_t EntryPoint); // Function Setting.SettingDevWidget_C.ExecuteUbergraph_SettingDevWidget(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass Setting.SettingSubButtonWidget_C
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

	void Click(int32_t Index, enum class Unknow Type); // Function Setting.SettingSubButtonWidget_C.Click(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function Setting.SettingSubButtonWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_221_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Setting.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_221_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Setting.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_221_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function Setting.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateText(); // Function Setting.SettingSubButtonWidget_C.UpdateText(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_SettingSubButtonWidget(int32_t EntryPoint); // Function Setting.SettingSubButtonWidget_C.ExecuteUbergraph_SettingSubButtonWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ClickEventDispatcher__DelegateSignature(int32_t Index, enum class Unknow Type); // Function Setting.SettingSubButtonWidget_C.ClickEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass Setting.GraphicWidget_C
class UGraphicWidget_C : public UBravoHotelSettingSubWidget {

public:

	struct Unknown UberGraphFrame; // 0x298 (8)
	struct Unknown Anti; // 0x2A0 (8)
	struct Unknown display; // 0x2A8 (8)
	struct Unknown DisplayMode; // 0x2B0 (8)
	struct Unknown DLSS; // 0x2B8 (8)
	struct Unknown DOF; // 0x2C0 (8)
	struct Unknown Effect; // 0x2C8 (8)
	struct Unknown Foliage; // 0x2D0 (8)
	struct Unknown FOV; // 0x2D8 (8)
	struct Unknown FSR; // 0x2E0 (8)
	struct Unknown LanguageSetting; // 0x2E8 (8)
	struct Unknown MaxFrameRate; // 0x2F0 (8)
	struct Unknown MaxLobbyFrameRate; // 0x2F8 (8)
	struct Unknown PP; // 0x300 (8)
	struct Unknown Reflex; // 0x308 (8)
	struct Unknown Resolution; // 0x310 (8)
	struct Unknown ResolutionScaling; // 0x318 (8)
	struct Unknown ScrollBox_55; // 0x320 (8)
	struct Unknown Shading; // 0x328 (8)
	struct Unknown Shadow; // 0x330 (8)
	struct Unknown Sharpen; // 0x338 (8)
	struct Unknown SlotItemWidget_C_1; // 0x340 (8)
	struct Unknown Smooth; // 0x348 (8)
	struct Unknown SubTitleSlotWidget; // 0x350 (8)
	struct Unknown Texture; // 0x358 (8)
	struct Unknown v; // 0x360 (8)
	struct Unknown ViewDistance; // 0x368 (8)
	struct Unknown ; // 0x370 (8)
	struct Unknown ; // 0x378 (8)
	float OldDisplayModeValue; // 0x380 (4)
	float OldDisplayResolutionValue; // 0x384 (4)
	struct Unknown ScrollBarTimer; // 0x388 (8)

	void CustomEvent_1(struct Unknown Value); // Function Setting.GraphicWidget_C.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function SettingF1.GraphicWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function Setting.GraphicWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent(); // Function Setting.GraphicWidget_C.CustomEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_GraphicWidget(int32_t EntryPoint); // Function Setting.GraphicWidget_C.ExecuteUbergraph_GraphicWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass Setting.WB_ClassicComboBoxButton_C
class UWB_ClassicComboBoxButton_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown VisualNoninteractButton; // 0x250 (8)
	struct Unknown Original; // 0x258 (632)

	struct Unknown OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function Setting.WB_ClassicComboBoxButton_C.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function Setting42926D5g.WB_ClassicComboBoxButton_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function Setting.WB_ClassicComboBoxButton_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function Setting.WB_ClassicComboBoxButton_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function Setting.WB_ClassicComboBoxButton_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_WB_ClassicComboBoxButton(int32_t EntryPoint); // Function Setting.WB_ClassicComboBoxButton_C.ExecuteUbergraph_WB_ClassicComboBoxButton(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass Setting.WB_ClassicToolTipDesign_C
class UWB_ClassicToolTipDesign_C : public UWB_ToolTipDesign_C {

public:

	struct Unknown UberGraphFrame; // 0x268 (8)
	struct Unknown ToolTipVerticalList; // 0x270 (8)

	void Set(struct FText Tool, char& ); // Function Setting.WB_ClassicToolTipDesign_C.Set(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function Setting.WB_ClassicToolTipDesign_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_WB_ClassicToolTipDesign(int32_t EntryPoint); // Function Setting.WB_ClassicToolTipDesign_C.ExecuteUbergraph_WB_ClassicToolTipDesign(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass Setting.SlotItemWidget_C
class USlotItemWidget_C : public UBravoHotelSettingSlotWidget {

public:

	struct Unknown UberGraphFrame; // 0x4E8 (8)
	struct Unknown Over; // 0x4F0 (8)
	struct Unknown Button_107; // 0x4F8 (8)
	struct Unknown Button_441; // 0x500 (8)
	struct Unknown Button_Type; // 0x508 (8)
	struct Unknown ButtonType; // 0x510 (8)
	struct Unknown ComboBoxString_237; // 0x518 (8)
	struct Unknown ComboBoxType; // 0x520 (8)
	struct Unknown Down; // 0x528 (8)
	struct Unknown EditableText_80; // 0x530 (8)
	struct Unknown HorizontalBox_191; // 0x538 (8)
	struct Unknown Image_153; // 0x540 (8)
	struct Unknown Image_204; // 0x548 (8)
	struct Unknown Image_414; // 0x550 (8)
	struct Unknown Key; // 0x558 (8)
	struct Unknown KeyImageMain; // 0x560 (8)
	struct Unknown KeyImageSub; // 0x568 (8)
	struct Unknown KeyLock; // 0x570 (8)
	struct Unknown LeftA; // 0x578 (8)
	struct Unknown LeftA_2; // 0x580 (8)
	struct Unknown LockMain; // 0x588 (8)
	struct Unknown LockSub; // 0x590 (8)
	struct Unknown MainBG; // 0x598 (8)
	struct Unknown MainKeyInput; // 0x5A0 (8)
	struct Unknown Overlay_215; // 0x5A8 (8)
	struct Unknown ProgressBar_150; // 0x5B0 (8)
	struct Unknown RightA; // 0x5B8 (8)
	struct Unknown RightA_2; // 0x5C0 (8)
	struct Unknown SelectBtn1; // 0x5C8 (8)
	struct Unknown SelectBtn2; // 0x5D0 (8)
	struct Unknown SelectBtn3; // 0x5D8 (8)
	struct Unknown SelectBtn4; // 0x5E0 (8)
	struct Unknown SelectBtn5; // 0x5E8 (8)
	struct Unknown SelectBtn6; // 0x5F0 (8)
	struct Unknown SelectType; // 0x5F8 (8)
	struct Unknown SelectValue; // 0x600 (8)
	struct Unknown Slider_139; // 0x608 (8)
	struct Unknown SliderType; // 0x610 (8)
	struct Unknown SubBG; // 0x618 (8)
	struct Unknown SubKeyInput; // 0x620 (8)
	struct Unknown T_Button; // 0x628 (8)
	struct Unknown Title_Text; // 0x630 (8)
	struct Unknown Up; // 0x638 (8)
	struct Unknown Value; // 0x640 (8)
	struct Unknown Value_2; // 0x648 (8)
	struct Unknown WidgetSwitcher_1; // 0x650 (8)
	struct Unknown WidgetSwitcher_281; // 0x658 (8)
	char Lock : 0; // 0x660 (1)
	int32_t Selected; // 0x664 (4)
	int32_t TotalListSize; // 0x668 (4)
	struct TArray<Unknown> Empty; // 0x670 (16)
	struct Unknown ButtonStyle; // 0x680 (632)
	struct Unknown NewVar_1; // 0x8F8 (112)
	char SliderIsInit : 0; // 0x968 (1)
	struct FText EmptyText; // 0x970 (24)
	int32_t TempSaveComboBoxIndex; // 0x988 (4)
	struct Unknown Temp; // 0x990 (32)
	float TempValue; // 0x9B0 (4)
	struct FText PreSliderText; // 0x9B8 (24)
	struct FString LResultString; // 0x9D0 (16)
	char have : 0; // 0x9E0 (1)
	char IsOnEditableText : 0; // 0x9E1 (1)
	char CompletSettingData : 0; // 0x9E2 (1)
	struct Unknown CompleteSettingInfo; // 0x9E8 (136)
	struct Unknown TempSetting; // 0xA70 (136)
	char ReMarkComboBox : 0; // 0xAF8 (1)

	void GetOrgKey(char IsSubKey, struct Unknown& Key); // Function Setting.SlotItemWidget_C.GetOrgKey(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetCurKey(char IsSubKey, struct Unknown& Key); // Function Setting.SlotItemWidget_C.GetCurKey(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnKeyUp(struct Unknown MyGeometry, struct Unknown InKeyEvent); // Function Setting.SlotItemWidget_C.OnKeyUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckMinMaxValue(float CheckValue, struct FString& RetString); // Function Setting.SlotItemWidget_C.CheckMinMaxValue(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckConvertFloatToString(float Value, struct FString& Ret); // Function Setting.SlotItemWidget_C.CheckConvertFloatToString(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetEnable(char State); // Function Setting.SlotItemWidget_C.SetEnable(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetSliderValue(float InputValue, float& OutValue); // Function Setting.SlotItemWidget_C.SetSliderValue(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetKeyNameFromKey(struct Unknown Key, struct FString& Name); // Function Setting.SlotItemWidget_C.GetKeyNameFromKey(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnGenerateWidget_1(struct FString Item); // Function Setting.SlotItemWidget_C.OnGenerateWidget_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function Setting.SlotItemWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_106_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Setting.SlotItemWidget_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_106_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Setting.SlotItemWidget_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Slider_138_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function Setting.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetValue(float Value); // Function Setting.SlotItemWidget_C.SetValue(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__Delegate(); // Function Setting.SlotItemWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__Delegate(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // Function Setting.SlotItemWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Slider_138_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature(); // Function Setting.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Slider_138_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__Delegate(); // Function Setting.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__Delegate(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Broadcast(float ValueIndex); // Function Setting.SlotItemWidget_C.Broadcast(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitDataByKeyInfo(char IsSub, struct Unknown& Index, char IsInit); // Function Setting.SlotItemWidget_C.InitDataByKeyInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_19_O(struct Unknown SelectedKey); // Function Setting.SlotItemWidget_C.BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_19_(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature(struct Unknown SelectedKey); // Function Setting.SlotItemWidget_C.BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_10_Ot(); // Function Setting.SlotItemWidget_C.BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_10_Ot(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature(); // Function Setting.SlotItemWidget_C.BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetPercentValue(float Value); // Function Setting.SlotItemWidget_C.SetPercentValue(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetSelectIndexComboBox(int32_t Index, char BroadcastChange); // Function Setting.SlotItemWidget_C.SetSelectIndexComboBox(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetSelectIndexSelectBox(int32_t Index, char BroadcastChange); // Function Setting.SlotItemWidget_C.SetSelectIndexSelectBox(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitDataByAxisKeyInfo(char IsSub, struct Unknown& Index, char IsInit); // Function Setting.SlotItemWidget_C.InitDataByAxisKeyInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SubSelectingKeyChanged(char IsSelectingKey); // Function Setting.SlotItemWidget_C.SubSelectingKeyChanged(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MainSelectingKeyChanged(char IsSelectingKey); // Function Setting.SlotItemWidget_C.MainSelectingKeyChanged(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__RightA_K2Node_ComponentBoundEvent_11_CilckBtn__DelegateSignature(); // Function Setting.SlotItemWidget_C.BndEvt__RightA_K2Node_ComponentBoundEvent_11_CilckBtn__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__LeftA_K2Node_ComponentBoundEvent_13_CilckBtn__DelegateSignature(); // Function Setting.SlotItemWidget_C.BndEvt__LeftA_K2Node_ComponentBoundEvent_13_CilckBtn__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_Type_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function Setting.SlotItemWidget_C.BndEvt__Button_Type_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ResolutionSelected(int32_t Index, int32_t ResolutionX, int32_t ResolutionY); // Function Setting.SlotItemWidget_C.ResolutionSelected(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetDisplayMode(char WindowMode); // Function Setting.SlotItemWidget_C.SetDisplayMode(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReMakeComboBox(); // Function Setting.SlotItemWidget_C.ReMakeComboBox(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_82_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignatu(); // Function Setting.SlotItemWidget_C.BndEvt__Button_82_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignatu(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (int32_t LanguageIndex); // Function Setting.SlotItemWidget_C.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function Setting.SlotItemWidget_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__LeftA_1_K2Node_ComponentBoundEvent_9_CilckBtn__DelegateSignature(); // Function Setting.SlotItemWidget_C.BndEvt__LeftA_1_K2Node_ComponentBoundEvent_9_CilckBtn__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__RightA_1_K2Node_ComponentBoundEvent_14_CilckBtn__DelegateSignature(); // Function Setting.SlotItemWidget_C.BndEvt__RightA_1_K2Node_ComponentBoundEvent_14_CilckBtn__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__EditableText_79_K2Node_ComponentBoundEvent_15_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function Setting.SlotItemWidget_C.BndEvt__EditableText_79_K2Node_ComponentBoundEvent_15_OnEditableTextChangedEvent__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__EditableText_79_K2Node_ComponentBoundEvent_16_OnEditableTextCommittedEve(struct FText& Text, char CommitMethod); // Function Setting.SlotItemWidget_C.BndEvt__EditableText_79_K2Node_ComponentBoundEvent_16_OnEditableTextCommittedEve(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_440_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature(); // Function Setting.SlotItemWidget_C.BndEvt__Button_440_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (int32_t Index); // Function Setting.SlotItemWidget_C.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetKeyLock(char IsLock); // Function Setting.SlotItemWidget_C.SetKeyLock(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (int32_t LanguageIndex); // Function Setting.SlotItemWidget_C.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetData(); // Function Setting.SlotItemWidget_C.SetData(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_SlotItemWidget(int32_t EntryPoint); // Function Setting.SlotItemWidget_C.ExecuteUbergraph_SlotItemWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass Setting.Dev
class UDev : public UBravoHotelSettingSubWidget {

public:

	struct Unknown UberGraphFrame; // 0x298 (8)
	struct Unknown ButtonClearStats; // 0x2A0 (8)
	struct Unknown ButtonDebugVehicle; // 0x2A8 (8)
	struct Unknown ButtonEngine; // 0x2B0 (8)
	struct Unknown ButtonFPS; // 0x2B8 (8)
	struct Unknown ButtonGameplayTick; // 0x2C0 (8)
	struct Unknown ButtonMemory; // 0x2C8 (8)
	struct Unknown ButtonNetwork; // 0x2D0 (8)
	struct Unknown ButtonParticles; // 0x2D8 (8)
	struct Unknown ButtonSceneRendering; // 0x2E0 (8)
	struct Unknown ButtonStatSlow; // 0x2E8 (8)
	struct Unknown ButtonUnitGraph; // 0x2F0 (8)
	struct Unknown ComboBoxViewModes; // 0x2F8 (8)
	struct Unknown ComboBoxViewModes1; // 0x300 (8)
	struct Unknown DeleteSettingsSaveFile; // 0x308 (8)
	struct Unknown GameSpeed; // 0x310 (8)
	struct Unknown GameSpeedEdit; // 0x318 (8)
	struct Unknown HorizontalBox_8; // 0x320 (8)
	struct Unknown HorizontalBox_9; // 0x328 (8)
	struct Unknown HorizontalBox_10; // 0x330 (8)
	struct Unknown HorizontalBox_11; // 0x338 (8)
	struct Unknown HorizontalBox_12; // 0x340 (8)
	struct Unknown HorizontalBox_13; // 0x348 (8)
	struct Unknown PauseGame; // 0x350 (8)
	struct Unknown TemporalAACatmullRomCheck; // 0x358 (8)
	struct Unknown TemporalAACurrentFrameWeightEdit; // 0x360 (8)
	struct Unknown TemporalAAFilterSizeEdit; // 0x368 (8)
	struct Unknown TemporalAAPauseCorrectChek; // 0x370 (8)
	struct Unknown TemporalAASamplesEdit; // 0x378 (8)
	struct Unknown TonemapperSharpenEdit; // 0x380 (8)
	struct Unknown ToolTip_DeleteSettings; // 0x388 (8)
	struct Unknown ToolTip_GameSpeed; // 0x390 (8)
	struct Unknown ToolTip_PauseGame; // 0x398 (8)
	struct Unknown ToolTip_StatCommands; // 0x3A0 (8)
	struct Unknown ToolTip_ViewModes; // 0x3A8 (8)
	struct Unknown ToolTip_ViewModes_2; // 0x3B0 (8)
	struct Unknown Game; // 0x3B8 (8)
	float Time; // 0x3C0 (4)
	struct FText Time; // 0x3C8 (24)
	struct FMulticastInlineDelegate Settings; // 0x3E0 (16)
	struct FMulticastInlineDelegate Pause; // 0x3F0 (16)
	struct FText TemporalAAFilterSizeTextBinding; // 0x400 (24)
	struct FText TemporalAACurrentFrameWeightTextBinding; // 0x418 (24)
	struct FText TemporalAASamplesTextBinding; // 0x430 (24)
	struct FText TonemapperSharpenTextBinding; // 0x448 (24)
	float TemporalAAFilterSizeValue; // 0x460 (4)
	float TemporalAACurrentFrameWeightValue; // 0x464 (4)
	int32_t TemporalAASamplesValue; // 0x468 (4)
	float TonemapperSharpenValue; // 0x46C (4)
	struct FName TempKey; // 0x470 (8)
	struct TMap<Unknown, Unknown> Temp; // 0x478 (80)
	enum class Unknow Type; // 0x4C8 (1)
	float TempValue2; // 0x4CC (4)
	char IsOnDebugVehicle : 0; // 0x4D0 (1)

	struct Unknown Generate(struct FString Item); // Function Setting.Dev.Generate(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Refresh(float Value); // Function Setting.Dev.Refresh(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Refresh(char InIsChecked); // Function Setting.Dev.Refresh(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function Setting.Dev.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__My(float Value); // Function Setting.Dev.BndEvt__My(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__My(char bIsChecked); // Function Setting.Dev.BndEvt__My(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__My(); // Function Setting.Dev.BndEvt__My(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__My(struct FText& Text, char CommitMethod); // Function Setting.Dev.BndEvt__My(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_248_OnButtonClickedEvent__DelegateSignature(); // Function Setting.Dev.BndEvt__Button_0_K2Node_ComponentBoundEvent_248_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ButtonMemory_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature(); // Function Setting.Dev.BndEvt__ButtonMemory_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ButtonNetwork_K2Node_ComponentBoundEvent_0_(); // Function Setting.Dev.BndEvt__ButtonNetwork_K2Node_ComponentBoundEvent_0_(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ButtonParticles_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function Setting.Dev.BndEvt__ButtonParticles_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ButtonStatTick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function Setting.Dev.BndEvt__ButtonStatTick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ButtonSceneRendering_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__Delegate(); // Function Setting.Dev.BndEvt__ButtonSceneRendering_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__Delegate(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ButtonInitViews_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature(); // Function Setting.Dev.BndEvt__ButtonInitViews_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ButtonEngine_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__Delegate(); // Function Setting.Dev.BndEvt__ButtonEngine_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__Delegate(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__MyComboBox_K2Node_ComponentBoundEvent_128_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // Function Setting.Dev.BndEvt__MyComboBox_K2Node_ComponentBoundEvent_128_OnSelectionChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ButtonStatSlow_K2Node_ComponentBoundEvent_712_OnButtonClickedEvent__Dele(); // Function Setting.Dev.BndEvt__ButtonStatSlow_K2Node_ComponentBoundEvent_712_OnButtonClickedEvent__Dele(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ButtonClearStats_K2Node_ComponentBoundEvent_739_OnButtonClickedEvent__De(); // Function Setting.Dev.BndEvt__ButtonClearStats_K2Node_ComponentBoundEvent_739_OnButtonClickedEvent__De(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__TemporalAAFilterSizeEdit_K2Node_ComponentBoundEvent_881_OnEditableTextCommittedEvent__De(struct FText& Text, char CommitMethod); // Function Setting.Dev.BndEvt__TemporalAAFilterSizeEdit_K2Node_ComponentBoundEvent_881_OnEditableTextCommittedEvent__De(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__TemporalAACurrentFrameWeightEdit_K2Node_ComponentBoundEvent_1061_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod); // Function Setting.Dev.BndEvt__TemporalAACurrentFrameWeightEdit_K2Node_ComponentBoundEvent_1061_OnEditableTextCommittedEvent__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__TemporalAASamplesEdit_K2Node_ComponentBoundEvent_1099_OnEditableTextCommittedEvevent__De(struct FText& Text, char CommitMethod); // Function Setting.Dev.BndEvt__TemporalAASamplesEdit_K2Node_ComponentBoundEvent_1099_OnEditableTextCommittedEve(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__TonemapperSharpenEdit_K2Node_ComponentBoundEvent_1141_OnEditableTextCommittedEve(struct FText& Text, char CommitMethod); // Function Setting.Dev.BndEvt__TonemapperSharpenEdit_K2Node_ComponentBoundEvent_1141_OnEditableTextCommittedEve(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__TemporalAACatmullRomCheck_K2Node_ComponentBoundEvent_1217_OnCheckBoxComponentStateChangeg(char bIsChecked); // Function Setting.Dev.BndEvt__TemporalAACatmullRomCheck_K2Node_ComponentBoundEvent_1217_OnCheckBoxComponentStateChangeg(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__TemporalAAPauseCorrectChek_K2Node_ComponentBoundEvent_1237_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked); // Function Setting.Dev.BndEvt__TemporalAAPauseCorrectChek_K2Node_ComponentBoundEvent_1237_OnCheckBoxComponentStateChanged__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function Setting.Dev.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ComboBoxViewModes1_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // Function Setting.Dev.BndEvt__ComboBoxViewModes1_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InitDefault(); // Function Setting.Dev.InitDefault(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_DevWidget(int32_t EntryPoint); // Function Setting.Dev.ExecuteUbergraph_DevWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Pause(char Pause); // Function Setting.Dev.Pause(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Settings(); // Function Setting.Dev.Settings(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass Setting.GamePlayWidget_C
class UGamePlayWidget_C : public UBravoHotelSettingSubWidget {

public:

	struct Unknown UberGraphFrame; // 0x298 (8)
	struct Unknown AmmoEffect; // 0x2A0 (8)
	struct Unknown AR; // 0x2A8 (8)
	struct Unknown AutoLadder; // 0x2B0 (8)
	struct Unknown autoReload; // 0x2B8 (8)
	struct Unknown AutoUseMedicalLv1; // 0x2C0 (8)
	struct Unknown AutoUseMedicalLv2; // 0x2C8 (8)
	struct Unknown AutoUseMedicalLv3; // 0x2D0 (8)
	struct Unknown BlueBoostEffect; // 0x2D8 (8)
	struct Unknown CrossHair; // 0x2E0 (8)
	struct Unknown CustsomUseItem; // 0x2E8 (8)
	struct Unknown DMR; // 0x2F0 (8)
	struct Unknown GreenBoostEffect; // 0x2F8 (8)
	struct Unknown ImmediateAttachment; // 0x300 (8)
	struct Unknown InheritAttachment; // 0x308 (8)
	struct Unknown MedicalLv1Effect; // 0x310 (8)
	struct Unknown MedicalLv2Effect; // 0x318 (8)
	struct Unknown MedicalLv3Effect; // 0x320 (8)
	struct Unknown NetworkDebug; // 0x328 (8)
	struct Unknown Pistol; // 0x330 (8)
	struct Unknown RedBoostEffect; // 0x338 (8)
	struct Unknown ScrollBox_55; // 0x340 (8)
	struct Unknown SearchExpertWeaponMaterialItem; // 0x348 (8)
	struct Unknown SearchMaterialItem; // 0x350 (8)
	struct Unknown ShowAircraftUI; // 0x358 (8)
	struct Unknown ShowGuideWidget; // 0x360 (8)
	struct Unknown ShowPerkSlot; // 0x368 (8)
	struct Unknown ShowSmartPing; // 0x370 (8)
	struct Unknown ShowSmartPingLightPole; // 0x378 (8)
	struct Unknown ShowSmartPingSupplyBox; // 0x380 (8)
	struct Unknown ShowUseaableItemEffect; // 0x388 (8)
	struct Unknown SMG; // 0x390 (8)
	struct Unknown SR; // 0x398 (8)
	struct Unknown Tutorial; // 0x3A0 (8)
	struct Unknown Tutorial_RePlay; // 0x3A8 (8)
	struct Unknown UseItem1; // 0x3B0 (8)
	struct Unknown UseItem2; // 0x3B8 (8)
	struct Unknown UseItem3; // 0x3C0 (8)
	struct Unknown UseItem4; // 0x3C8 (8)
	struct Unknown UseItem5; // 0x3D0 (8)
	struct Unknown UseItem6; // 0x3D8 (8)
	struct Unknown UseItem7; // 0x3E0 (8)
	struct Unknown UseItem8; // 0x3E8 (8)
	struct Unknown VerticalBox_154; // 0x3F0 (8)
	struct Unknown ; // 0x3F8 (8)
	struct Unknown ; // 0x400 (8)
	struct Unknown ; // 0x408 (8)
	struct Unknown ScrollBarTimer; // 0x410 (8)

	void (enum class Unknow Type); // Function Setting.GamePlayWidget_C.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DelegateChangeValue_Event_1(struct Unknown Value); // Function Setting.GamePlayWidget_C.DelegateChangeValue_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function Setting.GamePlayWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function Setting.GamePlayWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent(); // Function Setting.GamePlayWidget_C.CustomEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_GamePlayWidget(int32_t EntryPoint); // Function Setting.GamePlayWidget_C.ExecuteUbergraph_GamePlayWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass Setting.Key
class UKey : public UBravoHotelSettingSubWidget {

public:

	struct Unknown UberGraphFrame; // 0x298 (8)
	struct Unknown ButtomButtonWidget; // 0x2A0 (8)
	struct Unknown Image_154; // 0x2A8 (8)
	struct Unknown Overlay_1; // 0x2B0 (8)
	struct Unknown ScrollBox_55; // 0x2B8 (8)
	struct Unknown UniformGridPanel_119; // 0x2C0 (8)
	enum class Unknow Begin; // 0x2C8 (1)
	enum class Unknow End; // 0x2C9 (1)
	enum class Unknow PreSubType; // 0x2CA (1)
	struct FMulticastInlineDelegate EventDispatcher_KeyNotiMessage; // 0x2D0 (16)
	struct Unknown ScrollBarTimer; // 0x2E0 (8)
	struct TMap<Unknown, Unknown> List; // 0x2E8 (80)
	struct TArray<Unknown> SubTypeSort; // 0x338 (16)
	int32_t TempCount; // 0x348 (4)
	struct TMap<Unknown, Unknown> Hot; // 0x350 (80)
	float Size; // 0x3A0 (4)
	struct TMap<Unknown, Unknown> Offset; // 0x3A8 (80)

	void EnableShowReplayType(char& bRet); // Function Setting.Key.EnableShowReplayType(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function Setting.Key.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateSlotList(); // Function Setting.Key.CreateSlotList(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetScrollLock(char Lock); // Function Setting.Key.SetScrollLock(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function Setting.Key.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (struct Unknown InKey, struct Unknown Slot); // Function Setting.Key.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (char bIsDuplicate, struct Unknown InKey, struct FText KeyName); // Function Setting.Key.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function Setting.Key.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function Setting.Key.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (struct Unknown Widget); // Function Setting.Key.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__Delegate(struct Unknown Widget); // Function Setting.Key.BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__Delegate(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_KeyWidget(int32_t EntryPoint); // Function Setting.Key.ExecuteUbergraph_KeyWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EventDispatcher_KeyNotiMessage__DelegateSignature(char IsDuplicate, struct Unknown Key, struct FText KeyName); // Function Setting.Key.EventDispatcher_KeyNotiMessage__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass Setting.CrossHairDetailInfo_C
class UCrossHairDetailInfo_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown ; // 0x250 (8)
	struct Unknown CurDesc; // 0x258 (8)

	void SetData(struct FText Title, struct Unknown Image); // Function Setting.CrossHairDetailInfo_C.SetData(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_CrossHairDetailInfo(int32_t EntryPoint); // Function Setting.CrossHairDetailInfo_C.ExecuteUbergraph_CrossHairDetailInfo(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass Setting.ControlWidget_C
class UControlWidget_C : public UBravoHotelSettingSubWidget {

public:

	struct Unknown UberGraphFrame; // 0x298 (8)
	struct Unknown 15XSensitivity; // 0x2A0 (8)
	struct Unknown 2XSensitivity; // 0x2A8 (8)
	struct Unknown 4XSensitivity; // 0x2B0 (8)
	struct Unknown 6XSensitivity; // 0x2B8 (8)
	struct Unknown 8XSensitivity; // 0x2C0 (8)
	struct Unknown ADSSensitivity; // 0x2C8 (8)
	struct Unknown GeneralSensitivity; // 0x2D0 (8)
	struct Unknown ReverseLeftAndRight; // 0x2D8 (8)
	struct Unknown ReverseUpAndDown; // 0x2E0 (8)
	struct Unknown ScrollBox_55; // 0x2E8 (8)
	struct Unknown TargetingSensitivity; // 0x2F0 (8)
	struct Unknown ToggleADS; // 0x2F8 (8)
	struct Unknown ToggleAOS; // 0x300 (8)
	struct Unknown ToggleCrouch; // 0x308 (8)
	struct Unknown ToggleExLean; // 0x310 (8)
	struct Unknown ToggleFreeLook; // 0x318 (8)
	struct Unknown ToggleSprint; // 0x320 (8)
	struct Unknown ToggleSteadyAim; // 0x328 (8)
	struct Unknown ToggleWalk; // 0x330 (8)
	struct Unknown TotalSensitivity; // 0x338 (8)
	struct Unknown UsingDetailSensitivy; // 0x340 (8)
	struct Unknown VehicleDriverSensitivity; // 0x348 (8)
	struct Unknown VerticalBox_1; // 0x350 (8)
	struct Unknown VerticlaModifier; // 0x358 (8)
	struct Unknown ; // 0x360 (8)
	struct Unknown ; // 0x368 (8)
	struct Unknown ; // 0x370 (8)
	struct Unknown ScrollBarTimer; // 0x378 (8)

	void Construct(); // Function Setting.ControlWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DelegateChangeValue_Event_1(struct Unknown Value); // Function Setting.ControlWidget_C.DelegateChangeValue_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function Setting.ControlWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function Setting.ControlWidget_C.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_ControlWidget(int32_t EntryPoint); // Function Setting.ControlWidget_C.ExecuteUbergraph_ControlWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass Setting.AudioWidget_C
class UAudioWidget_C : public UBravoHotelSettingSubWidget {

public:

	struct Unknown UberGraphFrame; // 0x298 (8)
	struct Unknown Effect; // 0x2A0 (8)
	struct Unknown Master; // 0x2A8 (8)
	struct Unknown MasterOnOff; // 0x2B0 (8)
	struct Unknown Music; // 0x2B8 (8)
	struct Unknown ScrollBox_55; // 0x2C0 (8)
	struct Unknown UI; // 0x2C8 (8)
	struct Unknown VoiceChanel; // 0x2D0 (8)
	struct Unknown VoiceInput; // 0x2D8 (8)
	struct Unknown VoiceInputMode; // 0x2E0 (8)
	struct Unknown VoiceOutput; // 0x2E8 (8)
	struct Unknown ; // 0x2F0 (8)
	struct Unknown ; // 0x2F8 (8)
	struct Unknown ScrollBarTimer; // 0x300 (8)

	void Construct(); // Function Setting.AudioWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (struct Unknown Value); // Function SettingB1.AudioWidget_C.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function SettingB1.AudioWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CustomEvent(); // Function SettingWidget_.AudioWidget_C.CustomEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_AudioWidget(int32_t EntryPoint); // Function Setting.AudioWidget_C.ExecuteUbergraph_AudioWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass Setting.ConfirmPopupWidget_C
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

	void SetTimerCount(); // Function Setting.ConfirmPopupWidget_C.SetTimerCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(struct Unknown SettingWidget, int32_t Index, enum class Unknow SelectType, char PopupType); // Function Setting.ConfirmPopupWidget_C.Init(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseWheel(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function Setting.ConfirmPopupWidget_C.OnMouseWheel(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function Setting.ConfirmPopupWidget_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function Setting.ConfirmPopupWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature(); // Function Setting.ConfirmPopupWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature(); // Function Setting.ConfirmPopupWidget_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function Setting.ConfirmPopupWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignatu(); // Function Setting.ConfirmPopupWidget_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignatu(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CancelImpl(); // Function Setting.ConfirmPopupWidget_C.CancelImpl(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function Setting.ConfirmPopupWidget_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_ConfirmPopupWidget(int32_t EntryPoint); // Function Setting.ConfirmPopupWidget_C.ExecuteUbergraph_ConfirmPopupWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// WidgetBlueprintGeneratedClass Settingget_Webg.SettingMainWidget_C
class USettingMainWidget_C : public UBravoHotelSettingWidget {

public:

	struct Unknown UberGraphFrame; // 0x3D8 (8)
	struct Unknown ; // 0x3E0 (8)
	struct Unknown ; // 0x3E8 (8)
	struct Unknown ; // 0x3F0 (8)
	struct Unknown ApplyButton; // 0x3F8 (8)
	struct Unknown Audio; // 0x400 (8)
	struct Unknown CanvasPanel_61; // 0x408 (8)
	struct Unknown CanvasPanel_279; // 0x410 (8)
	struct Unknown ChangeLock; // 0x418 (8)
	struct Unknown Control; // 0x420 (8)
	struct Unknown CrossHair; // 0x428 (8)
	struct Unknown CrossHairDetailInfo; // 0x430 (8)
	struct Unknown CrossHairDetailInfo_2; // 0x438 (8)
	struct Unknown CrossHairDetailInfo_3; // 0x440 (8)
	struct Unknown CrossHairDetailInfo_4; // 0x448 (8)
	struct Unknown CurDesc; // 0x450 (8)
	struct Unknown CurDesc2; // 0x458 (8)
	struct Unknown CurTitle; // 0x460 (8)
	struct Unknown DefaultButton; // 0x468 (8)
	struct Unknown Dev; // 0x470 (8)
	struct Unknown GamePlay; // 0x478 (8)
	struct Unknown GoBackButton; // 0x480 (8)
	struct Unknown Graphic; // 0x488 (8)
	struct Unknown Image; // 0x490 (8)
	struct Unknown Image_2; // 0x498 (8)
	struct Unknown Image_3; // 0x4A0 (8)
	struct Unknown Image_4; // 0x4A8 (8)
	struct Unknown Image_109; // 0x4B0 (8)
	struct Unknown Image_128; // 0x4B8 (8)
	struct Unknown Image_129; // 0x4C0 (8)
	struct Unknown Image_154; // 0x4C8 (8)
	struct Unknown Image_323; // 0x4D0 (8)
	struct Unknown Image_417; // 0x4D8 (8)
	struct Unknown Image_951; // 0x4E0 (8)
	struct Unknown Image_953; // 0x4E8 (8)
	struct Unknown Key; // 0x4F0 (8)
	struct Unknown KeyImageMain; // 0x4F8 (8)
	struct Unknown ProgressBar_317; // 0x500 (8)
	struct Unknown Slider_299; // 0x508 (8)
	struct Unknown TextBlock; // 0x510 (8)
	struct Unknown TextBlock_1; // 0x518 (8)
	struct Unknown TextBlock_2; // 0x520 (8)
	struct Unknown TextBlock_3; // 0x528 (8)
	struct Unknown TextBlock_5; // 0x530 (8)
	struct Unknown TextBlock_7; // 0x538 (8)
	struct Unknown VerticalBox_149; // 0x540 (8)
	struct Unknown WidgetSwitcher_113; // 0x548 (8)
	struct FMulticastInlineDelegate EnableButtonEventDispatcher; // 0x550 (16)
	struct Unknown Game; // 0x560 (8)
	struct TMap<Unknown, Unknown> SlotList_1; // 0x568 (80)
	struct Unknown GraphicWidget; // 0x5B8 (8)
	struct Unknown AudioWidget; // 0x5C0 (8)
	struct Unknown ControlWidget; // 0x5C8 (8)
	struct Unknown Key; // 0x5D0 (8)
	struct Unknown GamePlayWidget; // 0x5D8 (8)
	struct Unknown SettingDevWidget; // 0x5E0 (8)
	int32_t GraphicSwitcherIndex; // 0x5E8 (4)
	int32_t AudioSwitcherIndex; // 0x5EC (4)
	int32_t ControlSwitcherIndex; // 0x5F0 (4)
	int32_t KeySwitcherIndex; // 0x5F4 (4)
	int32_t SettingDevSwitcherIndex; // 0x5F8 (4)
	int32_t GamePlaySwitcherIndex; // 0x5FC (4)
	struct Unknown KeyNotiTimer; // 0x600 (8)
	float KeyNotiMessageShowTime; // 0x608 (4)
	struct Unknown TempImg; // 0x610 (40)
	struct Unknown SavedDescData; // 0x638 (8)

	void CreateWidgetImpl(struct Unknown* WidgetClass, struct Unknown& Out, int32_t& OutSwitcherIndex, int32_t& RealIndex); // Function Setting.SettingMainWidget_C.CreateWidgetImpl(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckConfirmPopup(int32_t Index, enum class Unknow Type); // Function Setting.SettingMainWidget_C.CheckConfirmPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct TArray<Unknown> GetSubList(); // Function Setting.SettingMainWidget_C.GetSubList(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateWidget(int32_t Index, int32_t& RealIndex); // Function Setting.SettingMainWidget_C.CreateWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function Setting.SettingMainWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Select(int32_t Index, enum class Unknow Type); // Function Setting.SettingMainWidget_C.Select(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Binding(); // Function Setting.SettingMainWidget_C.Binding(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature(struct Unknown Widget); // Function Setting.SettingMainWidget_C.BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (struct Unknown Value); // Function Setting.SettingMainWidget_C.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignatu(struct Unknown Widget); // Function Setting.SettingMainWidget_C.BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignatu(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature(struct Unknown Widget); // Function Setting.SettingMainWidget_C.BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RefreshDeve(); // Function Setting.SettingMainWidget_C.RefreshDeve(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Slider_298_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function Setting.SettingMainWidget_C.BndEvt__Slider_298_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CheckHaveApplyList(enum class Unknow Type); // Function Setting.SettingMainWidget_C.CheckHaveApplyList(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Close(); // Function Setting.SettingMainWidget_C.Close(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_112_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function Setting.SettingMainWidget_C.BndEvt__Button_112_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateConfirmWidget(int32_t TabIdx, enum class Unknow SelectTabType, int32_t PopupType); // Function Setting.SettingMainWidget_C.CreateConfirmWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ApplyImpl(char UseConfimPopup); // Function Setting.SettingMainWidget_C.ApplyImpl(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(struct Unknown Slot); // Function Setting.SettingMainWidget_C.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (struct Unknown Value, char IsSubKey); // Function Setting.SettingMainWidget_C.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void KeyNotiMessage(char IsDuplicate, struct Unknown Key, struct FText KeyName); // Function Setting.SettingMainWidget_C.KeyNotiMessage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function Setting.SettingMainWidget_C.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Update(int32_t LanguageIndex); // Function Setting.SettingMainWidget_C.Update(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpdateVideoMemoryUsageGraph(int32_t UsedVideoMemory, int32_t TotalVideoMemory, int32_t CurrentProcessUsage, int32_t OtherProcessUsage); // Function Setting.SettingMainWidget_C.UpdateVideoMemoryUsageGraph(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_SettingMainWidget(int32_t EntryPoint); // Function Setting.SettingMainWidget_C.ExecuteUbergraph_SettingMainWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EnableButtonEventDispatcher__DelegateSignature(); // Function Setting.SettingMainWidget_C.EnableButtonEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// Function Setting.SubTitleSlotWidget_C.Construct
inline void USubTitleSlotWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SubTitleSlotWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SubTitleSlotWidget_C.Set
inline void USubTitleSlotWidget_C::Set(enum class Unknow SubType) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SubTitleSlotWidget_C.Set");

	struct Set_Params {
		enum class Unknow SubType;
	}; Set_Params Params;

	Params.SubType = SubType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SubTitleSlotWidget_C.ExecuteUbergraph_SubTitleSlotWidget
inline void USubTitleSlotWidget_C::ExecuteUbergraph_SubTitleSlotWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SubTitleSlotWidget_C.ExecuteUbergraph_SubTitleSlotWidget");

	struct ExecuteUbergraph_SubTitleSlotWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_SubTitleSlotWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.selectTypeBtn_C.BndEvt__Button_42_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignatu
inline void UselectTypeBtn_C::BndEvt__Button_42_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignatu() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.selectTypeBtn_C.BndEvt__Button_42_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignatu");

	struct BndEvt__Button_42_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignatu_Params {
		
	}; BndEvt__Button_42_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignatu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.selectTypeBtn_C.SelectIndex
inline void UselectTypeBtn_C::SelectIndex(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.selectTypeBtn_C.SelectIndex");

	struct SelectIndex_Params {
		int32_t Index;
	}; SelectIndex_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.selectTypeBtn_C.ExecuteUbergraph_selectTypeBtn
inline void UselectTypeBtn_C::ExecuteUbergraph_selectTypeBtn(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.selectTypeBtn_C.ExecuteUbergraph_selectTypeBtn");

	struct ExecuteUbergraph_selectTypeBtn_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_selectTypeBtn_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.selectTypeBtn_C.SelectEventDispatcher__DelegateSignature
inline void UselectTypeBtn_C::SelectEventDispatcher__DelegateSignature(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.selectTypeBtn_C.SelectEventDispatcher__DelegateSignature");

	struct SelectEventDispatcher__DelegateSignature_Params {
		int32_t Index;
	}; SelectEventDispatcher__DelegateSignature_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.KeyImageWidget_C.SetFontSize
inline void UKeyImageWidget_C::SetFontSize(char Override) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.KeyImageWidget_C.SetFontSize");

	struct SetFontSize_Params {
		char Override;
	}; SetFontSize_Params Params;

	Params.Override = Override;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.KeyImageWidget_C.GetKeyNameFromKey
inline void UKeyImageWidget_C::GetKeyNameFromKey(struct Unknown Key, struct FString& Name, char& bRet) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.KeyImageWidget_C.GetKeyNameFromKey");

	struct GetKeyNameFromKey_Params {
		struct Unknown Key;
		struct FString& Name;
		char& bRet;
	}; GetKeyNameFromKey_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Name = Params.Name;
	bRet = Params.bRet;

}

// Function Setting.KeyImageWidget_C.Set
inline void UKeyImageWidget_C::Set(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.KeyImageWidget_C.Set");

	struct Set_Params {
		struct Unknown Key;
	}; Set_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Settinge.KeyImageWidget_C.Set
inline void UKeyImageWidget_C::Set(struct Unknown AxisKey) {
	static auto fn = UObject::FindObject<UFunction>("Function Settinge.KeyImageWidget_C.Set");

	struct Set_Params {
		struct Unknown AxisKey;
	}; Set_Params Params;

	Params.AxisKey = AxisKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.KeyImageWidget_C.SetInfo
inline void UKeyImageWidget_C::SetInfo(struct Unknown Key, char Shift, char Alt, char Ctrl) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.KeyImageWidget_C.SetInfo");

	struct SetInfo_Params {
		struct Unknown Key;
		char Shift;
		char Alt;
		char Ctrl;
	}; SetInfo_Params Params;

	Params.Key = Key;
	Params.Shift = Shift;
	Params.Alt = Alt;
	Params.Ctrl = Ctrl;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.KeyImageWidget_C.SetEmpty
inline void UKeyImageWidget_C::SetEmpty() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.KeyImageWidget_C.SetEmpty");

	struct SetEmpty_Params {
		
	}; SetEmpty_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.KeyImageWidget_C.Construct
inline void UKeyImageWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.KeyImageWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.KeyImageWidget_C.SetInfoFromActionKeyMap
inline void UKeyImageWidget_C::SetInfoFromActionKeyMap(struct Unknown ActionKeyMap) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.KeyImageWidget_C.SetInfoFromActionKeyMap");

	struct SetInfoFromActionKeyMap_Params {
		struct Unknown ActionKeyMap;
	}; SetInfoFromActionKeyMap_Params Params;

	Params.ActionKeyMap = ActionKeyMap;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.KeyImageWidget_C.SetKeyType
inline void UKeyImageWidget_C::SetKeyType(enum class Unknow KeyType) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.KeyImageWidget_C.SetKeyType");

	struct SetKeyType_Params {
		enum class Unknow KeyType;
	}; SetKeyType_Params Params;

	Params.KeyType = KeyType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.KeyImageWidget_C.PreConstruct
inline void UKeyImageWidget_C::PreConstruct(char IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.KeyImageWidget_C.PreConstruct");

	struct PreConstruct_Params {
		char IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.KeyImageWidget_C.RefreshKey
inline void UKeyImageWidget_C::RefreshKey() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.KeyImageWidget_C.RefreshKey");

	struct RefreshKey_Params {
		
	}; RefreshKey_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.KeyImageWidget_C.ExecuteUbergraph_KeyImageWidget
inline void UKeyImageWidget_C::ExecuteUbergraph_KeyImageWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.KeyImageWidget_C.ExecuteUbergraph_KeyImageWidget");

	struct ExecuteUbergraph_KeyImageWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_KeyImageWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ComboBoxText_C.NewFunction_1
inline struct Unknown UComboBoxText_C::NewFunction_1() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ComboBoxText_C.NewFunction_1");

	struct NewFunction_1_Params {
		
		struct Unknown ReturnValue;

	}; NewFunction_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Setting.ComboBoxText_C.BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
inline void UComboBoxText_C::BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ComboBoxText_C.BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ComboBoxText_C.SetColor
inline void UComboBoxText_C::SetColor(struct Unknown Color) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ComboBoxText_C.SetColor");

	struct SetColor_Params {
		struct Unknown Color;
	}; SetColor_Params Params;

	Params.Color = Color;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ComboBoxText_C.ExecuteUbergraph_ComboBoxText
inline void UComboBoxText_C::ExecuteUbergraph_ComboBoxText(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ComboBoxText_C.ExecuteUbergraph_ComboBoxText");

	struct ExecuteUbergraph_ComboBoxText_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ComboBoxText_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.WB_ClassicSettingsText_C.Construct
inline void UWB_ClassicSettingsText_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.WB_ClassicSettingsText_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.WB_ClassicSettingsText_C.Update
inline void UWB_ClassicSettingsText_C::Update(struct FText Text) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.WB_ClassicSettingsText_C.Update");

	struct Update_Params {
		struct FText Text;
	}; Update_Params Params;

	Params.Text = Text;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.WB_ClassicSettingsText_C.ExecuteUbergraph_WB_ClassicSettingsText
inline void UWB_ClassicSettingsText_C::ExecuteUbergraph_WB_ClassicSettingsText(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.WB_ClassicSettingsText_C.ExecuteUbergraph_WB_ClassicSettingsText");

	struct ExecuteUbergraph_WB_ClassicSettingsText_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_WB_ClassicSettingsText_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Settingure.ArrowBtn_C.Construct
inline void UArrowBtn_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Settingure.ArrowBtn_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ArrowBtn_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignatu
inline void UArrowBtn_C::BndEvt__Button_67_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignatuat() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ArrowBtn_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignatu");

	struct BndEvt__Button_67_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignatuat_Params {
		
	}; BndEvt__Button_67_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignatuat_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ArrowBtn_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignatu
inline void UArrowBtn_C::BndEvt__Button_67_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignatuat() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ArrowBtn_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignatu");

	struct BndEvt__Button_67_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignatuat_Params {
		
	}; BndEvt__Button_67_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignatuat_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ArrowBtn_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
inline void UArrowBtn_C::BndEvt__Button_67_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ArrowBtn_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_67_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_67_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ArrowBtn_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
inline void UArrowBtn_C::BndEvt__Button_67_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ArrowBtn_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_67_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_67_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ArrowBtn_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
inline void UArrowBtn_C::BndEvt__Button_67_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ArrowBtn_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");

	struct BndEvt__Button_67_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_67_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ArrowBtn_C.ExecuteUbergraph_ArrowBtn
inline void UArrowBtn_C::ExecuteUbergraph_ArrowBtn(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ArrowBtn_C.ExecuteUbergraph_ArrowBtn");

	struct ExecuteUbergraph_ArrowBtn_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ArrowBtn_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ArrowBtn_C.CilckBtn__DelegateSignature
inline void UArrowBtn_C::CilckBtn__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ArrowBtn_C.CilckBtn__DelegateSignature");

	struct CilckBtn__DelegateSignature_Params {
		
	}; CilckBtn__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ButtomButtonWidget_C.Set
inline void UButtomButtonWidget_C::Set(char IsDisable) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ButtomButtonWidget_C.Set");

	struct Set_Params {
		char IsDisable;
	}; Set_Params Params;

	Params.IsDisable = IsDisable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
inline void UButtomButtonWidget_C::BndEvt__Button_30_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");

	struct BndEvt__Button_30_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_30_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignatuur
inline void UButtomButtonWidget_C::BndEvt__Button_30_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignatuon() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignatuur");

	struct BndEvt__Button_30_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignatuon_Params {
		
	}; BndEvt__Button_30_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignatuon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
inline void UButtomButtonWidget_C::BndEvt__Button_30_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_30_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_30_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
inline void UButtomButtonWidget_C::BndEvt__Button_30_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_30_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_30_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignatu
inline void UButtomButtonWidget_C::BndEvt__Button_30_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignatud() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignatu");

	struct BndEvt__Button_30_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignatud_Params {
		
	}; BndEvt__Button_30_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignatud_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ButtomButtonWidget_C.SetState
inline void UButtomButtonWidget_C::SetState(int32_t Type, int32_t Selection) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ButtomButtonWidget_C.SetState");

	struct SetState_Params {
		int32_t Type;
		int32_t Selection;
	}; SetState_Params Params;

	Params.Type = Type;
	Params.Selection = Selection;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ButtomButtonWidget_C.SetColortype
inline void UButtomButtonWidget_C::SetColortype(char ColorType) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ButtomButtonWidget_C.SetColortype");

	struct SetColortype_Params {
		char ColorType;
	}; SetColortype_Params Params;

	Params.ColorType = ColorType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ButtomButtonWidget_C.Construct
inline void UButtomButtonWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ButtomButtonWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ButtomButtonWidget_C.ExecuteUbergraph_ButtomButtonWidget
inline void UButtomButtonWidget_C::ExecuteUbergraph_ButtomButtonWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ButtomButtonWidget_C.ExecuteUbergraph_ButtomButtonWidget");

	struct ExecuteUbergraph_ButtomButtonWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ButtomButtonWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ButtomButtonWidget_C.OnClickEventDispatcher__DelegateSignature
inline void UButtomButtonWidget_C::OnClickEventDispatcher__DelegateSignature(struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ButtomButtonWidget_C.OnClickEventDispatcher__DelegateSignature");

	struct OnClickEventDispatcher__DelegateSignature_Params {
		struct Unknown Widget;
	}; OnClickEventDispatcher__DelegateSignature_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.WB_ToolTipDesign_C.Set
inline void UWB_ToolTipDesign_C::Set(struct FText Tool, char& ) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.WB_ToolTipDesign_C.Set");

	struct Set_Params {
		struct FText Tool;
		char& ;
	}; Set_Params Params;

	Params.Tool = Tool;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	 = Params.;

}

// Function Setting.WB_ToolTipDesign_C.Construct
inline void UWB_ToolTipDesign_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.WB_ToolTipDesign_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.WB_ToolTipDesign_C.ExecuteUbergraph_WB_ToolTipDesign
inline void UWB_ToolTipDesign_C::ExecuteUbergraph_WB_ToolTipDesign(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.WB_ToolTipDesign_C.ExecuteUbergraph_WB_ToolTipDesign");

	struct ExecuteUbergraph_WB_ToolTipDesign_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_WB_ToolTipDesign_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.WB_ClassicComboBoxItem_C.Construct
inline void UWB_ClassicComboBoxItem_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.WB_ClassicComboBoxItem_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.WB_ClassicComboBoxItem_C.ExecuteUbergraph_WB_ClassicComboBoxItem
inline void UWB_ClassicComboBoxItem_C::ExecuteUbergraph_WB_ClassicComboBoxItem(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.WB_ClassicComboBoxItem_C.ExecuteUbergraph_WB_ClassicComboBoxItem");

	struct ExecuteUbergraph_WB_ClassicComboBoxItem_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_WB_ClassicComboBoxItem_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingDevWidget_C.Construct
inline void USettingDevWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingDevWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingDevWidget_C.BndEvt__ButtonOpenCheat_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void USettingDevWidget_C::BndEvt__ButtonOpenCheat_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingDevWidget_C.BndEvt__ButtonOpenCheat_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__ButtonOpenCheat_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__ButtonOpenCheat_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingDevWidget_C.ExecuteUbergraph_SettingDevWidget
inline void USettingDevWidget_C::ExecuteUbergraph_SettingDevWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingDevWidget_C.ExecuteUbergraph_SettingDevWidget");

	struct ExecuteUbergraph_SettingDevWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_SettingDevWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingSubButtonWidget_C.Click
inline void USettingSubButtonWidget_C::Click(int32_t Index, enum class Unknow Type) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingSubButtonWidget_C.Click");

	struct Click_Params {
		int32_t Index;
		enum class Unknow Type;
	}; Click_Params Params;

	Params.Index = Index;
	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingSubButtonWidget_C.Construct
inline void USettingSubButtonWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingSubButtonWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void USettingSubButtonWidget_C::BndEvt__Button_221_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_221_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_221_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
inline void USettingSubButtonWidget_C::BndEvt__Button_221_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_221_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_221_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
inline void USettingSubButtonWidget_C::BndEvt__Button_221_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_221_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_221_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingSubButtonWidget_C.UpdateText
inline void USettingSubButtonWidget_C::UpdateText() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingSubButtonWidget_C.UpdateText");

	struct UpdateText_Params {
		
	}; UpdateText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingSubButtonWidget_C.ExecuteUbergraph_SettingSubButtonWidget
inline void USettingSubButtonWidget_C::ExecuteUbergraph_SettingSubButtonWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingSubButtonWidget_C.ExecuteUbergraph_SettingSubButtonWidget");

	struct ExecuteUbergraph_SettingSubButtonWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_SettingSubButtonWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingSubButtonWidget_C.ClickEventDispatcher__DelegateSignature
inline void USettingSubButtonWidget_C::ClickEventDispatcher__DelegateSignature(int32_t Index, enum class Unknow Type) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingSubButtonWidget_C.ClickEventDispatcher__DelegateSignature");

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

// Function Setting.GraphicWidget_C.CustomEvent_1
inline void UGraphicWidget_C::CustomEvent_1(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.GraphicWidget_C.CustomEvent_1");

	struct CustomEvent_1_Params {
		struct Unknown Value;
	}; CustomEvent_1_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingF1.GraphicWidget_C.Construct
inline void UGraphicWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function SettingF1.GraphicWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.GraphicWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
inline void UGraphicWidget_C::BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.GraphicWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");

	struct BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params {
		float CurrentOffset;
	}; BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params Params;

	Params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.GraphicWidget_C.CustomEvent
inline void UGraphicWidget_C::CustomEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.GraphicWidget_C.CustomEvent");

	struct CustomEvent_Params {
		
	}; CustomEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.GraphicWidget_C.ExecuteUbergraph_GraphicWidget
inline void UGraphicWidget_C::ExecuteUbergraph_GraphicWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.GraphicWidget_C.ExecuteUbergraph_GraphicWidget");

	struct ExecuteUbergraph_GraphicWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_GraphicWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.WB_ClassicComboBoxButton_C.OnMouseButtonUp
inline struct Unknown UWB_ClassicComboBoxButton_C::OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.WB_ClassicComboBoxButton_C.OnMouseButtonUp");

	struct OnMouseButtonUp_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseButtonUp_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function Setting42926D5g.WB_ClassicComboBoxButton_C.OnMouseButtonDown
inline struct Unknown UWB_ClassicComboBoxButton_C::OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting42926D5g.WB_ClassicComboBoxButton_C.OnMouseButtonDown");

	struct OnMouseButtonDown_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseButtonDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function Setting.WB_ClassicComboBoxButton_C.Construct
inline void UWB_ClassicComboBoxButton_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.WB_ClassicComboBoxButton_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.WB_ClassicComboBoxButton_C.OnMouseEnter
inline void UWB_ClassicComboBoxButton_C::OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.WB_ClassicComboBoxButton_C.OnMouseEnter");

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

// Function Setting.WB_ClassicComboBoxButton_C.OnMouseLeave
inline void UWB_ClassicComboBoxButton_C::OnMouseLeave(struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.WB_ClassicComboBoxButton_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct Unknown& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function Setting.WB_ClassicComboBoxButton_C.ExecuteUbergraph_WB_ClassicComboBoxButton
inline void UWB_ClassicComboBoxButton_C::ExecuteUbergraph_WB_ClassicComboBoxButton(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.WB_ClassicComboBoxButton_C.ExecuteUbergraph_WB_ClassicComboBoxButton");

	struct ExecuteUbergraph_WB_ClassicComboBoxButton_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_WB_ClassicComboBoxButton_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.WB_ClassicToolTipDesign_C.Set
inline void UWB_ClassicToolTipDesign_C::Set(struct FText Tool, char& ) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.WB_ClassicToolTipDesign_C.Set");

	struct Set_Params {
		struct FText Tool;
		char& ;
	}; Set_Params Params;

	Params.Tool = Tool;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	 = Params.;

}

// Function Setting.WB_ClassicToolTipDesign_C.Construct
inline void UWB_ClassicToolTipDesign_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.WB_ClassicToolTipDesign_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.WB_ClassicToolTipDesign_C.ExecuteUbergraph_WB_ClassicToolTipDesign
inline void UWB_ClassicToolTipDesign_C::ExecuteUbergraph_WB_ClassicToolTipDesign(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.WB_ClassicToolTipDesign_C.ExecuteUbergraph_WB_ClassicToolTipDesign");

	struct ExecuteUbergraph_WB_ClassicToolTipDesign_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_WB_ClassicToolTipDesign_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.GetOrgKey
inline void USlotItemWidget_C::GetOrgKey(char IsSubKey, struct Unknown& Key) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.GetOrgKey");

	struct GetOrgKey_Params {
		char IsSubKey;
		struct Unknown& Key;
	}; GetOrgKey_Params Params;

	Params.IsSubKey = IsSubKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Key = Params.Key;

}

// Function Setting.SlotItemWidget_C.GetCurKey
inline void USlotItemWidget_C::GetCurKey(char IsSubKey, struct Unknown& Key) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.GetCurKey");

	struct GetCurKey_Params {
		char IsSubKey;
		struct Unknown& Key;
	}; GetCurKey_Params Params;

	Params.IsSubKey = IsSubKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Key = Params.Key;

}

// Function Setting.SlotItemWidget_C.OnKeyUp
inline struct Unknown USlotItemWidget_C::OnKeyUp(struct Unknown MyGeometry, struct Unknown InKeyEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.OnKeyUp");

	struct OnKeyUp_Params {
		struct Unknown MyGeometry;
		struct Unknown InKeyEvent;
		struct Unknown ReturnValue;

	}; OnKeyUp_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Setting.SlotItemWidget_C.CheckMinMaxValue
inline void USlotItemWidget_C::CheckMinMaxValue(float CheckValue, struct FString& RetString) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.CheckMinMaxValue");

	struct CheckMinMaxValue_Params {
		float CheckValue;
		struct FString& RetString;
	}; CheckMinMaxValue_Params Params;

	Params.CheckValue = CheckValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	RetString = Params.RetString;

}

// Function Setting.SlotItemWidget_C.CheckConvertFloatToString
inline void USlotItemWidget_C::CheckConvertFloatToString(float Value, struct FString& Ret) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.CheckConvertFloatToString");

	struct CheckConvertFloatToString_Params {
		float Value;
		struct FString& Ret;
	}; CheckConvertFloatToString_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Ret = Params.Ret;

}

// Function Setting.SlotItemWidget_C.SetEnable
inline void USlotItemWidget_C::SetEnable(char State) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.SetEnable");

	struct SetEnable_Params {
		char State;
	}; SetEnable_Params Params;

	Params.State = State;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.SetSliderValue
inline void USlotItemWidget_C::SetSliderValue(float InputValue, float& OutValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.SetSliderValue");

	struct SetSliderValue_Params {
		float InputValue;
		float& OutValue;
	}; SetSliderValue_Params Params;

	Params.InputValue = InputValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutValue = Params.OutValue;

}

// Function Setting.SlotItemWidget_C.GetKeyNameFromKey
inline void USlotItemWidget_C::GetKeyNameFromKey(struct Unknown Key, struct FString& Name) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.GetKeyNameFromKey");

	struct GetKeyNameFromKey_Params {
		struct Unknown Key;
		struct FString& Name;
	}; GetKeyNameFromKey_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Name = Params.Name;

}

// Function Setting.SlotItemWidget_C.OnGenerateWidget_1
inline struct Unknown USlotItemWidget_C::OnGenerateWidget_1(struct FString Item) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.OnGenerateWidget_1");

	struct OnGenerateWidget_1_Params {
		struct FString Item;
		struct Unknown ReturnValue;

	}; OnGenerateWidget_1_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Setting.SlotItemWidget_C.Construct
inline void USlotItemWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
inline void USlotItemWidget_C::BndEvt__Button_106_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_106_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_106_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
inline void USlotItemWidget_C::BndEvt__Button_106_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_106_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_106_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
inline void USlotItemWidget_C::BndEvt__Slider_138_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	struct BndEvt__Slider_138_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params {
		float Value;
	}; BndEvt__Slider_138_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.SetValue
inline void USlotItemWidget_C::SetValue(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.SetValue");

	struct SetValue_Params {
		float Value;
	}; SetValue_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__Delegate
inline void USlotItemWidget_C::BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__Delegate() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__Delegate");

	struct BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__Delegate_Params {
		
	}; BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__Delegate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
inline void USlotItemWidget_C::BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");

	struct BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params {
		struct FString SelectedItem;
		char SelectionType;
	}; BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params Params;

	Params.SelectedItem = SelectedItem;
	Params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature
inline void USlotItemWidget_C::BndEvt__Slider_138_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature");

	struct BndEvt__Slider_138_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature_Params {
		
	}; BndEvt__Slider_138_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__Delegate
inline void USlotItemWidget_C::BndEvt__Slider_138_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__Delegate() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__Delegate");

	struct BndEvt__Slider_138_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__Delegate_Params {
		
	}; BndEvt__Slider_138_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__Delegate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.Broadcast
inline void USlotItemWidget_C::Broadcast(float ValueIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.Broadcast");

	struct Broadcast_Params {
		float ValueIndex;
	}; Broadcast_Params Params;

	Params.ValueIndex = ValueIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.InitDataByKeyInfo
inline void USlotItemWidget_C::InitDataByKeyInfo(char IsSub, struct Unknown& Index, char IsInit) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.InitDataByKeyInfo");

	struct InitDataByKeyInfo_Params {
		char IsSub;
		struct Unknown& Index;
		char IsInit;
	}; InitDataByKeyInfo_Params Params;

	Params.IsSub = IsSub;
	Params.IsInit = IsInit;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Index = Params.Index;

}

// Function Setting.SlotItemWidget_C.BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_19_
inline void USlotItemWidget_C::BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_19_O(struct Unknown SelectedKey) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_19_");

	struct BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_19_O_Params {
		struct Unknown SelectedKey;
	}; BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_19_O_Params Params;

	Params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature
inline void USlotItemWidget_C::BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature(struct Unknown SelectedKey) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature");

	struct BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature_Params {
		struct Unknown SelectedKey;
	}; BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature_Params Params;

	Params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_10_Ot
inline void USlotItemWidget_C::BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_10_() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_10_Ot");

	struct BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_10__Params {
		
	}; BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_10__Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature
inline void USlotItemWidget_C::BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature");

	struct BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature_Params {
		
	}; BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.SetPercentValue
inline void USlotItemWidget_C::SetPercentValue(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.SetPercentValue");

	struct SetPercentValue_Params {
		float Value;
	}; SetPercentValue_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.SetSelectIndexComboBox
inline void USlotItemWidget_C::SetSelectIndexComboBox(int32_t Index, char BroadcastChange) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.SetSelectIndexComboBox");

	struct SetSelectIndexComboBox_Params {
		int32_t Index;
		char BroadcastChange;
	}; SetSelectIndexComboBox_Params Params;

	Params.Index = Index;
	Params.BroadcastChange = BroadcastChange;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.SetSelectIndexSelectBox
inline void USlotItemWidget_C::SetSelectIndexSelectBox(int32_t Index, char BroadcastChange) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.SetSelectIndexSelectBox");

	struct SetSelectIndexSelectBox_Params {
		int32_t Index;
		char BroadcastChange;
	}; SetSelectIndexSelectBox_Params Params;

	Params.Index = Index;
	Params.BroadcastChange = BroadcastChange;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.InitDataByAxisKeyInfo
inline void USlotItemWidget_C::InitDataByAxisKeyInfo(char IsSub, struct Unknown& Index, char IsInit) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.InitDataByAxisKeyInfo");

	struct InitDataByAxisKeyInfo_Params {
		char IsSub;
		struct Unknown& Index;
		char IsInit;
	}; InitDataByAxisKeyInfo_Params Params;

	Params.IsSub = IsSub;
	Params.IsInit = IsInit;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Index = Params.Index;

}

// Function Setting.SlotItemWidget_C.SubSelectingKeyChanged
inline void USlotItemWidget_C::SubSelectingKeyChanged(char IsSelectingKey) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.SubSelectingKeyChanged");

	struct SubSelectingKeyChanged_Params {
		char IsSelectingKey;
	}; SubSelectingKeyChanged_Params Params;

	Params.IsSelectingKey = IsSelectingKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.MainSelectingKeyChanged
inline void USlotItemWidget_C::MainSelectingKeyChanged(char IsSelectingKey) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.MainSelectingKeyChanged");

	struct MainSelectingKeyChanged_Params {
		char IsSelectingKey;
	}; MainSelectingKeyChanged_Params Params;

	Params.IsSelectingKey = IsSelectingKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.BndEvt__RightA_K2Node_ComponentBoundEvent_11_CilckBtn__DelegateSignature
inline void USlotItemWidget_C::BndEvt__RightA_K2Node_ComponentBoundEvent_11_CilckBtn__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.BndEvt__RightA_K2Node_ComponentBoundEvent_11_CilckBtn__DelegateSignature");

	struct BndEvt__RightA_K2Node_ComponentBoundEvent_11_CilckBtn__DelegateSignature_Params {
		
	}; BndEvt__RightA_K2Node_ComponentBoundEvent_11_CilckBtn__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.BndEvt__LeftA_K2Node_ComponentBoundEvent_13_CilckBtn__DelegateSignature
inline void USlotItemWidget_C::BndEvt__LeftA_K2Node_ComponentBoundEvent_13_CilckBtn__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.BndEvt__LeftA_K2Node_ComponentBoundEvent_13_CilckBtn__DelegateSignature");

	struct BndEvt__LeftA_K2Node_ComponentBoundEvent_13_CilckBtn__DelegateSignature_Params {
		
	}; BndEvt__LeftA_K2Node_ComponentBoundEvent_13_CilckBtn__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.BndEvt__Button_Type_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
inline void USlotItemWidget_C::BndEvt__Button_Type_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.BndEvt__Button_Type_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Type_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Type_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.ResolutionSelected
inline void USlotItemWidget_C::ResolutionSelected(int32_t Index, int32_t ResolutionX, int32_t ResolutionY) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.ResolutionSelected");

	struct ResolutionSelected_Params {
		int32_t Index;
		int32_t ResolutionX;
		int32_t ResolutionY;
	}; ResolutionSelected_Params Params;

	Params.Index = Index;
	Params.ResolutionX = ResolutionX;
	Params.ResolutionY = ResolutionY;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.SetDisplayMode
inline void USlotItemWidget_C::SetDisplayMode(char WindowMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.SetDisplayMode");

	struct SetDisplayMode_Params {
		char WindowMode;
	}; SetDisplayMode_Params Params;

	Params.WindowMode = WindowMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.ReMakeComboBox
inline void USlotItemWidget_C::ReMakeComboBox() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.ReMakeComboBox");

	struct ReMakeComboBox_Params {
		
	}; ReMakeComboBox_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.BndEvt__Button_82_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignatu
inline void USlotItemWidget_C::BndEvt__Button_82_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignatu() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.BndEvt__Button_82_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignatu");

	struct BndEvt__Button_82_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignatu_Params {
		
	}; BndEvt__Button_82_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignatu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.
inline void USlotItemWidget_C::(int32_t LanguageIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.");

	struct _Params {
		int32_t LanguageIndex;
	}; _Params Params;

	Params.LanguageIndex = LanguageIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.Destruct
inline void USlotItemWidget_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.BndEvt__LeftA_1_K2Node_ComponentBoundEvent_9_CilckBtn__DelegateSignature
inline void USlotItemWidget_C::BndEvt__LeftA_1_K2Node_ComponentBoundEvent_9_CilckBtn__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.BndEvt__LeftA_1_K2Node_ComponentBoundEvent_9_CilckBtn__DelegateSignature");

	struct BndEvt__LeftA_1_K2Node_ComponentBoundEvent_9_CilckBtn__DelegateSignature_Params {
		
	}; BndEvt__LeftA_1_K2Node_ComponentBoundEvent_9_CilckBtn__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.BndEvt__RightA_1_K2Node_ComponentBoundEvent_14_CilckBtn__DelegateSignature
inline void USlotItemWidget_C::BndEvt__RightA_1_K2Node_ComponentBoundEvent_14_CilckBtn__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.BndEvt__RightA_1_K2Node_ComponentBoundEvent_14_CilckBtn__DelegateSignature");

	struct BndEvt__RightA_1_K2Node_ComponentBoundEvent_14_CilckBtn__DelegateSignature_Params {
		
	}; BndEvt__RightA_1_K2Node_ComponentBoundEvent_14_CilckBtn__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.BndEvt__EditableText_79_K2Node_ComponentBoundEvent_15_OnEditableTextChangedEvent__DelegateSignature
inline void USlotItemWidget_C::BndEvt__EditableText_79_K2Node_ComponentBoundEvent_15_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.BndEvt__EditableText_79_K2Node_ComponentBoundEvent_15_OnEditableTextChangedEvent__DelegateSignature");

	struct BndEvt__EditableText_79_K2Node_ComponentBoundEvent_15_OnEditableTextChangedEvent__DelegateSignature_Params {
		struct FText& Text;
	}; BndEvt__EditableText_79_K2Node_ComponentBoundEvent_15_OnEditableTextChangedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function Setting.SlotItemWidget_C.BndEvt__EditableText_79_K2Node_ComponentBoundEvent_16_OnEditableTextCommittedEve
inline void USlotItemWidget_C::BndEvt__EditableText_79_K2Node_ComponentBoundEvent_16_OnEditableTextCommittedEve(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.BndEvt__EditableText_79_K2Node_ComponentBoundEvent_16_OnEditableTextCommittedEve");

	struct BndEvt__EditableText_79_K2Node_ComponentBoundEvent_16_OnEditableTextCommittedEve_Params {
		struct FText& Text;
		char CommitMethod;
	}; BndEvt__EditableText_79_K2Node_ComponentBoundEvent_16_OnEditableTextCommittedEve_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function Setting.SlotItemWidget_C.BndEvt__Button_440_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
inline void USlotItemWidget_C::BndEvt__Button_440_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.BndEvt__Button_440_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_440_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_440_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.
inline void USlotItemWidget_C::(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.");

	struct _Params {
		int32_t Index;
	}; _Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.SetKeyLock
inline void USlotItemWidget_C::SetKeyLock(char IsLock) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.SetKeyLock");

	struct SetKeyLock_Params {
		char IsLock;
	}; SetKeyLock_Params Params;

	Params.IsLock = IsLock;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.
inline void USlotItemWidget_C::(int32_t LanguageIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.");

	struct _Params {
		int32_t LanguageIndex;
	}; _Params Params;

	Params.LanguageIndex = LanguageIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.SetData
inline void USlotItemWidget_C::SetData() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.SetData");

	struct SetData_Params {
		
	}; SetData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SlotItemWidget_C.ExecuteUbergraph_SlotItemWidget
inline void USlotItemWidget_C::ExecuteUbergraph_SlotItemWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SlotItemWidget_C.ExecuteUbergraph_SlotItemWidget");

	struct ExecuteUbergraph_SlotItemWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_SlotItemWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.Generate
inline struct Unknown UDev::Generate(struct FString Item) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.Generate");

	struct Generate_Params {
		struct FString Item;
		struct Unknown ReturnValue;

	}; Generate_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Setting.Dev.Refresh
inline void UDev::Refresh(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.Refresh");

	struct Refresh_Params {
		float Value;
	}; Refresh_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.Refresh
inline void UDev::Refresh(char InIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.Refresh");

	struct Refresh_Params {
		char InIsChecked;
	}; Refresh_Params Params;

	Params.InIsChecked = InIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.Construct
inline void UDev::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.BndEvt__My
inline void UDev::BndEvt__My(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__My");

	struct BndEvt__My_Params {
		float Value;
	}; BndEvt__My_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.BndEvt__My
inline void UDev::BndEvt__My(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__My");

	struct BndEvt__My_Params {
		char bIsChecked;
	}; BndEvt__My_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.BndEvt__My
inline void UDev::BndEvt__My() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__My");

	struct BndEvt__My_Params {
		
	}; BndEvt__My_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.BndEvt__My
inline void UDev::BndEvt__My(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__My");

	struct BndEvt__My_Params {
		struct FText& Text;
		char CommitMethod;
	}; BndEvt__My_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function Setting.Dev.BndEvt__Button_0_K2Node_ComponentBoundEvent_248_OnButtonClickedEvent__DelegateSignature
inline void UDev::BndEvt__Button_0_K2Node_ComponentBoundEvent_248_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__Button_0_K2Node_ComponentBoundEvent_248_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_0_K2Node_ComponentBoundEvent_248_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_0_K2Node_ComponentBoundEvent_248_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.BndEvt__ButtonMemory_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature
inline void UDev::BndEvt__ButtonMemory_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__ButtonMemory_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__ButtonMemory_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__ButtonMemory_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.BndEvt__ButtonNetwork_K2Node_ComponentBoundEvent_0_
inline void UDev::BndEvt__ButtonNetwork_K2Node_ComponentBoundEvent_0_() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__ButtonNetwork_K2Node_ComponentBoundEvent_0_");

	struct BndEvt__ButtonNetwork_K2Node_ComponentBoundEvent_0__Params {
		
	}; BndEvt__ButtonNetwork_K2Node_ComponentBoundEvent_0__Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.BndEvt__ButtonParticles_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
inline void UDev::BndEvt__ButtonParticles_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__ButtonParticles_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__ButtonParticles_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__ButtonParticles_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.BndEvt__ButtonStatTick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
inline void UDev::BndEvt__ButtonStatTick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__ButtonStatTick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__ButtonStatTick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__ButtonStatTick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.BndEvt__ButtonSceneRendering_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__Delegate
inline void UDev::BndEvt__ButtonSceneRendering_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__Delegateure() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__ButtonSceneRendering_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__Delegate");

	struct BndEvt__ButtonSceneRendering_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__Delegateure_Params {
		
	}; BndEvt__ButtonSceneRendering_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__Delegateure_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.BndEvt__ButtonInitViews_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature
inline void UDev::BndEvt__ButtonInitViews_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__ButtonInitViews_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__ButtonInitViews_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__ButtonInitViews_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.BndEvt__ButtonEngine_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__Delegate
inline void UDev::BndEvt__ButtonEngine_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__Delegate() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__ButtonEngine_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__Delegate");

	struct BndEvt__ButtonEngine_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__Delegate_Params {
		
	}; BndEvt__ButtonEngine_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__Delegate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.BndEvt__MyComboBox_K2Node_ComponentBoundEvent_128_OnSelectionChangedEvent__DelegateSignature
inline void UDev::BndEvt__MyComboBox_K2Node_ComponentBoundEvent_128_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__MyComboBox_K2Node_ComponentBoundEvent_128_OnSelectionChangedEvent__DelegateSignature");

	struct BndEvt__MyComboBox_K2Node_ComponentBoundEvent_128_OnSelectionChangedEvent__DelegateSignature_Params {
		struct FString SelectedItem;
		char SelectionType;
	}; BndEvt__MyComboBox_K2Node_ComponentBoundEvent_128_OnSelectionChangedEvent__DelegateSignature_Params Params;

	Params.SelectedItem = SelectedItem;
	Params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.BndEvt__ButtonStatSlow_K2Node_ComponentBoundEvent_712_OnButtonClickedEvent__Dele
inline void UDev::BndEvt__ButtonStatSlow_K2Node_ComponentBoundEvent_712_OnButtonClickedEvent__Dele() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__ButtonStatSlow_K2Node_ComponentBoundEvent_712_OnButtonClickedEvent__Dele");

	struct BndEvt__ButtonStatSlow_K2Node_ComponentBoundEvent_712_OnButtonClickedEvent__Dele_Params {
		
	}; BndEvt__ButtonStatSlow_K2Node_ComponentBoundEvent_712_OnButtonClickedEvent__Dele_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.BndEvt__ButtonClearStats_K2Node_ComponentBoundEvent_739_OnButtonClickedEvent__De
inline void UDev::BndEvt__ButtonClearStats_K2Node_ComponentBoundEvent_739_OnButtonClickedEvent__De() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__ButtonClearStats_K2Node_ComponentBoundEvent_739_OnButtonClickedEvent__De");

	struct BndEvt__ButtonClearStats_K2Node_ComponentBoundEvent_739_OnButtonClickedEvent__De_Params {
		
	}; BndEvt__ButtonClearStats_K2Node_ComponentBoundEvent_739_OnButtonClickedEvent__De_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.BndEvt__TemporalAAFilterSizeEdit_K2Node_ComponentBoundEvent_881_OnEditableTextCommittedEvent__De
inline void UDev::BndEvt__TemporalAAFilterSizeEdit_K2Node_ComponentBoundEvent_881_OnEditableTextCommittedEvent__De(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__TemporalAAFilterSizeEdit_K2Node_ComponentBoundEvent_881_OnEditableTextCommittedEvent__De");

	struct BndEvt__TemporalAAFilterSizeEdit_K2Node_ComponentBoundEvent_881_OnEditableTextCommittedEvent__De_Params {
		struct FText& Text;
		char CommitMethod;
	}; BndEvt__TemporalAAFilterSizeEdit_K2Node_ComponentBoundEvent_881_OnEditableTextCommittedEvent__De_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function Setting.Dev.BndEvt__TemporalAACurrentFrameWeightEdit_K2Node_ComponentBoundEvent_1061_OnEditableTextCommittedEvent__DelegateSignature
inline void UDev::BndEvt__TemporalAACurrentFrameWeightEdit_K2Node_ComponentBoundEvent_1061_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__TemporalAACurrentFrameWeightEdit_K2Node_ComponentBoundEvent_1061_OnEditableTextCommittedEvent__DelegateSignature");

	struct BndEvt__TemporalAACurrentFrameWeightEdit_K2Node_ComponentBoundEvent_1061_OnEditableTextCommittedEvent__DelegateSignature_Params {
		struct FText& Text;
		char CommitMethod;
	}; BndEvt__TemporalAACurrentFrameWeightEdit_K2Node_ComponentBoundEvent_1061_OnEditableTextCommittedEvent__DelegateSignature_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function Setting.Dev.BndEvt__TemporalAASamplesEdit_K2Node_ComponentBoundEvent_1099_OnEditableTextCommittedEve
inline void UDev::BndEvt__TemporalAASamplesEdit_K2Node_ComponentBoundEvent_1099_OnEditableTextCommittedEve(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__TemporalAASamplesEdit_K2Node_ComponentBoundEvent_1099_OnEditableTextCommittedEve");

	struct BndEvt__TemporalAASamplesEdit_K2Node_ComponentBoundEvent_1099_OnEditableTextCommittedEve_Params {
		struct FText& Text;
		char CommitMethod;
	}; BndEvt__TemporalAASamplesEdit_K2Node_ComponentBoundEvent_1099_OnEditableTextCommittedEve_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function Setting.Dev.BndEvt__TonemapperSharpenEdit_K2Node_ComponentBoundEvent_1141_OnEditableTextCommittedEve
inline void UDev::BndEvt__TonemapperSharpenEdit_K2Node_ComponentBoundEvent_1141_OnEditableTextCommittedEveture(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__TonemapperSharpenEdit_K2Node_ComponentBoundEvent_1141_OnEditableTextCommittedEve");

	struct BndEvt__TonemapperSharpenEdit_K2Node_ComponentBoundEvent_1141_OnEditableTextCommittedEveture_Params {
		struct FText& Text;
		char CommitMethod;
	}; BndEvt__TonemapperSharpenEdit_K2Node_ComponentBoundEvent_1141_OnEditableTextCommittedEveture_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function Setting.Dev.BndEvt__TemporalAACatmullRomCheck_K2Node_ComponentBoundEvent_1217_OnCheckBoxComponentStateChangeg
inline void UDev::BndEvt__TemporalAACatmullRomCheck_K2Node_ComponentBoundEvent_1217_OnCheckBoxComponentStateChangeg(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__TemporalAACatmullRomCheck_K2Node_ComponentBoundEvent_1217_OnCheckBoxComponentStateChangeg");

	struct BndEvt__TemporalAACatmullRomCheck_K2Node_ComponentBoundEvent_1217_OnCheckBoxComponentStateChangeg_Params {
		char bIsChecked;
	}; BndEvt__TemporalAACatmullRomCheck_K2Node_ComponentBoundEvent_1217_OnCheckBoxComponentStateChangeg_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.BndEvt__TemporalAAPauseCorrectChek_K2Node_ComponentBoundEvent_1237_OnCheckBoxComponentStateChanged__DelegateSignature
inline void UDev::BndEvt__TemporalAAPauseCorrectChek_K2Node_ComponentBoundEvent_1237_OnCheckBoxComponentStateChanged__DelegateSignature(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__TemporalAAPauseCorrectChek_K2Node_ComponentBoundEvent_1237_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct BndEvt__TemporalAAPauseCorrectChek_K2Node_ComponentBoundEvent_1237_OnCheckBoxComponentStateChanged__DelegateSignature_Params {
		char bIsChecked;
	}; BndEvt__TemporalAAPauseCorrectChek_K2Node_ComponentBoundEvent_1237_OnCheckBoxComponentStateChanged__DelegateSignature_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
inline void UDev::BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.BndEvt__ComboBoxViewModes1_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature
inline void UDev::BndEvt__ComboBoxViewModes1_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.BndEvt__ComboBoxViewModes1_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature");

	struct BndEvt__ComboBoxViewModes1_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature_Params {
		struct FString SelectedItem;
		char SelectionType;
	}; BndEvt__ComboBoxViewModes1_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature_Params Params;

	Params.SelectedItem = SelectedItem;
	Params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.InitDefault
inline void UDev::InitDefault() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.InitDefault");

	struct InitDefault_Params {
		
	}; InitDefault_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.ExecuteUbergraph_DevWidget
inline void UDev::ExecuteUbergraph_DevWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.ExecuteUbergraph_DevWidget");

	struct ExecuteUbergraph_DevWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_DevWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.Pause
inline void UDev::Pause(char Pause) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.Pause");

	struct Pause_Params {
		char Pause;
	}; Pause_Params Params;

	Params.Pause = Pause;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Dev.Settings
inline void UDev::Settings() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Dev.Settings");

	struct Settings_Params {
		
	}; Settings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.GamePlayWidget_C.
inline void UGamePlayWidget_C::(enum class Unknow Type) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.GamePlayWidget_C.");

	struct _Params {
		enum class Unknow Type;
	}; _Params Params;

	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.GamePlayWidget_C.DelegateChangeValue_Event_1
inline void UGamePlayWidget_C::DelegateChangeValue_Event_1(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.GamePlayWidget_C.DelegateChangeValue_Event_1");

	struct DelegateChangeValue_Event_1_Params {
		struct Unknown Value;
	}; DelegateChangeValue_Event_1_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.GamePlayWidget_C.Construct
inline void UGamePlayWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.GamePlayWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.GamePlayWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
inline void UGamePlayWidget_C::BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.GamePlayWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");

	struct BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params {
		float CurrentOffset;
	}; BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params Params;

	Params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.GamePlayWidget_C.CustomEvent
inline void UGamePlayWidget_C::CustomEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.GamePlayWidget_C.CustomEvent");

	struct CustomEvent_Params {
		
	}; CustomEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.GamePlayWidget_C.ExecuteUbergraph_GamePlayWidget
inline void UGamePlayWidget_C::ExecuteUbergraph_GamePlayWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.GamePlayWidget_C.ExecuteUbergraph_GamePlayWidget");

	struct ExecuteUbergraph_GamePlayWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_GamePlayWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Key.EnableShowReplayType
inline void UKey::EnableShowReplayType(char& bRet) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Key.EnableShowReplayType");

	struct EnableShowReplayType_Params {
		char& bRet;
	}; EnableShowReplayType_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bRet = Params.bRet;

}

// Function Setting.Key.Construct
inline void UKey::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Key.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Key.CreateSlotList
inline void UKey::CreateSlotList() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Key.CreateSlotList");

	struct CreateSlotList_Params {
		
	}; CreateSlotList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Key.SetScrollLock
inline void UKey::SetScrollLock(char Lock) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Key.SetScrollLock");

	struct SetScrollLock_Params {
		char Lock;
	}; SetScrollLock_Params Params;

	Params.Lock = Lock;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Key.Destruct
inline void UKey::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Key.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Key.
inline void UKey::(struct Unknown InKey, struct Unknown Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Key.");

	struct _Params {
		struct Unknown InKey;
		struct Unknown Slot;
	}; _Params Params;

	Params.InKey = InKey;
	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Key.
inline void UKey::(char bIsDuplicate, struct Unknown InKey, struct FText KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Key.");

	struct _Params {
		char bIsDuplicate;
		struct Unknown InKey;
		struct FText KeyName;
	}; _Params Params;

	Params.bIsDuplicate = bIsDuplicate;
	Params.InKey = InKey;
	Params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Key.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
inline void UKey::BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Key.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");

	struct BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params {
		float CurrentOffset;
	}; BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params Params;

	Params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Key.
inline void UKey::() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Key.");

	struct _Params {
		
	}; _Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Key.
inline void UKey::(struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Key.");

	struct _Params {
		struct Unknown Widget;
	}; _Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Key.BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__Delegate
inline void UKey::BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__Delegate(struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Key.BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__Delegate");

	struct BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__Delegate_Params {
		struct Unknown Widget;
	}; BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__Delegate_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Key.ExecuteUbergraph_KeyWidget
inline void UKey::ExecuteUbergraph_KeyWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Key.ExecuteUbergraph_KeyWidget");

	struct ExecuteUbergraph_KeyWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_KeyWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.Key.EventDispatcher_KeyNotiMessage__DelegateSignature
inline void UKey::EventDispatcher_KeyNotiMessage__DelegateSignature(char IsDuplicate, struct Unknown Key, struct FText KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.Key.EventDispatcher_KeyNotiMessage__DelegateSignature");

	struct EventDispatcher_KeyNotiMessage__DelegateSignature_Params {
		char IsDuplicate;
		struct Unknown Key;
		struct FText KeyName;
	}; EventDispatcher_KeyNotiMessage__DelegateSignature_Params Params;

	Params.IsDuplicate = IsDuplicate;
	Params.Key = Key;
	Params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.CrossHairDetailInfo_C.SetData
inline void UCrossHairDetailInfo_C::SetData(struct FText Title, struct Unknown Image) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.CrossHairDetailInfo_C.SetData");

	struct SetData_Params {
		struct FText Title;
		struct Unknown Image;
	}; SetData_Params Params;

	Params.Title = Title;
	Params.Image = Image;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.CrossHairDetailInfo_C.ExecuteUbergraph_CrossHairDetailInfo
inline void UCrossHairDetailInfo_C::ExecuteUbergraph_CrossHairDetailInfo(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.CrossHairDetailInfo_C.ExecuteUbergraph_CrossHairDetailInfo");

	struct ExecuteUbergraph_CrossHairDetailInfo_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_CrossHairDetailInfo_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ControlWidget_C.Construct
inline void UControlWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ControlWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ControlWidget_C.DelegateChangeValue_Event_1
inline void UControlWidget_C::DelegateChangeValue_Event_1(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ControlWidget_C.DelegateChangeValue_Event_1");

	struct DelegateChangeValue_Event_1_Params {
		struct Unknown Value;
	}; DelegateChangeValue_Event_1_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ControlWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
inline void UControlWidget_C::BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ControlWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");

	struct BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params {
		float CurrentOffset;
	}; BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params Params;

	Params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ControlWidget_C.
inline void UControlWidget_C::() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ControlWidget_C.");

	struct _Params {
		
	}; _Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ControlWidget_C.ExecuteUbergraph_ControlWidget
inline void UControlWidget_C::ExecuteUbergraph_ControlWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ControlWidget_C.ExecuteUbergraph_ControlWidget");

	struct ExecuteUbergraph_ControlWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ControlWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.AudioWidget_C.Construct
inline void UAudioWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.AudioWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingB1.AudioWidget_C.
inline void UAudioWidget_C::(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingB1.AudioWidget_C.");

	struct _Params {
		struct Unknown Value;
	}; _Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingB1.AudioWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
inline void UAudioWidget_C::BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function SettingB1.AudioWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");

	struct BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params {
		float CurrentOffset;
	}; BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params Params;

	Params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SettingWidget_.AudioWidget_C.CustomEvent
inline void UAudioWidget_C::CustomEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function SettingWidget_.AudioWidget_C.CustomEvent");

	struct CustomEvent_Params {
		
	}; CustomEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.AudioWidget_C.ExecuteUbergraph_AudioWidget
inline void UAudioWidget_C::ExecuteUbergraph_AudioWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.AudioWidget_C.ExecuteUbergraph_AudioWidget");

	struct ExecuteUbergraph_AudioWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_AudioWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ConfirmPopupWidget_C.SetTimerCount
inline void UConfirmPopupWidget_C::SetTimerCount() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ConfirmPopupWidget_C.SetTimerCount");

	struct SetTimerCount_Params {
		
	}; SetTimerCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ConfirmPopupWidget_C.Init
inline void UConfirmPopupWidget_C::Init(struct Unknown SettingWidget, int32_t Index, enum class Unknow SelectType, char PopupType) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ConfirmPopupWidget_C.Init");

	struct Init_Params {
		struct Unknown SettingWidget;
		int32_t Index;
		enum class Unknow SelectType;
		char PopupType;
	}; Init_Params Params;

	Params.SettingWidget = SettingWidget;
	Params.Index = Index;
	Params.SelectType = SelectType;
	Params.PopupType = PopupType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ConfirmPopupWidget_C.OnMouseWheel
inline struct Unknown UConfirmPopupWidget_C::OnMouseWheel(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ConfirmPopupWidget_C.OnMouseWheel");

	struct OnMouseWheel_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseWheel_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function Setting.ConfirmPopupWidget_C.OnMouseButtonDown
inline struct Unknown UConfirmPopupWidget_C::OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ConfirmPopupWidget_C.OnMouseButtonDown");

	struct OnMouseButtonDown_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseButtonDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function Setting.ConfirmPopupWidget_C.Construct
inline void UConfirmPopupWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ConfirmPopupWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ConfirmPopupWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
inline void UConfirmPopupWidget_C::BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ConfirmPopupWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ConfirmPopupWidget_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature
inline void UConfirmPopupWidget_C::BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ConfirmPopupWidget_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ConfirmPopupWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
inline void UConfirmPopupWidget_C::BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ConfirmPopupWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ConfirmPopupWidget_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignatu
inline void UConfirmPopupWidget_C::BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignatu() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ConfirmPopupWidget_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignatu");

	struct BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignatu_Params {
		
	}; BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignatu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ConfirmPopupWidget_C.CancelImpl
inline void UConfirmPopupWidget_C::CancelImpl() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ConfirmPopupWidget_C.CancelImpl");

	struct CancelImpl_Params {
		
	}; CancelImpl_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ConfirmPopupWidget_C.Destruct
inline void UConfirmPopupWidget_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ConfirmPopupWidget_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.ConfirmPopupWidget_C.ExecuteUbergraph_ConfirmPopupWidget
inline void UConfirmPopupWidget_C::ExecuteUbergraph_ConfirmPopupWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.ConfirmPopupWidget_C.ExecuteUbergraph_ConfirmPopupWidget");

	struct ExecuteUbergraph_ConfirmPopupWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ConfirmPopupWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.CreateWidgetImpl
inline void USettingMainWidget_C::CreateWidgetImpl(struct Unknown* WidgetClass, struct Unknown& Out, int32_t& OutSwitcherIndex, int32_t& RealIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.CreateWidgetImpl");

	struct CreateWidgetImpl_Params {
		struct Unknown* WidgetClass;
		struct Unknown& Out;
		int32_t& OutSwitcherIndex;
		int32_t& RealIndex;
	}; CreateWidgetImpl_Params Params;

	Params.WidgetClass = WidgetClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Out = Params.Out;
	OutSwitcherIndex = Params.OutSwitcherIndex;
	RealIndex = Params.RealIndex;

}

// Function Setting.SettingMainWidget_C.CheckConfirmPopup
inline void USettingMainWidget_C::CheckConfirmPopup(int32_t Index, enum class Unknow Type) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.CheckConfirmPopup");

	struct CheckConfirmPopup_Params {
		int32_t Index;
		enum class Unknow Type;
	}; CheckConfirmPopup_Params Params;

	Params.Index = Index;
	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.GetSubList
inline struct TArray<Unknown> USettingMainWidget_C::GetSubList() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.GetSubList");

	struct GetSubList_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetSubList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Setting.SettingMainWidget_C.CreateWidget
inline void USettingMainWidget_C::CreateWidget(int32_t Index, int32_t& RealIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.CreateWidget");

	struct CreateWidget_Params {
		int32_t Index;
		int32_t& RealIndex;
	}; CreateWidget_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	RealIndex = Params.RealIndex;

}

// Function Setting.SettingMainWidget_C.Construct
inline void USettingMainWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.Select
inline void USettingMainWidget_C::Select(int32_t Index, enum class Unknow Type) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.Select");

	struct Select_Params {
		int32_t Index;
		enum class Unknow Type;
	}; Select_Params Params;

	Params.Index = Index;
	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.Binding
inline void USettingMainWidget_C::Binding() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.Binding");

	struct Binding_Params {
		
	}; Binding_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature
inline void USettingMainWidget_C::BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature(struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature");

	struct BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature_Params {
		struct Unknown Widget;
	}; BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.
inline void USettingMainWidget_C::(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.");

	struct _Params {
		struct Unknown Value;
	}; _Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignatu
inline void USettingMainWidget_C::BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignatuOT(struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignatu");

	struct BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignatuOT_Params {
		struct Unknown Widget;
	}; BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignatuOT_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature
inline void USettingMainWidget_C::BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature(struct Unknown Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature");

	struct BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature_Params {
		struct Unknown Widget;
	}; BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.RefreshDeve
inline void USettingMainWidget_C::RefreshDeve() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.RefreshDeve");

	struct RefreshDeve_Params {
		
	}; RefreshDeve_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.BndEvt__Slider_298_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
inline void USettingMainWidget_C::BndEvt__Slider_298_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.BndEvt__Slider_298_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature");

	struct BndEvt__Slider_298_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params {
		float Value;
	}; BndEvt__Slider_298_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.CheckHaveApplyList
inline void USettingMainWidget_C::CheckHaveApplyList(enum class Unknow Type) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.CheckHaveApplyList");

	struct CheckHaveApplyList_Params {
		enum class Unknow Type;
	}; CheckHaveApplyList_Params Params;

	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.Close
inline void USettingMainWidget_C::Close() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.Close");

	struct Close_Params {
		
	}; Close_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.BndEvt__Button_112_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
inline void USettingMainWidget_C::BndEvt__Button_112_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.BndEvt__Button_112_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_112_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_112_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.CreateConfirmWidget
inline void USettingMainWidget_C::CreateConfirmWidget(int32_t TabIdx, enum class Unknow SelectTabType, int32_t PopupType) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.CreateConfirmWidget");

	struct CreateConfirmWidget_Params {
		int32_t TabIdx;
		enum class Unknow SelectTabType;
		int32_t PopupType;
	}; CreateConfirmWidget_Params Params;

	Params.TabIdx = TabIdx;
	Params.SelectTabType = SelectTabType;
	Params.PopupType = PopupType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.ApplyImpl
inline void USettingMainWidget_C::ApplyImpl(char UseConfimPopup) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.ApplyImpl");

	struct ApplyImpl_Params {
		char UseConfimPopup;
	}; ApplyImpl_Params Params;

	Params.UseConfimPopup = UseConfimPopup;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.Set
inline void USettingMainWidget_C::Set(struct Unknown Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.Set");

	struct Set_Params {
		struct Unknown Slot;
	}; Set_Params Params;

	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.
inline void USettingMainWidget_C::(struct Unknown Value, char IsSubKey) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.");

	struct _Params {
		struct Unknown Value;
		char IsSubKey;
	}; _Params Params;

	Params.Value = Value;
	Params.IsSubKey = IsSubKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.KeyNotiMessage
inline void USettingMainWidget_C::KeyNotiMessage(char IsDuplicate, struct Unknown Key, struct FText KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.KeyNotiMessage");

	struct KeyNotiMessage_Params {
		char IsDuplicate;
		struct Unknown Key;
		struct FText KeyName;
	}; KeyNotiMessage_Params Params;

	Params.IsDuplicate = IsDuplicate;
	Params.Key = Key;
	Params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.
inline void USettingMainWidget_C::() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.");

	struct _Params {
		
	}; _Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.Update
inline void USettingMainWidget_C::Update(int32_t LanguageIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.Update");

	struct Update_Params {
		int32_t LanguageIndex;
	}; Update_Params Params;

	Params.LanguageIndex = LanguageIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.UpdateVideoMemoryUsageGraph
inline void USettingMainWidget_C::UpdateVideoMemoryUsageGraph(int32_t UsedVideoMemory, int32_t TotalVideoMemory, int32_t CurrentProcessUsage, int32_t OtherProcessUsage) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.UpdateVideoMemoryUsageGraph");

	struct UpdateVideoMemoryUsageGraph_Params {
		int32_t UsedVideoMemory;
		int32_t TotalVideoMemory;
		int32_t CurrentProcessUsage;
		int32_t OtherProcessUsage;
	}; UpdateVideoMemoryUsageGraph_Params Params;

	Params.UsedVideoMemory = UsedVideoMemory;
	Params.TotalVideoMemory = TotalVideoMemory;
	Params.CurrentProcessUsage = CurrentProcessUsage;
	Params.OtherProcessUsage = OtherProcessUsage;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.ExecuteUbergraph_SettingMainWidget
inline void USettingMainWidget_C::ExecuteUbergraph_SettingMainWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.ExecuteUbergraph_SettingMainWidget");

	struct ExecuteUbergraph_SettingMainWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_SettingMainWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Setting.SettingMainWidget_C.EnableButtonEventDispatcher__DelegateSignature
inline void USettingMainWidget_C::EnableButtonEventDispatcher__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function Setting.SettingMainWidget_C.EnableButtonEventDispatcher__DelegateSignature");

	struct EnableButtonEventDispatcher__DelegateSignature_Params {
		
	}; EnableButtonEventDispatcher__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

