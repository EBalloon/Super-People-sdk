// WidgetBlueprintGeneratedClass WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C
class UWBP_SPS_UseItemSelectionMenu_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UImage Bg1; // 0x250 (8)
	struct UImage bg2; // 0x258 (8)
	struct UImage Bg3; // 0x260 (8)
	struct UImage Bg4; // 0x268 (8)
	struct UImage Bg5; // 0x270 (8)
	struct UImage Bg6; // 0x278 (8)
	struct UImage Bg7; // 0x280 (8)
	struct UImage Bg8; // 0x288 (8)
	struct UCanvasPanel Canvas; // 0x290 (8)
	struct UImage CenterCursor; // 0x298 (8)
	struct UTextBlock DisplayText; // 0x2A0 (8)
	struct UImage IconImage; // 0x2A8 (8)
	struct UImage Index1; // 0x2B0 (8)
	struct UImage Index2; // 0x2B8 (8)
	struct UImage Index3; // 0x2C0 (8)
	struct UImage Index4; // 0x2C8 (8)
	struct UImage Index5; // 0x2D0 (8)
	struct UImage Index6; // 0x2D8 (8)
	struct UImage Index7; // 0x2E0 (8)
	struct UImage Index8; // 0x2E8 (8)
	struct UTextBlock Key1; // 0x2F0 (8)
	struct UTextBlock Key2; // 0x2F8 (8)
	struct UTextBlock Key3; // 0x300 (8)
	struct UTextBlock Key4; // 0x308 (8)
	struct UTextBlock Key5; // 0x310 (8)
	struct UTextBlock Key6; // 0x318 (8)
	struct UTextBlock Key7; // 0x320 (8)
	struct UTextBlock Key8; // 0x328 (8)
	struct UTextBlock Message2; // 0x330 (8)
	struct UTextBlock Message3; // 0x338 (8)
	struct UTextBlock Message3_1; // 0x340 (8)
	struct UTextBlock Message3_2; // 0x348 (8)
	struct UTextBlock Message3_3; // 0x350 (8)
	struct UTextBlock Message3_4; // 0x358 (8)
	struct UTextBlock Message3_5; // 0x360 (8)
	struct UTextBlock Message3_6; // 0x368 (8)
	struct UTextBlock Message3_7; // 0x370 (8)
	struct UTextBlock Message3_8; // 0x378 (8)
	struct UTextBlock Message4; // 0x380 (8)
	struct UTextBlock Message5; // 0x388 (8)
	struct UTextBlock Message6; // 0x390 (8)
	struct UTextBlock Message7; // 0x398 (8)
	struct UTextBlock Message8; // 0x3A0 (8)
	struct UTextBlock Messgae1; // 0x3A8 (8)
	struct UImage Over1; // 0x3B0 (8)
	struct UImage Over2; // 0x3B8 (8)
	struct UImage Over3; // 0x3C0 (8)
	struct UImage Over4; // 0x3C8 (8)
	struct UImage Over5; // 0x3D0 (8)
	struct UImage Over6; // 0x3D8 (8)
	struct UImage Over7; // 0x3E0 (8)
	struct UImage Over8; // 0x3E8 (8)
	struct UWBP_SPS_UseItemSelectionIcon_C UseSlot1; // 0x3F0 (8)
	struct UWBP_SPS_UseItemSelectionIcon_C UseSlot2; // 0x3F8 (8)
	struct UWBP_SPS_UseItemSelectionIcon_C UseSlot3; // 0x400 (8)
	struct UWBP_SPS_UseItemSelectionIcon_C UseSlot4; // 0x408 (8)
	struct UWBP_SPS_UseItemSelectionIcon_C UseSlot5; // 0x410 (8)
	struct UWBP_SPS_UseItemSelectionIcon_C UseSlot6; // 0x418 (8)
	struct UWBP_SPS_UseItemSelectionIcon_C UseSlot7; // 0x420 (8)
	struct UWBP_SPS_UseItemSelectionIcon_C UseSlot8; // 0x428 (8)
	struct UUW-PlayerMarkerWidget_C UW-PlayerMarkerWidget; // 0x430 (8)
	struct UWidgetSwitcher WidgetSwitcher_133; // 0x438 (8)
	struct TArray<struct UWBP_SPS_SelectionIcon_C> SelectionWidgets; // 0x440 (16)
	struct FVector2D MenuCenter; // 0x450 (8)
	struct FVector ReferenceVector; // 0x458 (12)
	struct FMulticastInlineDelegate Selected; // 0x468 (16)
	int32_t SelectedIndex; // 0x478 (4)
	float AngleSize; // 0x47C (4)
	float DistanceFromCenter; // 0x480 (4)
	int32_t Divisions; // 0x484 (4)
	float SelectionToleranceFromCenter; // 0x488 (4)
	struct FMulticastInlineDelegate Hovered; // 0x490 (16)
	struct FMulticastInlineDelegate ClearPing; // 0x4A0 (16)
	struct FText Title; // 0x4B0 (24)
	struct FName ItemKey; // 0x4C8 (8)
	float OverOpacity; // 0x4D0 (4)
	float BgOpacity; // 0x4D4 (4)
	struct TMap<int32_t, struct FName> List; // 0x4D8 (80)
	enum class ESlateVisibility IndexTextVisible; // 0x528 (1)
	char NewVar_1 : 0; // 0x529 (1)
	struct TSoftObjectPtr<UPaperSprite> Image; // 0x530 (40)
	float TextOpacity; // 0x558 (4)

	void Get Icon from Index(int32_t Index, struct UWBP_SPS_UseItemSelectionIcon_C& Icon); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Get Icon from Index(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetVisibleOverImage(int32_t SelectIndex, enum class ESlateVisibility VisibleType); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.SetVisibleOverImage(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetActiveSelection(int32_t Index); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.SetActiveSelection(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ClearActiveSelection(); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ClearActiveSelection(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CancelSelection(); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.CancelSelection(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ConfirmSelection(); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ConfirmSelection(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	int32_t CalculateSelectionIndexFromVector(struct FVector InputVector); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.CalculateSelectionIndexFromVector(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.OnMouseMove(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnLoaded_B2D87D22498868B7225333B61217C4AA(struct Object Loaded); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.OnLoaded_B2D87D22498868B7225333B61217C4AA(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Construct(); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Destruct(); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ConstructMenuElements(); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ConstructMenuElements(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetSelectedIndex(int32_t SelectedIndex); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.SetSelectedIndex(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void 鉹@t元_2(int32_t Index); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.鉹@t元_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AssetLoad(struct TSoftObjectPtr<UPaperSprite> Image); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.AssetLoad(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_WBP_SPS_UseItemSelectionMenu(int32_t EntryPoint); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ExecuteUbergraph_WBP_SPS_UseItemSelectionMenu(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ClearPing__DelegateSignature(); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ClearPing__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Hovered__DelegateSignature(struct FName ItemKey); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Hovered__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Selected__DelegateSignature(struct FName ItemKey); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Selected__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Get Icon from Index
inline void UWBP_SPS_UseItemSelectionMenu_C::Get Icon from Index(int32_t Index, struct UWBP_SPS_UseItemSelectionIcon_C& Icon) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Get Icon from Index");

	struct Get Icon from Index_Params {
		int32_t Index;
		struct UWBP_SPS_UseItemSelectionIcon_C& Icon;
	}; Get Icon from Index_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Icon = Params.Icon;

}

// Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.OnMouseButtonDown
inline struct FEventReply UWBP_SPS_UseItemSelectionMenu_C::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.OnMouseButtonDown");

	struct OnMouseButtonDown_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.OnMouseButtonUp
inline struct FEventReply UWBP_SPS_UseItemSelectionMenu_C::OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.OnMouseButtonUp");

	struct OnMouseButtonUp_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonUp_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.SetVisibleOverImage
inline void UWBP_SPS_UseItemSelectionMenu_C::SetVisibleOverImage(int32_t SelectIndex, enum class ESlateVisibility VisibleType) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.SetVisibleOverImage");

	struct SetVisibleOverImage_Params {
		int32_t SelectIndex;
		enum class ESlateVisibility VisibleType;
	}; SetVisibleOverImage_Params Params;

	Params.SelectIndex = SelectIndex;
	Params.VisibleType = VisibleType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.SetActiveSelection
inline void UWBP_SPS_UseItemSelectionMenu_C::SetActiveSelection(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.SetActiveSelection");

	struct SetActiveSelection_Params {
		int32_t Index;
	}; SetActiveSelection_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ClearActiveSelection
inline void UWBP_SPS_UseItemSelectionMenu_C::ClearActiveSelection() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ClearActiveSelection");

	struct ClearActiveSelection_Params {
		
	}; ClearActiveSelection_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.CancelSelection
inline void UWBP_SPS_UseItemSelectionMenu_C::CancelSelection() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.CancelSelection");

	struct CancelSelection_Params {
		
	}; CancelSelection_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ConfirmSelection
inline void UWBP_SPS_UseItemSelectionMenu_C::ConfirmSelection() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ConfirmSelection");

	struct ConfirmSelection_Params {
		
	}; ConfirmSelection_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.CalculateSelectionIndexFromVector
inline int32_t UWBP_SPS_UseItemSelectionMenu_C::CalculateSelectionIndexFromVector(struct FVector InputVector) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.CalculateSelectionIndexFromVector");

	struct CalculateSelectionIndexFromVector_Params {
		struct FVector InputVector;
		int32_t ReturnValue;

	}; CalculateSelectionIndexFromVector_Params Params;

	Params.InputVector = InputVector;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.OnMouseMove
inline struct FEventReply UWBP_SPS_UseItemSelectionMenu_C::OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.OnMouseMove");

	struct OnMouseMove_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseMove_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.OnLoaded_B2D87D22498868B7225333B61217C4AA
inline void UWBP_SPS_UseItemSelectionMenu_C::OnLoaded_B2D87D22498868B7225333B61217C4AA(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.OnLoaded_B2D87D22498868B7225333B61217C4AA");

	struct OnLoaded_B2D87D22498868B7225333B61217C4AA_Params {
		struct Object Loaded;
	}; OnLoaded_B2D87D22498868B7225333B61217C4AA_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Construct
inline void UWBP_SPS_UseItemSelectionMenu_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Destruct
inline void UWBP_SPS_UseItemSelectionMenu_C::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ConstructMenuElements
inline void UWBP_SPS_UseItemSelectionMenu_C::ConstructMenuElements() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ConstructMenuElements");

	struct ConstructMenuElements_Params {
		
	}; ConstructMenuElements_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.SetSelectedIndex
inline void UWBP_SPS_UseItemSelectionMenu_C::SetSelectedIndex(int32_t SelectedIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.SetSelectedIndex");

	struct SetSelectedIndex_Params {
		int32_t SelectedIndex;
	}; SetSelectedIndex_Params Params;

	Params.SelectedIndex = SelectedIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.鉹@t元_2
inline void UWBP_SPS_UseItemSelectionMenu_C::鉹@t元_2(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.鉹@t元_2");

	struct 鉹@t元_2_Params {
		int32_t Index;
	}; 鉹@t元_2_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.AssetLoad
inline void UWBP_SPS_UseItemSelectionMenu_C::AssetLoad(struct TSoftObjectPtr<UPaperSprite> Image) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.AssetLoad");

	struct AssetLoad_Params {
		struct TSoftObjectPtr<UPaperSprite> Image;
	}; AssetLoad_Params Params;

	Params.Image = Image;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ExecuteUbergraph_WBP_SPS_UseItemSelectionMenu
inline void UWBP_SPS_UseItemSelectionMenu_C::ExecuteUbergraph_WBP_SPS_UseItemSelectionMenu(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ExecuteUbergraph_WBP_SPS_UseItemSelectionMenu");

	struct ExecuteUbergraph_WBP_SPS_UseItemSelectionMenu_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_WBP_SPS_UseItemSelectionMenu_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ClearPing__DelegateSignature
inline void UWBP_SPS_UseItemSelectionMenu_C::ClearPing__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ClearPing__DelegateSignature");

	struct ClearPing__DelegateSignature_Params {
		
	}; ClearPing__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Hovered__DelegateSignature
inline void UWBP_SPS_UseItemSelectionMenu_C::Hovered__DelegateSignature(struct FName ItemKey) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Hovered__DelegateSignature");

	struct Hovered__DelegateSignature_Params {
		struct FName ItemKey;
	}; Hovered__DelegateSignature_Params Params;

	Params.ItemKey = ItemKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Selected__DelegateSignature
inline void UWBP_SPS_UseItemSelectionMenu_C::Selected__DelegateSignature(struct FName ItemKey) {
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Selected__DelegateSignature");

	struct Selected__DelegateSignature_Params {
		struct FName ItemKey;
	}; Selected__DelegateSignature_Params Params;

	Params.ItemKey = ItemKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

