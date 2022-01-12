// WidgetBlueprintGeneratedClass UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C
class UUW-PerkDeckSelectItemWidget_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UButton Button_Main; // 0x250 (8)
	struct UImage Image_ClassIcon; // 0x258 (8)
	struct UImage Image_ComingSoonBg; // 0x260 (8)
	struct UImage Image_Disabled; // 0x268 (8)
	struct UImage Image_Outline; // 0x270 (8)
	struct UImage Image_Push; // 0x278 (8)
	struct UOverlay Overlay_Main; // 0x280 (8)
	struct UTextBlock T_ComingSoon; // 0x288 (8)
	struct UUW-PerkDeckSelectItemNumWidget_C UW-PerkDeckSelectItemNumWidget; // 0x290 (8)
	struct UUW-PerkDeckSelectItemNumWidget_C UW-PerkDeckSelectItemNumWidget_2; // 0x298 (8)
	struct UUW-PerkDeckSelectItemNumWidget_C UW-PerkDeckSelectItemNumWidget_3; // 0x2A0 (8)
	struct UUW-PerkDeckSelectItemNumWidget_C UW-PerkDeckSelectItemNumWidget_Local; // 0x2A8 (8)
	struct UVerticalBox VerticalBox_Selected; // 0x2B0 (8)
	struct FPerkDeckClassInfo PerkDeckClassInfo; // 0x2B8 (40)
	int32_t SelectedNum; // 0x2E0 (4)
	int32_t SelectedMinIndex; // 0x2E4 (4)
	struct FMulticastInlineDelegate ChooseClass; // 0x2E8 (16)
	int32_t ClassIndex; // 0x2F8 (4)
	struct FMulticastInlineDelegate HoverClass; // 0x300 (16)
	char bIsLocalSelected : 0; // 0x310 (1)
	char bIsSelected : 0; // 0x311 (1)
	struct FPerkDeckData CurrentPerkDeckData; // 0x318 (1200)
	char bIsDuplicateSelectPossible : 0; // 0x7C8 (1)
	char bButtonDisabled : 0; // 0x7C9 (1)
	char bNoUpdatedDisabled : 0; // 0x7CA (1)
	char bIsBlocked : 0; // 0x7CB (1)

	void SetBlocked(char IsBlocked, char ComingSoon); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.SetBlocked(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void DisableWithoutSelected(); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.DisableWithoutSelected(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateButtonDisabled(); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.UpdateButtonDisabled(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void UpdateOutLine(); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.UpdateOutLine(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetSelectedInfo(struct ABravoHotelPlayerState& PlayerState); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.SetSelectedInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ResetSelected(); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.ResetSelected(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetPerkDeckClassInfoByRowName(struct FName RowName); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.SetPerkDeckClassInfoByRowName(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetPerkDeckClassInfo(struct FPerkDeckClassInfo& PerkDeckClassInfo, int32_t ClassIndex); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.SetPerkDeckClassInfo(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_4ECB692A48B41C9343CA15BDA4F3DA1C(struct Object Loaded); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.OnLoaded_4ECB692A48B41C9343CA15BDA4F3DA1C(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AsyncLoadingClassSelectIcon(struct TSoftObjectPtr<Object> Texture); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.AsyncLoadingClassSelectIcon(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Construct(); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-PerkDeckSelectItemWidget(int32_t EntryPoint); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.ExecuteUbergraph_UW-PerkDeckSelectItemWidget(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
	void HoverClass__DelegateSignature(int32_t ClassIndex, char IsHoverd); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.HoverClass__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ChooseClass__DelegateSignature(int32_t ClassIndex); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.ChooseClass__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
};

// Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.SetBlocked
inline void UUW-PerkDeckSelectItemWidget_C::SetBlocked(char IsBlocked, char ComingSoon) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.SetBlocked");

	struct SetBlocked_Params {
		char IsBlocked;
		char ComingSoon;
	}; SetBlocked_Params Params;

	Params.IsBlocked = IsBlocked;
	Params.ComingSoon = ComingSoon;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.DisableWithoutSelected
inline void UUW-PerkDeckSelectItemWidget_C::DisableWithoutSelected() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.DisableWithoutSelected");

	struct DisableWithoutSelected_Params {
		
	}; DisableWithoutSelected_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.UpdateButtonDisabled
inline void UUW-PerkDeckSelectItemWidget_C::UpdateButtonDisabled() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.UpdateButtonDisabled");

	struct UpdateButtonDisabled_Params {
		
	}; UpdateButtonDisabled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.UpdateOutLine
inline void UUW-PerkDeckSelectItemWidget_C::UpdateOutLine() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.UpdateOutLine");

	struct UpdateOutLine_Params {
		
	}; UpdateOutLine_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.SetSelectedInfo
inline void UUW-PerkDeckSelectItemWidget_C::SetSelectedInfo(struct ABravoHotelPlayerState& PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.SetSelectedInfo");

	struct SetSelectedInfo_Params {
		struct ABravoHotelPlayerState& PlayerState;
	}; SetSelectedInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PlayerState = Params.PlayerState;

}

// Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.ResetSelected
inline void UUW-PerkDeckSelectItemWidget_C::ResetSelected() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.ResetSelected");

	struct ResetSelected_Params {
		
	}; ResetSelected_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.SetPerkDeckClassInfoByRowName
inline void UUW-PerkDeckSelectItemWidget_C::SetPerkDeckClassInfoByRowName(struct FName RowName) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.SetPerkDeckClassInfoByRowName");

	struct SetPerkDeckClassInfoByRowName_Params {
		struct FName RowName;
	}; SetPerkDeckClassInfoByRowName_Params Params;

	Params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.SetPerkDeckClassInfo
inline void UUW-PerkDeckSelectItemWidget_C::SetPerkDeckClassInfo(struct FPerkDeckClassInfo& PerkDeckClassInfo, int32_t ClassIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.SetPerkDeckClassInfo");

	struct SetPerkDeckClassInfo_Params {
		struct FPerkDeckClassInfo& PerkDeckClassInfo;
		int32_t ClassIndex;
	}; SetPerkDeckClassInfo_Params Params;

	Params.ClassIndex = ClassIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PerkDeckClassInfo = Params.PerkDeckClassInfo;

}

// Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.OnLoaded_4ECB692A48B41C9343CA15BDA4F3DA1C
inline void UUW-PerkDeckSelectItemWidget_C::OnLoaded_4ECB692A48B41C9343CA15BDA4F3DA1C(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.OnLoaded_4ECB692A48B41C9343CA15BDA4F3DA1C");

	struct OnLoaded_4ECB692A48B41C9343CA15BDA4F3DA1C_Params {
		struct Object Loaded;
	}; OnLoaded_4ECB692A48B41C9343CA15BDA4F3DA1C_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
inline void UUW-PerkDeckSelectItemWidget_C::BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
inline void UUW-PerkDeckSelectItemWidget_C::BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
inline void UUW-PerkDeckSelectItemWidget_C::BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.AsyncLoadingClassSelectIcon
inline void UUW-PerkDeckSelectItemWidget_C::AsyncLoadingClassSelectIcon(struct TSoftObjectPtr<Object> Texture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.AsyncLoadingClassSelectIcon");

	struct AsyncLoadingClassSelectIcon_Params {
		struct TSoftObjectPtr<Object> Texture;
	}; AsyncLoadingClassSelectIcon_Params Params;

	Params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.Construct
inline void UUW-PerkDeckSelectItemWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.ExecuteUbergraph_UW-PerkDeckSelectItemWidget
inline void UUW-PerkDeckSelectItemWidget_C::ExecuteUbergraph_UW-PerkDeckSelectItemWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.ExecuteUbergraph_UW-PerkDeckSelectItemWidget");

	struct ExecuteUbergraph_UW-PerkDeckSelectItemWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-PerkDeckSelectItemWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.HoverClass__DelegateSignature
inline void UUW-PerkDeckSelectItemWidget_C::HoverClass__DelegateSignature(int32_t ClassIndex, char IsHoverd) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.HoverClass__DelegateSignature");

	struct HoverClass__DelegateSignature_Params {
		int32_t ClassIndex;
		char IsHoverd;
	}; HoverClass__DelegateSignature_Params Params;

	Params.ClassIndex = ClassIndex;
	Params.IsHoverd = IsHoverd;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.ChooseClass__DelegateSignature
inline void UUW-PerkDeckSelectItemWidget_C::ChooseClass__DelegateSignature(int32_t ClassIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.ChooseClass__DelegateSignature");

	struct ChooseClass__DelegateSignature_Params {
		int32_t ClassIndex;
	}; ChooseClass__DelegateSignature_Params Params;

	Params.ClassIndex = ClassIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

