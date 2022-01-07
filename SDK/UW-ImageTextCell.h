// WidgetBlueprintGeneratedClass UW-ImageTextCell.UW-ImageTextCell_C
class UUW-ImageTextCell_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown RichTextBlock_52; // 0x250 (8)
	struct Unknown DefaultTextStyle; // 0x258 (616)
	struct FText TextString; // 0x4C0 (24)

	void Construct(); // Function UW-ImageTextCell.UW-ImageTextCell_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-ImageTextCell(int32_t EntryPoint); // Function UW-ImageTextCell.UW-ImageTextCell_C.ExecuteUbergraph_UW-ImageTextCell(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-ImageTextCell.UW-ImageTextCell_C.Construct
inline void UUW-ImageTextCell_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ImageTextCell.UW-ImageTextCell_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ImageTextCell.UW-ImageTextCell_C.ExecuteUbergraph_UW-ImageTextCell
inline void UUW-ImageTextCell_C::ExecuteUbergraph_UW-ImageTextCell(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ImageTextCell.UW-ImageTextCell_C.ExecuteUbergraph_UW-ImageTextCell");

	struct ExecuteUbergraph_UW-ImageTextCell_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ImageTextCell_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

