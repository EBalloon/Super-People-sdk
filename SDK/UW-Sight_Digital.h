// WidgetBlueprintGeneratedClass UW-Sight_Digital.UW-Sight_Digital_C
class UUW-Sight_Digital_C : public UBravoHotelScopeWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Idle; // 0x250 (8)
	struct Unknown Scope_In; // 0x258 (8)
	struct Unknown CanvasPanel_1; // 0x260 (8)
	struct Unknown Scope_Center; // 0x268 (8)
	struct Unknown Scope_Center_Dot; // 0x270 (8)

	void SetScopeImageAngle(float NewAngle); // Function UW-Sight_Digital.UW-Sight_Digital_C.SetScopeImageAngle(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void K2_OnEnterADS(); // Function UW-Sight_Digital.UW-Sight_Digital_C.K2_OnEnterADS(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void K2_OnExitADS(); // Function UW-Sight_Digital.UW-Sight_Digital_C.K2_OnExitADS(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-Sight_Digital(int32_t EntryPoint); // Function UW-Sight_Digital.UW-Sight_Digital_C.ExecuteUbergraph_UW-Sight_Digital(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-Sight_Digital.UW-Sight_Digital_C.SetScopeImageAngle
inline void UUW-Sight_Digital_C::SetScopeImageAngle(float NewAngle) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Sight_Digital.UW-Sight_Digital_C.SetScopeImageAngle");

	struct SetScopeImageAngle_Params {
		float NewAngle;
	}; SetScopeImageAngle_Params Params;

	Params.NewAngle = NewAngle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Sight_Digital.UW-Sight_Digital_C.K2_OnEnterADS
inline void UUW-Sight_Digital_C::K2_OnEnterADS() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Sight_Digital.UW-Sight_Digital_C.K2_OnEnterADS");

	struct K2_OnEnterADS_Params {
		
	}; K2_OnEnterADS_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Sight_Digital.UW-Sight_Digital_C.K2_OnExitADS
inline void UUW-Sight_Digital_C::K2_OnExitADS() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Sight_Digital.UW-Sight_Digital_C.K2_OnExitADS");

	struct K2_OnExitADS_Params {
		
	}; K2_OnExitADS_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Sight_Digital.UW-Sight_Digital_C.ExecuteUbergraph_UW-Sight_Digital
inline void UUW-Sight_Digital_C::ExecuteUbergraph_UW-Sight_Digital(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Sight_Digital.UW-Sight_Digital_C.ExecuteUbergraph_UW-Sight_Digital");

	struct ExecuteUbergraph_UW-Sight_Digital_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Sight_Digital_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

