// WidgetBlueprintGeneratedClass UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C
class UUW-Inventory_CharacterDragPanel_C : public UUserWidget {

public:

	struct Unknown Image_91; // 0x248 (8)
	struct Unknown InventoryCharacterRef; // 0x250 (8)
	char Visible : 0; // 0x258 (1)

	enum class Unknow GetVisibility_1(); // Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.GetVisibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	struct Unknown On_DragRect_MouseButtonDown_1(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.On_DragRect_MouseButtonDown_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void IsHitTest(struct Unknown Pos, char& bHit); // Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.IsHitTest(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void GetInventoryCharacter(struct Unknown& InventoryCharacter); // Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.GetInventoryCharacter(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
};

// Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.GetVisibility_1
inline enum class Unknow UUW-Inventory_CharacterDragPanel_C::GetVisibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.GetVisibility_1");

	struct GetVisibility_1_Params {
		
		enum class Unknow ReturnValue;

	}; GetVisibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.On_DragRect_MouseButtonDown_1
inline struct Unknown UUW-Inventory_CharacterDragPanel_C::On_DragRect_MouseButtonDown_1(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.On_DragRect_MouseButtonDown_1");

	struct On_DragRect_MouseButtonDown_1_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; On_DragRect_MouseButtonDown_1_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.IsHitTest
inline void UUW-Inventory_CharacterDragPanel_C::IsHitTest(struct Unknown Pos, char& bHit) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.IsHitTest");

	struct IsHitTest_Params {
		struct Unknown Pos;
		char& bHit;
	}; IsHitTest_Params Params;

	Params.Pos = Pos;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bHit = Params.bHit;

}

// Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.GetInventoryCharacter
inline void UUW-Inventory_CharacterDragPanel_C::GetInventoryCharacter(struct Unknown& InventoryCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.GetInventoryCharacter");

	struct GetInventoryCharacter_Params {
		struct Unknown& InventoryCharacter;
	}; GetInventoryCharacter_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InventoryCharacter = Params.InventoryCharacter;

}

