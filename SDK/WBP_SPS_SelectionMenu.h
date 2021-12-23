// WidgetBlueprintGeneratedClass WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C
class UWBP_SPS_SelectionMenu_C : UUserWidget {
	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Canvas; // 0x250 (8)
	struct Unknown CenterCursor; // 0x258 (8)
	struct Unknown DisplayText; // 0x260 (8)
	struct Unknown Image; // 0x268 (8)
	struct Unknown Image_2; // 0x270 (8)
	struct Unknown Image_3; // 0x278 (8)
	struct Unknown Image_4; // 0x280 (8)
	struct Unknown Image_5; // 0x288 (8)
	struct Unknown Image_6; // 0x290 (8)
	struct Unknown Image_7; // 0x298 (8)
	struct Unknown Image_274; // 0x2A0 (8)
	struct Unknown Message0; // 0x2A8 (8)
	struct Unknown Message2; // 0x2B0 (8)
	struct Unknown Message3; // 0x2B8 (8)
	struct Unknown Message3_1; // 0x2C0 (8)
	struct Unknown Message3_2; // 0x2C8 (8)
	struct Unknown Message3_3; // 0x2D0 (8)
	struct Unknown Message3_4; // 0x2D8 (8)
	struct Unknown Message3_5; // 0x2E0 (8)
	struct Unknown Message3_6; // 0x2E8 (8)
	struct Unknown Message3_7; // 0x2F0 (8)
	struct Unknown Message3_8; // 0x2F8 (8)
	struct Unknown Message4; // 0x300 (8)
	struct Unknown Message5; // 0x308 (8)
	struct Unknown Message6; // 0x310 (8)
	struct Unknown Message7; // 0x318 (8)
	struct Unknown Messgae1; // 0x320 (8)
	struct Unknown Over1; // 0x328 (8)
	struct Unknown Over2; // 0x330 (8)
	struct Unknown Over3; // 0x338 (8)
	struct Unknown Over4; // 0x340 (8)
	struct Unknown Over5; // 0x348 (8)
	struct Unknown Over6; // 0x350 (8)
	struct Unknown Over7; // 0x358 (8)
	struct Unknown Over8; // 0x360 (8)
	struct Unknown Slot0; // 0x368 (8)
	struct Unknown Slot1; // 0x370 (8)
	struct Unknown Slot2; // 0x378 (8)
	struct Unknown Slot3; // 0x380 (8)
	struct Unknown Slot4; // 0x388 (8)
	struct Unknown Slot5; // 0x390 (8)
	struct Unknown Slot6; // 0x398 (8)
	struct Unknown Slot7; // 0x3A0 (8)
	struct Unknown Type; // 0x3A8 (8)
	struct Unknown U; // 0x3B0 (8)
	struct Unknown WidgetSwitcher_133; // 0x3B8 (8)
	struct TArray<Unknown> SelectionWidgets; // 0x3C0 (16)
	struct Unknown MenuCenter; // 0x3D0 (8)
	struct Unknown ReferenceVector; // 0x3D8 (12)
	struct FMulticastInlineDelegate Selected; // 0x3E8 (16)
	struct Unknown SmartPingComponent; // 0x3F8 (8)
	struct Unknown RadialMenuMaterial; // 0x400 (8)
	int32_t SelectedIndex; // 0x408 (4)
	int32_t StartIndex; // 0x40C (4)
	float AngleSize; // 0x410 (4)
	float DistanceFromCenter; // 0x414 (4)
	int32_t Divisions; // 0x418 (4)
	float SelectionToleranceFromCenter; // 0x41C (4)
	struct FMulticastInlineDelegate Hovered; // 0x420 (16)
	struct FMulticastInlineDelegate ClearPing; // 0x430 (16)
	char IsPingType : 0; // 0x440 (1)
	char Enable : 0; // 0x441 (1)

	void GetRequestTextFromIndex(int32_t Index, struct Unknown& Text); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.GetRequestTextFromIndex(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(int32_t Index, struct Unknown& Icon); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void MakeSmartpingInfo(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.MakeSmartpingInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct Unknown OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetVisibleOverImage(int32_t SelectIndex, enum class Unknow VisibleType); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.SetVisibleOverImage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetActiveSelection(int32_t Index); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.SetActiveSelection(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ClearActiveSelection(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ClearActiveSelection(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CancelSelection(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.CancelSelection(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ConfirmSelection(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ConfirmSelection(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	int32_t CalculateSelectionIndexFromVector(struct Unknown InputVector); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.CalculateSelectionIndexFromVector(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct Unknown OnMouseMove(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.OnMouseMove(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Construct(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Destruct(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ConstructMenuElements(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ConstructMenuElements(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetSelectedIndex(int32_t SelectedIndex); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.SetSelectedIndex(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void m_1(int32_t Index, struct Unknown Settings); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.m_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void TogglePingType(char NewIsPingType); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.TogglePingType(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_WBP_SPS_SelectionMenu(int32_t EntryPoint); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ExecuteUbergraph_WBP_SPS_SelectionMenu(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ClearPing__DelegateSignature(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ClearPing__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Hovered__DelegateSignature(struct Unknown Settings, char IsPingType); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Hovered__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Selected__DelegateSignature(struct Unknown Selected, struct FName ID, char IsPingType, int32_t RequestMessageIndex); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Selected__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

