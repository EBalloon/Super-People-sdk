// WidgetBlueprintGeneratedClass UW-LoadingRichText.UW-LoadingRichText_C
class UUW-LoadingRichText_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct URichTextBlock RichTextBlock_52; // 0x250 (8)
	struct FText SetText; // 0x258 (24)

	void Construct(); // Function UW-LoadingRichText.UW-LoadingRichText_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-LoadingRichText(int32_t EntryPoint); // Function UW-LoadingRichText.UW-LoadingRichText_C.ExecuteUbergraph_UW-LoadingRichText(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-LoadingRichText.UW-LoadingRichText_C.Construct
inline void UUW-LoadingRichText_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoadingRichText.UW-LoadingRichText_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-LoadingRichText.UW-LoadingRichText_C.ExecuteUbergraph_UW-LoadingRichText
inline void UUW-LoadingRichText_C::ExecuteUbergraph_UW-LoadingRichText(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-LoadingRichText.UW-LoadingRichText_C.ExecuteUbergraph_UW-LoadingRichText");

	struct ExecuteUbergraph_UW-LoadingRichText_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-LoadingRichText_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

