// WidgetBlueprintGeneratedClass UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C
class UUW-Lobby_Craft_Recipe_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UCanvasPanel Canvas_Recipe1; // 0x250 (8)
	struct UCanvasPanel Canvas_Recipe2; // 0x258 (8)
	struct UUW-Lobby_Craft_Recipe_Weapon_C UW-Lobby_Craft_Recipe_Weapon; // 0x260 (8)
	struct UUW-Lobby_Craft_Recipe_Item_C UW-Lobby_Weapon_Recipe_Item_2; // 0x268 (8)
	struct UUW-Lobby_Craft_Recipe_Item_C UW-Lobby_Weapon_Recipe_Item_3; // 0x270 (8)
	struct UUW-Lobby_Craft_Recipe_Item_C UW-Lobby_Weapon_Recipe_Item_4; // 0x278 (8)
	struct UUW-Lobby_Craft_Recipe_Item_C UW-Lobby_Weapon_Recipe_Item_5; // 0x280 (8)
	struct UUW-Lobby_Craft_Recipe_Item_C UW-Lobby_Weapon_Recipe_Item_6; // 0x288 (8)
	struct UUW-Lobby_Craft_Recipe_Item_C UW-Lobby_Weapon_Recipe_Item_7; // 0x290 (8)
	struct UUW-Lobby_Craft_Recipe_Item_C UW-Lobby_Weapon_Recipe_Item_8; // 0x298 (8)
	struct UUW-Lobby_Craft_Recipe_Item_C UW-Lobby_Weapon_Recipe_Item_9; // 0x2A0 (8)
	struct UUW-Lobby_Craft_Recipe_Item_C UW-Lobby_Weapon_Recipe_Item_10; // 0x2A8 (8)
	struct UUW-Lobby_Craft_Recipe_Item_C UW-Lobby_Weapon_Recipe_Item_11; // 0x2B0 (8)
	struct UWidgetSwitcher WidgetSwitcher_68; // 0x2B8 (8)
	struct TArray<struct UUW-Lobby_Craft_Recipe_Item_C> Recipe_ItemArray; // 0x2C0 (16)
	struct TArray<struct UUW-Lobby_Craft_Recipe_Item_C> Recipe_ItemArray2; // 0x2D0 (16)
	char HasWeapon : 0; // 0x2E0 (1)
	struct UUW-ArmoryInput_C ArmoryInputRef; // 0x2E8 (8)
	float CurrentOpacity; // 0x2F0 (4)

	void SetOpacity(); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.SetOpacity(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void CheckOwn(); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.CheckOwn(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void InitRecipeItemArray(); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.InitRecipeItemArray(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetRecipeInfo(int32_t BaseItemID, int32_t MaterialGroupItemID); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.SetRecipeInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-Lobby_Craft_Recipe(int32_t EntryPoint); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.ExecuteUbergraph_UW-Lobby_Craft_Recipe(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.SetOpacity
inline void UUW-Lobby_Craft_Recipe_C::SetOpacity() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.SetOpacity");

	struct SetOpacity_Params {
		
	}; SetOpacity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.CheckOwn
inline void UUW-Lobby_Craft_Recipe_C::CheckOwn() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.CheckOwn");

	struct CheckOwn_Params {
		
	}; CheckOwn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.InitRecipeItemArray
inline void UUW-Lobby_Craft_Recipe_C::InitRecipeItemArray() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.InitRecipeItemArray");

	struct InitRecipeItemArray_Params {
		
	}; InitRecipeItemArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.SetRecipeInfo
inline void UUW-Lobby_Craft_Recipe_C::SetRecipeInfo(int32_t BaseItemID, int32_t MaterialGroupItemID) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.SetRecipeInfo");

	struct SetRecipeInfo_Params {
		int32_t BaseItemID;
		int32_t MaterialGroupItemID;
	}; SetRecipeInfo_Params Params;

	Params.BaseItemID = BaseItemID;
	Params.MaterialGroupItemID = MaterialGroupItemID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.Construct
inline void UUW-Lobby_Craft_Recipe_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.Tick
inline void UUW-Lobby_Craft_Recipe_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.Tick");

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

// Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.ExecuteUbergraph_UW-Lobby_Craft_Recipe
inline void UUW-Lobby_Craft_Recipe_C::ExecuteUbergraph_UW-Lobby_Craft_Recipe(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.ExecuteUbergraph_UW-Lobby_Craft_Recipe");

	struct ExecuteUbergraph_UW-Lobby_Craft_Recipe_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Lobby_Craft_Recipe_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

