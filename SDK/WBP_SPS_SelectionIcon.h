// WidgetBlueprintGeneratedClass WBP_SPS_SelectionIcon.WBP_SPS_SelectionIcon_C
class UWBP_SPS_SelectionIcon_C : public UUserWidget {

public:

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

	void Construct(); // Function WBP_SPS_SelectionIcon.WBP_SPS_SelectionIcon_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Unselected(); // Function WBP_SPS_SelectionIcon.WBP_SPS_SelectionIcon_C.Unselected(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Selected(); // Function WBP_SPS_SelectionIcon.WBP_SPS_SelectionIcon_C.Selected(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(struct Unknown Data); // Function WBP_SPS_SelectionIcon.WBP_SPS_SelectionIcon_C.Init(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_WBP_SPS_SelectionIcon(int32_t EntryPoint); // Function WBP_SPS_SelectionIcon.WBP_SPS_SelectionIcon_C.ExecuteUbergraph_WBP_SPS_SelectionIcon(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Pressed__DelegateSignature(); // Function WBP_SPS_SelectionIcon.WBP_SPS_SelectionIcon_C.Pressed__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Unhovered__DelegateSignature(int32_t Index); // Function WBP_SPS_SelectionIcon.WBP_SPS_SelectionIcon_C.Unhovered__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Hovered__DelegateSignature(int32_t Index, struct Unknown Settings); // Function WBP_SPS_SelectionIcon.WBP_SPS_SelectionIcon_C.Hovered__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

