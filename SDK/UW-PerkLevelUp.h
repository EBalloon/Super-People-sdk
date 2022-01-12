// WidgetBlueprintGeneratedClass UW-PerkLevelUp.UW-PerkLevelUp_C
class UUW-PerkLevelUp_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation Disappear; // 0x250 (8)
	struct UWidgetAnimation Finish; // 0x258 (8)
	struct UWidgetAnimation Spin; // 0x260 (8)
	struct UWidgetAnimation Idle; // 0x268 (8)
	struct UImage Image_180; // 0x270 (8)
	struct UImage ItemImage_bg; // 0x278 (8)
	struct UImage ItemImage_Dummy1; // 0x280 (8)
	struct UImage ItemImage_Main; // 0x288 (8)
	struct UTextBlock TextBlock_1; // 0x290 (8)
	struct UTextBlock TextBlock_3; // 0x298 (8)
	struct UTextBlock TextMountablewea; // 0x2A0 (8)
	struct UTextBlock TextMountableweaLV1; // 0x2A8 (8)
	struct FPerkInfo PerkInfo; // 0x2B0 (40)
	struct FPerkData PerkData; // 0x2D8 (224)
	char bLevelUp : 0; // 0x3B8 (1)
	char bFinishing : 0; // 0x3B9 (1)
	float FinishTime; // 0x3BC (4)
	enum class EPerkSlotFlag PerkSlot; // 0x3C0 (1)

	struct FText Get_TextBlock_1_Text_1(); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_TextBlock_1_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	struct FSlateBrush Get_ItemImage_bg_Brush_1(); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_ItemImage_bg_Brush_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	struct FSlateBrush Get_ItemImage_Main_Brush_1(); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_ItemImage_Main_Brush_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	struct FText Get_TextMountablewea_Text_1(); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_TextMountablewea_Text_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	enum class ESlateVisibility Get_TextBlock_2_Visibility_1(); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_TextBlock_2_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	enum class ESlateVisibility Get_TextBlock_0_Visibility_1(); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_TextBlock_0_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void StartFinish(); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.StartFinish(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void StartSpin(); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.StartSpin(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void EndFinish(); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.EndFinish(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetPerkInfo(struct FPerkInfo PerkInfo); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.SetPerkInfo(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void RemoveSelf(); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.RemoveSelf(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-PerkLevelUp(int32_t EntryPoint); // Function UW-PerkLevelUp.UW-PerkLevelUp_C.ExecuteUbergraph_UW-PerkLevelUp(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
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
inline struct FSlateBrush UUW-PerkLevelUp_C::Get_ItemImage_bg_Brush_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_ItemImage_bg_Brush_1");

	struct Get_ItemImage_bg_Brush_1_Params {
		
		struct FSlateBrush ReturnValue;

	}; Get_ItemImage_bg_Brush_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_ItemImage_Main_Brush_1
inline struct FSlateBrush UUW-PerkLevelUp_C::Get_ItemImage_Main_Brush_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_ItemImage_Main_Brush_1");

	struct Get_ItemImage_Main_Brush_1_Params {
		
		struct FSlateBrush ReturnValue;

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
inline enum class ESlateVisibility UUW-PerkLevelUp_C::Get_TextBlock_2_Visibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_TextBlock_2_Visibility_1");

	struct Get_TextBlock_2_Visibility_1_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; Get_TextBlock_2_Visibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_TextBlock_0_Visibility_1
inline enum class ESlateVisibility UUW-PerkLevelUp_C::Get_TextBlock_0_Visibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp.UW-PerkLevelUp_C.Get_TextBlock_0_Visibility_1");

	struct Get_TextBlock_0_Visibility_1_Params {
		
		enum class ESlateVisibility ReturnValue;

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
inline void UUW-PerkLevelUp_C::SetPerkInfo(struct FPerkInfo PerkInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkLevelUp.UW-PerkLevelUp_C.SetPerkInfo");

	struct SetPerkInfo_Params {
		struct FPerkInfo PerkInfo;
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

