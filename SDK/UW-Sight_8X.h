// WidgetBlueprintGeneratedClass UW-Sight_8X.UW-Sight_8X_C
class UUW-Sight_8X_C : public UBravoHotelScopeWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UCanvasPanel CanvasPanel_1; // 0x250 (8)
	struct UImage Image_19; // 0x258 (8)
	struct UImage Image_20; // 0x260 (8)
	struct UImage Image_21; // 0x268 (8)
	struct UImage Image_22; // 0x270 (8)
	struct UImage Image_23; // 0x278 (8)
	struct UImage Image_24; // 0x280 (8)
	struct UWidgetSwitcher WidgetSwitcher_167; // 0x288 (8)
	struct FVector2D NewVar_1; // 0x290 (8)

	void SetScopeImageAngle(float NewAngle); // Function UW-Sight_8X.UW-Sight_8X_C.SetScopeImageAngle(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_UW-Sight_8X(int32_t EntryPoint); // Function UW-Sight_8X.UW-Sight_8X_C.ExecuteUbergraph_UW-Sight_8X(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function UW-Sight_8X.UW-Sight_8X_C.SetScopeImageAngle
inline void UUW-Sight_8X_C::SetScopeImageAngle(float NewAngle) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Sight_8X.UW-Sight_8X_C.SetScopeImageAngle");

	struct SetScopeImageAngle_Params {
		float NewAngle;
	}; SetScopeImageAngle_Params Params;

	Params.NewAngle = NewAngle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Sight_8X.UW-Sight_8X_C.ExecuteUbergraph_UW-Sight_8X
inline void UUW-Sight_8X_C::ExecuteUbergraph_UW-Sight_8X(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Sight_8X.UW-Sight_8X_C.ExecuteUbergraph_UW-Sight_8X");

	struct ExecuteUbergraph_UW-Sight_8X_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Sight_8X_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

