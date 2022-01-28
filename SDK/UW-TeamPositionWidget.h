// WidgetBlueprintGeneratedClass UW-TeamPositionWidget.UW-TeamPositionWidget_C
class UUW-TeamPositionWidget_C : public UBravoHotelTeamPositionWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290 (8)
	struct UWidgetAnimation Anim_Bouncing; // 0x298 (8)
	struct UCanvasPanel CanvasRequestResuscitation; // 0x2A0 (8)
	struct UImage CriticalGuage; // 0x2A8 (8)
	struct UImage DyingGuage; // 0x2B0 (8)
	struct UImage Img_StateDeath; // 0x2B8 (8)
	struct UImage Img_StateDisconnect; // 0x2C0 (8)
	struct UImage Img_StateParachute; // 0x2C8 (8)
	struct UImage Img_StateRevival; // 0x2D0 (8)
	struct UImage Img_StateVehicle; // 0x2D8 (8)
	struct UImage Img_TeamColor; // 0x2E0 (8)
	struct UProgressBar KnockDownBar; // 0x2E8 (8)
	struct UTextBlock MoveParameter; // 0x2F0 (8)
	struct UImage RevivingGuage; // 0x2F8 (8)
	struct UWidgetSwitcher Switcher_Guage; // 0x300 (8)
	struct UWidgetSwitcher Switcher_Icon; // 0x308 (8)
	struct UTextBlock TextBlock_Name; // 0x310 (8)
	struct UTextBlock TextBlock_PlayerIndex; // 0x318 (8)
	struct FTimerHandle RevivingTimerHandle; // 0x320 (8)
	float TotalRevivingTime; // 0x328 (4)
	float CurrentRevivingTime; // 0x32C (4)
	char IsRequestResuscitation : 0; // 0x330 (1)

	void Move Parameter(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.Move Parameter(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CheckRequestResuscitation(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.CheckRequestResuscitation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void GetHealthPercent(float& Percent); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.GetHealthPercent(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateKnockOutHealth(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.UpdateKnockOutHealth(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateCastingGauge(char& IsCasting); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.UpdateCastingGauge(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetNameVisibility(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetNameVisibility(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetTeamNumInfo(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetTeamNumInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateRevivalGauge(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.UpdateRevivalGauge(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateKnockOutGauge(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.UpdateKnockOutGauge(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdateGauge(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.UpdateGauge(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetIconSwitcher(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetIconSwitcher(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetRotationVisibility(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetRotationVisibility(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetTeamColorVisibility(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetTeamColorVisibility(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetPlayerName(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetPlayerName(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void K2_OnChangedBehavior(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.K2_OnChangedBehavior(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void K2_OnChangedDisconnect(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.K2_OnChangedDisconnect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void K2_OnChangedIconIndex(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.K2_OnChangedIconIndex(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void K2_OnChangedIsInViewport(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.K2_OnChangedIsInViewport(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void K2_OnChangedPlayerState(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.K2_OnChangedPlayerState(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-TeamPositionWidget(int32_t EntryPoint); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.ExecuteUbergraph_UW-TeamPositionWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.Move Parameter
inline void UUW-TeamPositionWidget_C::Move Parameter() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.Move Parameter");

	struct Move Parameter_Params {
		
	}; Move Parameter_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.CheckRequestResuscitation
inline void UUW-TeamPositionWidget_C::CheckRequestResuscitation() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.CheckRequestResuscitation");

	struct CheckRequestResuscitation_Params {
		
	}; CheckRequestResuscitation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.GetHealthPercent
inline void UUW-TeamPositionWidget_C::GetHealthPercent(float& Percent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.GetHealthPercent");

	struct GetHealthPercent_Params {
		float& Percent;
	}; GetHealthPercent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Percent = Params.Percent;

}

// Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.UpdateKnockOutHealth
inline void UUW-TeamPositionWidget_C::UpdateKnockOutHealth() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.UpdateKnockOutHealth");

	struct UpdateKnockOutHealth_Params {
		
	}; UpdateKnockOutHealth_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.UpdateCastingGauge
inline void UUW-TeamPositionWidget_C::UpdateCastingGauge(char& IsCasting) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.UpdateCastingGauge");

	struct UpdateCastingGauge_Params {
		char& IsCasting;
	}; UpdateCastingGauge_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsCasting = Params.IsCasting;

}

// Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetNameVisibility
inline void UUW-TeamPositionWidget_C::SetNameVisibility() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetNameVisibility");

	struct SetNameVisibility_Params {
		
	}; SetNameVisibility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetTeamNumInfo
inline void UUW-TeamPositionWidget_C::SetTeamNumInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetTeamNumInfo");

	struct SetTeamNumInfo_Params {
		
	}; SetTeamNumInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.UpdateRevivalGauge
inline void UUW-TeamPositionWidget_C::UpdateRevivalGauge() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.UpdateRevivalGauge");

	struct UpdateRevivalGauge_Params {
		
	}; UpdateRevivalGauge_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.UpdateKnockOutGauge
inline void UUW-TeamPositionWidget_C::UpdateKnockOutGauge() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.UpdateKnockOutGauge");

	struct UpdateKnockOutGauge_Params {
		
	}; UpdateKnockOutGauge_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.UpdateGauge
inline void UUW-TeamPositionWidget_C::UpdateGauge() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.UpdateGauge");

	struct UpdateGauge_Params {
		
	}; UpdateGauge_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetIconSwitcher
inline void UUW-TeamPositionWidget_C::SetIconSwitcher() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetIconSwitcher");

	struct SetIconSwitcher_Params {
		
	}; SetIconSwitcher_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetRotationVisibility
inline void UUW-TeamPositionWidget_C::SetRotationVisibility() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetRotationVisibility");

	struct SetRotationVisibility_Params {
		
	}; SetRotationVisibility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetTeamColorVisibility
inline void UUW-TeamPositionWidget_C::SetTeamColorVisibility() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetTeamColorVisibility");

	struct SetTeamColorVisibility_Params {
		
	}; SetTeamColorVisibility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetPlayerName
inline void UUW-TeamPositionWidget_C::SetPlayerName() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetPlayerName");

	struct SetPlayerName_Params {
		
	}; SetPlayerName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.K2_OnChangedBehavior
inline void UUW-TeamPositionWidget_C::K2_OnChangedBehavior() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.K2_OnChangedBehavior");

	struct K2_OnChangedBehavior_Params {
		
	}; K2_OnChangedBehavior_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.K2_OnChangedDisconnect
inline void UUW-TeamPositionWidget_C::K2_OnChangedDisconnect() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.K2_OnChangedDisconnect");

	struct K2_OnChangedDisconnect_Params {
		
	}; K2_OnChangedDisconnect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.K2_OnChangedIconIndex
inline void UUW-TeamPositionWidget_C::K2_OnChangedIconIndex() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.K2_OnChangedIconIndex");

	struct K2_OnChangedIconIndex_Params {
		
	}; K2_OnChangedIconIndex_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.K2_OnChangedIsInViewport
inline void UUW-TeamPositionWidget_C::K2_OnChangedIsInViewport() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.K2_OnChangedIsInViewport");

	struct K2_OnChangedIsInViewport_Params {
		
	}; K2_OnChangedIsInViewport_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.K2_OnChangedPlayerState
inline void UUW-TeamPositionWidget_C::K2_OnChangedPlayerState() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.K2_OnChangedPlayerState");

	struct K2_OnChangedPlayerState_Params {
		
	}; K2_OnChangedPlayerState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.Tick
inline void UUW-TeamPositionWidget_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.Tick");

	struct Tick_Params {
		struct FGeometry MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.ExecuteUbergraph_UW-TeamPositionWidget
inline void UUW-TeamPositionWidget_C::ExecuteUbergraph_UW-TeamPositionWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.ExecuteUbergraph_UW-TeamPositionWidget");

	struct ExecuteUbergraph_UW-TeamPositionWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-TeamPositionWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

