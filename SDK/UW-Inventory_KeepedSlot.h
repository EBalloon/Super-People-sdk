// WidgetBlueprintGeneratedClass UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C
class UUW-Inventory_KeepedSlot_C : public UUW-Inventory_SlotBase_C {

public:

	struct Unknown UberGraphFrame; // 0x1350 (8)
	struct Unknown Abillity; // 0x1358 (8)
	struct Unknown AbillityBG; // 0x1360 (8)
	struct Unknown AbillityValue; // 0x1368 (8)
	struct Unknown Bg; // 0x1370 (8)
	struct Unknown BorderBG; // 0x1378 (8)
	struct Unknown ChoiceBG; // 0x1380 (8)
	struct Unknown DefenseBG; // 0x1388 (8)
	struct Unknown DurabilityBar; // 0x1390 (8)
	struct Unknown EmptyBG; // 0x1398 (8)
	struct Unknown ItemImage; // 0x13A0 (8)
	struct Unknown OverBG; // 0x13A8 (8)
	enum class Unknow WearableItemType; // 0x13B0 (1)
	char IsDefense : 0; // 0x13B1 (1)
	struct Unknown HoverWidget; // 0x13B8 (8)
	struct Unknown HoverOwnerWidget; // 0x13C0 (8)
	int32_t Index; // 0x13C8 (4)

	void OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetHoverWidgetRef(); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.SetHoverWidgetRef(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetBG(enum class Unknow WearableItemType); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.SetBG(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnRButtonClick(char& bResult); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnRButtonClick(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	enum class Unknow Get_Abillity_Visibility_1(); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Get_Abillity_Visibility_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void RequestGetItem(struct Unknown Pickup, char& bResult); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.RequestGetItem(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Reset(); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void InitData(enum class Unknow EquipType, enum class Unknow WearableItemType); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.InitData(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetInfo(struct Unknown InventoryWidget, struct Unknown InventoryItemInfoData); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.SetInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Drop(); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Drop(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnLoaded_98E452BD4DD4A7091D0406BA03F23FD2(struct Unknown Loaded); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnLoaded_98E452BD4DD4A7091D0406BA03F23FD2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Enable(); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Enable(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Disable(); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Disable(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Construct(); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void AysncLoadIconTexture(struct Unknown IconTexture); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.AysncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-Inventory_KeepedSlot(int32_t EntryPoint); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.ExecuteUbergraph_UW-Inventory_KeepedSlot(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnDragDetected
inline void UUW-Inventory_KeepedSlot_C::OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnDragDetected");

	struct OnDragDetected_Params {
		struct Unknown MyGeometry;
		struct Unknown& PointerEvent;
		struct Unknown& Operation;
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
inline char UUW-Inventory_KeepedSlot_C::OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnDrop");

	struct OnDrop_Params {
		struct Unknown MyGeometry;
		struct Unknown PointerEvent;
		struct Unknown Operation;
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
inline void UUW-Inventory_KeepedSlot_C::SetBG(enum class Unknow WearableItemType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.SetBG");

	struct SetBG_Params {
		enum class Unknow WearableItemType;
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
inline enum class Unknow UUW-Inventory_KeepedSlot_C::Get_Abillity_Visibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Get_Abillity_Visibility_1");

	struct Get_Abillity_Visibility_1_Params {
		
		enum class Unknow ReturnValue;

	}; Get_Abillity_Visibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.RequestGetItem
inline void UUW-Inventory_KeepedSlot_C::RequestGetItem(struct Unknown Pickup, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.RequestGetItem");

	struct RequestGetItem_Params {
		struct Unknown Pickup;
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
inline void UUW-Inventory_KeepedSlot_C::InitData(enum class Unknow EquipType, enum class Unknow WearableItemType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.InitData");

	struct InitData_Params {
		enum class Unknow EquipType;
		enum class Unknow WearableItemType;
	}; InitData_Params Params;

	Params.EquipType = EquipType;
	Params.WearableItemType = WearableItemType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.SetInfo
inline void UUW-Inventory_KeepedSlot_C::SetInfo(struct Unknown InventoryWidget, struct Unknown InventoryItemInfoData) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.SetInfo");

	struct SetInfo_Params {
		struct Unknown InventoryWidget;
		struct Unknown InventoryItemInfoData;
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
inline void UUW-Inventory_KeepedSlot_C::OnLoaded_98E452BD4DD4A7091D0406BA03F23FD2(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnLoaded_98E452BD4DD4A7091D0406BA03F23FD2");

	struct OnLoaded_98E452BD4DD4A7091D0406BA03F23FD2_Params {
		struct Unknown Loaded;
	}; OnLoaded_98E452BD4DD4A7091D0406BA03F23FD2_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnMouseEnter
inline void UUW-Inventory_KeepedSlot_C::OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnMouseEnter");

	struct OnMouseEnter_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
	}; OnMouseEnter_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnMouseLeave
inline void UUW-Inventory_KeepedSlot_C::OnMouseLeave(struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct Unknown& MouseEvent;
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
inline void UUW-Inventory_KeepedSlot_C::AysncLoadIconTexture(struct Unknown IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.AysncLoadIconTexture");

	struct AysncLoadIconTexture_Params {
		struct Unknown IconTexture;
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

