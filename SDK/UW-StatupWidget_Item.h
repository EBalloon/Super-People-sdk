// WidgetBlueprintGeneratedClass UW-StatupWidget_Item.UW-StatupWidget_Item_C
class UUW-StatupWidget_Item_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation Anim_TextBg; // 0x250 (8)
	struct UHorizontalBox HorizontalBox_Damage; // 0x258 (8)
	struct UImage Image_145; // 0x260 (8)
	struct UImage Image_155; // 0x268 (8)
	struct UTextBlock T_StatName; // 0x270 (8)
	struct UTextBlock T_Value; // 0x278 (8)
	struct FText Text_StatName; // 0x280 (24)

	void SetStatValue(int32_t Type, float Value); // Function UW-StatupWidget_Item.UW-StatupWidget_Item_C.SetStatValue(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetStatName(struct FString NewParam); // Function UW-StatupWidget_Item.UW-StatupWidget_Item_C.SetStatName(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void PreConstruct(char IsDesignTime); // Function UW-StatupWidget_Item.UW-StatupWidget_Item_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-StatupWidget_Item(int32_t EntryPoint); // Function UW-StatupWidget_Item.UW-StatupWidget_Item_C.ExecuteUbergraph_UW-StatupWidget_Item(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function UW-StatupWidget_Item.UW-StatupWidget_Item_C.SetStatValue
inline void UUW-StatupWidget_Item_C::SetStatValue(int32_t Type, float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-StatupWidget_Item.UW-StatupWidget_Item_C.SetStatValue");

	struct SetStatValue_Params {
		int32_t Type;
		float Value;
	}; SetStatValue_Params Params;

	Params.Type = Type;
	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-StatupWidget_Item.UW-StatupWidget_Item_C.SetStatName
inline void UUW-StatupWidget_Item_C::SetStatName(struct FString NewParam) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-StatupWidget_Item.UW-StatupWidget_Item_C.SetStatName");

	struct SetStatName_Params {
		struct FString NewParam;
	}; SetStatName_Params Params;

	Params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-StatupWidget_Item.UW-StatupWidget_Item_C.PreConstruct
inline void UUW-StatupWidget_Item_C::PreConstruct(char IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-StatupWidget_Item.UW-StatupWidget_Item_C.PreConstruct");

	struct PreConstruct_Params {
		char IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-StatupWidget_Item.UW-StatupWidget_Item_C.ExecuteUbergraph_UW-StatupWidget_Item
inline void UUW-StatupWidget_Item_C::ExecuteUbergraph_UW-StatupWidget_Item(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-StatupWidget_Item.UW-StatupWidget_Item_C.ExecuteUbergraph_UW-StatupWidget_Item");

	struct ExecuteUbergraph_UW-StatupWidget_Item_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-StatupWidget_Item_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

