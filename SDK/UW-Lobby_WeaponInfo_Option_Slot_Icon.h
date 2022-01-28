// WidgetBlueprintGeneratedClass UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C
class UUW-Lobby_WeaponInfo_Option_Slot_Icon_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UImage Image_Buff; // 0x250 (8)
	struct UImage Image_Grade_Color_Line; // 0x258 (8)
	struct FItemOption ItemOption; // 0x260 (184)

	void SetItemOption(struct FItemOption& ItemOption); // Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.SetItemOption(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnLoaded_6C8A793942B5F7D63CF7C5BA6F5F3753(struct Object Loaded); // Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.OnLoaded_6C8A793942B5F7D63CF7C5BA6F5F3753(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AsyncLoadImg(struct TSoftObjectPtr<Object> Object); // Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.AsyncLoadImg(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-Lobby_WeaponInfo_Option_Slot_Icon(int32_t EntryPoint); // Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.ExecuteUbergraph_UW-Lobby_WeaponInfo_Option_Slot_Icon(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.SetItemOption
inline void UUW-Lobby_WeaponInfo_Option_Slot_Icon_C::SetItemOption(struct FItemOption& ItemOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.SetItemOption");

	struct SetItemOption_Params {
		struct FItemOption& ItemOption;
	}; SetItemOption_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemOption = Params.ItemOption;

}

// Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.OnLoaded_6C8A793942B5F7D63CF7C5BA6F5F3753
inline void UUW-Lobby_WeaponInfo_Option_Slot_Icon_C::OnLoaded_6C8A793942B5F7D63CF7C5BA6F5F3753(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.OnLoaded_6C8A793942B5F7D63CF7C5BA6F5F3753");

	struct OnLoaded_6C8A793942B5F7D63CF7C5BA6F5F3753_Params {
		struct Object Loaded;
	}; OnLoaded_6C8A793942B5F7D63CF7C5BA6F5F3753_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.AsyncLoadImg
inline void UUW-Lobby_WeaponInfo_Option_Slot_Icon_C::AsyncLoadImg(struct TSoftObjectPtr<Object> Object) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.AsyncLoadImg");

	struct AsyncLoadImg_Params {
		struct TSoftObjectPtr<Object> Object;
	}; AsyncLoadImg_Params Params;

	Params.Object = Object;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.OnMouseEnter
inline void UUW-Lobby_WeaponInfo_Option_Slot_Icon_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.OnMouseEnter");

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

