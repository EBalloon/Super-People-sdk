// WidgetBlueprintGeneratedClass UW-RewardGoldSlot_02.UW-RewardGoldSlot_02_C
class UUW-RewardGoldSlot_02_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Anim_Bouns; // 0x250 (8)
	struct Unknown 1; // 0x258 (8)
	struct Unknown 10; // 0x260 (8)
	struct Unknown 100; // 0x268 (8)
	struct Unknown 1000; // 0x270 (8)
	struct Unknown Empty; // 0x278 (8)
	struct Unknown Image_7; // 0x280 (8)
	struct Unknown Image_11; // 0x288 (8)
	struct Unknown Image_14; // 0x290 (8)
	struct Unknown Image_15; // 0x298 (8)
	struct Unknown Image_16; // 0x2A0 (8)
	struct Unknown Image_17; // 0x2A8 (8)
	struct Unknown Image_18; // 0x2B0 (8)
	struct Unknown Image_20; // 0x2B8 (8)
	struct Unknown Image_21; // 0x2C0 (8)
	struct Unknown Image_22; // 0x2C8 (8)
	struct Unknown Image_23; // 0x2D0 (8)
	struct Unknown Image_1473; // 0x2D8 (8)
	struct Unknown TextBlock_4; // 0x2E0 (8)
	struct Unknown TextLight_3; // 0x2E8 (8)
	int32_t Save; // 0x2F0 (4)
	struct Unknown LoopSound; // 0x2F4 (4)
	char IsStopSound : 0; // 0x2F8 (1)

	void Divide(int32_t Value, int32_t& RetS1, int32_t& RetS2); // Function UW-RewardGoldSlot_02.UW-RewardGoldSlot_02_C.Divide(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetGold(int32_t RandomGold); // Function UW-RewardGoldSlot_02.UW-RewardGoldSlot_02_C.SetGold(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void StopSound(); // Function UW-RewardGoldSlot_02.UW-RewardGoldSlot_02_C.StopSound(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void 鉹@t元_2(); // Function UW-RewardGoldSlot_02.UW-RewardGoldSlot_02_C.鉹@t元_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-RewardGoldSlot_02(int32_t EntryPoint); // Function UW-RewardGoldSlot_02.UW-RewardGoldSlot_02_C.ExecuteUbergraph_UW-RewardGoldSlot_02(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-RewardGoldSlot_02.UW-RewardGoldSlot_02_C.Divide
inline void UUW-RewardGoldSlot_02_C::Divide(int32_t Value, int32_t& RetS1, int32_t& RetS2) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RewardGoldSlot_02.UW-RewardGoldSlot_02_C.Divide");

	struct Divide_Params {
		int32_t Value;
		int32_t& RetS1;
		int32_t& RetS2;
	}; Divide_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	RetS1 = Params.RetS1;
	RetS2 = Params.RetS2;

}

// Function UW-RewardGoldSlot_02.UW-RewardGoldSlot_02_C.SetGold
inline void UUW-RewardGoldSlot_02_C::SetGold(int32_t RandomGold) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RewardGoldSlot_02.UW-RewardGoldSlot_02_C.SetGold");

	struct SetGold_Params {
		int32_t RandomGold;
	}; SetGold_Params Params;

	Params.RandomGold = RandomGold;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RewardGoldSlot_02.UW-RewardGoldSlot_02_C.StopSound
inline void UUW-RewardGoldSlot_02_C::StopSound() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RewardGoldSlot_02.UW-RewardGoldSlot_02_C.StopSound");

	struct StopSound_Params {
		
	}; StopSound_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RewardGoldSlot_02.UW-RewardGoldSlot_02_C.鉹@t元_2
inline void UUW-RewardGoldSlot_02_C::鉹@t元_2() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RewardGoldSlot_02.UW-RewardGoldSlot_02_C.鉹@t元_2");

	struct 鉹@t元_2_Params {
		
	}; 鉹@t元_2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-RewardGoldSlot_02.UW-RewardGoldSlot_02_C.ExecuteUbergraph_UW-RewardGoldSlot_02
inline void UUW-RewardGoldSlot_02_C::ExecuteUbergraph_UW-RewardGoldSlot_02(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-RewardGoldSlot_02.UW-RewardGoldSlot_02_C.ExecuteUbergraph_UW-RewardGoldSlot_02");

	struct ExecuteUbergraph_UW-RewardGoldSlot_02_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-RewardGoldSlot_02_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

