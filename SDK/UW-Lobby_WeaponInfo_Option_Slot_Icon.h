// WidgetBlueprintGeneratedClass UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C
class UUW-Lobby_WeaponInfo_Option_Slot_Icon_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image_Buff; // 0x250 (8)
	struct Unknown Image_Grade_Color_Line; // 0x258 (8)
	struct Unknown ItemOption; // 0x260 (184)

	void SetItemOption(struct Unknown& ItemOption); // Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.SetItemOption(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnLoaded_6C8A793942B5F7D63CF7C5BA6F5F3753(struct Unknown Loaded); // Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.OnLoaded_6C8A793942B5F7D63CF7C5BA6F5F3753(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void AsyncLoadImg(struct Unknown Object); // Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.AsyncLoadImg(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_UW-Lobby_WeaponInfo_Option_Slot_Icon(int32_t EntryPoint); // Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.ExecuteUbergraph_UW-Lobby_WeaponInfo_Option_Slot_Icon(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.SetItemOption
inline void UUW-Lobby_WeaponInfo_Option_Slot_Icon_C::SetItemOption(struct Unknown& ItemOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.SetItemOption");

	struct SetItemOption_Params {
		struct Unknown& ItemOption;
	}; SetItemOption_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemOption = Params.ItemOption;

}

// Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.OnLoaded_6C8A793942B5F7D63CF7C5BA6F5F3753
inline void UUW-Lobby_WeaponInfo_Option_Slot_Icon_C::OnLoaded_6C8A793942B5F7D63CF7C5BA6F5F3753(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.OnLoaded_6C8A793942B5F7D63CF7C5BA6F5F3753");

	struct OnLoaded_6C8A793942B5F7D63CF7C5BA6F5F3753_Params {
		struct Unknown Loaded;
	}; OnLoaded_6C8A793942B5F7D63CF7C5BA6F5F3753_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.AsyncLoadImg
inline void UUW-Lobby_WeaponInfo_Option_Slot_Icon_C::AsyncLoadImg(struct Unknown Object) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.AsyncLoadImg");

	struct AsyncLoadImg_Params {
		struct Unknown Object;
	}; AsyncLoadImg_Params Params;

	Params.Object = Object;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.OnMouseEnter
inline void UUW-Lobby_WeaponInfo_Option_Slot_Icon_C::OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.OnMouseEnter");

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

// Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.ExecuteUbergraph_UW-Lobby_WeaponInfo_Option_Slot_Icon
inline void UUW-Lobby_WeaponInfo_Option_Slot_Icon_C::ExecuteUbergraph_UW-Lobby_WeaponInfo_Option_Slot_Icon(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.ExecuteUbergraph_UW-Lobby_WeaponInfo_Option_Slot_Icon");

	struct ExecuteUbergraph_UW-Lobby_WeaponInfo_Option_Slot_Icon_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Lobby_WeaponInfo_Option_Slot_Icon_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

