// WidgetBlueprintGeneratedClass UW-Lobby_ItemName.UW-Lobby_ItemName_C
class UUW-Lobby_ItemName_C : public UUserWidget {

public:

	struct Unknown HorizontalBox_Rarity; // 0x248 (8)
	struct Unknown T_WeaponName; // 0x250 (8)

	void SetNameByID(int32_t ItemId); // Function UW-Lobby_ItemName.UW-Lobby_ItemName_C.SetNameByID(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetName(struct FText Name, int32_t Rarity); // Function UW-Lobby_ItemName.UW-Lobby_ItemName_C.SetName(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
};

// Function UW-Lobby_ItemName.UW-Lobby_ItemName_C.SetNameByID
inline void UUW-Lobby_ItemName_C::SetNameByID(int32_t ItemId) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_ItemName.UW-Lobby_ItemName_C.SetNameByID");

	struct SetNameByID_Params {
		int32_t ItemId;
	}; SetNameByID_Params Params;

	Params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_ItemName.UW-Lobby_ItemName_C.SetName
inline void UUW-Lobby_ItemName_C::SetName(struct FText Name, int32_t Rarity) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_ItemName.UW-Lobby_ItemName_C.SetName");

	struct SetName_Params {
		struct FText Name;
		int32_t Rarity;
	}; SetName_Params Params;

	Params.Name = Name;
	Params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

