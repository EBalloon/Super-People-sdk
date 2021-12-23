// WidgetBlueprintGeneratedClass WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C
struct UWBP_SPS_UseItemSelectionMenu_C : UUserWidget {
	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Bg1; // 0x250 (8)
	struct Unknown bg2; // 0x258 (8)
	struct Unknown Bg3; // 0x260 (8)
	struct Unknown Bg4; // 0x268 (8)
	struct Unknown Bg5; // 0x270 (8)
	struct Unknown Bg6; // 0x278 (8)
	struct Unknown Bg7; // 0x280 (8)
	struct Unknown Bg8; // 0x288 (8)
	struct Unknown Canvas; // 0x290 (8)
	struct Unknown CenterCursor; // 0x298 (8)
	struct Unknown DisplayText; // 0x2A0 (8)
	struct Unknown IconImage; // 0x2A8 (8)
	struct Unknown Index1; // 0x2B0 (8)
	struct Unknown Index2; // 0x2B8 (8)
	struct Unknown Index3; // 0x2C0 (8)
	struct Unknown Index4; // 0x2C8 (8)
	struct Unknown Index5; // 0x2D0 (8)
	struct Unknown Index6; // 0x2D8 (8)
	struct Unknown Index7; // 0x2E0 (8)
	struct Unknown Index8; // 0x2E8 (8)
	struct Unknown Key1; // 0x2F0 (8)
	struct Unknown Key2; // 0x2F8 (8)
	struct Unknown Key3; // 0x300 (8)
	struct Unknown Key4; // 0x308 (8)
	struct Unknown Key5; // 0x310 (8)
	struct Unknown Key6; // 0x318 (8)
	struct Unknown Key7; // 0x320 (8)
	struct Unknown Key8; // 0x328 (8)
	struct Unknown Message2; // 0x330 (8)
	struct Unknown Message3; // 0x338 (8)
	struct Unknown Message3_1; // 0x340 (8)
	struct Unknown Message3_2; // 0x348 (8)
	struct Unknown Message3_3; // 0x350 (8)
	struct Unknown Message3_4; // 0x358 (8)
	struct Unknown Message3_5; // 0x360 (8)
	struct Unknown Message3_6; // 0x368 (8)
	struct Unknown Message3_7; // 0x370 (8)
	struct Unknown Message3_8; // 0x378 (8)
	struct Unknown Message4; // 0x380 (8)
	struct Unknown Message5; // 0x388 (8)
	struct Unknown Message6; // 0x390 (8)
	struct Unknown Message7; // 0x398 (8)
	struct Unknown Message8; // 0x3A0 (8)
	struct Unknown Messgae1; // 0x3A8 (8)
	struct Unknown Over1; // 0x3B0 (8)
	struct Unknown Over2; // 0x3B8 (8)
	struct Unknown Over3; // 0x3C0 (8)
	struct Unknown Over4; // 0x3C8 (8)
	struct Unknown Over5; // 0x3D0 (8)
	struct Unknown Over6; // 0x3D8 (8)
	struct Unknown Over7; // 0x3E0 (8)
	struct Unknown Over8; // 0x3E8 (8)
	struct Unknown UseSlot1; // 0x3F0 (8)
	struct Unknown UseSlot2; // 0x3F8 (8)
	struct Unknown UseSlot3; // 0x400 (8)
	struct Unknown UseSlot4; // 0x408 (8)
	struct Unknown UseSlot5; // 0x410 (8)
	struct Unknown UseSlot6; // 0x418 (8)
	struct Unknown UseSlot7; // 0x420 (8)
	struct Unknown UseSlot8; // 0x428 (8)
	struct Unknown U; // 0x430 (8)
	struct Unknown WidgetSwitcher_133; // 0x438 (8)
	struct TArray<Unknown> SelectionWidgets; // 0x440 (16)
	struct Unknown MenuCenter; // 0x450 (8)
	struct Unknown ReferenceVector; // 0x458 (12)
	struct FMulticastInlineDelegate Selected; // 0x468 (16)
	int32_t SelectedIndex; // 0x478 (4)
	float AngleSize; // 0x47C (4)
	float DistanceFromCenter; // 0x480 (4)
	int32_t Divisions; // 0x484 (4)
	float SelectionToleranceFromCenter; // 0x488 (4)
	struct FMulticastInlineDelegate Hovered; // 0x490 (16)
	struct FMulticastInlineDelegate ClearPing; // 0x4A0 (16)
	struct FText Title; // 0x4B0 (24)
	struct FName ItemKey; // 0x4C8 (8)
	float OverOpacity; // 0x4D0 (4)
	float BgOpacity; // 0x4D4 (4)
	struct TMap<Unknown, Unknown>Unknown List; // 0x4D8 (80)
	enum class Unknow IndexTextVisible; // 0x528 (1)
	char NewVar_1 : 0; // 0x529 (1)
	struct TSoftObjectPtr<Unknown> Image; // 0x530 (40)
	float TextOpacity; // 0x558 (4)

	void Get(int32_t Index, struct Unknown& Icon); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct Unknown OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetVisibleOverImage(int32_t SelectIndex, enum class Unknow VisibleType); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.SetVisibleOverImage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetActiveSelection(int32_t Index); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.SetActiveSelection(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ClearActiveSelection(); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ClearActiveSelection(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CancelSelection(); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.CancelSelection(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ConfirmSelection(); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ConfirmSelection(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	int32_t CalculateSelectionIndexFromVector(struct Unknown InputVector); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.CalculateSelectionIndexFromVector(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct Unknown OnMouseMove(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.OnMouseMove(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnLoaded_B2D87D22498868B7225333B61217C4AA(struct Unknown Loaded); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.OnLoaded_B2D87D22498868B7225333B61217C4AA(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Construct(); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Destruct(); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ConstructMenuElements(); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ConstructMenuElements(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetSelectedIndex(int32_t SelectedIndex); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.SetSelectedIndex(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void a_2(int32_t Index); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.a_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AssetLoad(struct TSoftObjectPtr<Unknown> Image); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.AssetLoad(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_WBP_SPS_UseItemSelectionMenu(int32_t EntryPoint); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ExecuteUbergraph_WBP_SPS_UseItemSelectionMenu(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ClearPing__DelegateSignature(); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ClearPing__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Hovered__DelegateSignature(struct FName ItemKey); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Hovered__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Selected__DelegateSignature(struct FName ItemKey); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Selected__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

