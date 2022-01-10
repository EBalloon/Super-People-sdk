// WidgetBlueprintGeneratedClass UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C
class UUW-Lobby_WeaponInfo_OptionList_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown UW-Lobby_WeaponInfo_Option_Slot; // 0x250 (8)
	struct Unknown UW-Lobby_WeaponInfo_Option_Slot_2; // 0x258 (8)
	struct Unknown UW-Lobby_WeaponInfo_Option_Slot_3; // 0x260 (8)
	struct Unknown UW-Lobby_WeaponInfo_Option_Slot_4; // 0x268 (8)
	struct Unknown VerticalBox_OptionList; // 0x270 (8)

	void AddOptionList(struct Unknown& ItemOption); // Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.AddOptionList(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetOptionList(struct TArray<Unknown>& OptionIDList); // Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.SetOptionList(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Construct(); // Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_UW-Lobby_WeaponInfo_OptionList(int32_t EntryPoint); // Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.ExecuteUbergraph_UW-Lobby_WeaponInfo_OptionList(Final|UbergraphFunction) // <Game_BE.exe+0x2B812B0>
};

// Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.AddOptionList
inline void UUW-Lobby_WeaponInfo_OptionList_C::AddOptionList(struct Unknown& ItemOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.AddOptionList");

	struct AddOptionList_Params {
		struct Unknown& ItemOption;
	}; AddOptionList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemOption = Params.ItemOption;

}

// Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.SetOptionList
inline void UUW-Lobby_WeaponInfo_OptionList_C::SetOptionList(struct TArray<Unknown>& OptionIDList) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.SetOptionList");

	struct SetOptionList_Params {
		struct TArray<Unknown>& OptionIDList;
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

