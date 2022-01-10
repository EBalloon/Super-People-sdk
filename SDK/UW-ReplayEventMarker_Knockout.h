// WidgetBlueprintGeneratedClass UW-ReplayEventMarker_Knockout.UW-ReplayEventMarker_Knockout_C
class UUW-ReplayEventMarker_Knockout_C : public UUW-ReplayEventMarkerBasic_C {

public:

	struct Unknown UberGraphFrame; // 0x2A0 (8)
	struct Unknown VisualBorder; // 0x2A8 (8)

	void Construct(); // Function UW-ReplayEventMarker_Knockout.UW-ReplayEventMarker_Knockout_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_UW-ReplayEventMarker_Knockout(int32_t EntryPoint); // Function UW-ReplayEventMarker_Knockout.UW-ReplayEventMarker_Knockout_C.ExecuteUbergraph_UW-ReplayEventMarker_Knockout(Final|UbergraphFunction) // <Game_BE.exe+0x2B812B0>
};

// Function UW-ReplayEventMarker_Knockout.UW-ReplayEventMarker_Knockout_C.Construct
inline void UUW-ReplayEventMarker_Knockout_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayEventMarker_Knockout.UW-ReplayEventMarker_Knockout_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayEventMarker_Knockout.UW-ReplayEventMarker_Knockout_C.ExecuteUbergraph_UW-ReplayEventMarker_Knockout
inline void UUW-ReplayEventMarker_Knockout_C::ExecuteUbergraph_UW-ReplayEventMarker_Knockout(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayEventMarker_Knockout.UW-ReplayEventMarker_Knockout_C.ExecuteUbergraph_UW-ReplayEventMarker_Knockout");

	struct ExecuteUbergraph_UW-ReplayEventMarker_Knockout_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ReplayEventMarker_Knockout_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

