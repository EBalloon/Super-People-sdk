// WidgetBlueprintGeneratedClass UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C
class UUW-Inventory_ProximityBoxSlot_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UTextBlock Title; // 0x250 (8)
	struct UWrapBox WB-ItemList; // 0x258 (8)
	struct FText TitleText; // 0x260 (24)
	char TitleVisible : 0; // 0x278 (1)
	struct UActor TargetActor; // 0x280 (8)
	struct TArray<struct FInventoryItemInfo> ItemInfos; // 0x288 (16)
	struct UUW-InventoryWidget_C InventoryWidget; // 0x298 (8)

	void CreateSlots(); // Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.CreateSlots(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Construct(); // Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Event_TitleVisible(char Visible); // Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.Event_TitleVisible(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-Inventory_ProximityBoxSlot(int32_t EntryPoint); // Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.ExecuteUbergraph_UW-Inventory_ProximityBoxSlot(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.CreateSlots
inline void UUW-Inventory_ProximityBoxSlot_C::CreateSlots() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.CreateSlots");

	struct CreateSlots_Params {
		
	}; CreateSlots_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.Construct
inline void UUW-Inventory_ProximityBoxSlot_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.Event_TitleVisible
inline void UUW-Inventory_ProximityBoxSlot_C::Event_TitleVisible(char Visible) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.Event_TitleVisible");

	struct Event_TitleVisible_Params {
		char Visible;
	}; Event_TitleVisible_Params Params;

	Params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.ExecuteUbergraph_UW-Inventory_ProximityBoxSlot
inline void UUW-Inventory_ProximityBoxSlot_C::ExecuteUbergraph_UW-Inventory_ProximityBoxSlot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.ExecuteUbergraph_UW-Inventory_ProximityBoxSlot");

	struct ExecuteUbergraph_UW-Inventory_ProximityBoxSlot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_ProximityBoxSlot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

