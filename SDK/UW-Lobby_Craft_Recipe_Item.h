// WidgetBlueprintGeneratedClass UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C
class UUW-Lobby_Craft_Recipe_Item_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown HorizontalBox_Rarity; // 0x250 (8)
	struct Unknown HorizontalBox_Rarity_NotOwn; // 0x258 (8)
	struct Unknown Img_BG; // 0x260 (8)
	struct Unknown Img_Icon; // 0x268 (8)
	struct Unknown RetainerBox_2; // 0x270 (8)
	struct Unknown T_CurrentCount; // 0x278 (8)
	struct Unknown T_MaxCount; // 0x280 (8)
	struct Unknown T_RecipeNum; // 0x288 (8)
	struct Unknown WidgetSwitcher_Rarity; // 0x290 (8)
	struct Unknown MaterialInfo; // 0x298 (208)
	int32_t ItemId; // 0x368 (4)
	int32_t MaxCount; // 0x36C (4)
	int32_t CurrentCount; // 0x370 (4)

	void SetNotOwnRarityVisibility(int32_t Rarity); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.SetNotOwnRarityVisibility(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetOwnInfo(); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.SetOwnInfo(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetOwnCount(); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.SetOwnCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetItemInfo(struct Unknown& GroupItemInfo, int32_t Index); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.SetItemInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnLoaded_2C8ACAFD450AD7D8B8267FA0203F2515(struct Unknown Loaded); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.OnLoaded_2C8ACAFD450AD7D8B8267FA0203F2515(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void AsyncLoadImg(struct Unknown Object); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.AsyncLoadImg(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_UW-Lobby_Craft_Recipe_Item(int32_t EntryPoint); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.ExecuteUbergraph_UW-Lobby_Craft_Recipe_Item(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.SetNotOwnRarityVisibility
inline void UUW-Lobby_Craft_Recipe_Item_C::SetNotOwnRarityVisibility(int32_t Rarity) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.SetNotOwnRarityVisibility");

	struct SetNotOwnRarityVisibility_Params {
		int32_t Rarity;
	}; SetNotOwnRarityVisibility_Params Params;

	Params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.SetOwnInfo
inline void UUW-Lobby_Craft_Recipe_Item_C::SetOwnInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.SetOwnInfo");

	struct SetOwnInfo_Params {
		
	}; SetOwnInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.SetOwnCount
inline void UUW-Lobby_Craft_Recipe_Item_C::SetOwnCount() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.SetOwnCount");

	struct SetOwnCount_Params {
		
	}; SetOwnCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.SetItemInfo
inline void UUW-Lobby_Craft_Recipe_Item_C::SetItemInfo(struct Unknown& GroupItemInfo, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.SetItemInfo");

	struct SetItemInfo_Params {
		struct Unknown& GroupItemInfo;
		int32_t Index;
	}; SetItemInfo_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	GroupItemInfo = Params.GroupItemInfo;

}

// Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.OnLoaded_2C8ACAFD450AD7D8B8267FA0203F2515
inline void UUW-Lobby_Craft_Recipe_Item_C::OnLoaded_2C8ACAFD450AD7D8B8267FA0203F2515(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.OnLoaded_2C8ACAFD450AD7D8B8267FA0203F2515");

	struct OnLoaded_2C8ACAFD450AD7D8B8267FA0203F2515_Params {
		struct Unknown Loaded;
	}; OnLoaded_2C8ACAFD450AD7D8B8267FA0203F2515_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.AsyncLoadImg
inline void UUW-Lobby_Craft_Recipe_Item_C::AsyncLoadImg(struct Unknown Object) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.AsyncLoadImg");

	struct AsyncLoadImg_Params {
		struct Unknown Object;
	}; AsyncLoadImg_Params Params;

	Params.Object = Object;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.OnMouseEnter
inline void UUW-Lobby_Craft_Recipe_Item_C::OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.OnMouseEnter");

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

// Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.ExecuteUbergraph_UW-Lobby_Craft_Recipe_Item
inline void UUW-Lobby_Craft_Recipe_Item_C::ExecuteUbergraph_UW-Lobby_Craft_Recipe_Item(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.ExecuteUbergraph_UW-Lobby_Craft_Recipe_Item");

	struct ExecuteUbergraph_UW-Lobby_Craft_Recipe_Item_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Lobby_Craft_Recipe_Item_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

