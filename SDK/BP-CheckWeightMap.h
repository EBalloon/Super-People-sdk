// WidgetBlueprintGeneratedClass BP-CheckWeightMap.BP-CheckWeightMap_C
class UBP-CheckWeightMap_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown B_Value; // 0x250 (8)
	struct Unknown Check; // 0x258 (8)
	struct Unknown G_Value; // 0x260 (8)
	struct Unknown Image_166; // 0x268 (8)
	struct Unknown Land; // 0x270 (8)
	struct Unknown Land_2; // 0x278 (8)
	struct Unknown Land_3; // 0x280 (8)
	struct Unknown Land_4; // 0x288 (8)
	struct Unknown Land_5; // 0x290 (8)
	struct Unknown Land_6; // 0x298 (8)
	struct Unknown R_5; // 0x2A0 (8)
	struct Unknown R_7; // 0x2A8 (8)
	struct Unknown R_9; // 0x2B0 (8)
	struct Unknown R_Value; // 0x2B8 (8)
	struct Unknown TextBlock_4; // 0x2C0 (8)
	struct Unknown TextBlock_5; // 0x2C8 (8)
	struct Unknown TextBlock_6; // 0x2D0 (8)
	struct Unknown TextBlock_8; // 0x2D8 (8)
	struct Unknown TextBlock_9; // 0x2E0 (8)
	struct Unknown TextBlock_10; // 0x2E8 (8)
	struct Unknown Timer; // 0x2F0 (8)

	void OnLoaded_395796F147F051B7CCBB17B8AB7F3577(struct Unknown Loaded); // Function BP-CheckWeightMap.BP-CheckWeightMap_C.OnLoaded_395796F147F051B7CCBB17B8AB7F3577(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnLoaded_9E09E1234991DF79517848BF7BB1AC45(struct Unknown Loaded); // Function BP-CheckWeightMap.BP-CheckWeightMap_C.OnLoaded_9E09E1234991DF79517848BF7BB1AC45(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnLoaded_4A9EA3EE453D348BBD4E76837B616AD3(struct Unknown Loaded); // Function BP-CheckWeightMap.BP-CheckWeightMap_C.OnLoaded_4A9EA3EE453D348BBD4E76837B616AD3(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Set Data(struct Unknown WeightMap); // Function BP-CheckWeightMap.BP-CheckWeightMap_C.Set Data(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Set Update(char Enable); // Function BP-CheckWeightMap.BP-CheckWeightMap_C.Set Update(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void 鉹@t元_1(); // Function BP-CheckWeightMap.BP-CheckWeightMap_C.鉹@t元_1(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_BP-CheckWeightMap(int32_t EntryPoint); // Function BP-CheckWeightMap.BP-CheckWeightMap_C.ExecuteUbergraph_BP-CheckWeightMap(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function BP-CheckWeightMap.BP-CheckWeightMap_C.OnLoaded_395796F147F051B7CCBB17B8AB7F3577
inline void UBP-CheckWeightMap_C::OnLoaded_395796F147F051B7CCBB17B8AB7F3577(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-CheckWeightMap.BP-CheckWeightMap_C.OnLoaded_395796F147F051B7CCBB17B8AB7F3577");

	struct OnLoaded_395796F147F051B7CCBB17B8AB7F3577_Params {
		struct Unknown Loaded;
	}; OnLoaded_395796F147F051B7CCBB17B8AB7F3577_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-CheckWeightMap.BP-CheckWeightMap_C.OnLoaded_9E09E1234991DF79517848BF7BB1AC45
inline void UBP-CheckWeightMap_C::OnLoaded_9E09E1234991DF79517848BF7BB1AC45(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-CheckWeightMap.BP-CheckWeightMap_C.OnLoaded_9E09E1234991DF79517848BF7BB1AC45");

	struct OnLoaded_9E09E1234991DF79517848BF7BB1AC45_Params {
		struct Unknown Loaded;
	}; OnLoaded_9E09E1234991DF79517848BF7BB1AC45_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-CheckWeightMap.BP-CheckWeightMap_C.OnLoaded_4A9EA3EE453D348BBD4E76837B616AD3
inline void UBP-CheckWeightMap_C::OnLoaded_4A9EA3EE453D348BBD4E76837B616AD3(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-CheckWeightMap.BP-CheckWeightMap_C.OnLoaded_4A9EA3EE453D348BBD4E76837B616AD3");

	struct OnLoaded_4A9EA3EE453D348BBD4E76837B616AD3_Params {
		struct Unknown Loaded;
	}; OnLoaded_4A9EA3EE453D348BBD4E76837B616AD3_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-CheckWeightMap.BP-CheckWeightMap_C.Set Data
inline void UBP-CheckWeightMap_C::Set Data(struct Unknown WeightMap) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-CheckWeightMap.BP-CheckWeightMap_C.Set Data");

	struct Set Data_Params {
		struct Unknown WeightMap;
	}; Set Data_Params Params;

	Params.WeightMap = WeightMap;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-CheckWeightMap.BP-CheckWeightMap_C.Set Update
inline void UBP-CheckWeightMap_C::Set Update(char Enable) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-CheckWeightMap.BP-CheckWeightMap_C.Set Update");

	struct Set Update_Params {
		char Enable;
	}; Set Update_Params Params;

	Params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-CheckWeightMap.BP-CheckWeightMap_C.鉹@t元_1
inline void UBP-CheckWeightMap_C::鉹@t元_1() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-CheckWeightMap.BP-CheckWeightMap_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		
	}; 鉹@t元_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-CheckWeightMap.BP-CheckWeightMap_C.ExecuteUbergraph_BP-CheckWeightMap
inline void UBP-CheckWeightMap_C::ExecuteUbergraph_BP-CheckWeightMap(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-CheckWeightMap.BP-CheckWeightMap_C.ExecuteUbergraph_BP-CheckWeightMap");

	struct ExecuteUbergraph_BP-CheckWeightMap_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-CheckWeightMap_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

