// WidgetBlueprintGeneratedClass WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C
struct UWBP_SPS_UseItemSelectionIcon_C : UUserWidget {
	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown IconImage; // 0x250 (8)
	struct FMulticastInlineDelegate Hovered; // 0x258 (16)
	struct FMulticastInlineDelegate Unhovered; // 0x268 (16)
	struct FMulticastInlineDelegate Pressed; // 0x278 (16)
	struct Unknown SmartPingComponent; // 0x288 (8)
	int32_t Index; // 0x290 (4)
	struct Unknown TintColorToUse; // 0x294 (16)
	char Found : 0; // 0x2A4 (1)
	struct Unknown Settings; // 0x2A8 (184)
	struct FName TableID; // 0x360 (8)
	struct TSoftObjectPtr<Unknown> Image; // 0x368 (40)

	void OnLoaded_6834BC7D48AF986BC5969685C4D6D2B3(struct Unknown Loaded); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.OnLoaded_6834BC7D48AF986BC5969685C4D6D2B3(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Unselected(); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Unselected(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Construct(); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Selected(); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Selected(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Init(struct Unknown Data, struct FName ItemKey, char IsHaveItem); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Init(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_WBP_SPS_UseItemSelectionIcon(int32_t EntryPoint); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.ExecuteUbergraph_WBP_SPS_UseItemSelectionIcon(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Pressed__DelegateSignature(); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Pressed__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Unhovered__DelegateSignature(int32_t Index); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Unhovered__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Hovered__DelegateSignature(int32_t Index); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Hovered__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

