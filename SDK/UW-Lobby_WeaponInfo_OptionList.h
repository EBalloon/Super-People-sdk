// WidgetBlueprintGeneratedClass UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C
class UUW-Lobby_WeaponInfo_OptionList_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UUW-Lobby_WeaponInfo_Option_Slot_C UW-Lobby_WeaponInfo_Option_Slot; // 0x250 (8)
	struct UUW-Lobby_WeaponInfo_Option_Slot_C UW-Lobby_WeaponInfo_Option_Slot_2; // 0x258 (8)
	struct UUW-Lobby_WeaponInfo_Option_Slot_C UW-Lobby_WeaponInfo_Option_Slot_3; // 0x260 (8)
	struct UUW-Lobby_WeaponInfo_Option_Slot_C UW-Lobby_WeaponInfo_Option_Slot_4; // 0x268 (8)
	struct UVerticalBox VerticalBox_OptionList; // 0x270 (8)

	void AddOptionList(struct FItemOption& ItemOption); // Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.AddOptionList(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetOptionList(struct TArray<int32_t>& OptionIDList); // Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.SetOptionList(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Construct(); // Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-Lobby_WeaponInfo_OptionList(int32_t EntryPoint); // Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.ExecuteUbergraph_UW-Lobby_WeaponInfo_OptionList(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.AddOptionList
inline void UUW-Lobby_WeaponInfo_OptionList_C::AddOptionList(struct FItemOption& ItemOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.AddOptionList");

	struct AddOptionList_Params {
		struct FItemOption& ItemOption;
	}; AddOptionList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemOption = Params.ItemOption;

}

// Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.SetOptionList
inline void UUW-Lobby_WeaponInfo_OptionList_C::SetOptionList(struct TArray<int32_t>& OptionIDList) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.SetOptionList");

	struct SetOptionList_Params {
		struct TArray<int32_t>& OptionIDList;
	}; SetOptionList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OptionIDList = Params.OptionIDList;

}

// Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.Construct
inline void UUW-Lobby_WeaponInfo_OptionList_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.ExecuteUbergraph_UW-Lobby_WeaponInfo_OptionList
inline void UUW-Lobby_WeaponInfo_OptionList_C::ExecuteUbergraph_UW-Lobby_WeaponInfo_OptionList(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.ExecuteUbergraph_UW-Lobby_WeaponInfo_OptionList");

	struct ExecuteUbergraph_UW-Lobby_WeaponInfo_OptionList_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Lobby_WeaponInfo_OptionList_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

