// WidgetBlueprintGeneratedClass UW-PerkLevelUp.UW-PerkLevelUp_C
class UUW-PerkLevelUp_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Disappear; // 0x250 (8)
	struct Unknown Finish; // 0x258 (8)
	struct Unknown Spin; // 0x260 (8)
	struct Unknown Idle; // 0x268 (8)
	struct Unknown Image_180; // 0x270 (8)
	struct Unknown ItemImage_bg; // 0x278 (8)
	struct Unknown ItemImage_Dummy1; // 0x280 (8)
	struct Unknown ItemImage_Main; // 0x288 (8)
	struct Unknown TextBlock_1; // 0x290 (8)
	struct Unknown TextBlock_3; // 0x298 (8)
	struct Unknown TextMountablewea; // 0x2A0 (8)
	struct Unknown TextMountableweaLV1; // 0x2A8 (8)
	struct Unknown PerkInfo; // 0x2B0 (40)
	struct Unknown PerkData; // 0x2D8 (224)
	char bLevelUp : 0; // 0x3B8 (1)
	char bFinishing : 0; // 0x3B9 (1)
	float FinishTime; // 0x3BC (4)
	enum class Unknow PerkSlot; // 0x3C0 (1)

	struct FText Get_TextBlock_1_Text_1(); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_TextBlock_1_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct Unknown Get_ItemImage_bg_Brush_1(); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_ItemImage_bg_Brush_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct Unknown Get_ItemImage_Main_Brush_1(); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_ItemImage_Main_Brush_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	struct FText Get_TextMountablewea_Text_1(); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_TextMountablewea_Text_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	enum class Unknow Get_TextBlock_2_Visibility_1(); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_TextBlock_2_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	enum class Unknow Get_TextBlock_0_Visibility_1(); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_TextBlock_0_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void StartFinish(); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.StartFinish(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void StartSpin(); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.StartSpin(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Construct(); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void EndFinish(); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.EndFinish(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetPerkInfo(struct Unknown PerkInfo); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.SetPerkInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void RemoveSelf(); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.RemoveSelf(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-PerkLevelUp(int32_t EntryPoint); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.ExecuteUbergraph_UW-PerkLevelUp(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_TextBlock_1_Text_1
inline struct FText UUW-PerkLevelUp_C::Get_TextBlock_1_Text_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_TextBlock_1_Text_1");

	struct Get_TextBlock_1_Text_1_Params {
		
		struct FText ReturnValue;

	}; Get_TextBlock_1_Text_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_ItemImage_bg_Brush_1
inline struct Unknown UUW-PerkLevelUp_C::Get_ItemImage_bg_Brush_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_ItemImage_bg_Brush_1");

	struct Get_ItemImage_bg_Brush_1_Params {
		
		struct Unknown ReturnValue;

	}; Get_ItemImage_bg_Brush_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_ItemImage_Main_Brush_1
inline struct Unknown UUW-PerkLevelUp_C::Get_ItemImage_Main_Brush_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_ItemImage_Main_Brush_1");

	struct Get_ItemImage_Main_Brush_1_Params {
		
		struct Unknown ReturnValue;

	}; Get_ItemImage_Main_Brush_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_TextMountablewea_Text_1
inline struct FText UUW-PerkLevelUp_C::Get_TextMountablewea_Text_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_TextMountablewea_Text_1");

	struct Get_TextMountablewea_Text_1_Params {
		
		struct FText ReturnValue;

	}; Get_TextMountablewea_Text_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_TextBlock_2_Visibility_1
inline enum class Unknow UUW-PerkLevelUp_C::Get_TextBlock_2_Visibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_TextBlock_2_Visibility_1");

	struct Get_TextBlock_2_Visibility_1_Params {
		
		enum class Unknow ReturnValue;

	}; Get_TextBlock_2_Visibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_TextBlock_0_Visibility_1
inline enum class Unknow UUW-PerkLevelUp_C::Get_TextBlock_0_Visibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_TextBlock_0_Visibility_1");

	struct Get_TextBlock_0_Visibility_1_Params {
		
		enum class Unknow ReturnValue;

	}; Get_TextBlock_0_Visibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PerkLevelUp.UW-PerkLevelUp_C.StartFinish
inline void UUW-PerkLevelUp_C::StartFinish() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp.UW-PerkLevelUp_C.StartFinish");

	struct StartFinish_Params {
		
	}; StartFinish_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp.UW-PerkLevelUp_C.StartSpin
inline void UUW-PerkLevelUp_C::StartSpin() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp.UW-PerkLevelUp_C.StartSpin");

	struct StartSpin_Params {
		
	}; StartSpin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp.UW-PerkLevelUp_C.Construct
inline void UUW-PerkLevelUp_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp.UW-PerkLevelUp_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp.UW-PerkLevelUp_C.EndFinish
inline void UUW-PerkLevelUp_C::EndFinish() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp.UW-PerkLevelUp_C.EndFinish");

	struct EndFinish_Params {
		
	}; EndFinish_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp.UW-PerkLevelUp_C.SetPerkInfo
inline void UUW-PerkLevelUp_C::SetPerkInfo(struct Unknown PerkInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp.UW-PerkLevelUp_C.SetPerkInfo");

	struct SetPerkInfo_Params {
		struct Unknown PerkInfo;
	}; SetPerkInfo_Params Params;

	Params.PerkInfo = PerkInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp.UW-PerkLevelUp_C.RemoveSelf
inline void UUW-PerkLevelUp_C::RemoveSelf() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp.UW-PerkLevelUp_C.RemoveSelf");

	struct RemoveSelf_Params {
		
	}; RemoveSelf_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkLevelUp.UW-PerkLevelUp_C.ExecuteUbergraph_UW-PerkLevelUp
inline void UUW-PerkLevelUp_C::ExecuteUbergraph_UW-PerkLevelUp(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp.UW-PerkLevelUp_C.ExecuteUbergraph_UW-PerkLevelUp");

	struct ExecuteUbergraph_UW-PerkLevelUp_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-PerkLevelUp_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

