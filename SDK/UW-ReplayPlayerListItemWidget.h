// WidgetBlueprintGeneratedClass UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C
class UUW-ReplayPlayerListItemWidget_C : public UBravoHotelReplayPlayerListItem {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270 (8)
	struct UButton BT_PlayerName; // 0x278 (8)
	struct UProgressBar PB_HP; // 0x280 (8)
	struct UTextBlock T_PlayerName; // 0x288 (8)
	struct UTextBlock T_PlayerNameHighlight; // 0x290 (8)
	struct UTextBlock T_SortInfo; // 0x298 (8)
	char bIsTargetPawn : 0; // 0x2A0 (1)
	char bIsAlive : 0; // 0x2A1 (1)

	void UpdateHighlightNameColor(); // Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.UpdateHighlightNameColor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void UpdateSortInfo(enum class EPlayerListSortType PlayerListSortType); // Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.UpdateSortInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void CheckAlive(enum class EPlayerListSortType PlayerListSortType); // Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.CheckAlive(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void UpdateButton(); // Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.UpdateButton(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void UpdateHP(); // Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.UpdateHP(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void UpdateDisable(); // Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.UpdateDisable(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void UpdateInfos(); // Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.UpdateInfos(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Init(struct ABravoHotelPlayerState PlayerState); // Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.Init(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__BT_PlayerName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.BndEvt__BT_PlayerName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void UpdatePlayerInfo(enum class EPlayerListSortType PlayerListSortType); // Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.UpdatePlayerInfo(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-ReplayPlayerListItemWidget(int32_t EntryPoint); // Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.ExecuteUbergraph_UW-ReplayPlayerListItemWidget(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.UpdateHighlightNameColor
inline void UUW-ReplayPlayerListItemWidget_C::UpdateHighlightNameColor() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.UpdateHighlightNameColor");

	struct UpdateHighlightNameColor_Params {
		
	}; UpdateHighlightNameColor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.UpdateSortInfo
inline void UUW-ReplayPlayerListItemWidget_C::UpdateSortInfo(enum class EPlayerListSortType PlayerListSortType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.UpdateSortInfo");

	struct UpdateSortInfo_Params {
		enum class EPlayerListSortType PlayerListSortType;
	}; UpdateSortInfo_Params Params;

	Params.PlayerListSortType = PlayerListSortType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.CheckAlive
inline void UUW-ReplayPlayerListItemWidget_C::CheckAlive(enum class EPlayerListSortType PlayerListSortType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.CheckAlive");

	struct CheckAlive_Params {
		enum class EPlayerListSortType PlayerListSortType;
	}; CheckAlive_Params Params;

	Params.PlayerListSortType = PlayerListSortType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.UpdateButton
inline void UUW-ReplayPlayerListItemWidget_C::UpdateButton() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.UpdateButton");

	struct UpdateButton_Params {
		
	}; UpdateButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.UpdateHP
inline void UUW-ReplayPlayerListItemWidget_C::UpdateHP() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.UpdateHP");

	struct UpdateHP_Params {
		
	}; UpdateHP_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.UpdateDisable
inline void UUW-ReplayPlayerListItemWidget_C::UpdateDisable() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.UpdateDisable");

	struct UpdateDisable_Params {
		
	}; UpdateDisable_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.UpdateInfos
inline void UUW-ReplayPlayerListItemWidget_C::UpdateInfos() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.UpdateInfos");

	struct UpdateInfos_Params {
		
	}; UpdateInfos_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.Init
inline void UUW-ReplayPlayerListItemWidget_C::Init(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.Init");

	struct Init_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; Init_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.BndEvt__BT_PlayerName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-ReplayPlayerListItemWidget_C::BndEvt__BT_PlayerName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.BndEvt__BT_PlayerName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__BT_PlayerName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__BT_PlayerName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.UpdatePlayerInfo
inline void UUW-ReplayPlayerListItemWidget_C::UpdatePlayerInfo(enum class EPlayerListSortType PlayerListSortType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.UpdatePlayerInfo");

	struct UpdatePlayerInfo_Params {
		enum class EPlayerListSortType PlayerListSortType;
	}; UpdatePlayerInfo_Params Params;

	Params.PlayerListSortType = PlayerListSortType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.ExecuteUbergraph_UW-ReplayPlayerListItemWidget
inline void UUW-ReplayPlayerListItemWidget_C::ExecuteUbergraph_UW-ReplayPlayerListItemWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListItemWidget.UW-ReplayPlayerListItemWidget_C.ExecuteUbergraph_UW-ReplayPlayerListItemWidget");

	struct ExecuteUbergraph_UW-ReplayPlayerListItemWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ReplayPlayerListItemWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

