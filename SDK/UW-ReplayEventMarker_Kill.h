// WidgetBlueprintGeneratedClass UW-ReplayEventMarker_Kill.UW-ReplayEventMarker_Kill_C
class UUW-ReplayEventMarker_Kill_C : public UUW-ReplayEventMarkerBasic_C {

public:

	struct Unknown UberGraphFrame; // 0x2A0 (8)
	struct Unknown VisualBorder; // 0x2A8 (8)

	void Construct(); // Function UW-ReplayEventMarker_Kill.UW-ReplayEventMarker_Kill_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-ReplayEventMarker_Kill(int32_t EntryPoint); // Function UW-ReplayEventMarker_Kill.UW-ReplayEventMarker_Kill_C.ExecuteUbergraph_UW-ReplayEventMarker_Kill(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-ReplayEventMarker_Kill.UW-ReplayEventMarker_Kill_C.Construct
inline void UUW-ReplayEventMarker_Kill_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayEventMarker_Kill.UW-ReplayEventMarker_Kill_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayEventMarker_Kill.UW-ReplayEventMarker_Kill_C.ExecuteUbergraph_UW-ReplayEventMarker_Kill
inline void UUW-ReplayEventMarker_Kill_C::ExecuteUbergraph_UW-ReplayEventMarker_Kill(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayEventMarker_Kill.UW-ReplayEventMarker_Kill_C.ExecuteUbergraph_UW-ReplayEventMarker_Kill");

	struct ExecuteUbergraph_UW-ReplayEventMarker_Kill_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ReplayEventMarker_Kill_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

