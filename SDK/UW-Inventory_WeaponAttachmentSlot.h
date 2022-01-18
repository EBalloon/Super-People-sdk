// WidgetBlueprintGeneratedClass UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C
class UUW-Inventory_WeaponAttachmentSlot_C : public UUW-Inventory_SlotBase_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1360 (8)
	struct UImage Bg; // 0x1368 (8)
	struct UImage BGImage; // 0x1370 (8)
	struct UImage BorderImage; // 0x1378 (8)
	struct UImage EmptyImage; // 0x1380 (8)
	struct UImage ItemImage; // 0x1388 (8)
	struct UImage OverImage; // 0x1390 (8)
	struct USizeBox SizeBox_1; // 0x1398 (8)
	enum class EWeaponAttachmentType WeaponAttachmentType; // 0x13A0 (1)
	int32_t WeaponSlotIndex; // 0x13A4 (4)
	char IsHover : 0; // 0x13A8 (1)
	struct UUW-Inventory_WeaponSlot_C WeaponSlotWidget; // 0x13B0 (8)
	enum class EWeaponAttachmentUseType WeaponAttachmentUseType; // 0x13B8 (1)
	int32_t SlotMode; // 0x13BC (4)
	struct UUW-Inventory_ItemSlotHover_C HoverWidget; // 0x13C0 (8)

	void SetHoverWidgetRef(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SetHoverWidgetRef(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetWeaponSlot(struct UUW-Inventory_WeaponSlot_C WeaponSlot); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SetWeaponSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation& Operation); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void IsDraging(char& bResult); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.IsDraging(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnRButtonClick(char& bResult); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnRButtonClick(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void UnEquip(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.UnEquip(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Reset(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Drop(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Drop(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Init(enum class EWeaponAttachmentType AttachmentType, enum class EWeaponAttachmentUseType WeaponAttachmentUseType); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetInfo(int32_t SlotIndex, struct UUW-InventoryWidget_C InventoryWidget, struct UUW-Inventory_WeaponSlot_C WeaponSlotWidget, struct FInventoryItemInfo InventoryItemInfo); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SetInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnLoaded_024BD4794308D2A802E72686E4471A98(struct Object Loaded); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnLoaded_024BD4794308D2A802E72686E4471A98(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Hover(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Hover(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ResetEquip(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.ResetEquip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Construct(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CanEquip(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.CanEquip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ResetHover(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.ResetHover(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SelectEquip(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SelectEquip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ResetSelectEquip(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.ResetSelectEquip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void MouseLeave(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.MouseLeave(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-Inventory_WeaponAttachmentSlot(int32_t EntryPoint); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.ExecuteUbergraph_UW-Inventory_WeaponAttachmentSlot(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SetHoverWidgetRef
inline void UUW-Inventory_WeaponAttachmentSlot_C::SetHoverWidgetRef() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SetHoverWidgetRef");

	struct SetHoverWidgetRef_Params {
		
	}; SetHoverWidgetRef_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SetWeaponSlot
inline void UUW-Inventory_WeaponAttachmentSlot_C::SetWeaponSlot(struct UUW-Inventory_WeaponSlot_C WeaponSlot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SetWeaponSlot");

	struct SetWeaponSlot_Params {
		struct UUW-Inventory_WeaponSlot_C WeaponSlot;
	}; SetWeaponSlot_Params Params;

	Params.WeaponSlot = WeaponSlot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnDragDetected
inline void UUW-Inventory_WeaponAttachmentSlot_C::OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation& Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnDragDetected");

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

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.IsDraging
inline void UUW-Inventory_WeaponAttachmentSlot_C::IsDraging(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.IsDraging");

	struct IsDraging_Params {
		char& bResult;
	}; IsDraging_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnRButtonClick
inline void UUW-Inventory_WeaponAttachmentSlot_C::OnRButtonClick(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnRButtonClick");

	struct OnRButtonClick_Params {
		char& bResult;
	}; OnRButtonClick_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.UnEquip
inline void UUW-Inventory_WeaponAttachmentSlot_C::UnEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.UnEquip");

	struct UnEquip_Params {
		
	}; UnEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Reset
inline void UUW-Inventory_WeaponAttachmentSlot_C::Reset() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Reset");

	struct Reset_Params {
		
	}; Reset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Drop
inline void UUW-Inventory_WeaponAttachmentSlot_C::Drop() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Drop");

	struct Drop_Params {
		
	}; Drop_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Init
inline void UUW-Inventory_WeaponAttachmentSlot_C::Init(enum class EWeaponAttachmentType AttachmentType, enum class EWeaponAttachmentUseType WeaponAttachmentUseType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Init");

	struct Init_Params {
		enum class EWeaponAttachmentType AttachmentType;
		enum class EWeaponAttachmentUseType WeaponAttachmentUseType;
	}; Init_Params Params;

	Params.AttachmentType = AttachmentType;
	Params.WeaponAttachmentUseType = WeaponAttachmentUseType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SetInfo
inline void UUW-Inventory_WeaponAttachmentSlot_C::SetInfo(int32_t SlotIndex, struct UUW-InventoryWidget_C InventoryWidget, struct UUW-Inventory_WeaponSlot_C WeaponSlotWidget, struct FInventoryItemInfo InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SetInfo");

	struct SetInfo_Params {
		int32_t SlotIndex;
		struct UUW-InventoryWidget_C InventoryWidget;
		struct UUW-Inventory_WeaponSlot_C WeaponSlotWidget;
		struct FInventoryItemInfo InventoryItemInfo;
	}; SetInfo_Params Params;

	Params.SlotIndex = SlotIndex;
	Params.InventoryWidget = InventoryWidget;
	Params.WeaponSlotWidget = WeaponSlotWidget;
	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnLoaded_024BD4794308D2A802E72686E4471A98
inline void UUW-Inventory_WeaponAttachmentSlot_C::OnLoaded_024BD4794308D2A802E72686E4471A98(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnLoaded_024BD4794308D2A802E72686E4471A98");

	struct OnLoaded_024BD4794308D2A802E72686E4471A98_Params {
		struct Object Loaded;
	}; OnLoaded_024BD4794308D2A802E72686E4471A98_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnMouseEnter
inline void UUW-Inventory_WeaponAttachmentSlot_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnMouseEnter");

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

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnMouseLeave
inline void UUW-Inventory_WeaponAttachmentSlot_C::OnMouseLeave(struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct FPointerEvent& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Hover
inline void UUW-Inventory_WeaponAttachmentSlot_C::Hover() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Hover");

	struct Hover_Params {
		
	}; Hover_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.ResetEquip
inline void UUW-Inventory_WeaponAttachmentSlot_C::ResetEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.ResetEquip");

	struct ResetEquip_Params {
		
	}; ResetEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Construct
inline void UUW-Inventory_WeaponAttachmentSlot_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.CanEquip
inline void UUW-Inventory_WeaponAttachmentSlot_C::CanEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.CanEquip");

	struct CanEquip_Params {
		
	}; CanEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.ResetHover
inline void UUW-Inventory_WeaponAttachmentSlot_C::ResetHover() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.ResetHover");

	struct ResetHover_Params {
		
	}; ResetHover_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SelectEquip
inline void UUW-Inventory_WeaponAttachmentSlot_C::SelectEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SelectEquip");

	struct SelectEquip_Params {
		
	}; SelectEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.AsyncLoadIconTexture
inline void UUW-Inventory_WeaponAttachmentSlot_C::AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.AsyncLoadIconTexture");

	struct AsyncLoadIconTexture_Params {
		struct TSoftObjectPtr<UPaperSprite> IconTexture;
	}; AsyncLoadIconTexture_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.ResetSelectEquip
inline void UUW-Inventory_WeaponAttachmentSlot_C::ResetSelectEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.ResetSelectEquip");

	struct ResetSelectEquip_Params {
		
	}; ResetSelectEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.MouseLeave
inline void UUW-Inventory_WeaponAttachmentSlot_C::MouseLeave() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.MouseLeave");

	struct MouseLeave_Params {
		
	}; MouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.ExecuteUbergraph_UW-Inventory_WeaponAttachmentSlot
inline void UUW-Inventory_WeaponAttachmentSlot_C::ExecuteUbergraph_UW-Inventory_WeaponAttachmentSlot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.ExecuteUbergraph_UW-Inventory_WeaponAttachmentSlot");

	struct ExecuteUbergraph_UW-Inventory_WeaponAttachmentSlot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_WeaponAttachmentSlot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

