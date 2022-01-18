// BlueprintGeneratedClass BP-Amplifier.BP-Amplifier_C
class ABP-Amplifier_C : public ABravoHotelAmplifier {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1BB0 (8)
	struct UPostProcessComponent InternalPP; // 0x1BB8 (8)
	struct UMaterialInstanceDynamic EffectMaterial; // 0x1BC0 (8)
	char IsActive : 0; // 0x1BC8 (1)
	struct UMaterial mRadialBlur; // 0x1BD0 (8)
	struct UMaterialInstanceDynamic iRadialBlur; // 0x1BD8 (8)
	struct FAdvancedEffectFeatures Radial Blur - Advanced; // 0x1BE0 (56)
	float Radial Blur Width; // 0x1C18 (4)
	int32_t Radial Blur Samples; // 0x1C1C (4)
	struct FVector2D Radial Blur Center; // 0x1C20 (8)
	struct FVector2D Radial Blur Sample Offset; // 0x1C28 (8)
	struct FPostProcessSettings Native Post Process; // 0x1C30 (1472)
	struct UMaterial mSelectiveColor; // 0x21F0 (8)
	struct UMaterialInstanceDynamic iSelectiveColor; // 0x21F8 (8)
	struct FAdvancedEffectFeatures Selective Color - Advanced; // 0x2200 (56)
	struct FLinearColor Selective Color Mask Color; // 0x2238 (16)
	float Selective Color Hue Tolerance; // 0x2248 (4)
	float Selective Color Saturation Tolerance; // 0x224C (4)
	float Selective Color Value Tolerance; // 0x2250 (4)
	float CurrentBlur; // 0x2254 (4)
	float CurrentSelective; // 0x2258 (4)
	float FadeInSpeed; // 0x225C (4)
	float FadeOutSpeed; // 0x2260 (4)
	struct UMaterial mMonochrome; // 0x2268 (8)
	struct UMaterialInstanceDynamic iMonochrome; // 0x2270 (8)
	struct FAdvancedEffectFeatures Monochrome - Advanced; // 0x2278 (56)
	struct FLinearColor Monochrome Color; // 0x22B0 (16)
	struct UMaterial MBlackColor; // 0x22C0 (8)
	struct UMaterialInstanceDynamic IBlackColor; // 0x22C8 (8)
	struct FAdvancedEffectFeatures BlackColor - Advanced; // 0x22D0 (56)
	float ActiveDelayTime; // 0x2308 (4)
	struct UBravoHotelMainWidget MainWidget; // 0x2310 (8)
	struct UBravoHotelTopInfoWidget TopWidget; // 0x2318 (8)

	void GetTopWidget(struct UBravoHotelTopInfoWidget& TopWidget); // Function BP-Amplifier.BP-Amplifier_C.GetTopWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetMainWidget(struct UBravoHotelMainWidget& MainWidget); // Function BP-Amplifier.BP-Amplifier_C.GetMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void IsOwnerLocallyControlled(char& bIsLocallyControlled); // Function BP-Amplifier.BP-Amplifier_C.IsOwnerLocallyControlled(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void BlackColorFunc(char IsEnabled); // Function BP-Amplifier.BP-Amplifier_C.BlackColorFunc(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Monochrome Func(char IsEnabled); // Function BP-Amplifier.BP-Amplifier_C.Monochrome Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Selective Color Func(char IsEnabled); // Function BP-Amplifier.BP-Amplifier_C.Selective Color Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetEffectPriority(int32_t Priority, struct UMaterial Material); // Function BP-Amplifier.BP-Amplifier_C.SetEffectPriority(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetAdvancedEffectFeatures(struct FAdvancedEffectFeatures Features, struct UMaterial Material, struct UMaterialInstanceDynamic Dynamic Material Instance); // Function BP-Amplifier.BP-Amplifier_C.SetAdvancedEffectFeatures(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Radial Blur Func(char IsEnabled); // Function BP-Amplifier.BP-Amplifier_C.Radial Blur Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CreateEffectMaterialInstance(struct UMaterial Material, struct UMaterialInstanceDynamic& Instance); // Function BP-Amplifier.BP-Amplifier_C.CreateEffectMaterialInstance(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ScreenEffectEvent(char RadialBlur, char BlackColor); // Function BP-Amplifier.BP-Amplifier_C.ScreenEffectEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnDeactiveAmplifier(); // Function BP-Amplifier.BP-Amplifier_C.OnDeactiveAmplifier(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnActiveAmplifier(); // Function BP-Amplifier.BP-Amplifier_C.OnActiveAmplifier(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ReceiveTick(float DeltaSeconds); // Function BP-Amplifier.BP-Amplifier_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnPostEventAtLocationEvent(struct FString EventKey, struct FVector& Location); // Function BP-Amplifier.BP-Amplifier_C.OnPostEventAtLocationEvent(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ReceiveBeginPlay(); // Function BP-Amplifier.BP-Amplifier_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void AddActiveEvent(); // Function BP-Amplifier.BP-Amplifier_C.AddActiveEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnClickedAmplifier(); // Function BP-Amplifier.BP-Amplifier_C.OnClickedAmplifier(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void K2_OnEquip(); // Function BP-Amplifier.BP-Amplifier_C.K2_OnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ReceiveDestroyed(); // Function BP-Amplifier.BP-Amplifier_C.ReceiveDestroyed(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void K2_OnUnEquip(); // Function BP-Amplifier.BP-Amplifier_C.K2_OnUnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_BP-Amplifier(int32_t EntryPoint); // Function BP-Amplifier.BP-Amplifier_C.ExecuteUbergraph_BP-Amplifier(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function BP-Amplifier.BP-Amplifier_C.GetTopWidget
inline void ABP-Amplifier_C::GetTopWidget(struct UBravoHotelTopInfoWidget& TopWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Amplifier.BP-Amplifier_C.GetTopWidget");

	struct GetTopWidget_Params {
		struct UBravoHotelTopInfoWidget& TopWidget;
	}; GetTopWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	TopWidget = Params.TopWidget;

}

// Function BP-Amplifier.BP-Amplifier_C.GetMainWidget
inline void ABP-Amplifier_C::GetMainWidget(struct UBravoHotelMainWidget& MainWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Amplifier.BP-Amplifier_C.GetMainWidget");

	struct GetMainWidget_Params {
		struct UBravoHotelMainWidget& MainWidget;
	}; GetMainWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MainWidget = Params.MainWidget;

}

// Function BP-Amplifier.BP-Amplifier_C.IsOwnerLocallyControlled
inline void ABP-Amplifier_C::IsOwnerLocallyControlled(char& bIsLocallyControlled) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Amplifier.BP-Amplifier_C.IsOwnerLocallyControlled");

	struct IsOwnerLocallyControlled_Params {
		char& bIsLocallyControlled;
	}; IsOwnerLocallyControlled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bIsLocallyControlled = Params.bIsLocallyControlled;

}

// Function BP-Amplifier.BP-Amplifier_C.BlackColorFunc
inline void ABP-Amplifier_C::BlackColorFunc(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Amplifier.BP-Amplifier_C.BlackColorFunc");

	struct BlackColorFunc_Params {
		char IsEnabled;
	}; BlackColorFunc_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Amplifier.BP-Amplifier_C.Monochrome Func
inline void ABP-Amplifier_C::Monochrome Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Amplifier.BP-Amplifier_C.Monochrome Func");

	struct Monochrome Func_Params {
		char IsEnabled;
	}; Monochrome Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Amplifier.BP-Amplifier_C.Selective Color Func
inline void ABP-Amplifier_C::Selective Color Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Amplifier.BP-Amplifier_C.Selective Color Func");

	struct Selective Color Func_Params {
		char IsEnabled;
	}; Selective Color Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Amplifier.BP-Amplifier_C.SetEffectPriority
inline void ABP-Amplifier_C::SetEffectPriority(int32_t Priority, struct UMaterial Material) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Amplifier.BP-Amplifier_C.SetEffectPriority");

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

// Function BP-Amplifier.BP-Amplifier_C.SetAdvancedEffectFeatures
inline void ABP-Amplifier_C::SetAdvancedEffectFeatures(struct FAdvancedEffectFeatures Features, struct UMaterial Material, struct UMaterialInstanceDynamic Dynamic Material Instance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Amplifier.BP-Amplifier_C.SetAdvancedEffectFeatures");

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

// Function BP-Amplifier.BP-Amplifier_C.Radial Blur Func
inline void ABP-Amplifier_C::Radial Blur Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Amplifier.BP-Amplifier_C.Radial Blur Func");

	struct Radial Blur Func_Params {
		char IsEnabled;
	}; Radial Blur Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Amplifier.BP-Amplifier_C.CreateEffectMaterialInstance
inline void ABP-Amplifier_C::CreateEffectMaterialInstance(struct UMaterial Material, struct UMaterialInstanceDynamic& Instance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Amplifier.BP-Amplifier_C.CreateEffectMaterialInstance");

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

// Function BP-Amplifier.BP-Amplifier_C.ScreenEffectEvent
inline void ABP-Amplifier_C::ScreenEffectEvent(char RadialBlur, char BlackColor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Amplifier.BP-Amplifier_C.ScreenEffectEvent");

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

// Function BP-Amplifier.BP-Amplifier_C.OnDeactiveAmplifier
inline void ABP-Amplifier_C::OnDeactiveAmplifier() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Amplifier.BP-Amplifier_C.OnDeactiveAmplifier");

	struct OnDeactiveAmplifier_Params {
		
	}; OnDeactiveAmplifier_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Amplifier.BP-Amplifier_C.OnActiveAmplifier
inline void ABP-Amplifier_C::OnActiveAmplifier() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Amplifier.BP-Amplifier_C.OnActiveAmplifier");

	struct OnActiveAmplifier_Params {
		
	}; OnActiveAmplifier_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Amplifier.BP-Amplifier_C.ReceiveTick
inline void ABP-Amplifier_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Amplifier.BP-Amplifier_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Amplifier.BP-Amplifier_C.OnPostEventAtLocationEvent
inline void ABP-Amplifier_C::OnPostEventAtLocationEvent(struct FString EventKey, struct FVector& Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Amplifier.BP-Amplifier_C.OnPostEventAtLocationEvent");

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

// Function BP-Amplifier.BP-Amplifier_C.ReceiveBeginPlay
inline void ABP-Amplifier_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Amplifier.BP-Amplifier_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Amplifier.BP-Amplifier_C.AddActiveEvent
inline void ABP-Amplifier_C::AddActiveEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Amplifier.BP-Amplifier_C.AddActiveEvent");

	struct AddActiveEvent_Params {
		
	}; AddActiveEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Amplifier.BP-Amplifier_C.OnClickedAmplifier
inline void ABP-Amplifier_C::OnClickedAmplifier() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Amplifier.BP-Amplifier_C.OnClickedAmplifier");

	struct OnClickedAmplifier_Params {
		
	}; OnClickedAmplifier_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Amplifier.BP-Amplifier_C.K2_OnEquip
inline void ABP-Amplifier_C::K2_OnEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Amplifier.BP-Amplifier_C.K2_OnEquip");

	struct K2_OnEquip_Params {
		
	}; K2_OnEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Amplifier.BP-Amplifier_C.ReceiveDestroyed
inline void ABP-Amplifier_C::ReceiveDestroyed() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Amplifier.BP-Amplifier_C.ReceiveDestroyed");

	struct ReceiveDestroyed_Params {
		
	}; ReceiveDestroyed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Amplifier.BP-Amplifier_C.K2_OnUnEquip
inline void ABP-Amplifier_C::K2_OnUnEquip() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Amplifier.BP-Amplifier_C.K2_OnUnEquip");

	struct K2_OnUnEquip_Params {
		
	}; K2_OnUnEquip_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-Amplifier.BP-Amplifier_C.ExecuteUbergraph_BP-Amplifier
inline void ABP-Amplifier_C::ExecuteUbergraph_BP-Amplifier(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-Amplifier.BP-Amplifier_C.ExecuteUbergraph_BP-Amplifier");

	struct ExecuteUbergraph_BP-Amplifier_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-Amplifier_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

