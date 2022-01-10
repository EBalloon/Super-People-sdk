// WidgetBlueprintGeneratedClass UW-RewardGoldSlot.UW-RewardGoldSlot_C
class UUW-RewardGoldSlot_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Ani_Gold; // 0x250 (8)
	struct Unknown 1; // 0x258 (8)
	struct Unknown 10; // 0x260 (8)
	struct Unknown 100; // 0x268 (8)
	struct Unknown 1000; // 0x270 (8)
	struct Unknown BonusBG; // 0x278 (8)
	struct Unknown BrightSpot_01; // 0x280 (8)
	struct Unknown BrightSpot_02; // 0x288 (8)
	struct Unknown BrightSpot_03; // 0x290 (8)
	struct Unknown BrightSpot_04; // 0x298 (8)
	struct Unknown BrightSpot_05; // 0x2A0 (8)
	struct Unknown Empty; // 0x2A8 (8)
	struct Unknown Glow_01; // 0x2B0 (8)
	struct Unknown Gold; // 0x2B8 (8)
	struct Unknown Image_7; // 0x2C0 (8)
	struct Unknown Image_11; // 0x2C8 (8)
	struct Unknown Image_14; // 0x2D0 (8)
	struct Unknown Image_15; // 0x2D8 (8)
	struct Unknown Image_16; // 0x2E0 (8)
	struct Unknown Image_17; // 0x2E8 (8)
	struct Unknown Image_18; // 0x2F0 (8)
	struct Unknown Image_20; // 0x2F8 (8)
	struct Unknown Image_21; // 0x300 (8)
	struct Unknown Image_22; // 0x308 (8)
	struct Unknown Image_23; // 0x310 (8)
	struct Unknown Image_335; // 0x318 (8)
	struct Unknown Image_1473; // 0x320 (8)
	struct Unknown Light; // 0x328 (8)
	struct Unknown Light_01; // 0x330 (8)
	struct Unknown Light_02; // 0x338 (8)
	struct Unknown Light_03; // 0x340 (8)
	struct Unknown Light_04; // 0x348 (8)
	struct Unknown Light_05; // 0x350 (8)
	struct Unknown Light_06; // 0x358 (8)
	struct Unknown PickUpGold; // 0x360 (8)
	struct Unknown RIng_Glow_01; // 0x368 (8)
	struct Unknown TextBlock_4; // 0x370 (8)
	struct Unknown TextLight_2; // 0x378 (8)
	struct Unknown TextLight_3; // 0x380 (8)
	int32_t Save; // 0x388 (4)
	char NewVar_1 : 0; // 0x38C (1)
	char IsStopSound : 0; // 0x38D (1)
	float LoopSountStartTime; // 0x390 (4)
	struct Unknown LoopSound; // 0x394 (4)
	float LoopSountEndTime; // 0x398 (4)
	float 1StartTime; // 0x39C (4)
	float 10StartTime; // 0x3A0 (4)
	float 100StartTime; // 0x3A4 (4)
	float 1000StartTime; // 0x3A8 (4)
	float FinStartTime; // 0x3AC (4)

	void Divide(int32_t Value1, int32_t& RetS1, int32_t& RetS2); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.Divide(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void StopSound(); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.StopSound(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void 鉹@t元_7(); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.鉹@t元_7(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void 鉹@t元_8(); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.鉹@t元_8(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void CustomEvent(); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.CustomEvent(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void CustomEvent_2(); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.CustomEvent_2(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void CustomEvent_3(); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.CustomEvent_3(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void CustomEvent_4(); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.CustomEvent_4(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetGold(int32_t AddGold, int32_t GetGold); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.SetGold(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void CustomEvent_5(); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.CustomEvent_5(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void 鉹@t元_1(); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void 鉹@t元_2(); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.鉹@t元_2(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_UW-RewardGoldSlot(int32_t EntryPoint); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.ExecuteUbergraph_UW-RewardGoldSlot(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.Divide
inline void UUW-RewardGoldSlot_C::Divide(int32_t Value1, int32_t& RetS1, int32_t& RetS2) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.Divide");

	struct Divide_Params {
		int32_t Value1;
		int32_t& RetS1;
		int32_t& RetS2;
	}; Divide_Params Params;

	Params.Value1 = Value1;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	RetS1 = Params.RetS1;
	RetS2 = Params.RetS2;

}

// Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.StopSound
inline void UUW-RewardGoldSlot_C::StopSound() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.StopSound");

	struct StopSound_Params {
		
	}; StopSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.鉹@t元_7
inline void UUW-RewardGoldSlot_C::鉹@t元_7() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.鉹@t元_7");

	struct 鉹@t元_7_Params {
		
	}; 鉹@t元_7_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.鉹@t元_8
inline void UUW-RewardGoldSlot_C::鉹@t元_8() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.鉹@t元_8");

	struct 鉹@t元_8_Params {
		
	}; 鉹@t元_8_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.CustomEvent
inline void UUW-RewardGoldSlot_C::CustomEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.CustomEvent");

	struct CustomEvent_Params {
		
	}; CustomEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.CustomEvent_2
inline void UUW-RewardGoldSlot_C::CustomEvent_2() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.CustomEvent_2");

	struct CustomEvent_2_Params {
		
	}; CustomEvent_2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.CustomEvent_3
inline void UUW-RewardGoldSlot_C::CustomEvent_3() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.CustomEvent_3");

	struct CustomEvent_3_Params {
		
	}; CustomEvent_3_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.CustomEvent_4
inline void UUW-RewardGoldSlot_C::CustomEvent_4() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.CustomEvent_4");

	struct CustomEvent_4_Params {
		
	}; CustomEvent_4_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.SetGold
inline void UUW-RewardGoldSlot_C::SetGold(int32_t AddGold, int32_t GetGold) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.SetGold");

	struct SetGold_Params {
		int32_t AddGold;
		int32_t GetGold;
	}; SetGold_Params Params;

	Params.AddGold = AddGold;
	Params.GetGold = GetGold;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.CustomEvent_5
inline void UUW-RewardGoldSlot_C::CustomEvent_5() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.CustomEvent_5");

	struct CustomEvent_5_Params {
		
	}; CustomEvent_5_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.鉹@t元_1
inline void UUW-RewardGoldSlot_C::鉹@t元_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		
	}; 鉹@t元_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.鉹@t元_2
inline void UUW-RewardGoldSlot_C::鉹@t元_2() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.鉹@t元_2");

	struct 鉹@t元_2_Params {
		
	}; 鉹@t元_2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.ExecuteUbergraph_UW-RewardGoldSlot
inline void UUW-RewardGoldSlot_C::ExecuteUbergraph_UW-RewardGoldSlot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.ExecuteUbergraph_UW-RewardGoldSlot");

	struct ExecuteUbergraph_UW-RewardGoldSlot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-RewardGoldSlot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

