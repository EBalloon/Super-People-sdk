// WidgetBlueprintGeneratedClass UW-NitroBoomTargetWidget.UW-NitroBoomTargetWidget_C
class UUW-NitroBoomTargetWidget_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image_73; // 0x250 (8)
	struct Unknown KeyImageWidget; // 0x258 (8)

	void Construct(); // Function UW-NitroBoomTargetWidget.UW-NitroBoomTargetWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-NitroBoomTargetWidget(int32_t EntryPoint); // Function UW-NitroBoomTargetWidget.UW-NitroBoomTargetWidget_C.ExecuteUbergraph_UW-NitroBoomTargetWidget(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function UW-NitroBoomTargetWidget.UW-NitroBoomTargetWidget_C.Construct
inline void UUW-NitroBoomTargetWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-NitroBoomTargetWidget.UW-NitroBoomTargetWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-NitroBoomTargetWidget.UW-NitroBoomTargetWidget_C.ExecuteUbergraph_UW-NitroBoomTargetWidget
inline void UUW-NitroBoomTargetWidget_C::ExecuteUbergraph_UW-NitroBoomTargetWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-NitroBoomTargetWidget.UW-NitroBoomTargetWidget_C.ExecuteUbergraph_UW-NitroBoomTargetWidget");

	struct ExecuteUbergraph_UW-NitroBoomTargetWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-NitroBoomTargetWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

