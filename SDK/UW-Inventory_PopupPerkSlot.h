// WidgetBlueprintGeneratedClass UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C
class UUW-Inventory_PopupPerkSlot_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image_92; // 0x250 (8)
	struct Unknown Image_253; // 0x258 (8)
	struct Unknown Image_774; // 0x260 (8)
	struct Unknown PerkInfo; // 0x268 (44)
	struct Unknown PerkData; // 0x298 (224)
	struct Unknown IconBrush; // 0x378 (136)
	struct Unknown Popup; // 0x400 (8)

	struct Unknown GetColorAndOpacity_1(); // Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.GetColorAndOpacity_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B80160>
	void SetBG(); // Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.SetBG(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetIcon(); // Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.SetIcon(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetPerk(struct Unknown PerkInfo); // Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.SetPerk(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_E4FEEA874F6096BAF3D0FB94F9EE8AAB(struct Unknown Loaded); // Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.OnLoaded_E4FEEA874F6096BAF3D0FB94F9EE8AAB(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AsyncLoadIcon(struct Unknown Image); // Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.AsyncLoadIcon(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Destruct(); // Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-Inventory_PopupPerkSlot(int32_t EntryPoint); // Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.ExecuteUbergraph_UW-Inventory_PopupPerkSlot(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.GetColorAndOpacity_1
inline struct Unknown UUW-Inventory_PopupPerkSlot_C::GetColorAndOpacity_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.GetColorAndOpacity_1");

	struct GetColorAndOpacity_1_Params {
		
		struct Unknown ReturnValue;

	}; GetColorAndOpacity_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.SetBG
inline void UUW-Inventory_PopupPerkSlot_C::SetBG() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.SetBG");

	struct SetBG_Params {
		
	}; SetBG_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.SetIcon
inline void UUW-Inventory_PopupPerkSlot_C::SetIcon() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.SetIcon");

	struct SetIcon_Params {
		
	}; SetIcon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.SetPerk
inline void UUW-Inventory_PopupPerkSlot_C::SetPerk(struct Unknown PerkInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.SetPerk");

	struct SetPerk_Params {
		struct Unknown PerkInfo;
	}; SetPerk_Params Params;

	Params.PerkInfo = PerkInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.OnLoaded_E4FEEA874F6096BAF3D0FB94F9EE8AAB
inline void UUW-Inventory_PopupPerkSlot_C::OnLoaded_E4FEEA874F6096BAF3D0FB94F9EE8AAB(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.OnLoaded_E4FEEA874F6096BAF3D0FB94F9EE8AAB");

	struct OnLoaded_E4FEEA874F6096BAF3D0FB94F9EE8AAB_Params {
		struct Unknown Loaded;
	}; OnLoaded_E4FEEA874F6096BAF3D0FB94F9EE8AAB_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.AsyncLoadIcon
inline void UUW-Inventory_PopupPerkSlot_C::AsyncLoadIcon(struct Unknown Image) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.AsyncLoadIcon");

	struct AsyncLoadIcon_Params {
		struct Unknown Image;
	}; AsyncLoadIcon_Params Params;

	Params.Image = Image;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.OnMouseEnter
inline void UUW-Inventory_PopupPerkSlot_C::OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.OnMouseEnter");

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

// Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.OnMouseLeave
inline void UUW-Inventory_PopupPerkSlot_C::OnMouseLeave(struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct Unknown& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.Destruct
inline void UUW-Inventory_PopupPerkSlot_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.ExecuteUbergraph_UW-Inventory_PopupPerkSlot
inline void UUW-Inventory_PopupPerkSlot_C::ExecuteUbergraph_UW-Inventory_PopupPerkSlot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.ExecuteUbergraph_UW-Inventory_PopupPerkSlot");

	struct ExecuteUbergraph_UW-Inventory_PopupPerkSlot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_PopupPerkSlot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

