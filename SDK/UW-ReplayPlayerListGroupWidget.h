// WidgetBlueprintGeneratedClass UW-ReplayPlayerListGroupWidget.UW-ReplayPlayerListGroupWidget_C
class UUW-ReplayPlayerListGroupWidget_C : public UBravoHotelReplayPlayerListGroup {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260 (8)
	struct UImage Img_TeamColor; // 0x268 (8)
	struct UTextBlock T_TeamNum; // 0x270 (8)
	struct UVerticalBox VB_PlayerList; // 0x278 (8)

	void CheckEmptyGroup(); // Function UW-ReplayPlayerListGroupWidget.UW-ReplayPlayerListGroupWidget_C.CheckEmptyGroup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetTeamColor(); // Function UW-ReplayPlayerListGroupWidget.UW-ReplayPlayerListGroupWidget_C.SetTeamColor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetTeamNumText(); // Function UW-ReplayPlayerListGroupWidget.UW-ReplayPlayerListGroupWidget_C.SetTeamNumText(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Init(struct ABravoHotelPlayerState PlayerState); // Function UW-ReplayPlayerListGroupWidget.UW-ReplayPlayerListGroupWidget_C.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UpdatePlayerInfo(enum class EPlayerListSortType PlayerListSortType); // Function UW-ReplayPlayerListGroupWidget.UW-ReplayPlayerListGroupWidget_C.UpdatePlayerInfo(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_UW-ReplayPlayerListGroupWidget(int32_t EntryPoint); // Function UW-ReplayPlayerListGroupWidget.UW-ReplayPlayerListGroupWidget_C.ExecuteUbergraph_UW-ReplayPlayerListGroupWidget(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-ReplayPlayerListGroupWidget.UW-ReplayPlayerListGroupWidget_C.CheckEmptyGroup
inline void UUW-ReplayPlayerListGroupWidget_C::CheckEmptyGroup() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListGroupWidget.UW-ReplayPlayerListGroupWidget_C.CheckEmptyGroup");

	struct CheckEmptyGroup_Params {
		
	}; CheckEmptyGroup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayPlayerListGroupWidget.UW-ReplayPlayerListGroupWidget_C.SetTeamColor
inline void UUW-ReplayPlayerListGroupWidget_C::SetTeamColor() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListGroupWidget.UW-ReplayPlayerListGroupWidget_C.SetTeamColor");

	struct SetTeamColor_Params {
		
	}; SetTeamColor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayPlayerListGroupWidget.UW-ReplayPlayerListGroupWidget_C.SetTeamNumText
inline void UUW-ReplayPlayerListGroupWidget_C::SetTeamNumText() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListGroupWidget.UW-ReplayPlayerListGroupWidget_C.SetTeamNumText");

	struct SetTeamNumText_Params {
		
	}; SetTeamNumText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayPlayerListGroupWidget.UW-ReplayPlayerListGroupWidget_C.Init
inline void UUW-ReplayPlayerListGroupWidget_C::Init(struct ABravoHotelPlayerState PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListGroupWidget.UW-ReplayPlayerListGroupWidget_C.Init");

	struct Init_Params {
		struct ABravoHotelPlayerState PlayerState;
	}; Init_Params Params;

	Params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayPlayerListGroupWidget.UW-ReplayPlayerListGroupWidget_C.UpdatePlayerInfo
inline void UUW-ReplayPlayerListGroupWidget_C::UpdatePlayerInfo(enum class EPlayerListSortType PlayerListSortType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListGroupWidget.UW-ReplayPlayerListGroupWidget_C.UpdatePlayerInfo");

	struct UpdatePlayerInfo_Params {
		enum class EPlayerListSortType PlayerListSortType;
	}; UpdatePlayerInfo_Params Params;

	Params.PlayerListSortType = PlayerListSortType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-ReplayPlayerListGroupWidget.UW-ReplayPlayerListGroupWidget_C.ExecuteUbergraph_UW-ReplayPlayerListGroupWidget
inline void UUW-ReplayPlayerListGroupWidget_C::ExecuteUbergraph_UW-ReplayPlayerListGroupWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-ReplayPlayerListGroupWidget.UW-ReplayPlayerListGroupWidget_C.ExecuteUbergraph_UW-ReplayPlayerListGroupWidget");

	struct ExecuteUbergraph_UW-ReplayPlayerListGroupWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-ReplayPlayerListGroupWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

