// WidgetBlueprintGeneratedClass UW-Sight_15X.UW-Sight_15X_C
class UUW-Sight_15X_C : public UBravoHotelScopeWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown CanvasPanel_1; // 0x250 (8)
	struct Unknown Image_25; // 0x258 (8)
	struct Unknown Image_26; // 0x260 (8)
	struct Unknown Image_27; // 0x268 (8)
	struct Unknown Image_28; // 0x270 (8)
	struct Unknown Image_29; // 0x278 (8)
	struct Unknown Image_30; // 0x280 (8)
	struct Unknown WidgetSwitcher_167; // 0x288 (8)
	struct Unknown NewVar_1; // 0x290 (8)

	void SetScopeImageAngle(float NewAngle); // Function UW-Sight_15X.UW-Sight_15X_C.SetScopeImageAngle(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-Sight_15X(int32_t EntryPoint); // Function UW-Sight_15X.UW-Sight_15X_C.ExecuteUbergraph_UW-Sight_15X(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function UW-Sight_15X.UW-Sight_15X_C.SetScopeImageAngle
inline void UUW-Sight_15X_C::SetScopeImageAngle(float NewAngle) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Sight_15X.UW-Sight_15X_C.SetScopeImageAngle");

	struct SetScopeImageAngle_Params {
		float NewAngle;
	}; SetScopeImageAngle_Params Params;

	Params.NewAngle = NewAngle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Sight_15X.UW-Sight_15X_C.ExecuteUbergraph_UW-Sight_15X
inline void UUW-Sight_15X_C::ExecuteUbergraph_UW-Sight_15X(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Sight_15X.UW-Sight_15X_C.ExecuteUbergraph_UW-Sight_15X");

	struct ExecuteUbergraph_UW-Sight_15X_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Sight_15X_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

