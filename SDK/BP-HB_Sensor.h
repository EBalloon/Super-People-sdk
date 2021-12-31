// BlueprintGeneratedClass BP-HB_Sensor.BP-HB_Sensor_C
class ABP-HB_Sensor_C : public ABravoHotelHeartBeatSensor {

public:

	struct Unknown UberGraphFrame; // 0x1BE0 (8)
	struct Unknown InternalPP; // 0x1BE8 (8)
	struct Unknown EffectMaterial; // 0x1BF0 (8)
	char IsActive : 0; // 0x1BF8 (1)
	struct Unknown mRadialBlur; // 0x1C00 (8)
	struct Unknown iRadialBlur; // 0x1C08 (8)
	struct Unknown Radial Blur - Advanced; // 0x1C10 (56)
	float Radial Blur Width; // 0x1C48 (4)
	int32_t Radial Blur Samples; // 0x1C4C (4)
	struct Unknown Radial Blur Center; // 0x1C50 (8)
	struct Unknown Radial Blur Sample Offset; // 0x1C58 (8)
	struct Unknown Native Post Process; // 0x1C60 (1472)
	struct Unknown mSelectiveColor; // 0x2220 (8)
	struct Unknown iSelectiveColor; // 0x2228 (8)
	struct Unknown Selective Color - Advanced; // 0x2230 (56)
	struct Unknown Selective Color Mask Color; // 0x2268 (16)
	float Selective Color Hue Tolerance; // 0x2278 (4)
	float Selective Color Saturation Tolerance; // 0x227C (4)
	float Selective Color Value Tolerance; // 0x2280 (4)
	float CurrentBlur; // 0x2284 (4)
	float CurrentSelective; // 0x2288 (4)
	float FadeInSpeed; // 0x228C (4)
	float FadeOutSpeed; // 0x2290 (4)
	struct Unknown mMonochrome; // 0x2298 (8)
	struct Unknown iMonochrome; // 0x22A0 (8)
	struct Unknown Monochrome - Advanced; // 0x22A8 (56)
	struct Unknown Monochrome Color; // 0x22E0 (16)
	struct Unknown MBlackColor; // 0x22F0 (8)
	struct Unknown IBlackColor; // 0x22F8 (8)
	struct Unknown BlackColor - Advanced; // 0x2300 (56)
	float ActiveDelayTime; // 0x2338 (4)
	struct Unknown MainWidget; // 0x2340 (8)
	struct Unknown TopWidget; // 0x2348 (8)

	void GetTopWidget(struct Unknown& TopWidget); // Function BP-HB_Sensor.BP-HB_Sensor_C.GetTopWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetMainWidget(struct Unknown& MainWidget); // Function BP-HB_Sensor.BP-HB_Sensor_C.GetMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void IsOwnerLocallyControlled(char& bIsLocallyControlled); // Function BP-HB_Sensor.BP-HB_Sensor_C.IsOwnerLocallyControlled(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BlackColorFunc(char IsEnabled); // Function BP-HB_Sensor.BP-HB_Sensor_C.BlackColorFunc(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Monochrome Func(char IsEnabled); // Function BP-HB_Sensor.BP-HB_Sensor_C.Monochrome Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Selective Color Func(char IsEnabled); // Function BP-HB_Sensor.BP-HB_Sensor_C.Selective Color Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetEffectPriority(int32_t Priority, struct Unknown Material); // Function BP-HB_Sensor.BP-HB_Sensor_C.SetEffectPriority(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetAdvancedEffectFeatures(struct Unknown Features, struct Unknown Material, struct Unknown Dynamic Material Instance); // Function BP-HB_Sensor.BP-HB_Sensor_C.SetAdvancedEffectFeatures(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Radial Blur Func(char IsEnabled); // Function BP-HB_Sensor.BP-HB_Sensor_C.Radial Blur Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CreateEffectMaterialInstance(struct Unknown Material, struct Unknown& Instance); // Function BP-HB_Sensor.BP-HB_Sensor_C.CreateEffectMaterialInstance(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ScreenEffectEvent(char RadialBlur, char BlackColor); // Function BP-HB_Sensor.BP-HB_Sensor_C.ScreenEffectEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveTick(float DeltaSeconds); // Function BP-HB_Sensor.BP-HB_Sensor_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveBeginPlay(); // Function BP-HB_Sensor.BP-HB_Sensor_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnPostEventAtLocationEvent(struct FString EventKey, struct Unknown& Location); // Function BP-HB_Sensor.BP-HB_Sensor_C.OnPostEventAtLocationEvent(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void AddActiveEvent(); // Function BP-HB_Sensor.BP-HB_Sensor_C.AddActiveEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void K2_OnEquip(); // Function BP-HB_Sensor.BP-HB_Sensor_C.K2_OnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveDestroyed(); // Function BP-HB_Sensor.BP-HB_Sensor_C.ReceiveDestroyed(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void K2_OnUnEquip(); // Function BP-HB_Sensor.BP-HB_Sensor_C.K2_OnUnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnClickedHeartBeatSensor(); // Function BP-HB_Sensor.BP-HB_Sensor_C.OnClickedHeartBeatSensor(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnActiveHeartBeatSensor(); // Function BP-HB_Sensor.BP-HB_Sensor_C.OnActiveHeartBeatSensor(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnDeactiveHeartBeatSensor(); // Function BP-HB_Sensor.BP-HB_Sensor_C.OnDeactiveHeartBeatSensor(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_BP-HB_Sensor(int32_t EntryPoint); // Function BP-HB_Sensor.BP-HB_Sensor_C.ExecuteUbergraph_BP-HB_Sensor(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function BP-HB_Sensor.BP-HB_Sensor_C.GetTopWidget
inline void ABP-HB_Sensor_C::GetTopWidget(struct Unknown& TopWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.GetTopWidget");

	struct GetTopWidget_Params {
		struct Unknown& TopWidget;
	}; GetTopWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	TopWidget = Params.TopWidget;

}

// Function BP-HB_Sensor.BP-HB_Sensor_C.GetMainWidget
inline void ABP-HB_Sensor_C::GetMainWidget(struct Unknown& MainWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.GetMainWidget");

	struct GetMainWidget_Params {
		struct Unknown& MainWidget;
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
inline void ABP-HB_Sensor_C::SetEffectPriority(int32_t Priority, struct Unknown Material) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.SetEffectPriority");

	struct SetEffectPriority_Params {
		int32_t Priority;
		struct Unknown Material;
	}; SetEffectPriority_Params Params;

	Params.Priority = Priority;
	Params.Material = Material;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-HB_Sensor.BP-HB_Sensor_C.SetAdvancedEffectFeatures
inline void ABP-HB_Sensor_C::SetAdvancedEffectFeatures(struct Unknown Features, struct Unknown Material, struct Unknown Dynamic Material Instance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.SetAdvancedEffectFeatures");

	struct SetAdvancedEffectFeatures_Params {
		struct Unknown Features;
		struct Unknown Material;
		struct Unknown Dynamic Material Instance;
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
inline void ABP-HB_Sensor_C::CreateEffectMaterialInstance(struct Unknown Material, struct Unknown& Instance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.CreateEffectMaterialInstance");

	struct CreateEffectMaterialInstance_Params {
		struct Unknown Material;
		struct Unknown& Instance;
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
inline void ABP-HB_Sensor_C::OnPostEventAtLocationEvent(struct FString EventKey, struct Unknown& Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-HB_Sensor.BP-HB_Sensor_C.OnPostEventAtLocationEvent");

	struct OnPostEventAtLocationEvent_Params {
		struct FString EventKey;
		struct Unknown& Location;
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

