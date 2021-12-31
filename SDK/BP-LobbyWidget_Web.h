// WidgetBlueprintGeneratedClass BP-LobbyWidget_Web.BP-LobbyWidget_Web_C
class UBP-LobbyWidget_Web_C : public UBravoHotelLobbyWidget_Web {

public:

	struct Unknown UberGraphFrame; // 0x4C8 (8)
	struct Unknown FadeOutNotice; // 0x4D0 (8)
	struct Unknown Bg; // 0x4D8 (8)
	struct Unknown Bg_2; // 0x4E0 (8)
	struct Unknown CanvasPanel_GameNotice; // 0x4E8 (8)
	struct Unknown CanvasPanel_PrefetchingProgress; // 0x4F0 (8)
	struct Unknown Image; // 0x4F8 (8)
	struct Unknown Image_145; // 0x500 (8)
	struct Unknown ProgressText; // 0x508 (8)
	struct Unknown UW-Lobby_Main_Web; // 0x510 (8)
	struct TArray<Unknown> WeaponList_1; // 0x518 (16)
	struct TArray<Unknown> CharacterInfoWidgetList; // 0x528 (16)
	int32_t PartySize; // 0x538 (4)
	struct Unknown EquipmentTransition; // 0x540 (8)
	char BindParticle : 0; // 0x548 (1)
	struct TArray<Unknown> EffectPool; // 0x550 (16)
	struct FMulticastInlineDelegate EventDispatcher_MoveToCrafting; // 0x560 (16)
	struct FString CurrentTab; // 0x570 (16)

	void CheckOptionChanged(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.CheckOptionChanged(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void InitArmoryMeshActor(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.InitArmoryMeshActor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void AddEffect(struct Unknown Location, float Delay); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.AddEffect(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SendPlayTimeMsg(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.SendPlayTimeMsg(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void UpdateCharacterInfo(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.UpdateCharacterInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CreateCharacterInfo(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.CreateCharacterInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void AddWeaponInfo(struct FString Name, struct Unknown Offset); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.AddWeaponInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void InitWeapon(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.InitWeapon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void HideExitPopup(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.HideExitPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Construct(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ShowMouseCursor(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.ShowMouseCursor(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnMatchingSucceeded(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.OnMatchingSucceeded(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnMatchingFailed(int32_t ErrorCode, struct FString ExtraDescription); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.OnMatchingFailed(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetVisibleSelectGameMode(char bState); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.SetVisibleSelectGameMode(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CustomEvent_1(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SendPlayTimeMessage(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.SendPlayTimeMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void 鉹@t元_1(char Visible, struct Unknown& Location); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.鉹@t元_1(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void EquipmentSounedDelegate_Event_1(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.EquipmentSounedDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SlotHoverSounedDelegate_Event_1(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.SlotHoverSounedDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void K2_OnChangedArmoryTab(struct FString TabName); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnChangedArmoryTab(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void K2_OnReceiveCraftWeapon(struct Unknown& CraftWeapon); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnReceiveCraftWeapon(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void K2_OnChangedWeaponList(struct TArray<Unknown>& ReceiveWeaponList); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnChangedWeaponList(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void K2_OnChangedMaterialList(struct TArray<Unknown>& ReceiveMaterialList); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnChangedMaterialList(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void K2_OnChangedGold(int32_t ReceiveGold); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnChangedGold(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void K2_MoveToCraftWeapon(int32_t CraftingID); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_MoveToCraftWeapon(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void K2_Init(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_Init(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnChangedMainTab(struct FString TabName); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.OnChangedMainTab(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnChangeProgress(struct FString PrefetchingProgressString); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.OnChangeProgress(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnPrefetchingProgressVisible(enum class Unknow InVisibility); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.OnPrefetchingProgressVisible(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void K2_OnCleanCampaignJoined(char bJoined); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnCleanCampaignJoined(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_BP-LobbyWidget_Web(int32_t EntryPoint); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.ExecuteUbergraph_BP-LobbyWidget_Web(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void EventDispatcher_MoveToCrafting__DelegateSignature(int32_t CraftingID); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.EventDispatcher_MoveToCrafting__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.CheckOptionChanged
inline void UBP-LobbyWidget_Web_C::CheckOptionChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.CheckOptionChanged");

	struct CheckOptionChanged_Params {
		
	}; CheckOptionChanged_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.InitArmoryMeshActor
inline void UBP-LobbyWidget_Web_C::InitArmoryMeshActor() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.InitArmoryMeshActor");

	struct InitArmoryMeshActor_Params {
		
	}; InitArmoryMeshActor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.AddEffect
inline void UBP-LobbyWidget_Web_C::AddEffect(struct Unknown Location, float Delay) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.AddEffect");

	struct AddEffect_Params {
		struct Unknown Location;
		float Delay;
	}; AddEffect_Params Params;

	Params.Location = Location;
	Params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.SendPlayTimeMsg
inline void UBP-LobbyWidget_Web_C::SendPlayTimeMsg() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.SendPlayTimeMsg");

	struct SendPlayTimeMsg_Params {
		
	}; SendPlayTimeMsg_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.UpdateCharacterInfo
inline void UBP-LobbyWidget_Web_C::UpdateCharacterInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.UpdateCharacterInfo");

	struct UpdateCharacterInfo_Params {
		
	}; UpdateCharacterInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.CreateCharacterInfo
inline void UBP-LobbyWidget_Web_C::CreateCharacterInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.CreateCharacterInfo");

	struct CreateCharacterInfo_Params {
		
	}; CreateCharacterInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.AddWeaponInfo
inline void UBP-LobbyWidget_Web_C::AddWeaponInfo(struct FString Name, struct Unknown Offset) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.AddWeaponInfo");

	struct AddWeaponInfo_Params {
		struct FString Name;
		struct Unknown Offset;
	}; AddWeaponInfo_Params Params;

	Params.Name = Name;
	Params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.InitWeapon
inline void UBP-LobbyWidget_Web_C::InitWeapon() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.InitWeapon");

	struct InitWeapon_Params {
		
	}; InitWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.HideExitPopup
inline void UBP-LobbyWidget_Web_C::HideExitPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.HideExitPopup");

	struct HideExitPopup_Params {
		
	}; HideExitPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.Construct
inline void UBP-LobbyWidget_Web_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.Tick
inline void UBP-LobbyWidget_Web_C::Tick(struct Unknown MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.Tick");

	struct Tick_Params {
		struct Unknown MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.ShowMouseCursor
inline void UBP-LobbyWidget_Web_C::ShowMouseCursor() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.ShowMouseCursor");

	struct ShowMouseCursor_Params {
		
	}; ShowMouseCursor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.OnMatchingSucceeded
inline void UBP-LobbyWidget_Web_C::OnMatchingSucceeded() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.OnMatchingSucceeded");

	struct OnMatchingSucceeded_Params {
		
	}; OnMatchingSucceeded_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.OnMatchingFailed
inline void UBP-LobbyWidget_Web_C::OnMatchingFailed(int32_t ErrorCode, struct FString ExtraDescription) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.OnMatchingFailed");

	struct OnMatchingFailed_Params {
		int32_t ErrorCode;
		struct FString ExtraDescription;
	}; OnMatchingFailed_Params Params;

	Params.ErrorCode = ErrorCode;
	Params.ExtraDescription = ExtraDescription;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.SetVisibleSelectGameMode
inline void UBP-LobbyWidget_Web_C::SetVisibleSelectGameMode(char bState) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.SetVisibleSelectGameMode");

	struct SetVisibleSelectGameMode_Params {
		char bState;
	}; SetVisibleSelectGameMode_Params Params;

	Params.bState = bState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.CustomEvent_1
inline void UBP-LobbyWidget_Web_C::CustomEvent_1() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.CustomEvent_1");

	struct CustomEvent_1_Params {
		
	}; CustomEvent_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.SendPlayTimeMessage
inline void UBP-LobbyWidget_Web_C::SendPlayTimeMessage() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.SendPlayTimeMessage");

	struct SendPlayTimeMessage_Params {
		
	}; SendPlayTimeMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.鉹@t元_1
inline void UBP-LobbyWidget_Web_C::鉹@t元_1(char Visible, struct Unknown& Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.鉹@t元_1");

	struct 鉹@t元_1_Params {
		char Visible;
		struct Unknown& Location;
	}; 鉹@t元_1_Params Params;

	Params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Location = Params.Location;

}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.EquipmentSounedDelegate_Event_1
inline void UBP-LobbyWidget_Web_C::EquipmentSounedDelegate_Event_1() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.EquipmentSounedDelegate_Event_1");

	struct EquipmentSounedDelegate_Event_1_Params {
		
	}; EquipmentSounedDelegate_Event_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.SlotHoverSounedDelegate_Event_1
inline void UBP-LobbyWidget_Web_C::SlotHoverSounedDelegate_Event_1() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.SlotHoverSounedDelegate_Event_1");

	struct SlotHoverSounedDelegate_Event_1_Params {
		
	}; SlotHoverSounedDelegate_Event_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnChangedArmoryTab
inline void UBP-LobbyWidget_Web_C::K2_OnChangedArmoryTab(struct FString TabName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnChangedArmoryTab");

	struct K2_OnChangedArmoryTab_Params {
		struct FString TabName;
	}; K2_OnChangedArmoryTab_Params Params;

	Params.TabName = TabName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnReceiveCraftWeapon
inline void UBP-LobbyWidget_Web_C::K2_OnReceiveCraftWeapon(struct Unknown& CraftWeapon) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnReceiveCraftWeapon");

	struct K2_OnReceiveCraftWeapon_Params {
		struct Unknown& CraftWeapon;
	}; K2_OnReceiveCraftWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CraftWeapon = Params.CraftWeapon;

}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnChangedWeaponList
inline void UBP-LobbyWidget_Web_C::K2_OnChangedWeaponList(struct TArray<Unknown>& ReceiveWeaponList) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnChangedWeaponList");

	struct K2_OnChangedWeaponList_Params {
		struct TArray<Unknown>& ReceiveWeaponList;
	}; K2_OnChangedWeaponList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ReceiveWeaponList = Params.ReceiveWeaponList;

}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnChangedMaterialList
inline void UBP-LobbyWidget_Web_C::K2_OnChangedMaterialList(struct TArray<Unknown>& ReceiveMaterialList) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnChangedMaterialList");

	struct K2_OnChangedMaterialList_Params {
		struct TArray<Unknown>& ReceiveMaterialList;
	}; K2_OnChangedMaterialList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ReceiveMaterialList = Params.ReceiveMaterialList;

}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnChangedGold
inline void UBP-LobbyWidget_Web_C::K2_OnChangedGold(int32_t ReceiveGold) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnChangedGold");

	struct K2_OnChangedGold_Params {
		int32_t ReceiveGold;
	}; K2_OnChangedGold_Params Params;

	Params.ReceiveGold = ReceiveGold;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_MoveToCraftWeapon
inline void UBP-LobbyWidget_Web_C::K2_MoveToCraftWeapon(int32_t CraftingID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_MoveToCraftWeapon");

	struct K2_MoveToCraftWeapon_Params {
		int32_t CraftingID;
	}; K2_MoveToCraftWeapon_Params Params;

	Params.CraftingID = CraftingID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_Init
inline void UBP-LobbyWidget_Web_C::K2_Init() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_Init");

	struct K2_Init_Params {
		
	}; K2_Init_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.OnChangedMainTab
inline void UBP-LobbyWidget_Web_C::OnChangedMainTab(struct FString TabName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.OnChangedMainTab");

	struct OnChangedMainTab_Params {
		struct FString TabName;
	}; OnChangedMainTab_Params Params;

	Params.TabName = TabName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.OnChangeProgress
inline void UBP-LobbyWidget_Web_C::OnChangeProgress(struct FString PrefetchingProgressString) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.OnChangeProgress");

	struct OnChangeProgress_Params {
		struct FString PrefetchingProgressString;
	}; OnChangeProgress_Params Params;

	Params.PrefetchingProgressString = PrefetchingProgressString;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.OnPrefetchingProgressVisible
inline void UBP-LobbyWidget_Web_C::OnPrefetchingProgressVisible(enum class Unknow InVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.OnPrefetchingProgressVisible");

	struct OnPrefetchingProgressVisible_Params {
		enum class Unknow InVisibility;
	}; OnPrefetchingProgressVisible_Params Params;

	Params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnCleanCampaignJoined
inline void UBP-LobbyWidget_Web_C::K2_OnCleanCampaignJoined(char bJoined) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnCleanCampaignJoined");

	struct K2_OnCleanCampaignJoined_Params {
		char bJoined;
	}; K2_OnCleanCampaignJoined_Params Params;

	Params.bJoined = bJoined;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.ExecuteUbergraph_BP-LobbyWidget_Web
inline void UBP-LobbyWidget_Web_C::ExecuteUbergraph_BP-LobbyWidget_Web(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.ExecuteUbergraph_BP-LobbyWidget_Web");

	struct ExecuteUbergraph_BP-LobbyWidget_Web_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-LobbyWidget_Web_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.EventDispatcher_MoveToCrafting__DelegateSignature
inline void UBP-LobbyWidget_Web_C::EventDispatcher_MoveToCrafting__DelegateSignature(int32_t CraftingID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.EventDispatcher_MoveToCrafting__DelegateSignature");

	struct EventDispatcher_MoveToCrafting__DelegateSignature_Params {
		int32_t CraftingID;
	}; EventDispatcher_MoveToCrafting__DelegateSignature_Params Params;

	Params.CraftingID = CraftingID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

