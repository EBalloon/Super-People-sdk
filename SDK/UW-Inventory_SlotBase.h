// WidgetBlueprintGeneratedClass UW-Inventory_SlotBase.UW-Inventory_SlotBase_C
class UUW-Inventory_SlotBase_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown PlayerController; // 0x250 (8)
	struct Unknown InventoryItemInfo; // 0x258 (152)
	struct Unknown InventoryItemDetailInfo; // 0x2F0 (1168)
	struct Unknown WeaponInfo; // 0x780 (2864)
	struct Unknown ItemSlotHoverWIdget; // 0x12B0 (8)
	struct Unknown InventoryWidget; // 0x12B8 (8)
	struct Unknown DraggedWidget; // 0x12C0 (8)
	enum class Unknow InventorySlotWidgetKind; // 0x12C8 (1)
	struct Unknown DragItemBrush; // 0x12D0 (136)
	char RButtonDown : 0; // 0x1358 (1)
	char bEpuipped : 0; // 0x1359 (1)

	void IsEquipped(char& Return); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.IsEquipped(Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetInventoryWidget(); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetInventoryWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void GetOverrideItemID(struct FName& ItemId); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetOverrideItemID(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void IsLockSlot(char& Lock); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.IsLockSlot(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetInventoryItemDetailInfoByItemInfo(struct Unknown InventoryItemInfo, char& bResult); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetInventoryItemDetailInfoByItemInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnDrop(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void DragEnd(); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.DragEnd(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void DragStart(char LockSlot, struct Unknown& Operation); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.DragStart(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void GetInventoryComponent(char& bResult, struct Unknown& InventoryComponent); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetInventoryComponent(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetInventoryItemInfo(struct Unknown InventoryItemInfo); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetInventoryItemInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void GetWeaponInfo(struct Unknown& WeaponInfo); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetWeaponInfo(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetWeaponInfo(struct Unknown WeaponInfo); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetWeaponInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	struct Unknown OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnRButtonClick(char& bResult); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnRButtonClick(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void GetInventoryItemDetailInfo(struct Unknown& InventoryItemDeailInfo); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetInventoryItemDetailInfo(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void GetInventoryItemInfo(struct Unknown& InventoryItemInfo); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetInventoryItemInfo(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetInventoryItemDetailInfo(struct Unknown InventoryItemDetailInfo); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetInventoryItemDetailInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetInventoryItemInfoByPickup(struct Unknown Pickup, char& bResult); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetInventoryItemInfoByPickup(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetPlayerController(); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetPlayerController(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetItemSlotHoverWidget(struct Unknown ItemSlotHoverWIdget, struct Unknown& Out); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetItemSlotHoverWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void GetPlayerController(char& bResult, struct Unknown& Out); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetPlayerController(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void GetItemSlotHoverWidget(char& bResult, struct Unknown& Out); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetItemSlotHoverWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnLoaded_29D4AD794F40F3517E11F7A14C55D6DD(struct Unknown Loaded); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnLoaded_29D4AD794F40F3517E11F7A14C55D6DD(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void AysncLoadIconTexture(struct Unknown IconTexture); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.AysncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_UW-Inventory_SlotBase(int32_t EntryPoint); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.ExecuteUbergraph_UW-Inventory_SlotBase(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.IsEquipped
inline void UUW-Inventory_SlotBase_C::IsEquipped(char& Return) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.IsEquipped");

	struct IsEquipped_Params {
		char& Return;
	}; IsEquipped_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Return = Params.Return;

}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetInventoryWidget
inline void UUW-Inventory_SlotBase_C::SetInventoryWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetInventoryWidget");

	struct SetInventoryWidget_Params {
		
	}; SetInventoryWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetOverrideItemID
inline void UUW-Inventory_SlotBase_C::GetOverrideItemID(struct FName& ItemId) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetOverrideItemID");

	struct GetOverrideItemID_Params {
		struct FName& ItemId;
	}; GetOverrideItemID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemId = Params.ItemId;

}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.IsLockSlot
inline void UUW-Inventory_SlotBase_C::IsLockSlot(char& Lock) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.IsLockSlot");

	struct IsLockSlot_Params {
		char& Lock;
	}; IsLockSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Lock = Params.Lock;

}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetInventoryItemDetailInfoByItemInfo
inline void UUW-Inventory_SlotBase_C::SetInventoryItemDetailInfoByItemInfo(struct Unknown InventoryItemInfo, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetInventoryItemDetailInfoByItemInfo");

	struct SetInventoryItemDetailInfoByItemInfo_Params {
		struct Unknown InventoryItemInfo;
		char& bResult;
	}; SetInventoryItemDetailInfoByItemInfo_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnDrop
inline char UUW-Inventory_SlotBase_C::OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnDrop");

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

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.DragEnd
inline void UUW-Inventory_SlotBase_C::DragEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.DragEnd");

	struct DragEnd_Params {
		
	}; DragEnd_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.DragStart
inline void UUW-Inventory_SlotBase_C::DragStart(char LockSlot, struct Unknown& Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.DragStart");

	struct DragStart_Params {
		char LockSlot;
		struct Unknown& Operation;
	}; DragStart_Params Params;

	Params.LockSlot = LockSlot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Operation = Params.Operation;

}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetInventoryComponent
inline void UUW-Inventory_SlotBase_C::GetInventoryComponent(char& bResult, struct Unknown& InventoryComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetInventoryComponent");

	struct GetInventoryComponent_Params {
		char& bResult;
		struct Unknown& InventoryComponent;
	}; GetInventoryComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;
	InventoryComponent = Params.InventoryComponent;

}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetInventoryItemInfo
inline void UUW-Inventory_SlotBase_C::SetInventoryItemInfo(struct Unknown InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetInventoryItemInfo");

	struct SetInventoryItemInfo_Params {
		struct Unknown InventoryItemInfo;
	}; SetInventoryItemInfo_Params Params;

	Params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetWeaponInfo
inline void UUW-Inventory_SlotBase_C::GetWeaponInfo(struct Unknown& WeaponInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetWeaponInfo");

	struct GetWeaponInfo_Params {
		struct Unknown& WeaponInfo;
	}; GetWeaponInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	WeaponInfo = Params.WeaponInfo;

}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetWeaponInfo
inline void UUW-Inventory_SlotBase_C::SetWeaponInfo(struct Unknown WeaponInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetWeaponInfo");

	struct SetWeaponInfo_Params {
		struct Unknown WeaponInfo;
	}; SetWeaponInfo_Params Params;

	Params.WeaponInfo = WeaponInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnMouseButtonUp
inline struct Unknown UUW-Inventory_SlotBase_C::OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnMouseButtonUp");

	struct OnMouseButtonUp_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseButtonUp_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnRButtonClick
inline void UUW-Inventory_SlotBase_C::OnRButtonClick(char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnRButtonClick");

	struct OnRButtonClick_Params {
		char& bResult;
	}; OnRButtonClick_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnDragDetected
inline void UUW-Inventory_SlotBase_C::OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnDragDetected");

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

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetInventoryItemDetailInfo
inline void UUW-Inventory_SlotBase_C::GetInventoryItemDetailInfo(struct Unknown& InventoryItemDeailInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetInventoryItemDetailInfo");

	struct GetInventoryItemDetailInfo_Params {
		struct Unknown& InventoryItemDeailInfo;
	}; GetInventoryItemDetailInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InventoryItemDeailInfo = Params.InventoryItemDeailInfo;

}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetInventoryItemInfo
inline void UUW-Inventory_SlotBase_C::GetInventoryItemInfo(struct Unknown& InventoryItemInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetInventoryItemInfo");

	struct GetInventoryItemInfo_Params {
		struct Unknown& InventoryItemInfo;
	}; GetInventoryItemInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InventoryItemInfo = Params.InventoryItemInfo;

}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetInventoryItemDetailInfo
inline void UUW-Inventory_SlotBase_C::SetInventoryItemDetailInfo(struct Unknown InventoryItemDetailInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetInventoryItemDetailInfo");

	struct SetInventoryItemDetailInfo_Params {
		struct Unknown InventoryItemDetailInfo;
	}; SetInventoryItemDetailInfo_Params Params;

	Params.InventoryItemDetailInfo = InventoryItemDetailInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetInventoryItemInfoByPickup
inline void UUW-Inventory_SlotBase_C::SetInventoryItemInfoByPickup(struct Unknown Pickup, char& bResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetInventoryItemInfoByPickup");

	struct SetInventoryItemInfoByPickup_Params {
		struct Unknown Pickup;
		char& bResult;
	}; SetInventoryItemInfoByPickup_Params Params;

	Params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;

}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetPlayerController
inline void UUW-Inventory_SlotBase_C::SetPlayerController() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetPlayerController");

	struct SetPlayerController_Params {
		
	}; SetPlayerController_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetItemSlotHoverWidget
inline void UUW-Inventory_SlotBase_C::SetItemSlotHoverWidget(struct Unknown ItemSlotHoverWIdget, struct Unknown& Out) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetItemSlotHoverWidget");

	struct SetItemSlotHoverWidget_Params {
		struct Unknown ItemSlotHoverWIdget;
		struct Unknown& Out;
	}; SetItemSlotHoverWidget_Params Params;

	Params.ItemSlotHoverWIdget = ItemSlotHoverWIdget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Out = Params.Out;

}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetPlayerController
inline void UUW-Inventory_SlotBase_C::GetPlayerController(char& bResult, struct Unknown& Out) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetPlayerController");

	struct GetPlayerController_Params {
		char& bResult;
		struct Unknown& Out;
	}; GetPlayerController_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;
	Out = Params.Out;

}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetItemSlotHoverWidget
inline void UUW-Inventory_SlotBase_C::GetItemSlotHoverWidget(char& bResult, struct Unknown& Out) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetItemSlotHoverWidget");

	struct GetItemSlotHoverWidget_Params {
		char& bResult;
		struct Unknown& Out;
	}; GetItemSlotHoverWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bResult = Params.bResult;
	Out = Params.Out;

}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnMouseButtonDown
inline struct Unknown UUW-Inventory_SlotBase_C::OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnMouseButtonDown");

	struct OnMouseButtonDown_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseButtonDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnLoaded_29D4AD794F40F3517E11F7A14C55D6DD
inline void UUW-Inventory_SlotBase_C::OnLoaded_29D4AD794F40F3517E11F7A14C55D6DD(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnLoaded_29D4AD794F40F3517E11F7A14C55D6DD");

	struct OnLoaded_29D4AD794F40F3517E11F7A14C55D6DD_Params {
		struct Unknown Loaded;
	}; OnLoaded_29D4AD794F40F3517E11F7A14C55D6DD_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.AysncLoadIconTexture
inline void UUW-Inventory_SlotBase_C::AysncLoadIconTexture(struct Unknown IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.AysncLoadIconTexture");

	struct AysncLoadIconTexture_Params {
		struct Unknown IconTexture;
	}; AysncLoadIconTexture_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.ExecuteUbergraph_UW-Inventory_SlotBase
inline void UUW-Inventory_SlotBase_C::ExecuteUbergraph_UW-Inventory_SlotBase(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.ExecuteUbergraph_UW-Inventory_SlotBase");

	struct ExecuteUbergraph_UW-Inventory_SlotBase_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_SlotBase_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

