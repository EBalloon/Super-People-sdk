// WidgetBlueprintGeneratedClass UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C
class UUW-Lobby_Craft_Success_Perk_Slot_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UWidgetAnimation perk_Icon_Scale; // 0x250 (8)
	struct UHorizontalBox HorizontalBox_Rarity; // 0x258 (8)
	struct UImage Image; // 0x260 (8)
	struct UImage Image_2; // 0x268 (8)
	struct UImage Image_3; // 0x270 (8)
	struct UImage Image_4; // 0x278 (8)
	struct UImage Image_5; // 0x280 (8)
	struct UImage Image_6; // 0x288 (8)
	struct UImage Image_7; // 0x290 (8)
	struct UImage Image_328; // 0x298 (8)
	struct UImage Img_GradeBG; // 0x2A0 (8)
	struct UImage Img_Icon; // 0x2A8 (8)
	struct FItemOption ItemOptionInfo; // 0x2B0 (184)

	void SequenceEvent__ENTRYPOINTUW-Lobby_Craft_Success_Perk_Slot_1(); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.SequenceEvent__ENTRYPOINTUW-Lobby_Craft_Success_Perk_Slot_1(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PlaySoundSpread(); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.PlaySoundSpread(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetItemOption(struct FItemOption& ItemOption); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.SetItemOption(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnLoaded_6CB9F6B747A71C38876DC8AFD4771124(struct Object Loaded); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.OnLoaded_6CB9F6B747A71C38876DC8AFD4771124(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AsyncLoadImg(struct TSoftObjectPtr<Object> Object); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.AsyncLoadImg(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PlayOpenAnim(); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.PlayOpenAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Slot(int32_t EntryPoint); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Slot(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.SequenceEvent__ENTRYPOINTUW-Lobby_Craft_Success_Perk_Slot_1
inline void UUW-Lobby_Craft_Success_Perk_Slot_C::SequenceEvent__ENTRYPOINTUW-Lobby_Craft_Success_Perk_Slot_1() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.SequenceEvent__ENTRYPOINTUW-Lobby_Craft_Success_Perk_Slot_1");

	struct SequenceEvent__ENTRYPOINTUW-Lobby_Craft_Success_Perk_Slot_1_Params {
		
	}; SequenceEvent__ENTRYPOINTUW-Lobby_Craft_Success_Perk_Slot_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.PlaySoundSpread
inline void UUW-Lobby_Craft_Success_Perk_Slot_C::PlaySoundSpread() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.PlaySoundSpread");

	struct PlaySoundSpread_Params {
		
	}; PlaySoundSpread_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.SetItemOption
inline void UUW-Lobby_Craft_Success_Perk_Slot_C::SetItemOption(struct FItemOption& ItemOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.SetItemOption");

	struct SetItemOption_Params {
		struct FItemOption& ItemOption;
	}; SetItemOption_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemOption = Params.ItemOption;

}

// Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.OnLoaded_6CB9F6B747A71C38876DC8AFD4771124
inline void UUW-Lobby_Craft_Success_Perk_Slot_C::OnLoaded_6CB9F6B747A71C38876DC8AFD4771124(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.OnLoaded_6CB9F6B747A71C38876DC8AFD4771124");

	struct OnLoaded_6CB9F6B747A71C38876DC8AFD4771124_Params {
		struct Object Loaded;
	}; OnLoaded_6CB9F6B747A71C38876DC8AFD4771124_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.AsyncLoadImg
inline void UUW-Lobby_Craft_Success_Perk_Slot_C::AsyncLoadImg(struct TSoftObjectPtr<Object> Object) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.AsyncLoadImg");

	struct AsyncLoadImg_Params {
		struct TSoftObjectPtr<Object> Object;
	}; AsyncLoadImg_Params Params;

	Params.Object = Object;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.OnMouseEnter
inline void UUW-Lobby_Craft_Success_Perk_Slot_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.OnMouseEnter");

	struct OnMouseEnter_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
	}; OnMouseEnter_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.PlayOpenAnim
inline void UUW-Lobby_Craft_Success_Perk_Slot_C::PlayOpenAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.PlayOpenAnim");

	struct PlayOpenAnim_Params {
		
	}; PlayOpenAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Slot
inline void UUW-Lobby_Craft_Success_Perk_Slot_C::ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Slot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Slot");

	struct ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Slot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Slot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

