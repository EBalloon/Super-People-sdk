// WidgetBlueprintGeneratedClass UW-Sight_HoloSight.UW-Sight_HoloSight_C
class UUW-Sight_HoloSight_C : public UBravoHotelScopeWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image_1; // 0x250 (8)

	void SetScopeImageAngle(float NewAngle); // Function UW-Sight_HoloSight.UW-Sight_HoloSight_C.SetScopeImageAngle(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-Sight_HoloSight(int32_t EntryPoint); // Function UW-Sight_HoloSight.UW-Sight_HoloSight_C.ExecuteUbergraph_UW-Sight_HoloSight(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function UW-Sight_HoloSight.UW-Sight_HoloSight_C.SetScopeImageAngle
inline void UUW-Sight_HoloSight_C::SetScopeImageAngle(float NewAngle) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Sight_HoloSight.UW-Sight_HoloSight_C.SetScopeImageAngle");

	struct SetScopeImageAngle_Params {
		float NewAngle;
	}; SetScopeImageAngle_Params Params;

	Params.NewAngle = NewAngle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Sight_HoloSight.UW-Sight_HoloSight_C.ExecuteUbergraph_UW-Sight_HoloSight
inline void UUW-Sight_HoloSight_C::ExecuteUbergraph_UW-Sight_HoloSight(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Sight_HoloSight.UW-Sight_HoloSight_C.ExecuteUbergraph_UW-Sight_HoloSight");

	struct ExecuteUbergraph_UW-Sight_HoloSight_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Sight_HoloSight_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

