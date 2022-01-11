// WidgetBlueprintGeneratedClass UW-JetpackWidget.UW-JetpackWidget_C
class UUW-JetpackWidget_C : public UBravoHotelJetpackWidget {

public:

	struct Unknown UberGraphFrame; // 0x268 (8)
	struct Unknown FuelGauge; // 0x270 (8)
	struct Unknown FuelIcon; // 0x278 (8)
	struct Unknown FuelText; // 0x280 (8)

	void SetNativeValues(); // Function UW-JetpackWidget.UW-JetpackWidget_C.SetNativeValues(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-JetpackWidget.UW-JetpackWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-JetpackWidget(int32_t EntryPoint); // Function UW-JetpackWidget.UW-JetpackWidget_C.ExecuteUbergraph_UW-JetpackWidget(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function UW-JetpackWidget.UW-JetpackWidget_C.SetNativeValues
inline void UUW-JetpackWidget_C::SetNativeValues() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-JetpackWidget.UW-JetpackWidget_C.SetNativeValues");

	struct SetNativeValues_Params {
		
	}; SetNativeValues_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-JetpackWidget.UW-JetpackWidget_C.Construct
inline void UUW-JetpackWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-JetpackWidget.UW-JetpackWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-JetpackWidget.UW-JetpackWidget_C.ExecuteUbergraph_UW-JetpackWidget
inline void UUW-JetpackWidget_C::ExecuteUbergraph_UW-JetpackWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-JetpackWidget.UW-JetpackWidget_C.ExecuteUbergraph_UW-JetpackWidget");

	struct ExecuteUbergraph_UW-JetpackWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-JetpackWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

