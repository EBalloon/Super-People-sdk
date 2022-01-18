// BlueprintGeneratedClass SmartPingSystem.SmartPingSystem_C
class USmartPingSystem_C : public UBravoHotelSmartPingSystem {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x128 (8)
	struct FMulticastInlineDelegate RequestOnServer; // 0x130 (16)
	char SelectionMode; // 0x140 (1)
	float TimeoutBetweenPings; // 0x144 (4)
	struct TArray<float> PingTimeouts; // 0x148 (16)
	struct TArray<struct FName> ExecutingMenuIconIDs; // 0x158 (16)
	struct TArray<struct FBravoHotelSmartPingIconSettings> ExecutingMenuIconSettings; // 0x168 (16)
	struct APawn OwningPawn; // 0x178 (8)
	struct UWBP_SPS_SelectionMenu_C SelectionMenu; // 0x180 (8)
	struct FMulticastInlineDelegate ExecuteOwningClient; // 0x188 (16)
	char TraceMethod; // 0x198 (1)
	float TraceLength; // 0x19C (4)
	float TraceRadius; // 0x1A0 (4)
	char TraceChannel; // 0x1A4 (1)
	char TraceComplex : 0; // 0x1A5 (1)
	struct FMulticastInlineDelegate MenuActivated; // 0x1A8 (16)
	struct FMulticastInlineDelegate MenuDeactivated; // 0x1B8 (16)
	struct FMulticastInlineDelegate PingReceivedOnServer; // 0x1C8 (16)
	struct FBravoHotelPingInfo ExecutingPingInfo2; // 0x1D8 (56)
	char NoneHitActor : 0; // 0x210 (1)
	char IgnorInput : 0; // 0x211 (1)
	struct FName TempItemPingTableIndex; // 0x214 (8)
	char Enable Show : 0; // 0x21C (1)
	struct FName NewVar_1; // 0x220 (8)
	struct UBravoHotelMainWidget MainWidget; // 0x228 (8)
	enum class EPingType EnableEndPingType; // 0x230 (1)
	char IsSelectionMenuOnMap : 0; // 0x231 (1)
	struct FVector TmpLocationByMap; // 0x234 (12)
	struct FVector2D TmpMousePosition; // 0x240 (8)
	char IsVisibleSelectionMenu : 0; // 0x248 (1)
	char IsPressedCtrl : 0; // 0x249 (1)
	char FindPickUpItem : 0; // 0x24A (1)

	void Set Ping Tye(char IsPingType); // Function SmartPingSystem.SmartPingSystem_C.Set Ping Tye(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetPingInfoByIndex(int32_t Index, struct FBravoHotelPingInfo& PingInfo); // Function SmartPingSystem.SmartPingSystem_C.GetPingInfoByIndex(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnMapRightClick(struct FVector ServerLocation, int32_t PingTypeIndex, char IsAgree); // Function SmartPingSystem.SmartPingSystem_C.OnMapRightClick(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetMainWidget(struct UBravoHotelMainWidget& MainWidget); // Function SmartPingSystem.SmartPingSystem_C.GetMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	struct ABravoHotelSmartPingActor CreateSmartPingWidget(); // Function SmartPingSystem.SmartPingSystem_C.CreateSmartPingWidget(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetIconType(struct UActor Item, char& IsItem, enum class EItemPingIconType& ItemPingType); // Function SmartPingSystem.SmartPingSystem_C.GetIconType(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetActorIndex(struct ABravoHotelSmartPingActor Actor, int32_t& Index); // Function SmartPingSystem.SmartPingSystem_C.GetActorIndex(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void DeletePing(struct UActor Owner); // Function SmartPingSystem.SmartPingSystem_C.DeletePing(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetPingActorFromOwner(struct ABravoHotelPlayerState OwnerState, struct ABP_SPS_WidgetActor_C& PingActor); // Function SmartPingSystem.SmartPingSystem_C.GetPingActorFromOwner(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetIconFromTableID(struct FName TableID, struct FBravoHotelSmartPingIconSettings& Settings, char& bRet); // Function SmartPingSystem.SmartPingSystem_C.GetIconFromTableID(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Check Agree(char& IsAgree, struct UActor& TargetActor, char& MyPing); // Function SmartPingSystem.SmartPingSystem_C.Check Agree(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void HandlePingOnClientFromWorldMap(struct FVector WorldLocation, struct ABravoHotelCharacter Owner, char HasMaker); // Function SmartPingSystem.SmartPingSystem_C.HandlePingOnClientFromWorldMap(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void IsShowSelectMenu(char& Ret); // Function SmartPingSystem.SmartPingSystem_C.IsShowSelectMenu(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetPingType(struct UActor TargetActor, enum class EPingType& PingType, struct UActor& RetTargetActor); // Function SmartPingSystem.SmartPingSystem_C.GetPingType(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CancelSelectionInMenu(); // Function SmartPingSystem.SmartPingSystem_C.CancelSelectionInMenu(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ConfirmSelectionInMenu(); // Function SmartPingSystem.SmartPingSystem_C.ConfirmSelectionInMenu(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void HandlePingOnClient(struct FName Icon, struct ABravoHotelCharacter Owner); // Function SmartPingSystem.SmartPingSystem_C.HandlePingOnClient(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetHitUsingTraceSettings(struct FHitResult& Hit); // Function SmartPingSystem.SmartPingSystem_C.GetHitUsingTraceSettings(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ToggleSelectionMenu(char Visible, char OnMap, char Enable RequestMessage, struct UWBP_SPS_SelectionMenu_C& SelectionMenu); // Function SmartPingSystem.SmartPingSystem_C.ToggleSelectionMenu(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ReceiveBeginPlay(); // Function SmartPingSystem.SmartPingSystem_C.ReceiveBeginPlay(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void OnSelected(struct FBravoHotelSmartPingIconSettings Selected, struct FName ID, char IsPingType, int32_t RequestMessageIndex); // Function SmartPingSystem.SmartPingSystem_C.OnSelected(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void CreateBindOnSelect(); // Function SmartPingSystem.SmartPingSystem_C.CreateBindOnSelect(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void RequestPingOnServer(); // Function SmartPingSystem.SmartPingSystem_C.RequestPingOnServer(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void HandleGamepadInput(float XAxis, float YAxis); // Function SmartPingSystem.SmartPingSystem_C.HandleGamepadInput(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Direct Ping(char Force, struct FName ForcePingTable); // Function SmartPingSystem.SmartPingSystem_C.Direct Ping(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ResetSmartPing(struct TArray<struct ABravoHotelPlayerState>& TeamStateList); // Function SmartPingSystem.SmartPingSystem_C.ResetSmartPing(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void RemovePing(struct ABravoHotelCharacter OwnerCharacter); // Function SmartPingSystem.SmartPingSystem_C.RemovePing(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Hovered(struct FBravoHotelSmartPingIconSettings Settings, char IsPingType); // Function SmartPingSystem.SmartPingSystem_C.Hovered(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void AddPersonalSupplyBoxPing(struct FVector NewPersonalSupplyBoxPosition); // Function SmartPingSystem.SmartPingSystem_C.AddPersonalSupplyBoxPing(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetPingByInputKey(int32_t KeyIndex); // Function SmartPingSystem.SmartPingSystem_C.SetPingByInputKey(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ClearPing(); // Function SmartPingSystem.SmartPingSystem_C.ClearPing(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void AddBookPing(struct FVector NewPersonalSupplyBoxPosition); // Function SmartPingSystem.SmartPingSystem_C.AddBookPing(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void RemoveBookPing(); // Function SmartPingSystem.SmartPingSystem_C.RemoveBookPing(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void RemovePersonalSupplyBoxPing(); // Function SmartPingSystem.SmartPingSystem_C.RemovePersonalSupplyBoxPing(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowSmartPingMessage(struct FString Message, struct FString Color, struct FString UserName, struct FString ImagePath, struct FString TierIcon); // Function SmartPingSystem.SmartPingSystem_C.ShowSmartPingMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ShowSmartPingMunu(char bIsVisible, char bIsOnMap, char bIsEnableRequestMessage); // Function SmartPingSystem.SmartPingSystem_C.ShowSmartPingMunu(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_SmartPingSystem(int32_t EntryPoint); // Function SmartPingSystem.SmartPingSystem_C.ExecuteUbergraph_SmartPingSystem(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PingReceivedOnServer__DelegateSignature(); // Function SmartPingSystem.SmartPingSystem_C.PingReceivedOnServer__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void MenuDeactivated__DelegateSignature(); // Function SmartPingSystem.SmartPingSystem_C.MenuDeactivated__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void MenuActivated__DelegateSignature(); // Function SmartPingSystem.SmartPingSystem_C.MenuActivated__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteOwningClient__DelegateSignature(struct FBravoHotelPingInfo PingInfo); // Function SmartPingSystem.SmartPingSystem_C.ExecuteOwningClient__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void RequestOnServer__DelegateSignature(struct FBravoHotelPingInfo PingInfo); // Function SmartPingSystem.SmartPingSystem_C.RequestOnServer__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function SmartPingSystem.SmartPingSystem_C.Set Ping Tye
inline void USmartPingSystem_C::Set Ping Tye(char IsPingType) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.Set Ping Tye");

	struct Set Ping Tye_Params {
		char IsPingType;
	}; Set Ping Tye_Params Params;

	Params.IsPingType = IsPingType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.GetPingInfoByIndex
inline void USmartPingSystem_C::GetPingInfoByIndex(int32_t Index, struct FBravoHotelPingInfo& PingInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.GetPingInfoByIndex");

	struct GetPingInfoByIndex_Params {
		int32_t Index;
		struct FBravoHotelPingInfo& PingInfo;
	}; GetPingInfoByIndex_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PingInfo = Params.PingInfo;

}

// Function SmartPingSystem.SmartPingSystem_C.OnMapRightClick
inline void USmartPingSystem_C::OnMapRightClick(struct FVector ServerLocation, int32_t PingTypeIndex, char IsAgree) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.OnMapRightClick");

	struct OnMapRightClick_Params {
		struct FVector ServerLocation;
		int32_t PingTypeIndex;
		char IsAgree;
	}; OnMapRightClick_Params Params;

	Params.ServerLocation = ServerLocation;
	Params.PingTypeIndex = PingTypeIndex;
	Params.IsAgree = IsAgree;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.GetMainWidget
inline void USmartPingSystem_C::GetMainWidget(struct UBravoHotelMainWidget& MainWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.GetMainWidget");

	struct GetMainWidget_Params {
		struct UBravoHotelMainWidget& MainWidget;
	}; GetMainWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MainWidget = Params.MainWidget;

}

// Function SmartPingSystem.SmartPingSystem_C.CreateSmartPingWidget
inline struct ABravoHotelSmartPingActor USmartPingSystem_C::CreateSmartPingWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.CreateSmartPingWidget");

	struct CreateSmartPingWidget_Params {
		
		struct ABravoHotelSmartPingActor ReturnValue;

	}; CreateSmartPingWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function SmartPingSystem.SmartPingSystem_C.GetIconType
inline void USmartPingSystem_C::GetIconType(struct UActor Item, char& IsItem, enum class EItemPingIconType& ItemPingType) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.GetIconType");

	struct GetIconType_Params {
		struct UActor Item;
		char& IsItem;
		enum class EItemPingIconType& ItemPingType;
	}; GetIconType_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsItem = Params.IsItem;
	ItemPingType = Params.ItemPingType;

}

// Function SmartPingSystem.SmartPingSystem_C.GetActorIndex
inline void USmartPingSystem_C::GetActorIndex(struct ABravoHotelSmartPingActor Actor, int32_t& Index) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.GetActorIndex");

	struct GetActorIndex_Params {
		struct ABravoHotelSmartPingActor Actor;
		int32_t& Index;
	}; GetActorIndex_Params Params;

	Params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Index = Params.Index;

}

// Function SmartPingSystem.SmartPingSystem_C.DeletePing
inline void USmartPingSystem_C::DeletePing(struct UActor Owner) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.DeletePing");

	struct DeletePing_Params {
		struct UActor Owner;
	}; DeletePing_Params Params;

	Params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.GetPingActorFromOwner
inline void USmartPingSystem_C::GetPingActorFromOwner(struct ABravoHotelPlayerState OwnerState, struct ABP_SPS_WidgetActor_C& PingActor) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.GetPingActorFromOwner");

	struct GetPingActorFromOwner_Params {
		struct ABravoHotelPlayerState OwnerState;
		struct ABP_SPS_WidgetActor_C& PingActor;
	}; GetPingActorFromOwner_Params Params;

	Params.OwnerState = OwnerState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PingActor = Params.PingActor;

}

// Function SmartPingSystem.SmartPingSystem_C.GetIconFromTableID
inline void USmartPingSystem_C::GetIconFromTableID(struct FName TableID, struct FBravoHotelSmartPingIconSettings& Settings, char& bRet) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.GetIconFromTableID");

	struct GetIconFromTableID_Params {
		struct FName TableID;
		struct FBravoHotelSmartPingIconSettings& Settings;
		char& bRet;
	}; GetIconFromTableID_Params Params;

	Params.TableID = TableID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Settings = Params.Settings;
	bRet = Params.bRet;

}

// Function SmartPingSystem.SmartPingSystem_C.Check Agree
inline void USmartPingSystem_C::Check Agree(char& IsAgree, struct UActor& TargetActor, char& MyPing) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.Check Agree");

	struct Check Agree_Params {
		char& IsAgree;
		struct UActor& TargetActor;
		char& MyPing;
	}; Check Agree_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsAgree = Params.IsAgree;
	TargetActor = Params.TargetActor;
	MyPing = Params.MyPing;

}

// Function SmartPingSystem.SmartPingSystem_C.HandlePingOnClientFromWorldMap
inline void USmartPingSystem_C::HandlePingOnClientFromWorldMap(struct FVector WorldLocation, struct ABravoHotelCharacter Owner, char HasMaker) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.HandlePingOnClientFromWorldMap");

	struct HandlePingOnClientFromWorldMap_Params {
		struct FVector WorldLocation;
		struct ABravoHotelCharacter Owner;
		char HasMaker;
	}; HandlePingOnClientFromWorldMap_Params Params;

	Params.WorldLocation = WorldLocation;
	Params.Owner = Owner;
	Params.HasMaker = HasMaker;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.IsShowSelectMenu
inline void USmartPingSystem_C::IsShowSelectMenu(char& Ret) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.IsShowSelectMenu");

	struct IsShowSelectMenu_Params {
		char& Ret;
	}; IsShowSelectMenu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Ret = Params.Ret;

}

// Function SmartPingSystem.SmartPingSystem_C.GetPingType
inline void USmartPingSystem_C::GetPingType(struct UActor TargetActor, enum class EPingType& PingType, struct UActor& RetTargetActor) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.GetPingType");

	struct GetPingType_Params {
		struct UActor TargetActor;
		enum class EPingType& PingType;
		struct UActor& RetTargetActor;
	}; GetPingType_Params Params;

	Params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PingType = Params.PingType;
	RetTargetActor = Params.RetTargetActor;

}

// Function SmartPingSystem.SmartPingSystem_C.CancelSelectionInMenu
inline void USmartPingSystem_C::CancelSelectionInMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.CancelSelectionInMenu");

	struct CancelSelectionInMenu_Params {
		
	}; CancelSelectionInMenu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.ConfirmSelectionInMenu
inline void USmartPingSystem_C::ConfirmSelectionInMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.ConfirmSelectionInMenu");

	struct ConfirmSelectionInMenu_Params {
		
	}; ConfirmSelectionInMenu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.HandlePingOnClient
inline void USmartPingSystem_C::HandlePingOnClient(struct FName Icon, struct ABravoHotelCharacter Owner) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.HandlePingOnClient");

	struct HandlePingOnClient_Params {
		struct FName Icon;
		struct ABravoHotelCharacter Owner;
	}; HandlePingOnClient_Params Params;

	Params.Icon = Icon;
	Params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.GetHitUsingTraceSettings
inline void USmartPingSystem_C::GetHitUsingTraceSettings(struct FHitResult& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.GetHitUsingTraceSettings");

	struct GetHitUsingTraceSettings_Params {
		struct FHitResult& Hit;
	}; GetHitUsingTraceSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Hit = Params.Hit;

}

// Function SmartPingSystem.SmartPingSystem_C.ToggleSelectionMenu
inline void USmartPingSystem_C::ToggleSelectionMenu(char Visible, char OnMap, char Enable RequestMessage, struct UWBP_SPS_SelectionMenu_C& SelectionMenu) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.ToggleSelectionMenu");

	struct ToggleSelectionMenu_Params {
		char Visible;
		char OnMap;
		char Enable RequestMessage;
		struct UWBP_SPS_SelectionMenu_C& SelectionMenu;
	}; ToggleSelectionMenu_Params Params;

	Params.Visible = Visible;
	Params.OnMap = OnMap;
	Params.Enable RequestMessage = Enable RequestMessage;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SelectionMenu = Params.SelectionMenu;

}

// Function SmartPingSystem.SmartPingSystem_C.ReceiveBeginPlay
inline void USmartPingSystem_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.OnSelected
inline void USmartPingSystem_C::OnSelected(struct FBravoHotelSmartPingIconSettings Selected, struct FName ID, char IsPingType, int32_t RequestMessageIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.OnSelected");

	struct OnSelected_Params {
		struct FBravoHotelSmartPingIconSettings Selected;
		struct FName ID;
		char IsPingType;
		int32_t RequestMessageIndex;
	}; OnSelected_Params Params;

	Params.Selected = Selected;
	Params.ID = ID;
	Params.IsPingType = IsPingType;
	Params.RequestMessageIndex = RequestMessageIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.CreateBindOnSelect
inline void USmartPingSystem_C::CreateBindOnSelect() {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.CreateBindOnSelect");

	struct CreateBindOnSelect_Params {
		
	}; CreateBindOnSelect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.RequestPingOnServer
inline void USmartPingSystem_C::RequestPingOnServer() {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.RequestPingOnServer");

	struct RequestPingOnServer_Params {
		
	}; RequestPingOnServer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.HandleGamepadInput
inline void USmartPingSystem_C::HandleGamepadInput(float XAxis, float YAxis) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.HandleGamepadInput");

	struct HandleGamepadInput_Params {
		float XAxis;
		float YAxis;
	}; HandleGamepadInput_Params Params;

	Params.XAxis = XAxis;
	Params.YAxis = YAxis;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.Direct Ping
inline void USmartPingSystem_C::Direct Ping(char Force, struct FName ForcePingTable) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.Direct Ping");

	struct Direct Ping_Params {
		char Force;
		struct FName ForcePingTable;
	}; Direct Ping_Params Params;

	Params.Force = Force;
	Params.ForcePingTable = ForcePingTable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.ResetSmartPing
inline void USmartPingSystem_C::ResetSmartPing(struct TArray<struct ABravoHotelPlayerState>& TeamStateList) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.ResetSmartPing");

	struct ResetSmartPing_Params {
		struct TArray<struct ABravoHotelPlayerState>& TeamStateList;
	}; ResetSmartPing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	TeamStateList = Params.TeamStateList;

}

// Function SmartPingSystem.SmartPingSystem_C.RemovePing
inline void USmartPingSystem_C::RemovePing(struct ABravoHotelCharacter OwnerCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.RemovePing");

	struct RemovePing_Params {
		struct ABravoHotelCharacter OwnerCharacter;
	}; RemovePing_Params Params;

	Params.OwnerCharacter = OwnerCharacter;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.Hovered
inline void USmartPingSystem_C::Hovered(struct FBravoHotelSmartPingIconSettings Settings, char IsPingType) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.Hovered");

	struct Hovered_Params {
		struct FBravoHotelSmartPingIconSettings Settings;
		char IsPingType;
	}; Hovered_Params Params;

	Params.Settings = Settings;
	Params.IsPingType = IsPingType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.AddPersonalSupplyBoxPing
inline void USmartPingSystem_C::AddPersonalSupplyBoxPing(struct FVector NewPersonalSupplyBoxPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.AddPersonalSupplyBoxPing");

	struct AddPersonalSupplyBoxPing_Params {
		struct FVector NewPersonalSupplyBoxPosition;
	}; AddPersonalSupplyBoxPing_Params Params;

	Params.NewPersonalSupplyBoxPosition = NewPersonalSupplyBoxPosition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.SetPingByInputKey
inline void USmartPingSystem_C::SetPingByInputKey(int32_t KeyIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.SetPingByInputKey");

	struct SetPingByInputKey_Params {
		int32_t KeyIndex;
	}; SetPingByInputKey_Params Params;

	Params.KeyIndex = KeyIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.ClearPing
inline void USmartPingSystem_C::ClearPing() {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.ClearPing");

	struct ClearPing_Params {
		
	}; ClearPing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.AddBookPing
inline void USmartPingSystem_C::AddBookPing(struct FVector NewPersonalSupplyBoxPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.AddBookPing");

	struct AddBookPing_Params {
		struct FVector NewPersonalSupplyBoxPosition;
	}; AddBookPing_Params Params;

	Params.NewPersonalSupplyBoxPosition = NewPersonalSupplyBoxPosition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.RemoveBookPing
inline void USmartPingSystem_C::RemoveBookPing() {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.RemoveBookPing");

	struct RemoveBookPing_Params {
		
	}; RemoveBookPing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.RemovePersonalSupplyBoxPing
inline void USmartPingSystem_C::RemovePersonalSupplyBoxPing() {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.RemovePersonalSupplyBoxPing");

	struct RemovePersonalSupplyBoxPing_Params {
		
	}; RemovePersonalSupplyBoxPing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.ShowSmartPingMessage
inline void USmartPingSystem_C::ShowSmartPingMessage(struct FString Message, struct FString Color, struct FString UserName, struct FString ImagePath, struct FString TierIcon) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.ShowSmartPingMessage");

	struct ShowSmartPingMessage_Params {
		struct FString Message;
		struct FString Color;
		struct FString UserName;
		struct FString ImagePath;
		struct FString TierIcon;
	}; ShowSmartPingMessage_Params Params;

	Params.Message = Message;
	Params.Color = Color;
	Params.UserName = UserName;
	Params.ImagePath = ImagePath;
	Params.TierIcon = TierIcon;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.ShowSmartPingMunu
inline void USmartPingSystem_C::ShowSmartPingMunu(char bIsVisible, char bIsOnMap, char bIsEnableRequestMessage) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.ShowSmartPingMunu");

	struct ShowSmartPingMunu_Params {
		char bIsVisible;
		char bIsOnMap;
		char bIsEnableRequestMessage;
	}; ShowSmartPingMunu_Params Params;

	Params.bIsVisible = bIsVisible;
	Params.bIsOnMap = bIsOnMap;
	Params.bIsEnableRequestMessage = bIsEnableRequestMessage;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.ExecuteUbergraph_SmartPingSystem
inline void USmartPingSystem_C::ExecuteUbergraph_SmartPingSystem(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.ExecuteUbergraph_SmartPingSystem");

	struct ExecuteUbergraph_SmartPingSystem_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_SmartPingSystem_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.PingReceivedOnServer__DelegateSignature
inline void USmartPingSystem_C::PingReceivedOnServer__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.PingReceivedOnServer__DelegateSignature");

	struct PingReceivedOnServer__DelegateSignature_Params {
		
	}; PingReceivedOnServer__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.MenuDeactivated__DelegateSignature
inline void USmartPingSystem_C::MenuDeactivated__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.MenuDeactivated__DelegateSignature");

	struct MenuDeactivated__DelegateSignature_Params {
		
	}; MenuDeactivated__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.MenuActivated__DelegateSignature
inline void USmartPingSystem_C::MenuActivated__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.MenuActivated__DelegateSignature");

	struct MenuActivated__DelegateSignature_Params {
		
	}; MenuActivated__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.ExecuteOwningClient__DelegateSignature
inline void USmartPingSystem_C::ExecuteOwningClient__DelegateSignature(struct FBravoHotelPingInfo PingInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.ExecuteOwningClient__DelegateSignature");

	struct ExecuteOwningClient__DelegateSignature_Params {
		struct FBravoHotelPingInfo PingInfo;
	}; ExecuteOwningClient__DelegateSignature_Params Params;

	Params.PingInfo = PingInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SmartPingSystem.SmartPingSystem_C.RequestOnServer__DelegateSignature
inline void USmartPingSystem_C::RequestOnServer__DelegateSignature(struct FBravoHotelPingInfo PingInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function SmartPingSystem.SmartPingSystem_C.RequestOnServer__DelegateSignature");

	struct RequestOnServer__DelegateSignature_Params {
		struct FBravoHotelPingInfo PingInfo;
	}; RequestOnServer__DelegateSignature_Params Params;

	Params.PingInfo = PingInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

