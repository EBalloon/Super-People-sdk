// WidgetBlueprintGeneratedClass UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C
class UUW-Inventory_PerkSlot_C : public UBravoHotelInventoryPerkSlotWidget {

public:

	struct Unknown UberGraphFrame; // 0x2A0 (8)
	struct Unknown LevelUp; // 0x2A8 (8)
	struct Unknown Blank_SkillBG; // 0x2B0 (8)
	struct Unknown Get_SkillBG; // 0x2B8 (8)
	struct Unknown IMG_CoolTime; // 0x2C0 (8)
	struct Unknown IMG_PerkIcon; // 0x2C8 (8)
	struct Unknown KeyImageWidget; // 0x2D0 (8)
	struct Unknown Lv1; // 0x2D8 (8)
	struct Unknown Lv2; // 0x2E0 (8)
	struct Unknown Lv3; // 0x2E8 (8)
	struct Unknown Over_CoolTime; // 0x2F0 (8)
	struct Unknown T_CoolTime; // 0x2F8 (8)
	struct Unknown T_PerkName; // 0x300 (8)
	struct Unknown WidgetSwitcher_Icon; // 0x308 (8)
	char bHover : 0; // 0x310 (1)
	float CurrentExpPercent; // 0x314 (4)
	int32_t CurrentLevel; // 0x318 (4)
	int32_t LastLevel; // 0x31C (4)
	float TargetExpPercent; // 0x320 (4)
	float ExpSpeed; // 0x324 (4)
	struct Unknown PerkData; // 0x328 (224)
	float CurrentLevelPercent; // 0x408 (4)
	int32_t MaxLevel; // 0x40C (4)
	struct Unknown HoverWidget; // 0x410 (8)
	struct TArray<Unknown> LvArray; // 0x418 (16)

	void SetForVisual(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.SetForVisual(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetPerkName(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.SetPerkName(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void InitActiveColor(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.InitActiveColor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Init VSkill(struct TArray<Unknown>& List); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.Init VSkill(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void InitLevelWidget(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.InitLevelWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void UpdateForInit(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.UpdateForInit(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void UpdateLevelWidget(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.UpdateLevelWidget(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void InitSkillBGImg(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.InitSkillBGImg(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	struct Unknown GetSlotColor(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.GetSlotColor(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetLevelUp(int32_t TargetLevel, int32_t TargetExp); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.SetLevelUp(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	float GetExpPercent(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.GetExpPercent(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetPerk(struct Unknown HoverWidget, struct Unknown PerkInfo, char JustVisual); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.SetPerk(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnLoaded_40E2F69B49645C79FC493E8F13CDBE28(struct Unknown Loaded); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.OnLoaded_40E2F69B49645C79FC493E8F13CDBE28(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnLoaded_D7551D6C4C375F77D2FAE6B8B3229914(struct Unknown Loaded); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.OnLoaded_D7551D6C4C375F77D2FAE6B8B3229914(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnLoaded_66A872FA4BD6D4BAE1E1DBAA7A175011(struct Unknown Loaded); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.OnLoaded_66A872FA4BD6D4BAE1E1DBAA7A175011(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void AsyncLoadIcon(struct Unknown Image); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.AsyncLoadIcon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Construct(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void AsyncLoadBG(struct Unknown Image); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.AsyncLoadBG(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void AsyncLoadBlank(struct Unknown Image); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.AsyncLoadBlank(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-Inventory_PerkSlot(int32_t EntryPoint); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.ExecuteUbergraph_UW-Inventory_PerkSlot(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.SetForVisual
inline void UUW-Inventory_PerkSlot_C::SetForVisual() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.SetForVisual");

	struct SetForVisual_Params {
		
	}; SetForVisual_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.SetPerkName
inline void UUW-Inventory_PerkSlot_C::SetPerkName() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.SetPerkName");

	struct SetPerkName_Params {
		
	}; SetPerkName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.InitActiveColor
inline void UUW-Inventory_PerkSlot_C::InitActiveColor() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.InitActiveColor");

	struct InitActiveColor_Params {
		
	}; InitActiveColor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.Init VSkill
inline void UUW-Inventory_PerkSlot_C::Init VSkill(struct TArray<Unknown>& List) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.Init VSkill");

	struct Init VSkill_Params {
		struct TArray<Unknown>& List;
	}; Init VSkill_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	List = Params.List;

}

// Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.InitLevelWidget
inline void UUW-Inventory_PerkSlot_C::InitLevelWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.InitLevelWidget");

	struct InitLevelWidget_Params {
		
	}; InitLevelWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.UpdateForInit
inline void UUW-Inventory_PerkSlot_C::UpdateForInit() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.UpdateForInit");

	struct UpdateForInit_Params {
		
	}; UpdateForInit_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.UpdateLevelWidget
inline void UUW-Inventory_PerkSlot_C::UpdateLevelWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.UpdateLevelWidget");

	struct UpdateLevelWidget_Params {
		
	}; UpdateLevelWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.InitSkillBGImg
inline void UUW-Inventory_PerkSlot_C::InitSkillBGImg() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.InitSkillBGImg");

	struct InitSkillBGImg_Params {
		
	}; InitSkillBGImg_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.GetSlotColor
inline struct Unknown UUW-Inventory_PerkSlot_C::GetSlotColor() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.GetSlotColor");

	struct GetSlotColor_Params {
		
		struct Unknown ReturnValue;

	}; GetSlotColor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.SetLevelUp
inline void UUW-Inventory_PerkSlot_C::SetLevelUp(int32_t TargetLevel, int32_t TargetExp) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.SetLevelUp");

	struct SetLevelUp_Params {
		int32_t TargetLevel;
		int32_t TargetExp;
	}; SetLevelUp_Params Params;

	Params.TargetLevel = TargetLevel;
	Params.TargetExp = TargetExp;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.GetExpPercent
inline float UUW-Inventory_PerkSlot_C::GetExpPercent() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.GetExpPercent");

	struct GetExpPercent_Params {
		
		float ReturnValue;

	}; GetExpPercent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.SetPerk
inline void UUW-Inventory_PerkSlot_C::SetPerk(struct Unknown HoverWidget, struct Unknown PerkInfo, char JustVisual) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.SetPerk");

	struct SetPerk_Params {
		struct Unknown HoverWidget;
		struct Unknown PerkInfo;
		char JustVisual;
	}; SetPerk_Params Params;

	Params.HoverWidget = HoverWidget;
	Params.PerkInfo = PerkInfo;
	Params.JustVisual = JustVisual;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.OnLoaded_40E2F69B49645C79FC493E8F13CDBE28
inline void UUW-Inventory_PerkSlot_C::OnLoaded_40E2F69B49645C79FC493E8F13CDBE28(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.OnLoaded_40E2F69B49645C79FC493E8F13CDBE28");

	struct OnLoaded_40E2F69B49645C79FC493E8F13CDBE28_Params {
		struct Unknown Loaded;
	}; OnLoaded_40E2F69B49645C79FC493E8F13CDBE28_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.OnLoaded_D7551D6C4C375F77D2FAE6B8B3229914
inline void UUW-Inventory_PerkSlot_C::OnLoaded_D7551D6C4C375F77D2FAE6B8B3229914(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.OnLoaded_D7551D6C4C375F77D2FAE6B8B3229914");

	struct OnLoaded_D7551D6C4C375F77D2FAE6B8B3229914_Params {
		struct Unknown Loaded;
	}; OnLoaded_D7551D6C4C375F77D2FAE6B8B3229914_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.OnLoaded_66A872FA4BD6D4BAE1E1DBAA7A175011
inline void UUW-Inventory_PerkSlot_C::OnLoaded_66A872FA4BD6D4BAE1E1DBAA7A175011(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.OnLoaded_66A872FA4BD6D4BAE1E1DBAA7A175011");

	struct OnLoaded_66A872FA4BD6D4BAE1E1DBAA7A175011_Params {
		struct Unknown Loaded;
	}; OnLoaded_66A872FA4BD6D4BAE1E1DBAA7A175011_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.OnMouseEnter
inline void UUW-Inventory_PerkSlot_C::OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.OnMouseEnter");

	struct OnMouseEnter_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
	}; OnMouseEnter_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.AsyncLoadIcon
inline void UUW-Inventory_PerkSlot_C::AsyncLoadIcon(struct Unknown Image) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.AsyncLoadIcon");

	struct AsyncLoadIcon_Params {
		struct Unknown Image;
	}; AsyncLoadIcon_Params Params;

	Params.Image = Image;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.Construct
inline void UUW-Inventory_PerkSlot_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.AsyncLoadBG
inline void UUW-Inventory_PerkSlot_C::AsyncLoadBG(struct Unknown Image) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.AsyncLoadBG");

	struct AsyncLoadBG_Params {
		struct Unknown Image;
	}; AsyncLoadBG_Params Params;

	Params.Image = Image;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.AsyncLoadBlank
inline void UUW-Inventory_PerkSlot_C::AsyncLoadBlank(struct Unknown Image) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.AsyncLoadBlank");

	struct AsyncLoadBlank_Params {
		struct Unknown Image;
	}; AsyncLoadBlank_Params Params;

	Params.Image = Image;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.ExecuteUbergraph_UW-Inventory_PerkSlot
inline void UUW-Inventory_PerkSlot_C::ExecuteUbergraph_UW-Inventory_PerkSlot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.ExecuteUbergraph_UW-Inventory_PerkSlot");

	struct ExecuteUbergraph_UW-Inventory_PerkSlot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_PerkSlot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

