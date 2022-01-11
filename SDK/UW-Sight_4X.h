// WidgetBlueprintGeneratedClass UW-Sight_4X.UW-Sight_4X_C
class UUW-Sight_4X_C : public UBravoHotelScopeWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown CanvasPanel_1; // 0x250 (8)
	struct Unknown Image; // 0x258 (8)
	struct Unknown Image_2; // 0x260 (8)
	struct Unknown Image_3; // 0x268 (8)
	struct Unknown Image_4; // 0x270 (8)
	struct Unknown Image_5; // 0x278 (8)
	struct Unknown Image_6; // 0x280 (8)
	struct Unknown Image_7; // 0x288 (8)
	struct Unknown Image_8; // 0x290 (8)
	struct Unknown Image_9; // 0x298 (8)
	struct Unknown Image_10; // 0x2A0 (8)
	struct Unknown Image_11; // 0x2A8 (8)
	struct Unknown Image_12; // 0x2B0 (8)
	struct Unknown Image_13; // 0x2B8 (8)
	struct Unknown Image_14; // 0x2C0 (8)
	struct Unknown Image_15; // 0x2C8 (8)
	struct Unknown Image_16; // 0x2D0 (8)
	struct Unknown Image_17; // 0x2D8 (8)
	struct Unknown Image_18; // 0x2E0 (8)
	struct Unknown Image_47; // 0x2E8 (8)
	struct Unknown ScaleBox4X_5mm; // 0x2F0 (8)
	struct Unknown ScaleBox4X_7mm; // 0x2F8 (8)
	struct Unknown ScaleBox4X_SR; // 0x300 (8)
	struct Unknown WidgetSwitcher_167; // 0x308 (8)
	struct Unknown NewVar_1; // 0x310 (8)

	void SetScopeImageAngle(float NewAngle); // Function UW-Sight_4X.UW-Sight_4X_C.SetScopeImageAngle(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetTexture5mm(); // Function UW-Sight_4X.UW-Sight_4X_C.SetTexture5mm(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetTexture7mm(); // Function UW-Sight_4X.UW-Sight_4X_C.SetTexture7mm(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetTextureSniper(); // Function UW-Sight_4X.UW-Sight_4X_C.SetTextureSniper(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void K2_OnSetAllowdAmmo(enum class Unknow WeaponType, struct FName& AllowdAmmoName); // Function UW-Sight_4X.UW-Sight_4X_C.K2_OnSetAllowdAmmo(Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-Sight_4X(int32_t EntryPoint); // Function UW-Sight_4X.UW-Sight_4X_C.ExecuteUbergraph_UW-Sight_4X(Final|UbergraphFunction) // <Game_BE.exe+0x2B80160>
};

// Function UW-Sight_4X.UW-Sight_4X_C.SetScopeImageAngle
inline void UUW-Sight_4X_C::SetScopeImageAngle(float NewAngle) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Sight_4X.UW-Sight_4X_C.SetScopeImageAngle");

	struct SetScopeImageAngle_Params {
		float NewAngle;
	}; SetScopeImageAngle_Params Params;

	Params.NewAngle = NewAngle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Sight_4X.UW-Sight_4X_C.SetTexture5mm
inline void UUW-Sight_4X_C::SetTexture5mm() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Sight_4X.UW-Sight_4X_C.SetTexture5mm");

	struct SetTexture5mm_Params {
		
	}; SetTexture5mm_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Sight_4X.UW-Sight_4X_C.SetTexture7mm
inline void UUW-Sight_4X_C::SetTexture7mm() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Sight_4X.UW-Sight_4X_C.SetTexture7mm");

	struct SetTexture7mm_Params {
		
	}; SetTexture7mm_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Sight_4X.UW-Sight_4X_C.SetTextureSniper
inline void UUW-Sight_4X_C::SetTextureSniper() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Sight_4X.UW-Sight_4X_C.SetTextureSniper");

	struct SetTextureSniper_Params {
		
	}; SetTextureSniper_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Sight_4X.UW-Sight_4X_C.K2_OnSetAllowdAmmo
inline void UUW-Sight_4X_C::K2_OnSetAllowdAmmo(enum class Unknow WeaponType, struct FName& AllowdAmmoName) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Sight_4X.UW-Sight_4X_C.K2_OnSetAllowdAmmo");

	struct K2_OnSetAllowdAmmo_Params {
		enum class Unknow WeaponType;
		struct FName& AllowdAmmoName;
	}; K2_OnSetAllowdAmmo_Params Params;

	Params.WeaponType = WeaponType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AllowdAmmoName = Params.AllowdAmmoName;

}

// Function UW-Sight_4X.UW-Sight_4X_C.ExecuteUbergraph_UW-Sight_4X
inline void UUW-Sight_4X_C::ExecuteUbergraph_UW-Sight_4X(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Sight_4X.UW-Sight_4X_C.ExecuteUbergraph_UW-Sight_4X");

	struct ExecuteUbergraph_UW-Sight_4X_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Sight_4X_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

