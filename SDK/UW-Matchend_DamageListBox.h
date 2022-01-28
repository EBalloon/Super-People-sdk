// WidgetBlueprintGeneratedClass UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C
class UUW-Matchend_DamageListBox_C : public UUserWidget {

public:

	struct UScrollBox ScrollBox_DamageList; // 0x248 (8)
	struct UUW-Matchend_BuffList_Popup_C UW-Matchend_BuffList_Popup; // 0x250 (8)
	struct FTimerHandle Timer_PlayDamageListAnim; // 0x258 (8)
	float DamageListAnimDelayTime; // 0x260 (4)
	int32_t CurrentAnimIndex; // 0x264 (4)
	struct UUW-Matchend_BuffList_Popup_C BuffListPopupWidgetRef; // 0x268 (8)
	struct FTimerHandle Handle_ShowBuffListPopup; // 0x270 (8)
	int32_t HoverdWidgetIndex; // 0x278 (4)

	void ShowBuffListPopup(); // Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.ShowBuffListPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void HoverDamageList(int32_t WidgetIndex, char IsHoverd); // Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.HoverDamageList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PlayDamageListAnim(); // Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.PlayDamageListAnim(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void GetDamageListCount(int32_t& Count); // Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.GetDamageListCount(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Reset Damage List Anim(); // Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.Reset Damage List Anim(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void MakeDamageList(struct TArray<struct FDiedDamageInfo>& DiedDamageInfos); // Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.MakeDamageList(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.ShowBuffListPopup
inline void UUW-Matchend_DamageListBox_C::ShowBuffListPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.ShowBuffListPopup");

	struct ShowBuffListPopup_Params {
		
	}; ShowBuffListPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.HoverDamageList
inline void UUW-Matchend_DamageListBox_C::HoverDamageList(int32_t WidgetIndex, char IsHoverd) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.HoverDamageList");

	struct HoverDamageList_Params {
		int32_t WidgetIndex;
		char IsHoverd;
	}; HoverDamageList_Params Params;

	Params.WidgetIndex = WidgetIndex;
	Params.IsHoverd = IsHoverd;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.PlayDamageListAnim
inline void UUW-Matchend_DamageListBox_C::PlayDamageListAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.PlayDamageListAnim");

	struct PlayDamageListAnim_Params {
		
	}; PlayDamageListAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.GetDamageListCount
inline void UUW-Matchend_DamageListBox_C::GetDamageListCount(int32_t& Count) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.GetDamageListCount");

	struct GetDamageListCount_Params {
		int32_t& Count;
	}; GetDamageListCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Count = Params.Count;

}

// Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.Reset Damage List Anim
inline void UUW-Matchend_DamageListBox_C::Reset Damage List Anim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.Reset Damage List Anim");

	struct Reset Damage List Anim_Params {
		
	}; Reset Damage List Anim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.MakeDamageList
inline void UUW-Matchend_DamageListBox_C::MakeDamageList(struct TArray<struct FDiedDamageInfo>& DiedDamageInfos) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.MakeDamageList");

	struct MakeDamageList_Params {
		struct TArray<struct FDiedDamageInfo>& DiedDamageInfos;
	}; MakeDamageList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DiedDamageInfos = Params.DiedDamageInfos;

}

