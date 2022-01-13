// WidgetBlueprintGeneratedClass UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C
class UUW-Inventory_KeepedSlot_C : public UUW-Inventory_SlotBase_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1358 (8)
	struct USizeBox Abillity; // 0x1360 (8)
	struct UImage AbillityBG; // 0x1368 (8)
	struct UTextBlock AbillityValue; // 0x1370 (8)
	struct UImage Bg; // 0x1378 (8)
	struct UImage BorderBG; // 0x1380 (8)
	struct UImage ChoiceBG; // 0x1388 (8)
	struct UImage DefenseBG; // 0x1390 (8)
	struct UProgressBar DurabilityBar; // 0x1398 (8)
	struct UImage EmptyBG; // 0x13A0 (8)
	struct UImage ItemImage; // 0x13A8 (8)
	struct UImage OverBG; // 0x13B0 (8)
	enum class EWearableItemType WearableItemType; // 0x13B8 (1)
	char IsDefense : 0; // 0x13B9 (1)
	struct UUW-Inventory_ItemSlotHover_C HoverWidget; // 0x13C0 (8)
	struct UUserWidget HoverOwnerWidget; // 0x13C8 (8)
	int32_t Index; // 0x13D0 (4)

	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation& Operation); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetHoverWidgetRef(); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.SetHoverWidgetRef(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	char OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetBG(enum class EWearableItemType WearableItemType); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.SetBG(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnRButtonClick(char& bResult); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnRButtonClick(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	enum class ESlateVisibility Get_Abillity_Visibility_1(); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Get_Abillity_Visibility_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void RequestGetItem(struct ABravoHotelPickup Pickup, char& bResult); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.RequestGetItem(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Reset(); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void InitData(enum class ItemWidgetDragType EquipType, enum class EWearableItemType WearableItemType); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.InitData(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetInfo(struct UUW-InventoryWidget_C InventoryWidget, struct FInventoryItemInfo InventoryItemInfoData); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.SetInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Drop(); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Drop(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnLoaded_98E452BD4DD4A7091D0406BA03F23FD2(struct Object Loaded); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnLoaded_98E452BD4DD4A7091D0406BA03F23FD2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Enable(); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Enable(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Disable(); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Disable(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Construct(); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void AysncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.AysncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-Inventory_KeepedSlot(int32_t EntryPoint); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.ExecuteUbergraph_UW-Inventory_KeepedSlot(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnDragDetected
inline void UUW-Inventory_KeepedSlot_C::OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation& Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnDragDetected");

	struct OnDragDetected_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& PointerEvent;
		struct UDragDropOperation& Operation;
	}; OnDragDetected_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PointerEvent = Params.PointerEvent;
	Operation = Params.Operation;

}

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.SetHoverWidgetRef
inline void UUW-Inventory_KeepedSlot_C::SetHoverWidgetRef() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.SetHoverWidgetRef");

	struct SetHoverWidgetRef_Params {
		
	}; SetHoverWidgetRef_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnDrop
inline char UUW-Inventory_KeepedSlot_C::OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnDrop");

	struct OnDrop_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent PointerEvent;
		struct UDragDropOperation Operation;
		char ReturnValue;

	}; OnDrop_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.SetBG
inline void UUW-Inventory_KeepedSlot_C::SetBG(enum class EWearableItemType WearableItemType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.SetBG");

	struct SetBG_Params {
		enum class EWearableItemType WearableItemType;
	}; SetBG_Params Params;

	Params.WearableItemType = WearableItemType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnRButtonClick
inline void UUW-Inventory_KeepedSlot_C::OnRButtonClick(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnRButtonClick");

	struct OnRButtonClick_Params {
		char& bResult;
	}; OnRButtonClick_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Get_Abillity_Visibility_1
inline enum class ESlateVisibility UUW-Inventory_KeepedSlot_C::Get_Abillity_Visibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Get_Abillity_Visibility_1");

	struct Get_Abillity_Visibility_1_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; Get_Abillity_Visibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.RequestGetItem
inline void UUW-Inventory_KeepedSlot_C::RequestGetItem(struct ABravoHotelPickup Pickup, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.RequestGetItem");

	struct RequestGetItem_Params {
		struct ABravoHotelPickup Pickup;
		char& bResult;
	}; RequestGetItem_Params Params;

	Params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Reset
inline void UUW-Inventory_KeepedSlot_C::Reset() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Reset");

	struct Reset_Params {
		
	}; Reset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.InitData
inline void UUW-Inventory_KeepedSlot_C::InitData(enum class ItemWidgetDragType EquipType, enum class EWearableItemType WearableItemType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.InitData");

	struct InitData_Params {
		enum class ItemWidgetDragType EquipType;
		enum class EWearableItemType WearableItemType;
	}; InitData_Params Params;

	Params.EquipType = EquipType;
	Params.WearableItemType = WearableItemType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.SetInfo
inline void UUW-Inventory_KeepedSlot_C::SetInfo(struct UUW-InventoryWidget_C InventoryWidget, struct FInventoryItemInfo InventoryItemInfoData) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.SetInfo");

	struct SetInfo_Params {
		struct UUW-InventoryWidget_C InventoryWidget;
		struct FInventoryItemInfo InventoryItemInfoData;
	}; SetInfo_Params Params;

	Params.InventoryWidget = InventoryWidget;
	Params.InventoryItemInfoData = InventoryItemInfoData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Drop
inline void UUW-Inventory_KeepedSlot_C::Drop() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Drop");

	struct Drop_Params {
		
	}; Drop_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnLoaded_98E452BD4DD4A7091D0406BA03F23FD2
inline void UUW-Inventory_KeepedSlot_C::OnLoaded_98E452BD4DD4A7091D0406BA03F23FD2(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnLoaded_98E452BD4DD4A7091D0406BA03F23FD2");

	struct OnLoaded_98E452BD4DD4A7091D0406BA03F23FD2_Params {
		struct Object Loaded;
	}; OnLoaded_98E452BD4DD4A7091D0406BA03F23FD2_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnMouseEnter
inline void UUW-Inventory_KeepedSlot_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnMouseEnter");

	struct OnMouseEnter_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
	}; OnMouseEnter_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnMouseLeave
inline void UUW-Inventory_KeepedSlot_C::OnMouseLeave(struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct FPointerEvent& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Enable
inline void UUW-Inventory_KeepedSlot_C::Enable() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Enable");

	struct Enable_Params {
		
	}; Enable_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Disable
inline void UUW-Inventory_KeepedSlot_C::Disable() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Disable");

	struct Disable_Params {
		
	}; Disable_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Construct
inline void UUW-Inventory_KeepedSlot_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.AysncLoadIconTexture
inline void UUW-Inventory_KeepedSlot_C::AysncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.AysncLoadIconTexture");

	struct AysncLoadIconTexture_Params {
		struct TSoftObjectPtr<UPaperSprite> IconTexture;
	}; AysncLoadIconTexture_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.ExecuteUbergraph_UW-Inventory_KeepedSlot
inline void UUW-Inventory_KeepedSlot_C::ExecuteUbergraph_UW-Inventory_KeepedSlot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.ExecuteUbergraph_UW-Inventory_KeepedSlot");

	struct ExecuteUbergraph_UW-Inventory_KeepedSlot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_KeepedSlot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

