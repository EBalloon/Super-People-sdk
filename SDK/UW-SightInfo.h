// WidgetBlueprintGeneratedClass UW-SightInfo.UW-SightInfo_C
class UUW-SightInfo_C : public UBravoHotelSightInfoWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UCanvasPanel Canvas_Charge; // 0x250 (8)
	struct UImage ChargeIndicator; // 0x258 (8)
	struct UImage Image_LeanDamageBg; // 0x260 (8)
	struct UImage IMG_Gauge1; // 0x268 (8)
	struct UImage IMG_Gauge2; // 0x270 (8)
	struct UImage IMG_Gauge3; // 0x278 (8)
	struct UImage IMG_Gauge4; // 0x280 (8)
	struct UImage IMG_Gauge5; // 0x288 (8)
	struct UImage IMG_Gauge6; // 0x290 (8)
	struct UTextBlock LeftTime; // 0x298 (8)
	struct UOverlay Overlay_Gauge; // 0x2A0 (8)
	struct UTextBlock T_BulletsPerShot; // 0x2A8 (8)
	struct UTextBlock T_Damage; // 0x2B0 (8)
	struct UTextBlock T_RPM; // 0x2B8 (8)
	struct UVerticalBox VerticalBox_Damage; // 0x2C0 (8)
	struct ABravoHotelCharacter BravoHotelCharacter; // 0x2C8 (8)
	struct TArray<struct UImage> GaugeIMGArray; // 0x2D0 (16)
	int32_t LastGauge; // 0x2E0 (4)
	char Timer_ : 0; // 0x2E4 (1)
	struct FTimerHandle Timer_UpdateInfos; // 0x2E8 (8)
	struct UMaterialInstanceDynamic ChargeIndicatorDynamicMaterial; // 0x2F0 (8)

	void HideChargeInfo(); // Function UW-SightInfo.UW-SightInfo_C.HideChargeInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateChargeInfo(float MaxGaugeValue, float CurrentGaugeValue); // Function UW-SightInfo.UW-SightInfo_C.UpdateChargeInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateBulletsPerShot(); // Function UW-SightInfo.UW-SightInfo_C.UpdateBulletsPerShot(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateSnipeGauge(); // Function UW-SightInfo.UW-SightInfo_C.UpdateSnipeGauge(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateDamage(); // Function UW-SightInfo.UW-SightInfo_C.UpdateDamage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateInfos(); // Function UW-SightInfo.UW-SightInfo_C.UpdateInfos(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HideSightInfo(); // Function UW-SightInfo.UW-SightInfo_C.HideSightInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ShowSightInfo(); // Function UW-SightInfo.UW-SightInfo_C.ShowSightInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Init(); // Function UW-SightInfo.UW-SightInfo_C.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Construct(); // Function UW-SightInfo.UW-SightInfo_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-SightInfo(int32_t EntryPoint); // Function UW-SightInfo.UW-SightInfo_C.ExecuteUbergraph_UW-SightInfo(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-SightInfo.UW-SightInfo_C.HideChargeInfo
inline void UUW-SightInfo_C::HideChargeInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SightInfo.UW-SightInfo_C.HideChargeInfo");

	struct HideChargeInfo_Params {
		
	}; HideChargeInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SightInfo.UW-SightInfo_C.UpdateChargeInfo
inline void UUW-SightInfo_C::UpdateChargeInfo(float MaxGaugeValue, float CurrentGaugeValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SightInfo.UW-SightInfo_C.UpdateChargeInfo");

	struct UpdateChargeInfo_Params {
		float MaxGaugeValue;
		float CurrentGaugeValue;
	}; UpdateChargeInfo_Params Params;

	Params.MaxGaugeValue = MaxGaugeValue;
	Params.CurrentGaugeValue = CurrentGaugeValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SightInfo.UW-SightInfo_C.UpdateBulletsPerShot
inline void UUW-SightInfo_C::UpdateBulletsPerShot() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SightInfo.UW-SightInfo_C.UpdateBulletsPerShot");

	struct UpdateBulletsPerShot_Params {
		
	}; UpdateBulletsPerShot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SightInfo.UW-SightInfo_C.UpdateSnipeGauge
inline void UUW-SightInfo_C::UpdateSnipeGauge() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SightInfo.UW-SightInfo_C.UpdateSnipeGauge");

	struct UpdateSnipeGauge_Params {
		
	}; UpdateSnipeGauge_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SightInfo.UW-SightInfo_C.UpdateDamage
inline void UUW-SightInfo_C::UpdateDamage() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SightInfo.UW-SightInfo_C.UpdateDamage");

	struct UpdateDamage_Params {
		
	}; UpdateDamage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SightInfo.UW-SightInfo_C.UpdateInfos
inline void UUW-SightInfo_C::UpdateInfos() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SightInfo.UW-SightInfo_C.UpdateInfos");

	struct UpdateInfos_Params {
		
	}; UpdateInfos_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SightInfo.UW-SightInfo_C.HideSightInfo
inline void UUW-SightInfo_C::HideSightInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SightInfo.UW-SightInfo_C.HideSightInfo");

	struct HideSightInfo_Params {
		
	}; HideSightInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SightInfo.UW-SightInfo_C.ShowSightInfo
inline void UUW-SightInfo_C::ShowSightInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SightInfo.UW-SightInfo_C.ShowSightInfo");

	struct ShowSightInfo_Params {
		
	}; ShowSightInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SightInfo.UW-SightInfo_C.Init
inline void UUW-SightInfo_C::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SightInfo.UW-SightInfo_C.Init");

	struct Init_Params {
		
	}; Init_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SightInfo.UW-SightInfo_C.Construct
inline void UUW-SightInfo_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SightInfo.UW-SightInfo_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-SightInfo.UW-SightInfo_C.ExecuteUbergraph_UW-SightInfo
inline void UUW-SightInfo_C::ExecuteUbergraph_UW-SightInfo(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-SightInfo.UW-SightInfo_C.ExecuteUbergraph_UW-SightInfo");

	struct ExecuteUbergraph_UW-SightInfo_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-SightInfo_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

