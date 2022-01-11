// BlueprintGeneratedClass BP-ATV.BP-ATV_C
class ABP-ATV_C : public ABP-DefaultGroundVehicle_C {

public:

	struct Unknown UberGraphFrame; // 0xD98 (8)
	struct Unknown BravoHotelVehicleTire_RR; // 0xDA0 (8)
	struct Unknown BravoHotelVehicleTire_RL; // 0xDA8 (8)
	struct Unknown BravoHotelVehicleTire_FR; // 0xDB0 (8)
	struct Unknown BravoHotelVehicleTire_FL; // 0xDB8 (8)
	struct Unknown VehicleSeatCollision1; // 0xDC0 (8)
	struct Unknown VehicleSeatCollision; // 0xDC8 (8)
	struct Unknown BravoHotelVehicleSeat02; // 0xDD0 (8)
	struct Unknown M-Vehicle_Spin; // 0xDD8 (8)

	void ReceiveTick(float DeltaSeconds); // Function BP-ATV.BP-ATV_C.ReceiveTick(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ReceiveBeginPlay(); // Function BP-ATV.BP-ATV_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_BP-ATV(int32_t EntryPoint); // Function BP-ATV.BP-ATV_C.ExecuteUbergraph_BP-ATV(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function BP-ATV.BP-ATV_C.ReceiveTick
inline void ABP-ATV_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-ATV.BP-ATV_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-ATV.BP-ATV_C.ReceiveBeginPlay
inline void ABP-ATV_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-ATV.BP-ATV_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-ATV.BP-ATV_C.ExecuteUbergraph_BP-ATV
inline void ABP-ATV_C::ExecuteUbergraph_BP-ATV(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-ATV.BP-ATV_C.ExecuteUbergraph_BP-ATV");

	struct ExecuteUbergraph_BP-ATV_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-ATV_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

