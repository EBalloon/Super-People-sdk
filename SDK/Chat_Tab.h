// WidgetBlueprintGeneratedClass Chat_Tab.Chat_Tab_C
class UChat_Tab_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Button; // 0x250 (8)
	struct Unknown Button; // 0x258 (8)
	struct FText Button; // 0x260 (24)
	struct Unknown Active; // 0x278 (16)
	struct Unknown Inactive; // 0x288 (16)
	char Tab : 0; // 0x298 (1)
	struct Unknown Current; // 0x29C (16)
	struct Unknown Parent; // 0x2B0 (8)
	struct Unknown Chat; // 0x2B8 (8)
	struct Unknown Notification; // 0x2C0 (16)
	float Interp; // 0x2D0 (4)
	float Notification; // 0x2D4 (4)
	float Notification; // 0x2D8 (4)
	char Fading : 0; // 0x2DC (1)

	struct Unknown OnFocusReceived(struct Unknown MyGeometry, struct Unknown InFocusEvent); // Function Chat_Tab.Chat_Tab_C.OnFocusReceived(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function Chat_Tab.Chat_Tab_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Button_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature(); // Function Chat_Tab.Chat_Tab_C.BndEvt__Button_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(); // Function Chat_Tab.Chat_Tab_C.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Flash(); // Function Chat_Tab.Chat_Tab_C.Flash(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function Chat_Tab.Chat_Tab_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_Chat_Tab(int32_t EntryPoint); // Function Chat_Tab.Chat_Tab_C.ExecuteUbergraph_Chat_Tab(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

