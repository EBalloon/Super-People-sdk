// WidgetBlueprintGeneratedClass Chat_MainWidget.Chat_MainWidget_C
class UChat_MainWidget_C : UUserWidget {
	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Chat; // 0x250 (8)
	struct Unknown Chat; // 0x258 (8)
	struct Unknown Tab; // 0x260 (8)
	struct Unknown Whole; // 0x268 (8)
	struct Unknown Chat; // 0x270 (8)
	struct Unknown CurrentDialogBox; // 0x278 (8)
	float Chat; // 0x280 (4)
	char Faded : 0; // 0x284 (1)
	char Was : 0; // 0x285 (1)
	char Use : 0; // 0x286 (1)
	int32_t Message; // 0x288 (4)
	struct FString Text; // 0x290 (16)
	struct FString Text; // 0x2A0 (16)
	int32_t ; // 0x2B0 (4)
	int32_t Clear; // 0x2B4 (4)
	char Show : 0; // 0x2B8 (1)

	struct FText Get(); // Function Chat_MainWidget.Chat_MainWidget_C.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void PushItem(struct FString UserName, struct FString Text, struct FString Group); // Function Chat_MainWidget.Chat_MainWidget_C.PushItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Construct(); // Function Chat_MainWidget.Chat_MainWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__Chat(struct FText& Text, char CommitMethod); // Function Chat_MainWidget.Chat_MainWidget_C.BndEvt__Chat(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Reset(); // Function Chat_MainWidget.Chat_MainWidget_C.Reset(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(); // Function Chat_MainWidget.Chat_MainWidget_C.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function Chat_MainWidget.Chat_MainWidget_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function Chat_MainWidget.Chat_MainWidget_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__Chat(struct FText& Text); // Function Chat_MainWidget.Chat_MainWidget_C.BndEvt__Chat(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Widget(); // Function Chat_MainWidget.Chat_MainWidget_C.Widget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Widget(); // Function Chat_MainWidget.Chat_MainWidget_C.Widget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function Chat_MainWidget.Chat_MainWidget_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_Chat_MainWidget(int32_t EntryPoint); // Function Chat_MainWidget.Chat_MainWidget_C.ExecuteUbergraph_Chat_MainWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

