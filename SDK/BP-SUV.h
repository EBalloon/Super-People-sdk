// BlueprintGeneratedClass BP-SUV.BP-SUV_C
class ABP-SUV_C : public ABP-DefaultGroundVehicle_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0xD90 (8)
	struct UBravoHotelVehicleTireComponent BravoHotelVehicleTire_RR; // 0xD98 (8)
	struct UBravoHotelVehicleTireComponent BravoHotelVehicleTire_RL; // 0xDA0 (8)
	struct UBravoHotelVehicleTireComponent BravoHotelVehicleTire_FR; // 0xDA8 (8)
	struct UBravoHotelVehicleTireComponent BravoHotelVehicleTire_FL; // 0xDB0 (8)
	struct UBP-DestructibleComponent_C BP-DestructibleComponent4; // 0xDB8 (8)
	struct UBP-DestructibleComponent_C BP-DestructibleComponent3; // 0xDC0 (8)
	struct UBP-DestructibleComponent_C BP-DestructibleComponent2; // 0xDC8 (8)
	struct UBP-DestructibleComponent_C BP-DestructibleComponent1; // 0xDD0 (8)
	struct UBravoHotelVehicleSeatComponent BravoHotelVehicleSeat04; // 0xDD8 (8)
	struct UBravoHotelVehicleSeatComponent BravoHotelVehicleSeat03; // 0xDE0 (8)
	struct UBravoHotelVehicleSeatComponent BravoHotelVehicleSeat02; // 0xDE8 (8)

	void ReceiveTick(float DeltaSeconds); // Function BP-SUV.BP-SUV_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ReceiveBeginPlay(); // Function BP-SUV.BP-SUV_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_BP-SUV(int32_t EntryPoint); // Function BP-SUV.BP-SUV_C.ExecuteUbergraph_BP-SUV(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
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

