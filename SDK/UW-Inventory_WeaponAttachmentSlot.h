// WidgetBlueprintGeneratedClass UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C
class UUW-Inventory_WeaponAttachmentSlot_C : public UUW-Inventory_SlotBase_C {

public:

	struct Unknown UberGraphFrame; // 0x1360 (8)
	struct Unknown Bg; // 0x1368 (8)
	struct Unknown BGImage; // 0x1370 (8)
	struct Unknown BorderImage; // 0x1378 (8)
	struct Unknown EmptyImage; // 0x1380 (8)
	struct Unknown ItemImage; // 0x1388 (8)
	struct Unknown OverImage; // 0x1390 (8)
	struct Unknown SizeBox_1; // 0x1398 (8)
	enum class Unknow WeaponAttachmentType; // 0x13A0 (1)
	int32_t WeaponSlotIndex; // 0x13A4 (4)
	char IsHover : 0; // 0x13A8 (1)
	struct Unknown WeaponSlotWidget; // 0x13B0 (8)
	enum class Unknow WeaponAttachmentUseType; // 0x13B8 (1)
	int32_t SlotMode; // 0x13BC (4)
	struct Unknown HoverWidget; // 0x13C0 (8)

	void SetHoverWidgetRef(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SetHoverWidgetRef(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetWeaponSlot(struct Unknown WeaponSlot); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SetWeaponSlot(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void IsDraging(char& bResult); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.IsDraging(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnRButtonClick(char& bResult); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnRButtonClick(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UnEquip(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.UnEquip(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Reset(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Reset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Drop(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Drop(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Init(enum class Unknow AttachmentType, enum class Unknow WeaponAttachmentUseType); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetInfo(int32_t SlotIndex, struct Unknown InventoryWidget, struct Unknown WeaponSlotWidget, struct Unknown InventoryItemInfo); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SetInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnLoaded_024BD4794308D2A802E72686E4471A98(struct Unknown Loaded); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnLoaded_024BD4794308D2A802E72686E4471A98(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Hover(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Hover(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ResetEquip(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.ResetEquip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Construct(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CanEquip(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.CanEquip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ResetHover(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.ResetHover(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SelectEquip(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SelectEquip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void AsyncLoadIconTexture(struct Unknown IconTexture); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ResetSelectEquip(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.ResetSelectEquip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void MouseLeave(); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.MouseLeave(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-Inventory_WeaponAttachmentSlot(int32_t EntryPoint); // Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.ExecuteUbergraph_UW-Inventory_WeaponAttachmentSlot(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
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
inline void UUW-Inventory_WeaponAttachmentSlot_C::SetWeaponSlot(struct Unknown WeaponSlot) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SetWeaponSlot");

	struct SetWeaponSlot_Params {
		struct Unknown WeaponSlot;
	}; SetWeaponSlot_Params Params;

	Params.WeaponSlot = WeaponSlot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnDragDetected
inline void UUW-Inventory_WeaponAttachmentSlot_C::OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnDragDetected");

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
inline void UUW-Inventory_WeaponAttachmentSlot_C::Init(enum class Unknow AttachmentType, enum class Unknow WeaponAttachmentUseType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.Init");

	struct Init_Params {
		enum class Unknow AttachmentType;
		enum class Unknow WeaponAttachmentUseType;
	}; Init_Params Params;

	Params.AttachmentType = AttachmentType;
	Params.WeaponAttachmentUseType = WeaponAttachmentUseType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SetInfo
inline void UUW-Inventory_WeaponAttachmentSlot_C::SetInfo(int32_t SlotIndex, struct Unknown InventoryWidget, struct Unknown WeaponSlotWidget, struct Unknown InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.SetInfo");

	struct SetInfo_Params {
		int32_t SlotIndex;
		struct Unknown InventoryWidget;
		struct Unknown WeaponSlotWidget;
		struct Unknown InventoryItemInfo;
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
inline void UUW-Inventory_WeaponAttachmentSlot_C::OnLoaded_024BD4794308D2A802E72686E4471A98(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnLoaded_024BD4794308D2A802E72686E4471A98");

	struct OnLoaded_024BD4794308D2A802E72686E4471A98_Params {
		struct Unknown Loaded;
	}; OnLoaded_024BD4794308D2A802E72686E4471A98_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnMouseEnter
inline void UUW-Inventory_WeaponAttachmentSlot_C::OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnMouseEnter");

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

// Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnMouseLeave
inline void UUW-Inventory_WeaponAttachmentSlot_C::OnMouseLeave(struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct Unknown& MouseEvent;
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
inline void UUW-Inventory_WeaponAttachmentSlot_C::AsyncLoadIconTexture(struct Unknown IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_WeaponAttachmentSlot.UW-Inventory_WeaponAttachmentSlot_C.AsyncLoadIconTexture");

	struct AsyncLoadIconTexture_Params {
		struct Unknown IconTexture;
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

