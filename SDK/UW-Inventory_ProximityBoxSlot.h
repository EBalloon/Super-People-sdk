// WidgetBlueprintGeneratedClass UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C
class UUW-Inventory_ProximityBoxSlot_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UTextBlock BoxName; // 0x250 (8)
	struct UWrapBox WB-ItemList; // 0x258 (8)
	char TitleVisible : 0; // 0x260 (1)
	struct UActor TargetActor; // 0x268 (8)
	struct UUW-InventoryWidget_C InventoryWidget; // 0x270 (8)
	char bUsed : 0; // 0x278 (1)

	void SetUsed(char Used); // Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.SetUsed(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetBoxName(struct FText BoxName); // Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.SetBoxName(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Set Box Info(struct UActor TargetActor); // Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.Set Box Info(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void AllHiddenChildSlots(); // Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.AllHiddenChildSlots(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Construct(); // Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Event_TitleVisible(char Visible); // Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.Event_TitleVisible(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-Inventory_ProximityBoxSlot(int32_t EntryPoint); // Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.ExecuteUbergraph_UW-Inventory_ProximityBoxSlot(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.SetUsed
inline void UUW-Inventory_ProximityBoxSlot_C::SetUsed(char Used) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.SetUsed");

	struct SetUsed_Params {
		char Used;
	}; SetUsed_Params Params;

	Params.Used = Used;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.SetBoxName
inline void UUW-Inventory_ProximityBoxSlot_C::SetBoxName(struct FText BoxName) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.SetBoxName");

	struct SetBoxName_Params {
		struct FText BoxName;
	}; SetBoxName_Params Params;

	Params.BoxName = BoxName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.Set Box Info
inline void UUW-Inventory_ProximityBoxSlot_C::Set Box Info(struct UActor TargetActor) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.Set Box Info");

	struct Set Box Info_Params {
		struct UActor TargetActor;
	}; Set Box Info_Params Params;

	Params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.AllHiddenChildSlots
inline void UUW-Inventory_ProximityBoxSlot_C::AllHiddenChildSlots() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.AllHiddenChildSlots");

	struct AllHiddenChildSlots_Params {
		
	}; AllHiddenChildSlots_Params Params;


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

