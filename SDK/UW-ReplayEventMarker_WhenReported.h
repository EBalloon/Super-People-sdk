// WidgetBlueprintGeneratedClass UW-ReplayEventMarker_WhenReported.UW-ReplayEventMarker_WhenReported_C
class UUW-ReplayEventMarker_WhenReported_C : public UUW-ReplayEventMarkerBasic_C {

public:

	struct Unknown UberGraphFrame; // 0x2A0 (8)
	struct Unknown EventInform; // 0x2A8 (8)
	struct Unknown VisualBorder; // 0x2B0 (8)

	void Construct(); // Function UW-ReplayEventMarker_WhenReported.UW-ReplayEventMarker_WhenReported_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void K2_SetKillEvent(char IsMyInfo); // Function UW-ReplayEventMarker_WhenReported.UW-ReplayEventMarker_WhenReported_C.K2_SetKillEvent(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-ReplayEventMarker_WhenReported(int32_t EntryPoint); // Function UW-ReplayEventMarker_WhenReported.UW-ReplayEventMarker_WhenReported_C.ExecuteUbergraph_UW-ReplayEventMarker_WhenReported(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-ReplayEventMarker_WhenReported.UW-ReplayEventMarker_WhenReported_C.Construct
inline void UUW-ReplayEventMarker_WhenReported_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayEventMarker_WhenReported.UW-ReplayEventMarker_WhenReported_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayEventMarker_WhenReported.UW-ReplayEventMarker_WhenReported_C.K2_SetKillEvent
inline void UUW-ReplayEventMarker_WhenReported_C::K2_SetKillEvent(char IsMyInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayEventMarker_WhenReported.UW-ReplayEventMarker_WhenReported_C.K2_SetKillEvent");

	struct K2_SetKillEvent_Params {
		char IsMyInfo;
	}; K2_SetKillEvent_Params Params;

	Params.IsMyInfo = IsMyInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayEventMarker_WhenReported.UW-ReplayEventMarker_WhenReported_C.ExecuteUbergraph_UW-ReplayEventMarker_WhenReported
inline void UUW-ReplayEventMarker_WhenReported_C::ExecuteUbergraph_UW-ReplayEventMarker_WhenReported(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayEventMarker_WhenReported.UW-ReplayEventMarker_WhenReported_C.ExecuteUbergraph_UW-ReplayEventMarker_WhenReported");

	struct ExecuteUbergraph_UW-ReplayEventMarker_WhenReported_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ReplayEventMarker_WhenReported_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

