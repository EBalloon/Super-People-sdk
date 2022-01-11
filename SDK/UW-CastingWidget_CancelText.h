// WidgetBlueprintGeneratedClass UW-CastingWidget_CancelText.UW-CastingWidget_CancelText_C
class UUW-CastingWidget_CancelText_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown TextBlock; // 0x250 (8)
	struct FText SetText; // 0x258 (24)

	void Construct(); // Function UW-CastingWidget_CancelText.UW-CastingWidget_CancelText_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-CastingWidget_CancelText(int32_t EntryPoint); // Function UW-CastingWidget_CancelText.UW-CastingWidget_CancelText_C.ExecuteUbergraph_UW-CastingWidget_CancelText(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function UW-CastingWidget_CancelText.UW-CastingWidget_CancelText_C.Construct
inline void UUW-CastingWidget_CancelText_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CastingWidget_CancelText.UW-CastingWidget_CancelText_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-CastingWidget_CancelText.UW-CastingWidget_CancelText_C.ExecuteUbergraph_UW-CastingWidget_CancelText
inline void UUW-CastingWidget_CancelText_C::ExecuteUbergraph_UW-CastingWidget_CancelText(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-CastingWidget_CancelText.UW-CastingWidget_CancelText_C.ExecuteUbergraph_UW-CastingWidget_CancelText");

	struct ExecuteUbergraph_UW-CastingWidget_CancelText_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-CastingWidget_CancelText_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

