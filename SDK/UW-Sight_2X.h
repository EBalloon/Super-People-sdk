// WidgetBlueprintGeneratedClass UW-Sight_2X.UW-Sight_2X_C
class UUW-Sight_2X_C : public UBravoHotelScopeWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UCanvasPanel CanvasPanel_1; // 0x250 (8)
	struct UImage Image_1; // 0x258 (8)
	struct FVector2D NewVar_1; // 0x260 (8)

	void SetScopeImageAngle(float NewAngle); // Function UW-Sight_2X.UW-Sight_2X_C.SetScopeImageAngle(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-Sight_2X(int32_t EntryPoint); // Function UW-Sight_2X.UW-Sight_2X_C.ExecuteUbergraph_UW-Sight_2X(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-Sight_2X.UW-Sight_2X_C.SetScopeImageAngle
inline void UUW-Sight_2X_C::SetScopeImageAngle(float NewAngle) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Sight_2X.UW-Sight_2X_C.SetScopeImageAngle");

	struct SetScopeImageAngle_Params {
		float NewAngle;
	}; SetScopeImageAngle_Params Params;

	Params.NewAngle = NewAngle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Sight_2X.UW-Sight_2X_C.ExecuteUbergraph_UW-Sight_2X
inline void UUW-Sight_2X_C::ExecuteUbergraph_UW-Sight_2X(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Sight_2X.UW-Sight_2X_C.ExecuteUbergraph_UW-Sight_2X");

	struct ExecuteUbergraph_UW-Sight_2X_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Sight_2X_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

