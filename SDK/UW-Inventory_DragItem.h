// WidgetBlueprintGeneratedClass UW-Inventory_DragItem.UW-Inventory_DragItem_C
class UUW-Inventory_DragItem_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UImage BGImage; // 0x250 (8)
	struct UImage BorderImage; // 0x258 (8)
	struct UImage DisableImage; // 0x260 (8)
	struct UImage Image_177; // 0x268 (8)
	struct UTextBlock ItemCount; // 0x270 (8)
	struct UImage ItemImage; // 0x278 (8)
	struct UUserWidget WidgetReference; // 0x280 (8)
	char Lock : 0; // 0x288 (1)
	enum class ItemWidgetDragType InventoryDragType; // 0x289 (1)
	struct UUserWidget ChangeTarget; // 0x290 (8)
	struct ABravoHotelPlayerHUD PlayerHUDRef; // 0x298 (8)

	void GetBravoHotelPlayerHUD(struct ABravoHotelPlayerHUD& NewParam); // Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.GetBravoHotelPlayerHUD(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Init(struct FSlateBrush Image, int32_t Count, char LockSlot, enum class ItemWidgetDragType DragType); // Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.Init(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Disable(); // Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.Disable(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Enable(); // Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.Enable(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnLoaded_CC3EA76649966C8AA6712791A8D413B0(struct Object Loaded); // Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.OnLoaded_CC3EA76649966C8AA6712791A8D413B0(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void InitFromObjectRef(struct TSoftObjectPtr<Object> Icon SoftObject Ref, struct FVector2D Icon Size, int32_t Count, char LockSlot, enum class ItemWidgetDragType DragType); // Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.InitFromObjectRef(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Destruct(); // Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-Inventory_DragItem(int32_t EntryPoint); // Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.ExecuteUbergraph_UW-Inventory_DragItem(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.GetBravoHotelPlayerHUD
inline void UUW-Inventory_DragItem_C::GetBravoHotelPlayerHUD(struct ABravoHotelPlayerHUD& NewParam) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.GetBravoHotelPlayerHUD");

	struct GetBravoHotelPlayerHUD_Params {
		struct ABravoHotelPlayerHUD& NewParam;
	}; GetBravoHotelPlayerHUD_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewParam = Params.NewParam;

}

// Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.Init
inline void UUW-Inventory_DragItem_C::Init(struct FSlateBrush Image, int32_t Count, char LockSlot, enum class ItemWidgetDragType DragType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.Init");

	struct Init_Params {
		struct FSlateBrush Image;
		int32_t Count;
		char LockSlot;
		enum class ItemWidgetDragType DragType;
	}; Init_Params Params;

	Params.Image = Image;
	Params.Count = Count;
	Params.LockSlot = LockSlot;
	Params.DragType = DragType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.Disable
inline void UUW-Inventory_DragItem_C::Disable() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.Disable");

	struct Disable_Params {
		
	}; Disable_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.Enable
inline void UUW-Inventory_DragItem_C::Enable() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.Enable");

	struct Enable_Params {
		
	}; Enable_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.OnLoaded_CC3EA76649966C8AA6712791A8D413B0
inline void UUW-Inventory_DragItem_C::OnLoaded_CC3EA76649966C8AA6712791A8D413B0(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.OnLoaded_CC3EA76649966C8AA6712791A8D413B0");

	struct OnLoaded_CC3EA76649966C8AA6712791A8D413B0_Params {
		struct Object Loaded;
	}; OnLoaded_CC3EA76649966C8AA6712791A8D413B0_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.Tick
inline void UUW-Inventory_DragItem_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.Tick");

	struct Tick_Params {
		struct FGeometry MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.InitFromObjectRef
inline void UUW-Inventory_DragItem_C::InitFromObjectRef(struct TSoftObjectPtr<Object> Icon SoftObject Ref, struct FVector2D Icon Size, int32_t Count, char LockSlot, enum class ItemWidgetDragType DragType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.InitFromObjectRef");

	struct InitFromObjectRef_Params {
		struct TSoftObjectPtr<Object> Icon SoftObject Ref;
		struct FVector2D Icon Size;
		int32_t Count;
		char LockSlot;
		enum class ItemWidgetDragType DragType;
	}; InitFromObjectRef_Params Params;

	Params.Icon SoftObject Ref = Icon SoftObject Ref;
	Params.Icon Size = Icon Size;
	Params.Count = Count;
	Params.LockSlot = LockSlot;
	Params.DragType = DragType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.Destruct
inline void UUW-Inventory_DragItem_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.ExecuteUbergraph_UW-Inventory_DragItem
inline void UUW-Inventory_DragItem_C::ExecuteUbergraph_UW-Inventory_DragItem(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.ExecuteUbergraph_UW-Inventory_DragItem");

	struct ExecuteUbergraph_UW-Inventory_DragItem_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_DragItem_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

