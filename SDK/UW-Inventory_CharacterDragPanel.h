// WidgetBlueprintGeneratedClass UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C
class UUW-Inventory_CharacterDragPanel_C : public UUserWidget {

public:

	struct UImage Image_91; // 0x248 (8)
	struct ABravoHotelInventoryCharacter InventoryCharacterRef; // 0x250 (8)
	char Visible : 0; // 0x258 (1)

	enum class ESlateVisibility GetVisibility_1(); // Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.GetVisibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	struct FEventReply On_DragRect_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.On_DragRect_MouseButtonDown_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void IsHitTest(struct FVector2D Pos, char& bHit); // Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.IsHitTest(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void GetInventoryCharacter(struct ABravoHotelInventoryCharacter& InventoryCharacter); // Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.GetInventoryCharacter(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.GetVisibility_1
inline enum class ESlateVisibility UUW-Inventory_CharacterDragPanel_C::GetVisibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.GetVisibility_1");

	struct GetVisibility_1_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; GetVisibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.On_DragRect_MouseButtonDown_1
inline struct FEventReply UUW-Inventory_CharacterDragPanel_C::On_DragRect_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.On_DragRect_MouseButtonDown_1");

	struct On_DragRect_MouseButtonDown_1_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; On_DragRect_MouseButtonDown_1_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.IsHitTest
inline void UUW-Inventory_CharacterDragPanel_C::IsHitTest(struct FVector2D Pos, char& bHit) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.IsHitTest");

	struct IsHitTest_Params {
		struct FVector2D Pos;
		char& bHit;
	}; IsHitTest_Params Params;

	Params.Pos = Pos;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bHit = Params.bHit;

}

// Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.GetInventoryCharacter
inline void UUW-Inventory_CharacterDragPanel_C::GetInventoryCharacter(struct ABravoHotelInventoryCharacter& InventoryCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.GetInventoryCharacter");

	struct GetInventoryCharacter_Params {
		struct ABravoHotelInventoryCharacter& InventoryCharacter;
	}; GetInventoryCharacter_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InventoryCharacter = Params.InventoryCharacter;

}

