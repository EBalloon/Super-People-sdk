// BlueprintGeneratedClass BP-ATV.BP-ATV_C
class ABP-ATV_C : public ABP-DefaultGroundVehicle_C {

public:

	struct Unknown UberGraphFrame; // 0xD18 (8)
	struct Unknown BravoHotelVehicleTire_RR; // 0xD20 (8)
	struct Unknown BravoHotelVehicleTire_RL; // 0xD28 (8)
	struct Unknown BravoHotelVehicleTire_FR; // 0xD30 (8)
	struct Unknown BravoHotelVehicleTire_FL; // 0xD38 (8)
	struct Unknown VehicleSeatCollision1; // 0xD40 (8)
	struct Unknown VehicleSeatCollision; // 0xD48 (8)
	struct Unknown BravoHotelVehicleSeat02; // 0xD50 (8)
	struct Unknown M-Vehicle_Spin; // 0xD58 (8)

	void ReceiveTick(float DeltaSeconds); // Function BP-ATV.BP-ATV_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ReceiveBeginPlay(); // Function BP-ATV.BP-ATV_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_BP-ATV(int32_t EntryPoint); // Function BP-ATV.BP-ATV_C.ExecuteUbergraph_BP-ATV(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
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

