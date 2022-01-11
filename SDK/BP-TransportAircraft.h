// BlueprintGeneratedClass BP-TransportAircraft.BP-TransportAircraft_C
class ABP-TransportAircraft_C : public ATransportAircraftPawn {

public:

	struct Unknown UberGraphFrame; // 0x6D0 (8)

	void ReceiveTick(float DeltaSeconds); // Function BP-TransportAircraft.BP-TransportAircraft_C.ReceiveTick(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP-TransportAircraft(int32_t EntryPoint); // Function BP-TransportAircraft.BP-TransportAircraft_C.ExecuteUbergraph_BP-TransportAircraft(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function BP-TransportAircraft.BP-TransportAircraft_C.ReceiveTick
inline void ABP-TransportAircraft_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TransportAircraft.BP-TransportAircraft_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-TransportAircraft.BP-TransportAircraft_C.ExecuteUbergraph_BP-TransportAircraft
inline void ABP-TransportAircraft_C::ExecuteUbergraph_BP-TransportAircraft(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-TransportAircraft.BP-TransportAircraft_C.ExecuteUbergraph_BP-TransportAircraft");

	struct ExecuteUbergraph_BP-TransportAircraft_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-TransportAircraft_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

