// BlueprintGeneratedClass BP-SUV.BP-SUV_C
class ABP-SUV_C : public ABP-DefaultGroundVehicle_C {

public:

	struct Unknown UberGraphFrame; // 0xD18 (8)
	struct Unknown BravoHotelVehicleTire_RR; // 0xD20 (8)
	struct Unknown BravoHotelVehicleTire_RL; // 0xD28 (8)
	struct Unknown BravoHotelVehicleTire_FR; // 0xD30 (8)
	struct Unknown BravoHotelVehicleTire_FL; // 0xD38 (8)
	struct Unknown BP-DestructibleComponent4; // 0xD40 (8)
	struct Unknown BP-DestructibleComponent3; // 0xD48 (8)
	struct Unknown BP-DestructibleComponent2; // 0xD50 (8)
	struct Unknown BP-DestructibleComponent1; // 0xD58 (8)
	struct Unknown BravoHotelVehicleSeat04; // 0xD60 (8)
	struct Unknown BravoHotelVehicleSeat03; // 0xD68 (8)
	struct Unknown BravoHotelVehicleSeat02; // 0xD70 (8)

	void ReceiveTick(float DeltaSeconds); // Function BP-SUV.BP-SUV_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ReceiveBeginPlay(); // Function BP-SUV.BP-SUV_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_BP-SUV(int32_t EntryPoint); // Function BP-SUV.BP-SUV_C.ExecuteUbergraph_BP-SUV(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
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

