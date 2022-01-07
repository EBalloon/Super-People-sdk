// WidgetBlueprintGeneratedClass UW-GainPerk.UW-GainPerk_C
class UUW-GainPerk_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown LevelUp; // 0x250 (8)
	struct Unknown FadeOut; // 0x258 (8)
	struct Unknown FadeIn; // 0x260 (8)
	struct Unknown Idle; // 0x268 (8)
	struct Unknown CanvasPanel_2; // 0x270 (8)
	struct Unknown Image_336; // 0x278 (8)
	struct Unknown Image_Back; // 0x280 (8)
	struct Unknown Overlay_186; // 0x288 (8)
	struct Unknown PerkLastLevel; // 0x290 (8)
	struct Unknown PerkLevelText; // 0x298 (8)
	struct Unknown PerkName; // 0x2A0 (8)
	struct Unknown PerkSlotHover; // 0x2A8 (8)
	struct Unknown RichTextBlock_Desc; // 0x2B0 (8)
	struct Unknown TextBlock_1; // 0x2B8 (8)
	struct Unknown TextBlock_8; // 0x2C0 (8)
	struct Unknown UW-Inventory_PerkSlot; // 0x2C8 (8)
	struct Unknown PerkInfo; // 0x2D0 (44)
	struct Unknown PerkData; // 0x300 (224)
	int32_t PerkLevel; // 0x3E0 (4)
	struct Unknown PerInGameData; // 0x3E8 (456)
	int32_t Index; // 0x5B0 (4)
	struct Unknown MainWiget; // 0x5B8 (8)
	float CurrentHeight; // 0x5C0 (4)
	int32_t LastPerkLevel; // 0x5C4 (4)
	struct Unknown DefaultPosition; // 0x5C8 (8)
	int32_t CurrenteLevel; // 0x5D0 (4)
	char IsPlayingUltimateSound : 0; // 0x5D4 (1)

	char IsUltimateLevel(); // Function UW-GainPerk.UW-GainPerk_C.IsUltimateLevel(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetPerkDesc(); // Function UW-GainPerk.UW-GainPerk_C.SetPerkDesc(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	struct FText Get_T_PerkDescLv1_Text_1(); // Function UW-GainPerk.UW-GainPerk_C.Get_T_PerkDescLv1_Text_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	struct FText Get_PerkName_Text_1(); // Function UW-GainPerk.UW-GainPerk_C.Get_PerkName_Text_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	struct Unknown Get_PerkName_ColorAndOpacity_1(); // Function UW-GainPerk.UW-GainPerk_C.Get_PerkName_ColorAndOpacity_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	enum class Unknow Get_TextBlock_7_Visibility_1(); // Function UW-GainPerk.UW-GainPerk_C.Get_TextBlock_7_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	struct Unknown Get_PerkImage_Brush_1(); // Function UW-GainPerk.UW-GainPerk_C.Get_PerkImage_Brush_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	enum class Unknow Get_PerkImage_Visibility_1(); // Function UW-GainPerk.UW-GainPerk_C.Get_PerkImage_Visibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnLoaded_A03468734B71BD17CEDAA08DD6958C1B(struct Unknown Loaded); // Function UW-GainPerk.UW-GainPerk_C.OnLoaded_A03468734B71BD17CEDAA08DD6958C1B(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Construct(); // Function UW-GainPerk.UW-GainPerk_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UW-GainPerk.UW-GainPerk_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void AsyncLoadIconTexture(struct Unknown IconTexture); // Function UW-GainPerk.UW-GainPerk_C.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void RemovePopup(); // Function UW-GainPerk.UW-GainPerk_C.RemovePopup(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void RemoveFrom(); // Function UW-GainPerk.UW-GainPerk_C.RemoveFrom(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-GainPerk(int32_t EntryPoint); // Function UW-GainPerk.UW-GainPerk_C.ExecuteUbergraph_UW-GainPerk(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-GainPerk.UW-GainPerk_C.IsUltimateLevel
inline char UUW-GainPerk_C::IsUltimateLevel() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GainPerk.UW-GainPerk_C.IsUltimateLevel");

	struct IsUltimateLevel_Params {
		
		char ReturnValue;

	}; IsUltimateLevel_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-GainPerk.UW-GainPerk_C.SetPerkDesc
inline void UUW-GainPerk_C::SetPerkDesc() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GainPerk.UW-GainPerk_C.SetPerkDesc");

	struct SetPerkDesc_Params {
		
	}; SetPerkDesc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GainPerk.UW-GainPerk_C.Get_T_PerkDescLv1_Text_1
inline struct FText UUW-GainPerk_C::Get_T_PerkDescLv1_Text_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GainPerk.UW-GainPerk_C.Get_T_PerkDescLv1_Text_1");

	struct Get_T_PerkDescLv1_Text_1_Params {
		
		struct FText ReturnValue;

	}; Get_T_PerkDescLv1_Text_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-GainPerk.UW-GainPerk_C.Get_PerkName_Text_1
inline struct FText UUW-GainPerk_C::Get_PerkName_Text_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GainPerk.UW-GainPerk_C.Get_PerkName_Text_1");

	struct Get_PerkName_Text_1_Params {
		
		struct FText ReturnValue;

	}; Get_PerkName_Text_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-GainPerk.UW-GainPerk_C.Get_PerkName_ColorAndOpacity_1
inline struct Unknown UUW-GainPerk_C::Get_PerkName_ColorAndOpacity_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GainPerk.UW-GainPerk_C.Get_PerkName_ColorAndOpacity_1");

	struct Get_PerkName_ColorAndOpacity_1_Params {
		
		struct Unknown ReturnValue;

	}; Get_PerkName_ColorAndOpacity_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-GainPerk.UW-GainPerk_C.Get_TextBlock_7_Visibility_1
inline enum class Unknow UUW-GainPerk_C::Get_TextBlock_7_Visibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GainPerk.UW-GainPerk_C.Get_TextBlock_7_Visibility_1");

	struct Get_TextBlock_7_Visibility_1_Params {
		
		enum class Unknow ReturnValue;

	}; Get_TextBlock_7_Visibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-GainPerk.UW-GainPerk_C.Get_PerkImage_Brush_1
inline struct Unknown UUW-GainPerk_C::Get_PerkImage_Brush_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GainPerk.UW-GainPerk_C.Get_PerkImage_Brush_1");

	struct Get_PerkImage_Brush_1_Params {
		
		struct Unknown ReturnValue;

	}; Get_PerkImage_Brush_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-GainPerk.UW-GainPerk_C.Get_PerkImage_Visibility_1
inline enum class Unknow UUW-GainPerk_C::Get_PerkImage_Visibility_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GainPerk.UW-GainPerk_C.Get_PerkImage_Visibility_1");

	struct Get_PerkImage_Visibility_1_Params {
		
		enum class Unknow ReturnValue;

	}; Get_PerkImage_Visibility_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-GainPerk.UW-GainPerk_C.OnLoaded_A03468734B71BD17CEDAA08DD6958C1B
inline void UUW-GainPerk_C::OnLoaded_A03468734B71BD17CEDAA08DD6958C1B(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GainPerk.UW-GainPerk_C.OnLoaded_A03468734B71BD17CEDAA08DD6958C1B");

	struct OnLoaded_A03468734B71BD17CEDAA08DD6958C1B_Params {
		struct Unknown Loaded;
	}; OnLoaded_A03468734B71BD17CEDAA08DD6958C1B_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GainPerk.UW-GainPerk_C.Construct
inline void UUW-GainPerk_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GainPerk.UW-GainPerk_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GainPerk.UW-GainPerk_C.Tick
inline void UUW-GainPerk_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GainPerk.UW-GainPerk_C.Tick");

	struct Tick_Params {
		struct Unknown MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GainPerk.UW-GainPerk_C.AsyncLoadIconTexture
inline void UUW-GainPerk_C::AsyncLoadIconTexture(struct Unknown IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GainPerk.UW-GainPerk_C.AsyncLoadIconTexture");

	struct AsyncLoadIconTexture_Params {
		struct Unknown IconTexture;
	}; AsyncLoadIconTexture_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GainPerk.UW-GainPerk_C.RemovePopup
inline void UUW-GainPerk_C::RemovePopup() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GainPerk.UW-GainPerk_C.RemovePopup");

	struct RemovePopup_Params {
		
	}; RemovePopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GainPerk.UW-GainPerk_C.RemoveFrom
inline void UUW-GainPerk_C::RemoveFrom() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GainPerk.UW-GainPerk_C.RemoveFrom");

	struct RemoveFrom_Params {
		
	}; RemoveFrom_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-GainPerk.UW-GainPerk_C.ExecuteUbergraph_UW-GainPerk
inline void UUW-GainPerk_C::ExecuteUbergraph_UW-GainPerk(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-GainPerk.UW-GainPerk_C.ExecuteUbergraph_UW-GainPerk");

	struct ExecuteUbergraph_UW-GainPerk_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-GainPerk_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

