// WidgetBlueprintGeneratedClass UW-Sight_Reddot.UW-Sight_Reddot_C
class UUW-Sight_Reddot_C : public UBravoHotelScopeWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UImage Image_1; // 0x250 (8)

	void SetScopeImageAngle(float NewAngle); // Function UW-Sight_Reddot.UW-Sight_Reddot_C.SetScopeImageAngle(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-Sight_Reddot(int32_t EntryPoint); // Function UW-Sight_Reddot.UW-Sight_Reddot_C.ExecuteUbergraph_UW-Sight_Reddot(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-Sight_Reddot.UW-Sight_Reddot_C.SetScopeImageAngle
inline void UUW-Sight_Reddot_C::SetScopeImageAngle(float NewAngle) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Sight_Reddot.UW-Sight_Reddot_C.SetScopeImageAngle");

	struct SetScopeImageAngle_Params {
		float NewAngle;
	}; SetScopeImageAngle_Params Params;

	Params.NewAngle = NewAngle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Sight_Reddot.UW-Sight_Reddot_C.ExecuteUbergraph_UW-Sight_Reddot
inline void UUW-Sight_Reddot_C::ExecuteUbergraph_UW-Sight_Reddot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Sight_Reddot.UW-Sight_Reddot_C.ExecuteUbergraph_UW-Sight_Reddot");

	struct ExecuteUbergraph_UW-Sight_Reddot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Sight_Reddot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

