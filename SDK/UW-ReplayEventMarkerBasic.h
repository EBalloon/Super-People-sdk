// WidgetBlueprintGeneratedClass UW-ReplayEventMarkerBasic.UW-ReplayEventMarkerBasic_C
class UUW-ReplayEventMarkerBasic_C : public UBravoHotelReplayTimelineEventMarker {

public:

	struct Unknown UberGraphFrame; // 0x290 (8)
	struct Unknown MarkerBorder; // 0x298 (8)

	void K2_SetKillEvent(char IsMyInfo); // Function UW-ReplayEventMarkerBasic.UW-ReplayEventMarkerBasic_C.K2_SetKillEvent(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-ReplayEventMarkerBasic(int32_t EntryPoint); // Function UW-ReplayEventMarkerBasic.UW-ReplayEventMarkerBasic_C.ExecuteUbergraph_UW-ReplayEventMarkerBasic(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function UW-ReplayEventMarkerBasic.UW-ReplayEventMarkerBasic_C.K2_SetKillEvent
inline void UUW-ReplayEventMarkerBasic_C::K2_SetKillEvent(char IsMyInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayEventMarkerBasic.UW-ReplayEventMarkerBasic_C.K2_SetKillEvent");

	struct K2_SetKillEvent_Params {
		char IsMyInfo;
	}; K2_SetKillEvent_Params Params;

	Params.IsMyInfo = IsMyInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayEventMarkerBasic.UW-ReplayEventMarkerBasic_C.ExecuteUbergraph_UW-ReplayEventMarkerBasic
inline void UUW-ReplayEventMarkerBasic_C::ExecuteUbergraph_UW-ReplayEventMarkerBasic(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayEventMarkerBasic.UW-ReplayEventMarkerBasic_C.ExecuteUbergraph_UW-ReplayEventMarkerBasic");

	struct ExecuteUbergraph_UW-ReplayEventMarkerBasic_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ReplayEventMarkerBasic_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

