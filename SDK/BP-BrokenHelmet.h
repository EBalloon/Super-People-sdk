// BlueprintGeneratedClass BP-BrokenHelmet.BP-BrokenHelmet_C
class ABP-BrokenHelmet_C : public ABravoHotelBrokenEquipment {

public:

	struct Unknown UberGraphFrame; // 0x330 (8)
	float Power_Min; // 0x338 (4)
	float Power_Max; // 0x33C (4)
	float FlyAngle; // 0x340 (4)

	void ReceiveBeginPlay(); // Function BP-BrokenHelmet.BP-BrokenHelmet_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_BP-BrokenHelmet(int32_t EntryPoint); // Function BP-BrokenHelmet.BP-BrokenHelmet_C.ExecuteUbergraph_BP-BrokenHelmet(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function BP-BrokenHelmet.BP-BrokenHelmet_C.ReceiveBeginPlay
inline void ABP-BrokenHelmet_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BrokenHelmet.BP-BrokenHelmet_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BrokenHelmet.BP-BrokenHelmet_C.ExecuteUbergraph_BP-BrokenHelmet
inline void ABP-BrokenHelmet_C::ExecuteUbergraph_BP-BrokenHelmet(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BrokenHelmet.BP-BrokenHelmet_C.ExecuteUbergraph_BP-BrokenHelmet");

	struct ExecuteUbergraph_BP-BrokenHelmet_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-BrokenHelmet_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

