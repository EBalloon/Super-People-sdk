// WidgetBlueprintGeneratedClass UW-SupplyToolTip.UW-SupplyToolTip_C
class UUW-SupplyToolTip_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UImage GoldImage; // 0x250 (8)
	struct UImage Image_362; // 0x258 (8)
	struct UTextBlock Message; // 0x260 (8)
	struct UTextBlock PriceValue; // 0x268 (8)
	struct USizeBox SizeBox_2; // 0x270 (8)

	void SetPriceData(struct FText ItemName, int32_t Price); // Function UW-SupplyToolTip.UW-SupplyToolTip_C.SetPriceData(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetData(struct FText Msg); // Function UW-SupplyToolTip.UW-SupplyToolTip_C.SetData(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-SupplyToolTip(int32_t EntryPoint); // Function UW-SupplyToolTip.UW-SupplyToolTip_C.ExecuteUbergraph_UW-SupplyToolTip(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-SupplyToolTip.UW-SupplyToolTip_C.SetPriceData
inline void UUW-SupplyToolTip_C::SetPriceData(struct FText ItemName, int32_t Price) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SupplyToolTip.UW-SupplyToolTip_C.SetPriceData");

	struct SetPriceData_Params {
		struct FText ItemName;
		int32_t Price;
	}; SetPriceData_Params Params;

	Params.ItemName = ItemName;
	Params.Price = Price;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SupplyToolTip.UW-SupplyToolTip_C.SetData
inline void UUW-SupplyToolTip_C::SetData(struct FText Msg) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SupplyToolTip.UW-SupplyToolTip_C.SetData");

	struct SetData_Params {
		struct FText Msg;
	}; SetData_Params Params;

	Params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SupplyToolTip.UW-SupplyToolTip_C.ExecuteUbergraph_UW-SupplyToolTip
inline void UUW-SupplyToolTip_C::ExecuteUbergraph_UW-SupplyToolTip(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SupplyToolTip.UW-SupplyToolTip_C.ExecuteUbergraph_UW-SupplyToolTip");

	struct ExecuteUbergraph_UW-SupplyToolTip_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-SupplyToolTip_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

