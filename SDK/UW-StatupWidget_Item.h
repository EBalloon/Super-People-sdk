// WidgetBlueprintGeneratedClass UW-StatupWidget_Item.UW-StatupWidget_Item_C
class UUW-StatupWidget_Item_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Anim_TextBg; // 0x250 (8)
	struct Unknown HorizontalBox_Damage; // 0x258 (8)
	struct Unknown Image_145; // 0x260 (8)
	struct Unknown Image_155; // 0x268 (8)
	struct Unknown T_StatName; // 0x270 (8)
	struct Unknown T_Value; // 0x278 (8)
	struct FText Text_StatName; // 0x280 (24)

	void SetStatValue(int32_t Type, float Value); // Function UW-StatupWidget_Item.UW-StatupWidget_Item_C.SetStatValue(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetStatName(struct FString NewParam); // Function UW-StatupWidget_Item.UW-StatupWidget_Item_C.SetStatName(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void PreConstruct(char IsDesignTime); // Function UW-StatupWidget_Item.UW-StatupWidget_Item_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-StatupWidget_Item(int32_t EntryPoint); // Function UW-StatupWidget_Item.UW-StatupWidget_Item_C.ExecuteUbergraph_UW-StatupWidget_Item(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
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

