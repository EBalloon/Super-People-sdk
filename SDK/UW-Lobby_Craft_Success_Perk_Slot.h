// WidgetBlueprintGeneratedClass UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C
class UUW-Lobby_Craft_Success_Perk_Slot_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown perk_Icon_Scale; // 0x250 (8)
	struct Unknown HorizontalBox_Rarity; // 0x258 (8)
	struct Unknown Image; // 0x260 (8)
	struct Unknown Image_2; // 0x268 (8)
	struct Unknown Image_3; // 0x270 (8)
	struct Unknown Image_4; // 0x278 (8)
	struct Unknown Image_5; // 0x280 (8)
	struct Unknown Image_6; // 0x288 (8)
	struct Unknown Image_7; // 0x290 (8)
	struct Unknown Image_328; // 0x298 (8)
	struct Unknown Img_GradeBG; // 0x2A0 (8)
	struct Unknown Img_Icon; // 0x2A8 (8)
	struct Unknown ItemOptionInfo; // 0x2B0 (184)

	void SequenceEvent__ENTRYPOINTUW-Lobby_Craft_Success_Perk_Slot_1(); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.SequenceEvent__ENTRYPOINTUW-Lobby_Craft_Success_Perk_Slot_1(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void PlaySoundSpread(); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.PlaySoundSpread(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetItemOption(struct Unknown& ItemOption); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.SetItemOption(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnLoaded_6CB9F6B747A71C38876DC8AFD4771124(struct Unknown Loaded); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.OnLoaded_6CB9F6B747A71C38876DC8AFD4771124(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void AsyncLoadImg(struct Unknown Object); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.AsyncLoadImg(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void PlayOpenAnim(); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.PlayOpenAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Slot(int32_t EntryPoint); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Slot(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
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
inline void UUW-Lobby_Craft_Success_Perk_Slot_C::SetItemOption(struct Unknown& ItemOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.SetItemOption");

	struct SetItemOption_Params {
		struct Unknown& ItemOption;
	}; SetItemOption_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemOption = Params.ItemOption;

}

// Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.OnLoaded_6CB9F6B747A71C38876DC8AFD4771124
inline void UUW-Lobby_Craft_Success_Perk_Slot_C::OnLoaded_6CB9F6B747A71C38876DC8AFD4771124(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.OnLoaded_6CB9F6B747A71C38876DC8AFD4771124");

	struct OnLoaded_6CB9F6B747A71C38876DC8AFD4771124_Params {
		struct Unknown Loaded;
	}; OnLoaded_6CB9F6B747A71C38876DC8AFD4771124_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.AsyncLoadImg
inline void UUW-Lobby_Craft_Success_Perk_Slot_C::AsyncLoadImg(struct Unknown Object) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.AsyncLoadImg");

	struct AsyncLoadImg_Params {
		struct Unknown Object;
	}; AsyncLoadImg_Params Params;

	Params.Object = Object;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.OnMouseEnter
inline void UUW-Lobby_Craft_Success_Perk_Slot_C::OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.OnMouseEnter");

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

