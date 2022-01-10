// BlueprintGeneratedClass BP-BattleRoyalePawn.BP-BattleRoyalePawn_C
class ABP-BattleRoyalePawn_C : public ABP-DefaultPawn_C {

public:

	struct Unknown UberGraphFrame; // 0x3B38 (8)
	struct Unknown Listener; // 0x3B40 (8)
	float _P_Cam_Z_NewTrack_0_898B65D1462B08609DA61C81A7B52313; // 0x3B48 (4)
	char _P_Cam_Z__Direction_898B65D1462B08609DA61C81A7B52313; // 0x3B4C (1)
	struct Unknown 3P_Cam_Z; // 0x3B50 (8)
	struct Unknown CriticalUITimeHandler; // 0x3B58 (8)
	struct Unknown DyingUITimeHandler; // 0x3B60 (8)
	struct Unknown ClothHandler; // 0x3B68 (8)
	struct Unknown ClothBallObject; // 0x3B70 (8)
	struct Unknown BallHandleLocation; // 0x3B78 (12)
	float GamepadInputModifier; // 0x3B84 (4)
	float BaseTurnRate; // 0x3B88 (4)
	float BaseLookUpRate; // 0x3B8C (4)
	struct TArray<Unknown> PerkLevelUpWidgets; // 0x3B90 (16)
	float PerkLevelUpWidthDepth; // 0x3BA0 (4)
	struct Unknown AmplifierEffect; // 0x3BA8 (8)
	float Cam_Shake_Radius; // 0x3BB0 (4)
	struct Unknown MainWidget; // 0x3BB8 (8)
	struct Unknown HeartBeatSensorEffect; // 0x3BC0 (8)

	char IsEnableSpawnSupplyBox(struct Unknown TargetActor, struct FString& OutResult); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.IsEnableSpawnSupplyBox(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	char IsInstancedFoliageActor(struct Unknown TargetActor); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.IsInstancedFoliageActor(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void GetMainWidget(struct Unknown& MainWidget); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.GetMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B812B0>
	void 3P_Cam_Z__FinishedFunc(); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.3P_Cam_Z__FinishedFunc(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void 3P_Cam_Z__UpdateFunc(); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.3P_Cam_Z__UpdateFunc(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_19(struct Unknown Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_19(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18(struct Unknown Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void InpActEvt_One_K2Node_InputKeyEvent_17(struct Unknown Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_One_K2Node_InputKeyEvent_17(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void InpActEvt_Two_K2Node_InputKeyEvent_16(struct Unknown Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Two_K2Node_InputKeyEvent_16(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void InpActEvt_Three_K2Node_InputKeyEvent_15(struct Unknown Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Three_K2Node_InputKeyEvent_15(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void InpActEvt_Four_K2Node_InputKeyEvent_14(struct Unknown Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Four_K2Node_InputKeyEvent_14(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void InpActEvt_Five_K2Node_InputKeyEvent_13(struct Unknown Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Five_K2Node_InputKeyEvent_13(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void InpActEvt_Six_K2Node_InputKeyEvent_12(struct Unknown Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Six_K2Node_InputKeyEvent_12(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void InpActEvt_Seven_K2Node_InputKeyEvent_11(struct Unknown Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Seven_K2Node_InputKeyEvent_11(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void InpActEvt_Eight_K2Node_InputKeyEvent_10(struct Unknown Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Eight_K2Node_InputKeyEvent_10(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9(struct Unknown Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8(struct Unknown Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7(struct Unknown Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6(struct Unknown Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5(struct Unknown Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4(struct Unknown Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3(struct Unknown Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2(struct Unknown Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void InpActEvt_NumPadZero_K2Node_InputKeyEvent_1(struct Unknown Key); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_1(BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ReceiveBeginPlay(); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ReceiveTick(float DeltaSeconds); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ReceiveTick(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetCharacterIntheWater(); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.SetCharacterIntheWater(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnDeath(); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.OnDeath(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnSaveInventoryData(); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.OnSaveInventoryData(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void AddPerkEvent(struct Unknown& PerkInfo, struct Unknown& InCurrentDisplayAbility, int32_t LastLevel, int32_t ClassLevel, enum class Unknow LevelUpType); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.AddPerkEvent(Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void RemovePerkLevelUI(); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.RemovePerkLevelUI(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void CreatePerkLevelUI(int32_t Count); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.CreatePerkLevelUI(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void PerkSpinEvent(char bShow, int32_t Count, enum class Unknow Slot); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.PerkSpinEvent(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowAmplifierEffect(char IsAmplifierEffect, float AmplifierLength); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ShowAmplifierEffect(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnLanded(struct Unknown& Hit); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.OnLanded(Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ReadyGivePerkEvent(); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ReadyGivePerkEvent(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void KillGivePerkEvent(int32_t KillCount); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.KillGivePerkEvent(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ShowHeartBeatSensorEffect(char IsHeartBeatSensorEffect, float HeartBeatSensorLength); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ShowHeartBeatSensorEffect(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_BP-BattleRoyalePawn(int32_t EntryPoint); // Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.ExecuteUbergraph_BP-BattleRoyalePawn(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.IsEnableSpawnSupplyBox
inline char ABP-BattleRoyalePawn_C::IsEnableSpawnSupplyBox(struct Unknown TargetActor, struct FString& OutResult) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.IsEnableSpawnSupplyBox");

	struct IsEnableSpawnSupplyBox_Params {
		struct Unknown TargetActor;
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
inline char ABP-BattleRoyalePawn_C::IsInstancedFoliageActor(struct Unknown TargetActor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.IsInstancedFoliageActor");

	struct IsInstancedFoliageActor_Params {
		struct Unknown TargetActor;
		char ReturnValue;

	}; IsInstancedFoliageActor_Params Params;

	Params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.GetMainWidget
inline void ABP-BattleRoyalePawn_C::GetMainWidget(struct Unknown& MainWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.GetMainWidget");

	struct GetMainWidget_Params {
		struct Unknown& MainWidget;
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
inline void ABP-BattleRoyalePawn_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_19(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_19");

	struct InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_19_Params {
		struct Unknown Key;
	}; InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_19_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18
inline void ABP-BattleRoyalePawn_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18");

	struct InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18_Params {
		struct Unknown Key;
	}; InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_One_K2Node_InputKeyEvent_17
inline void ABP-BattleRoyalePawn_C::InpActEvt_One_K2Node_InputKeyEvent_17(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_One_K2Node_InputKeyEvent_17");

	struct InpActEvt_One_K2Node_InputKeyEvent_17_Params {
		struct Unknown Key;
	}; InpActEvt_One_K2Node_InputKeyEvent_17_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Two_K2Node_InputKeyEvent_16
inline void ABP-BattleRoyalePawn_C::InpActEvt_Two_K2Node_InputKeyEvent_16(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Two_K2Node_InputKeyEvent_16");

	struct InpActEvt_Two_K2Node_InputKeyEvent_16_Params {
		struct Unknown Key;
	}; InpActEvt_Two_K2Node_InputKeyEvent_16_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Three_K2Node_InputKeyEvent_15
inline void ABP-BattleRoyalePawn_C::InpActEvt_Three_K2Node_InputKeyEvent_15(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Three_K2Node_InputKeyEvent_15");

	struct InpActEvt_Three_K2Node_InputKeyEvent_15_Params {
		struct Unknown Key;
	}; InpActEvt_Three_K2Node_InputKeyEvent_15_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Four_K2Node_InputKeyEvent_14
inline void ABP-BattleRoyalePawn_C::InpActEvt_Four_K2Node_InputKeyEvent_14(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Four_K2Node_InputKeyEvent_14");

	struct InpActEvt_Four_K2Node_InputKeyEvent_14_Params {
		struct Unknown Key;
	}; InpActEvt_Four_K2Node_InputKeyEvent_14_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Five_K2Node_InputKeyEvent_13
inline void ABP-BattleRoyalePawn_C::InpActEvt_Five_K2Node_InputKeyEvent_13(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Five_K2Node_InputKeyEvent_13");

	struct InpActEvt_Five_K2Node_InputKeyEvent_13_Params {
		struct Unknown Key;
	}; InpActEvt_Five_K2Node_InputKeyEvent_13_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Six_K2Node_InputKeyEvent_12
inline void ABP-BattleRoyalePawn_C::InpActEvt_Six_K2Node_InputKeyEvent_12(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Six_K2Node_InputKeyEvent_12");

	struct InpActEvt_Six_K2Node_InputKeyEvent_12_Params {
		struct Unknown Key;
	}; InpActEvt_Six_K2Node_InputKeyEvent_12_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Seven_K2Node_InputKeyEvent_11
inline void ABP-BattleRoyalePawn_C::InpActEvt_Seven_K2Node_InputKeyEvent_11(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Seven_K2Node_InputKeyEvent_11");

	struct InpActEvt_Seven_K2Node_InputKeyEvent_11_Params {
		struct Unknown Key;
	}; InpActEvt_Seven_K2Node_InputKeyEvent_11_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Eight_K2Node_InputKeyEvent_10
inline void ABP-BattleRoyalePawn_C::InpActEvt_Eight_K2Node_InputKeyEvent_10(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Eight_K2Node_InputKeyEvent_10");

	struct InpActEvt_Eight_K2Node_InputKeyEvent_10_Params {
		struct Unknown Key;
	}; InpActEvt_Eight_K2Node_InputKeyEvent_10_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9
inline void ABP-BattleRoyalePawn_C::InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9");

	struct InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9_Params {
		struct Unknown Key;
	}; InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8
inline void ABP-BattleRoyalePawn_C::InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8");

	struct InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8_Params {
		struct Unknown Key;
	}; InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7
inline void ABP-BattleRoyalePawn_C::InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7");

	struct InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7_Params {
		struct Unknown Key;
	}; InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6
inline void ABP-BattleRoyalePawn_C::InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6");

	struct InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6_Params {
		struct Unknown Key;
	}; InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5
inline void ABP-BattleRoyalePawn_C::InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5");

	struct InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5_Params {
		struct Unknown Key;
	}; InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4
inline void ABP-BattleRoyalePawn_C::InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4");

	struct InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4_Params {
		struct Unknown Key;
	}; InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3
inline void ABP-BattleRoyalePawn_C::InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3");

	struct InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3_Params {
		struct Unknown Key;
	}; InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2
inline void ABP-BattleRoyalePawn_C::InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2");

	struct InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2_Params {
		struct Unknown Key;
	}; InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_1
inline void ABP-BattleRoyalePawn_C::InpActEvt_NumPadZero_K2Node_InputKeyEvent_1(struct Unknown Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_1");

	struct InpActEvt_NumPadZero_K2Node_InputKeyEvent_1_Params {
		struct Unknown Key;
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
inline void ABP-BattleRoyalePawn_C::AddPerkEvent(struct Unknown& PerkInfo, struct Unknown& InCurrentDisplayAbility, int32_t LastLevel, int32_t ClassLevel, enum class Unknow LevelUpType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.AddPerkEvent");

	struct AddPerkEvent_Params {
		struct Unknown& PerkInfo;
		struct Unknown& InCurrentDisplayAbility;
		int32_t LastLevel;
		int32_t ClassLevel;
		enum class Unknow LevelUpType;
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
inline void ABP-BattleRoyalePawn_C::PerkSpinEvent(char bShow, int32_t Count, enum class Unknow Slot) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.PerkSpinEvent");

	struct PerkSpinEvent_Params {
		char bShow;
		int32_t Count;
		enum class Unknow Slot;
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
inline void ABP-BattleRoyalePawn_C::OnLanded(struct Unknown& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-BattleRoyalePawn.BP-BattleRoyalePawn_C.OnLanded");

	struct OnLanded_Params {
		struct Unknown& Hit;
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

