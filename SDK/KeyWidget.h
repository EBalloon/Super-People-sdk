// WidgetBlueprintGeneratedClass KeyWidget.KeyWidget_C
class UKeyWidget_C : public UBravoHotelSettingSubWidget {

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

	void EnableShowReplayType(char& bRet); // Function KeyWidget.KeyWidget_C.EnableShowReplayType(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function KeyWidget.KeyWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CreateSlotList(); // Function KeyWidget.KeyWidget_C.CreateSlotList(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetScrollLock(char Lock); // Function KeyWidget.KeyWidget_C.SetScrollLock(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Destruct(); // Function KeyWidget.KeyWidget_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (struct Unknown InKey, struct Unknown Slot); // Function KeyWidget.KeyWidget_C.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (char bIsDuplicate, struct Unknown InKey, struct FText KeyName); // Function KeyWidget.KeyWidget_C.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ScrollBox_54_K2Node_Com(float CurrentOffset); // Function KeyWidget.KeyWidget_C.BndEvt__ScrollBox_54_K2Node_Com(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (); // Function KeyWidget.KeyWidget_C.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void (struct Unknown Widget); // Function KeyWidget.KeyWidget_C.(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature(struct Unknown Widget); // Function KeyWidget.KeyWidget_C.BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_KeyWidget(int32_t EntryPoint); // Function KeyWidget.KeyWidget_C.ExecuteUbergraph_KeyWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void EventDispatcher_KeyNotiMessage__DelegateSignature(char IsDuplicate, struct Unknown Key, struct FText KeyName); // Function KeyWidget.KeyWidget_C.EventDispatcher_KeyNotiMessage__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

