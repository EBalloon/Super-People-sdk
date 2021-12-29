// WidgetBlueprintGeneratedClass UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C
class UUW-GameBuffSlot_Boost_C : public UBravoHotelGameBuffSlot {

public:

	struct Unknown UberGraphFrame; // 0x2F8 (8)
	struct Unknown Anim_Boost_Off; // 0x300 (8)
	struct Unknown Anim_Boost_On; // 0x308 (8)
	struct Unknown CanvasPanel_BoostInfo; // 0x310 (8)
	struct Unknown Image_Active; // 0x318 (8)
	struct Unknown IMG_CoolTime; // 0x320 (8)
	struct Unknown T_CoolTime; // 0x328 (8)
	struct Unknown MI_CoolTimeDynamicInstance; // 0x330 (8)
	struct Unknown MI_BuffActive; // 0x338 (8)
	float BoostOffAnimTime; // 0x340 (4)
	char IsActive : 0; // 0x344 (1)
	struct Unknown BoostBuffInfo; // 0x348 (392)

	void SetIsActive(char bActive); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.SetIsActive(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void InitBuffInfo(); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.InitBuffInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void UpdateCoolTime(float Timer, float MaxTime); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.UpdateCoolTime(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnLoaded_541BBAAD4C8A218716460DAC5837CB3E(struct Unknown Loaded); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.OnLoaded_541BBAAD4C8A218716460DAC5837CB3E(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Construct(); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void K2_UpdateBuff(float Timer, float MaxTime); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.K2_UpdateBuff(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void K2_OnNewBuff(); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.K2_OnNewBuff(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnAnimationFinished(struct Unknown Animation); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.OnAnimationFinished(BlueprintCosmetic|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void K2_OnRenewBuff(); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.K2_OnRenewBuff(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void PlayAnimBoostOn(); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.PlayAnimBoostOn(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void AsyncloadImage(struct Unknown Image); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.AsyncloadImage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_UW-GameBuffSlot_Boost(int32_t EntryPoint); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.ExecuteUbergraph_UW-GameBuffSlot_Boost(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.SetIsActive
inline void UUW-GameBuffSlot_Boost_C::SetIsActive(char bActive) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.SetIsActive");

	struct SetIsActive_Params {
		char bActive;
	}; SetIsActive_Params Params;

	Params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.InitBuffInfo
inline void UUW-GameBuffSlot_Boost_C::InitBuffInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.InitBuffInfo");

	struct InitBuffInfo_Params {
		
	}; InitBuffInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.UpdateCoolTime
inline void UUW-GameBuffSlot_Boost_C::UpdateCoolTime(float Timer, float MaxTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.UpdateCoolTime");

	struct UpdateCoolTime_Params {
		float Timer;
		float MaxTime;
	}; UpdateCoolTime_Params Params;

	Params.Timer = Timer;
	Params.MaxTime = MaxTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.OnLoaded_541BBAAD4C8A218716460DAC5837CB3E
inline void UUW-GameBuffSlot_Boost_C::OnLoaded_541BBAAD4C8A218716460DAC5837CB3E(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.OnLoaded_541BBAAD4C8A218716460DAC5837CB3E");

	struct OnLoaded_541BBAAD4C8A218716460DAC5837CB3E_Params {
		struct Unknown Loaded;
	}; OnLoaded_541BBAAD4C8A218716460DAC5837CB3E_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.Construct
inline void UUW-GameBuffSlot_Boost_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.K2_UpdateBuff
inline void UUW-GameBuffSlot_Boost_C::K2_UpdateBuff(float Timer, float MaxTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.K2_UpdateBuff");

	struct K2_UpdateBuff_Params {
		float Timer;
		float MaxTime;
	}; K2_UpdateBuff_Params Params;

	Params.Timer = Timer;
	Params.MaxTime = MaxTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.K2_OnNewBuff
inline void UUW-GameBuffSlot_Boost_C::K2_OnNewBuff() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.K2_OnNewBuff");

	struct K2_OnNewBuff_Params {
		
	}; K2_OnNewBuff_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.OnAnimationFinished
inline void UUW-GameBuffSlot_Boost_C::OnAnimationFinished(struct Unknown Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.OnAnimationFinished");

	struct OnAnimationFinished_Params {
		struct Unknown Animation;
	}; OnAnimationFinished_Params Params;

	Params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.K2_OnRenewBuff
inline void UUW-GameBuffSlot_Boost_C::K2_OnRenewBuff() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.K2_OnRenewBuff");

	struct K2_OnRenewBuff_Params {
		
	}; K2_OnRenewBuff_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.PlayAnimBoostOn
inline void UUW-GameBuffSlot_Boost_C::PlayAnimBoostOn() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.PlayAnimBoostOn");

	struct PlayAnimBoostOn_Params {
		
	}; PlayAnimBoostOn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.AsyncloadImage
inline void UUW-GameBuffSlot_Boost_C::AsyncloadImage(struct Unknown Image) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.AsyncloadImage");

	struct AsyncloadImage_Params {
		struct Unknown Image;
	}; AsyncloadImage_Params Params;

	Params.Image = Image;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.ExecuteUbergraph_UW-GameBuffSlot_Boost
inline void UUW-GameBuffSlot_Boost_C::ExecuteUbergraph_UW-GameBuffSlot_Boost(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.ExecuteUbergraph_UW-GameBuffSlot_Boost");

	struct ExecuteUbergraph_UW-GameBuffSlot_Boost_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-GameBuffSlot_Boost_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

