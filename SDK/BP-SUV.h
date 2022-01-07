// BlueprintGeneratedClass BP-SUV.BP-SUV_C
class ABP-SUV_C : public ABP-DefaultGroundVehicle_C {

public:

	struct Unknown UberGraphFrame; // 0xD80 (8)
	struct Unknown BravoHotelVehicleTire_RR; // 0xD88 (8)
	struct Unknown BravoHotelVehicleTire_RL; // 0xD90 (8)
	struct Unknown BravoHotelVehicleTire_FR; // 0xD98 (8)
	struct Unknown BravoHotelVehicleTire_FL; // 0xDA0 (8)
	struct Unknown BP-DestructibleComponent4; // 0xDA8 (8)
	struct Unknown BP-DestructibleComponent3; // 0xDB0 (8)
	struct Unknown BP-DestructibleComponent2; // 0xDB8 (8)
	struct Unknown BP-DestructibleComponent1; // 0xDC0 (8)
	struct Unknown BravoHotelVehicleSeat04; // 0xDC8 (8)
	struct Unknown BravoHotelVehicleSeat03; // 0xDD0 (8)
	struct Unknown BravoHotelVehicleSeat02; // 0xDD8 (8)

	void ReceiveTick(float DeltaSeconds); // Function BP-SUV.BP-SUV_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ReceiveBeginPlay(); // Function BP-SUV.BP-SUV_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_BP-SUV(int32_t EntryPoint); // Function BP-SUV.BP-SUV_C.ExecuteUbergraph_BP-SUV(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function BP-SUV.BP-SUV_C.ReceiveTick
inline void ABP-SUV_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SUV.BP-SUV_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SUV.BP-SUV_C.ReceiveBeginPlay
inline void ABP-SUV_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SUV.BP-SUV_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-SUV.BP-SUV_C.ExecuteUbergraph_BP-SUV
inline void ABP-SUV_C::ExecuteUbergraph_BP-SUV(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-SUV.BP-SUV_C.ExecuteUbergraph_BP-SUV");

	struct ExecuteUbergraph_BP-SUV_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-SUV_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

