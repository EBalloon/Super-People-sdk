// BlueprintGeneratedClass BP-DestructibleActor.BP-DestructibleActor_C
class ABP-DestructibleActor_C : public ADestructibleActor {

public:

	struct Unknown UberGraphFrame; // 0x318 (8)
	float OpacityTime_Opacity_Percent_6C96418549465FDC90E47A873A3B4734; // 0x320 (4)
	float OpacityTime_Opacity_6C96418549465FDC90E47A873A3B4734; // 0x324 (4)
	char OpacityTime__Direction_6C96418549465FDC90E47A873A3B4734; // 0x328 (1)
	struct Unknown OpacityTime; // 0x330 (8)
	float Opacity; // 0x338 (4)
	float DM_Opacity; // 0x33C (4)
	char Opacity_Bool : 0; // 0x340 (1)

	void OpacityTime__FinishedFunc(); // Function BP-DestructibleActor.BP-DestructibleActor_C.OpacityTime__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OpacityTime__UpdateFunc(); // Function BP-DestructibleActor.BP-DestructibleActor_C.OpacityTime__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ReceiveBeginPlay(); // Function BP-DestructibleActor.BP-DestructibleActor_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_BP-DestructibleActor(int32_t EntryPoint); // Function BP-DestructibleActor.BP-DestructibleActor_C.ExecuteUbergraph_BP-DestructibleActor(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function BP-DestructibleActor.BP-DestructibleActor_C.OpacityTime__FinishedFunc
inline void ABP-DestructibleActor_C::OpacityTime__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DestructibleActor.BP-DestructibleActor_C.OpacityTime__FinishedFunc");

	struct OpacityTime__FinishedFunc_Params {
		
	}; OpacityTime__FinishedFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DestructibleActor.BP-DestructibleActor_C.OpacityTime__UpdateFunc
inline void ABP-DestructibleActor_C::OpacityTime__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DestructibleActor.BP-DestructibleActor_C.OpacityTime__UpdateFunc");

	struct OpacityTime__UpdateFunc_Params {
		
	}; OpacityTime__UpdateFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DestructibleActor.BP-DestructibleActor_C.ReceiveBeginPlay
inline void ABP-DestructibleActor_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DestructibleActor.BP-DestructibleActor_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-DestructibleActor.BP-DestructibleActor_C.ExecuteUbergraph_BP-DestructibleActor
inline void ABP-DestructibleActor_C::ExecuteUbergraph_BP-DestructibleActor(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-DestructibleActor.BP-DestructibleActor_C.ExecuteUbergraph_BP-DestructibleActor");

	struct ExecuteUbergraph_BP-DestructibleActor_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-DestructibleActor_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

