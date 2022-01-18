// BlueprintGeneratedClass BP-BattleRoyalePawn.BP-BattleRoyalePawn_C
class ABP-BattleRoyalePawn_C : public ABP-DefaultPawn_C {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3B48 (8)
	struct USceneComponent Listener; // 0x3B50 (8)
	float _P_Cam_Z_NewTrack_0_898B65D1462B08609DA61C81A7B52313; // 0x3B58 (4)
	char _P_Cam_Z__Direction_898B65D1462B08609DA61C81A7B52313; // 0x3B5C (1)
	struct UTimelineComponent 3P_Cam_Z; // 0x3B60 (8)
	struct FTimerHandle CriticalUITimeHandler; // 0x3B68 (8)
	struct FTimerHandle DyingUITimeHandler; // 0x3B70 (8)
	struct UPhysicsHandleComponent ClothHandler; // 0x3B78 (8)
	struct USkeletalMeshComponent ClothBallObject; // 0x3B80 (8)
	struct FVector BallHandleLocation; // 0x3B88 (12)
	float GamepadInputModifier; // 0x3B94 (4)
	float BaseTurnRate; // 0x3B98 (4)
	float BaseLookUpRate; // 0x3B9C (4)
	struct TArray<struct UUW-PerkLevelUp_C> PerkLevelUpWidgets; // 0x3BA0 (16)
	float PerkLevelUpWidthDepth; // 0x3BB0 (4)
	struct ABP-AmplifierEffect_C AmplifierEffect; // 0x3BB8 (8)
	float Cam_Shake_Radius; // 0x3BC0 (4)
	struct UBravoHotelMainWidget MainWidget; // 0x3BC8 (8)
	struct ABP-HeartBeatSensorEffect_C HeartBeatSensorEffect; // 0x3BD0 (8)

	char IsEnableSpawnSupplyBox(struct UActor TargetActor, struct FString& OutResult); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.IsEnableSpawnSupplyBox(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	char IsInstancedFoliageActor(struct UActor TargetActor); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.IsInstancedFoliageActor(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetMainWidget(struct UBravoHotelMainWidget& MainWidget); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.GetMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void 3P_Cam_Z__FinishedFunc(); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.3P_Cam_Z__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void 3P_Cam_Z__UpdateFunc(); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.3P_Cam_Z__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_19(struct FKey Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_19(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18(struct FKey Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_One_K2Node_InputKeyEvent_17(struct FKey Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_One_K2Node_InputKeyEvent_17(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_Two_K2Node_InputKeyEvent_16(struct FKey Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Two_K2Node_InputKeyEvent_16(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_Three_K2Node_InputKeyEvent_15(struct FKey Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Three_K2Node_InputKeyEvent_15(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_Four_K2Node_InputKeyEvent_14(struct FKey Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Four_K2Node_InputKeyEvent_14(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_Five_K2Node_InputKeyEvent_13(struct FKey Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Five_K2Node_InputKeyEvent_13(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_Six_K2Node_InputKeyEvent_12(struct FKey Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Six_K2Node_InputKeyEvent_12(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_Seven_K2Node_InputKeyEvent_11(struct FKey Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Seven_K2Node_InputKeyEvent_11(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_Eight_K2Node_InputKeyEvent_10(struct FKey Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Eight_K2Node_InputKeyEvent_10(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9(struct FKey Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8(struct FKey Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7(struct FKey Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6(struct FKey Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5(struct FKey Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4(struct FKey Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3(struct FKey Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2(struct FKey Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void InpActEvt_NumPadZero_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_1(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ReceiveBeginPlay(); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ReceiveTick(float DeltaSeconds); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetCharacterIntheWater(); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.SetCharacterIntheWater(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnDeath(); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.OnDeath(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnSaveInventoryData(); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.OnSaveInventoryData(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void AddPerkEvent(struct FPerkInfo& PerkInfo, struct FDisplayAbility& InCurrentDisplayAbility, int32_t LastLevel, int32_t ClassLevel, enum class EPerkLevelUpType LevelUpType); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.AddPerkEvent(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void RemovePerkLevelUI(); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.RemovePerkLevelUI(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CreatePerkLevelUI(int32_t Count); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.CreatePerkLevelUI(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PerkSpinEvent(char bShow, int32_t Count, enum class EPerkSlotFlag Slot); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.PerkSpinEvent(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowAmplifierEffect(char IsAmplifierEffect, float AmplifierLength); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ShowAmplifierEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnLanded(struct FHitResult& Hit); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.OnLanded(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ReadyGivePerkEvent(); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ReadyGivePerkEvent(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void KillGivePerkEvent(int32_t KillCount); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.KillGivePerkEvent(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowHeartBeatSensorEffect(char IsHeartBeatSensorEffect, float HeartBeatSensorLength); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ShowHeartBeatSensorEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_BP-BattleRoyalePawn(int32_t EntryPoint); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ExecuteUbergraph_BP-BattleRoyalePawn(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.IsEnableSpawnSupplyBox
inline char ABP-BattleRoyalePawn_C::IsEnableSpawnSupplyBox(struct UActor TargetActor, struct FString& OutResult) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.IsEnableSpawnSupplyBox");

	struct IsEnableSpawnSupplyBox_Params {
		struct UActor TargetActor;
		struct FString& OutResult;
		char ReturnValue;

	}; IsEnableSpawnSupplyBox_Params Params;

	Params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutResult = Params.OutResult;


	return params.ReturnValue;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.IsInstancedFoliageActor
inline char ABP-BattleRoyalePawn_C::IsInstancedFoliageActor(struct UActor TargetActor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.IsInstancedFoliageActor");

	struct IsInstancedFoliageActor_Params {
		struct UActor TargetActor;
		char ReturnValue;

	}; IsInstancedFoliageActor_Params Params;

	Params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.GetMainWidget
inline void ABP-BattleRoyalePawn_C::GetMainWidget(struct UBravoHotelMainWidget& MainWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.GetMainWidget");

	struct GetMainWidget_Params {
		struct UBravoHotelMainWidget& MainWidget;
	}; GetMainWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MainWidget = Params.MainWidget;

}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.3P_Cam_Z__FinishedFunc
inline void ABP-BattleRoyalePawn_C::3P_Cam_Z__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.3P_Cam_Z__FinishedFunc");

	struct 3P_Cam_Z__FinishedFunc_Params {
		
	}; 3P_Cam_Z__FinishedFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.3P_Cam_Z__UpdateFunc
inline void ABP-BattleRoyalePawn_C::3P_Cam_Z__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.3P_Cam_Z__UpdateFunc");

	struct 3P_Cam_Z__UpdateFunc_Params {
		
	}; 3P_Cam_Z__UpdateFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_19
inline void ABP-BattleRoyalePawn_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_19(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_19");

	struct InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_19_Params {
		struct FKey Key;
	}; InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_19_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18
inline void ABP-BattleRoyalePawn_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18");

	struct InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18_Params {
		struct FKey Key;
	}; InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_One_K2Node_InputKeyEvent_17
inline void ABP-BattleRoyalePawn_C::InpActEvt_One_K2Node_InputKeyEvent_17(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_One_K2Node_InputKeyEvent_17");

	struct InpActEvt_One_K2Node_InputKeyEvent_17_Params {
		struct FKey Key;
	}; InpActEvt_One_K2Node_InputKeyEvent_17_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Two_K2Node_InputKeyEvent_16
inline void ABP-BattleRoyalePawn_C::InpActEvt_Two_K2Node_InputKeyEvent_16(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Two_K2Node_InputKeyEvent_16");

	struct InpActEvt_Two_K2Node_InputKeyEvent_16_Params {
		struct FKey Key;
	}; InpActEvt_Two_K2Node_InputKeyEvent_16_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Three_K2Node_InputKeyEvent_15
inline void ABP-BattleRoyalePawn_C::InpActEvt_Three_K2Node_InputKeyEvent_15(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Three_K2Node_InputKeyEvent_15");

	struct InpActEvt_Three_K2Node_InputKeyEvent_15_Params {
		struct FKey Key;
	}; InpActEvt_Three_K2Node_InputKeyEvent_15_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Four_K2Node_InputKeyEvent_14
inline void ABP-BattleRoyalePawn_C::InpActEvt_Four_K2Node_InputKeyEvent_14(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Four_K2Node_InputKeyEvent_14");

	struct InpActEvt_Four_K2Node_InputKeyEvent_14_Params {
		struct FKey Key;
	}; InpActEvt_Four_K2Node_InputKeyEvent_14_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Five_K2Node_InputKeyEvent_13
inline void ABP-BattleRoyalePawn_C::InpActEvt_Five_K2Node_InputKeyEvent_13(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Five_K2Node_InputKeyEvent_13");

	struct InpActEvt_Five_K2Node_InputKeyEvent_13_Params {
		struct FKey Key;
	}; InpActEvt_Five_K2Node_InputKeyEvent_13_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Six_K2Node_InputKeyEvent_12
inline void ABP-BattleRoyalePawn_C::InpActEvt_Six_K2Node_InputKeyEvent_12(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Six_K2Node_InputKeyEvent_12");

	struct InpActEvt_Six_K2Node_InputKeyEvent_12_Params {
		struct FKey Key;
	}; InpActEvt_Six_K2Node_InputKeyEvent_12_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Seven_K2Node_InputKeyEvent_11
inline void ABP-BattleRoyalePawn_C::InpActEvt_Seven_K2Node_InputKeyEvent_11(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Seven_K2Node_InputKeyEvent_11");

	struct InpActEvt_Seven_K2Node_InputKeyEvent_11_Params {
		struct FKey Key;
	}; InpActEvt_Seven_K2Node_InputKeyEvent_11_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Eight_K2Node_InputKeyEvent_10
inline void ABP-BattleRoyalePawn_C::InpActEvt_Eight_K2Node_InputKeyEvent_10(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Eight_K2Node_InputKeyEvent_10");

	struct InpActEvt_Eight_K2Node_InputKeyEvent_10_Params {
		struct FKey Key;
	}; InpActEvt_Eight_K2Node_InputKeyEvent_10_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9
inline void ABP-BattleRoyalePawn_C::InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9");

	struct InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9_Params {
		struct FKey Key;
	}; InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8
inline void ABP-BattleRoyalePawn_C::InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8");

	struct InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8_Params {
		struct FKey Key;
	}; InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7
inline void ABP-BattleRoyalePawn_C::InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7");

	struct InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7_Params {
		struct FKey Key;
	}; InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6
inline void ABP-BattleRoyalePawn_C::InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6");

	struct InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6_Params {
		struct FKey Key;
	}; InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5
inline void ABP-BattleRoyalePawn_C::InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5");

	struct InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5_Params {
		struct FKey Key;
	}; InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4
inline void ABP-BattleRoyalePawn_C::InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4");

	struct InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4_Params {
		struct FKey Key;
	}; InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3
inline void ABP-BattleRoyalePawn_C::InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3");

	struct InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3_Params {
		struct FKey Key;
	}; InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2
inline void ABP-BattleRoyalePawn_C::InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2");

	struct InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2_Params {
		struct FKey Key;
	}; InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_1
inline void ABP-BattleRoyalePawn_C::InpActEvt_NumPadZero_K2Node_InputKeyEvent_1(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_1");

	struct InpActEvt_NumPadZero_K2Node_InputKeyEvent_1_Params {
		struct FKey Key;
	}; InpActEvt_NumPadZero_K2Node_InputKeyEvent_1_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ReceiveBeginPlay
inline void ABP-BattleRoyalePawn_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ReceiveTick
inline void ABP-BattleRoyalePawn_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.SetCharacterIntheWater
inline void ABP-BattleRoyalePawn_C::SetCharacterIntheWater() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.SetCharacterIntheWater");

	struct SetCharacterIntheWater_Params {
		
	}; SetCharacterIntheWater_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.OnDeath
inline void ABP-BattleRoyalePawn_C::OnDeath() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.OnDeath");

	struct OnDeath_Params {
		
	}; OnDeath_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.OnSaveInventoryData
inline void ABP-BattleRoyalePawn_C::OnSaveInventoryData() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.OnSaveInventoryData");

	struct OnSaveInventoryData_Params {
		
	}; OnSaveInventoryData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.AddPerkEvent
inline void ABP-BattleRoyalePawn_C::AddPerkEvent(struct FPerkInfo& PerkInfo, struct FDisplayAbility& InCurrentDisplayAbility, int32_t LastLevel, int32_t ClassLevel, enum class EPerkLevelUpType LevelUpType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.AddPerkEvent");

	struct AddPerkEvent_Params {
		struct FPerkInfo& PerkInfo;
		struct FDisplayAbility& InCurrentDisplayAbility;
		int32_t LastLevel;
		int32_t ClassLevel;
		enum class EPerkLevelUpType LevelUpType;
	}; AddPerkEvent_Params Params;

	Params.LastLevel = LastLevel;
	Params.ClassLevel = ClassLevel;
	Params.LevelUpType = LevelUpType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PerkInfo = Params.PerkInfo;
	InCurrentDisplayAbility = Params.InCurrentDisplayAbility;

}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.RemovePerkLevelUI
inline void ABP-BattleRoyalePawn_C::RemovePerkLevelUI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.RemovePerkLevelUI");

	struct RemovePerkLevelUI_Params {
		
	}; RemovePerkLevelUI_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.CreatePerkLevelUI
inline void ABP-BattleRoyalePawn_C::CreatePerkLevelUI(int32_t Count) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.CreatePerkLevelUI");

	struct CreatePerkLevelUI_Params {
		int32_t Count;
	}; CreatePerkLevelUI_Params Params;

	Params.Count = Count;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.PerkSpinEvent
inline void ABP-BattleRoyalePawn_C::PerkSpinEvent(char bShow, int32_t Count, enum class EPerkSlotFlag Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.PerkSpinEvent");

	struct PerkSpinEvent_Params {
		char bShow;
		int32_t Count;
		enum class EPerkSlotFlag Slot;
	}; PerkSpinEvent_Params Params;

	Params.bShow = bShow;
	Params.Count = Count;
	Params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ShowAmplifierEffect
inline void ABP-BattleRoyalePawn_C::ShowAmplifierEffect(char IsAmplifierEffect, float AmplifierLength) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ShowAmplifierEffect");

	struct ShowAmplifierEffect_Params {
		char IsAmplifierEffect;
		float AmplifierLength;
	}; ShowAmplifierEffect_Params Params;

	Params.IsAmplifierEffect = IsAmplifierEffect;
	Params.AmplifierLength = AmplifierLength;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.OnLanded
inline void ABP-BattleRoyalePawn_C::OnLanded(struct FHitResult& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.OnLanded");

	struct OnLanded_Params {
		struct FHitResult& Hit;
	}; OnLanded_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Hit = Params.Hit;

}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ReadyGivePerkEvent
inline void ABP-BattleRoyalePawn_C::ReadyGivePerkEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ReadyGivePerkEvent");

	struct ReadyGivePerkEvent_Params {
		
	}; ReadyGivePerkEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.KillGivePerkEvent
inline void ABP-BattleRoyalePawn_C::KillGivePerkEvent(int32_t KillCount) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.KillGivePerkEvent");

	struct KillGivePerkEvent_Params {
		int32_t KillCount;
	}; KillGivePerkEvent_Params Params;

	Params.KillCount = KillCount;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ShowHeartBeatSensorEffect
inline void ABP-BattleRoyalePawn_C::ShowHeartBeatSensorEffect(char IsHeartBeatSensorEffect, float HeartBeatSensorLength) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ShowHeartBeatSensorEffect");

	struct ShowHeartBeatSensorEffect_Params {
		char IsHeartBeatSensorEffect;
		float HeartBeatSensorLength;
	}; ShowHeartBeatSensorEffect_Params Params;

	Params.IsHeartBeatSensorEffect = IsHeartBeatSensorEffect;
	Params.HeartBeatSensorLength = HeartBeatSensorLength;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ExecuteUbergraph_BP-BattleRoyalePawn
inline void ABP-BattleRoyalePawn_C::ExecuteUbergraph_BP-BattleRoyalePawn(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ExecuteUbergraph_BP-BattleRoyalePawn");

	struct ExecuteUbergraph_BP-BattleRoyalePawn_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-BattleRoyalePawn_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

