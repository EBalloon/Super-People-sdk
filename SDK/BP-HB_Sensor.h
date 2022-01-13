// BlueprintGeneratedClass BP-HB_Sensor.BP-HB_Sensor_C
class ABP-HB_Sensor_C : public ABravoHotelHeartBeatSensor {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1BE0 (8)
	struct UPostProcessComponent InternalPP; // 0x1BE8 (8)
	struct UMaterialInstanceDynamic EffectMaterial; // 0x1BF0 (8)
	char IsActive : 0; // 0x1BF8 (1)
	struct UMaterial mRadialBlur; // 0x1C00 (8)
	struct UMaterialInstanceDynamic iRadialBlur; // 0x1C08 (8)
	struct FAdvancedEffectFeatures Radial Blur - Advanced; // 0x1C10 (56)
	float Radial Blur Width; // 0x1C48 (4)
	int32_t Radial Blur Samples; // 0x1C4C (4)
	struct FVector2D Radial Blur Center; // 0x1C50 (8)
	struct FVector2D Radial Blur Sample Offset; // 0x1C58 (8)
	struct FPostProcessSettings Native Post Process; // 0x1C60 (1472)
	struct UMaterial mSelectiveColor; // 0x2220 (8)
	struct UMaterialInstanceDynamic iSelectiveColor; // 0x2228 (8)
	struct FAdvancedEffectFeatures Selective Color - Advanced; // 0x2230 (56)
	struct FLinearColor Selective Color Mask Color; // 0x2268 (16)
	float Selective Color Hue Tolerance; // 0x2278 (4)
	float Selective Color Saturation Tolerance; // 0x227C (4)
	float Selective Color Value Tolerance; // 0x2280 (4)
	float CurrentBlur; // 0x2284 (4)
	float CurrentSelective; // 0x2288 (4)
	float FadeInSpeed; // 0x228C (4)
	float FadeOutSpeed; // 0x2290 (4)
	struct UMaterial mMonochrome; // 0x2298 (8)
	struct UMaterialInstanceDynamic iMonochrome; // 0x22A0 (8)
	struct FAdvancedEffectFeatures Monochrome - Advanced; // 0x22A8 (56)
	struct FLinearColor Monochrome Color; // 0x22E0 (16)
	struct UMaterial MBlackColor; // 0x22F0 (8)
	struct UMaterialInstanceDynamic IBlackColor; // 0x22F8 (8)
	struct FAdvancedEffectFeatures BlackColor - Advanced; // 0x2300 (56)
	float ActiveDelayTime; // 0x2338 (4)
	struct UBravoHotelMainWidget MainWidget; // 0x2340 (8)
	struct UBravoHotelTopInfoWidget TopWidget; // 0x2348 (8)

	void GetTopWidget(struct UBravoHotelTopInfoWidget& TopWidget); // Function BP-HB_Sensor.BP-HB_Sensor_C.GetTopWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void GetMainWidget(struct UBravoHotelMainWidget& MainWidget); // Function BP-HB_Sensor.BP-HB_Sensor_C.GetMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void IsOwnerLocallyControlled(char& bIsLocallyControlled); // Function BP-HB_Sensor.BP-HB_Sensor_C.IsOwnerLocallyControlled(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BlackColorFunc(char IsEnabled); // Function BP-HB_Sensor.BP-HB_Sensor_C.BlackColorFunc(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Monochrome Func(char IsEnabled); // Function BP-HB_Sensor.BP-HB_Sensor_C.Monochrome Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Selective Color Func(char IsEnabled); // Function BP-HB_Sensor.BP-HB_Sensor_C.Selective Color Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetEffectPriority(int32_t Priority, struct UMaterial Material); // Function BP-HB_Sensor.BP-HB_Sensor_C.SetEffectPriority(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetAdvancedEffectFeatures(struct FAdvancedEffectFeatures Features, struct UMaterial Material, struct UMaterialInstanceDynamic Dynamic Material Instance); // Function BP-HB_Sensor.BP-HB_Sensor_C.SetAdvancedEffectFeatures(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Radial Blur Func(char IsEnabled); // Function BP-HB_Sensor.BP-HB_Sensor_C.Radial Blur Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void CreateEffectMaterialInstance(struct UMaterial Material, struct UMaterialInstanceDynamic& Instance); // Function BP-HB_Sensor.BP-HB_Sensor_C.CreateEffectMaterialInstance(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ScreenEffectEvent(char RadialBlur, char BlackColor); // Function BP-HB_Sensor.BP-HB_Sensor_C.ScreenEffectEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ReceiveTick(float DeltaSeconds); // Function BP-HB_Sensor.BP-HB_Sensor_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ReceiveBeginPlay(); // Function BP-HB_Sensor.BP-HB_Sensor_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnPostEventAtLocationEvent(struct FString EventKey, struct FVector& Location); // Function BP-HB_Sensor.BP-HB_Sensor_C.OnPostEventAtLocationEvent(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void AddActiveEvent(); // Function BP-HB_Sensor.BP-HB_Sensor_C.AddActiveEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void K2_OnEquip(); // Function BP-HB_Sensor.BP-HB_Sensor_C.K2_OnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ReceiveDestroyed(); // Function BP-HB_Sensor.BP-HB_Sensor_C.ReceiveDestroyed(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void K2_OnUnEquip(); // Function BP-HB_Sensor.BP-HB_Sensor_C.K2_OnUnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnClickedHeartBeatSensor(); // Function BP-HB_Sensor.BP-HB_Sensor_C.OnClickedHeartBeatSensor(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnActiveHeartBeatSensor(); // Function BP-HB_Sensor.BP-HB_Sensor_C.OnActiveHeartBeatSensor(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnDeactiveHeartBeatSensor(); // Function BP-HB_Sensor.BP-HB_Sensor_C.OnDeactiveHeartBeatSensor(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_BP-HB_Sensor(int32_t EntryPoint); // Function BP-HB_Sensor.BP-HB_Sensor_C.ExecuteUbergraph_BP-HB_Sensor(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function BP-HB_Sensor.BP-HB_Sensor_C.GetTopWidget
inline void ABP-HB_Sensor_C::GetTopWidget(struct UBravoHotelTopInfoWidget& TopWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.GetTopWidget");

	struct GetTopWidget_Params {
		struct UBravoHotelTopInfoWidget& TopWidget;
	}; GetTopWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	TopWidget = Params.TopWidget;

}

// Function BP-HB_Sensor.BP-HB_Sensor_C.GetMainWidget
inline void ABP-HB_Sensor_C::GetMainWidget(struct UBravoHotelMainWidget& MainWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.GetMainWidget");

	struct GetMainWidget_Params {
		struct UBravoHotelMainWidget& MainWidget;
	}; GetMainWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MainWidget = Params.MainWidget;

}

// Function BP-HB_Sensor.BP-HB_Sensor_C.IsOwnerLocallyControlled
inline void ABP-HB_Sensor_C::IsOwnerLocallyControlled(char& bIsLocallyControlled) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.IsOwnerLocallyControlled");

	struct IsOwnerLocallyControlled_Params {
		char& bIsLocallyControlled;
	}; IsOwnerLocallyControlled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bIsLocallyControlled = Params.bIsLocallyControlled;

}

// Function BP-HB_Sensor.BP-HB_Sensor_C.BlackColorFunc
inline void ABP-HB_Sensor_C::BlackColorFunc(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.BlackColorFunc");

	struct BlackColorFunc_Params {
		char IsEnabled;
	}; BlackColorFunc_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HB_Sensor.BP-HB_Sensor_C.Monochrome Func
inline void ABP-HB_Sensor_C::Monochrome Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.Monochrome Func");

	struct Monochrome Func_Params {
		char IsEnabled;
	}; Monochrome Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HB_Sensor.BP-HB_Sensor_C.Selective Color Func
inline void ABP-HB_Sensor_C::Selective Color Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.Selective Color Func");

	struct Selective Color Func_Params {
		char IsEnabled;
	}; Selective Color Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HB_Sensor.BP-HB_Sensor_C.SetEffectPriority
inline void ABP-HB_Sensor_C::SetEffectPriority(int32_t Priority, struct UMaterial Material) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.SetEffectPriority");

	struct SetEffectPriority_Params {
		int32_t Priority;
		struct UMaterial Material;
	}; SetEffectPriority_Params Params;

	Params.Priority = Priority;
	Params.Material = Material;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HB_Sensor.BP-HB_Sensor_C.SetAdvancedEffectFeatures
inline void ABP-HB_Sensor_C::SetAdvancedEffectFeatures(struct FAdvancedEffectFeatures Features, struct UMaterial Material, struct UMaterialInstanceDynamic Dynamic Material Instance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.SetAdvancedEffectFeatures");

	struct SetAdvancedEffectFeatures_Params {
		struct FAdvancedEffectFeatures Features;
		struct UMaterial Material;
		struct UMaterialInstanceDynamic Dynamic Material Instance;
	}; SetAdvancedEffectFeatures_Params Params;

	Params.Features = Features;
	Params.Material = Material;
	Params.Dynamic Material Instance = Dynamic Material Instance;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HB_Sensor.BP-HB_Sensor_C.Radial Blur Func
inline void ABP-HB_Sensor_C::Radial Blur Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.Radial Blur Func");

	struct Radial Blur Func_Params {
		char IsEnabled;
	}; Radial Blur Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HB_Sensor.BP-HB_Sensor_C.CreateEffectMaterialInstance
inline void ABP-HB_Sensor_C::CreateEffectMaterialInstance(struct UMaterial Material, struct UMaterialInstanceDynamic& Instance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.CreateEffectMaterialInstance");

	struct CreateEffectMaterialInstance_Params {
		struct UMaterial Material;
		struct UMaterialInstanceDynamic& Instance;
	}; CreateEffectMaterialInstance_Params Params;

	Params.Material = Material;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Instance = Params.Instance;

}

// Function BP-HB_Sensor.BP-HB_Sensor_C.ScreenEffectEvent
inline void ABP-HB_Sensor_C::ScreenEffectEvent(char RadialBlur, char BlackColor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.ScreenEffectEvent");

	struct ScreenEffectEvent_Params {
		char RadialBlur;
		char BlackColor;
	}; ScreenEffectEvent_Params Params;

	Params.RadialBlur = RadialBlur;
	Params.BlackColor = BlackColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HB_Sensor.BP-HB_Sensor_C.ReceiveTick
inline void ABP-HB_Sensor_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HB_Sensor.BP-HB_Sensor_C.ReceiveBeginPlay
inline void ABP-HB_Sensor_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HB_Sensor.BP-HB_Sensor_C.OnPostEventAtLocationEvent
inline void ABP-HB_Sensor_C::OnPostEventAtLocationEvent(struct FString EventKey, struct FVector& Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.OnPostEventAtLocationEvent");

	struct OnPostEventAtLocationEvent_Params {
		struct FString EventKey;
		struct FVector& Location;
	}; OnPostEventAtLocationEvent_Params Params;

	Params.EventKey = EventKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Location = Params.Location;

}

// Function BP-HB_Sensor.BP-HB_Sensor_C.AddActiveEvent
inline void ABP-HB_Sensor_C::AddActiveEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.AddActiveEvent");

	struct AddActiveEvent_Params {
		
	}; AddActiveEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HB_Sensor.BP-HB_Sensor_C.K2_OnEquip
inline void ABP-HB_Sensor_C::K2_OnEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.K2_OnEquip");

	struct K2_OnEquip_Params {
		
	}; K2_OnEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HB_Sensor.BP-HB_Sensor_C.ReceiveDestroyed
inline void ABP-HB_Sensor_C::ReceiveDestroyed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.ReceiveDestroyed");

	struct ReceiveDestroyed_Params {
		
	}; ReceiveDestroyed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HB_Sensor.BP-HB_Sensor_C.K2_OnUnEquip
inline void ABP-HB_Sensor_C::K2_OnUnEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.K2_OnUnEquip");

	struct K2_OnUnEquip_Params {
		
	}; K2_OnUnEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HB_Sensor.BP-HB_Sensor_C.OnClickedHeartBeatSensor
inline void ABP-HB_Sensor_C::OnClickedHeartBeatSensor() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.OnClickedHeartBeatSensor");

	struct OnClickedHeartBeatSensor_Params {
		
	}; OnClickedHeartBeatSensor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HB_Sensor.BP-HB_Sensor_C.OnActiveHeartBeatSensor
inline void ABP-HB_Sensor_C::OnActiveHeartBeatSensor() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.OnActiveHeartBeatSensor");

	struct OnActiveHeartBeatSensor_Params {
		
	}; OnActiveHeartBeatSensor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HB_Sensor.BP-HB_Sensor_C.OnDeactiveHeartBeatSensor
inline void ABP-HB_Sensor_C::OnDeactiveHeartBeatSensor() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.OnDeactiveHeartBeatSensor");

	struct OnDeactiveHeartBeatSensor_Params {
		
	}; OnDeactiveHeartBeatSensor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HB_Sensor.BP-HB_Sensor_C.ExecuteUbergraph_BP-HB_Sensor
inline void ABP-HB_Sensor_C::ExecuteUbergraph_BP-HB_Sensor(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.ExecuteUbergraph_BP-HB_Sensor");

	struct ExecuteUbergraph_BP-HB_Sensor_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-HB_Sensor_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

