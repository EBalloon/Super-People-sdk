// BlueprintGeneratedClass SmartPingSystem.SmartPingSystem_C
class USmartPingSystem_C : UBravoHotelSmartPingSystem {
	struct Unknown UberGraphFrame; // 0x128 (8)
	struct FMulticastInlineDelegate RequestOnServer; // 0x130 (16)
	char SelectionMode; // 0x140 (1)
	float TimeoutBetweenPings; // 0x144 (4)
	struct TArray<Unknown> PingTimeouts; // 0x148 (16)
	struct TArray<Unknown> ExecutingMenuIconIDs; // 0x158 (16)
	struct TArray<Unknown> ExecutingMenuIconSettings; // 0x168 (16)
	struct Unknown OwningPawn; // 0x178 (8)
	struct Unknown SelectionMenu; // 0x180 (8)
	struct FMulticastInlineDelegate ExecuteOwningClient; // 0x188 (16)
	char TraceMethod; // 0x198 (1)
	float TraceLength; // 0x19C (4)
	float TraceRadius; // 0x1A0 (4)
	char TraceChannel; // 0x1A4 (1)
	char TraceComplex : 0; // 0x1A5 (1)
	struct FMulticastInlineDelegate MenuActivated; // 0x1A8 (16)
	struct FMulticastInlineDelegate MenuDeactivated; // 0x1B8 (16)
	struct FMulticastInlineDelegate PingReceivedOnServer; // 0x1C8 (16)
	struct Unknown ExecutingPingInfo2; // 0x1D8 (56)
	char NoneHitActor : 0; // 0x210 (1)
	char IgnorInput : 0; // 0x211 (1)
	struct FName TempItemPingTableIndex; // 0x214 (8)
	char Enable : 0; // 0x21C (1)
	struct FName NewVar_1; // 0x220 (8)
	struct Unknown MainWidget; // 0x228 (8)
	enum class Unknow EnableEndPingType; // 0x230 (1)
	char IsSelectionMenuOnMap : 0; // 0x231 (1)
	struct Unknown TmpLocationByMap; // 0x234 (12)
	struct Unknown TmpMousePosition; // 0x240 (8)
	char IsVisibleSelectionMenu : 0; // 0x248 (1)
	char IsPressedCtrl : 0; // 0x249 (1)
	char FindPickUpItem : 0; // 0x24A (1)

	void Set(char IsPingType); // Function SmartPingSystem.SmartPingSystem_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetPingInfoByIndex(int32_t Index, struct Unknown& PingInfo); // Function SmartPingSystem.SmartPingSystem_C.GetPingInfoByIndex(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnMapRightClick(struct Unknown ServerLocation, int32_t PingTypeIndex, char IsAgree); // Function SmartPingSystem.SmartPingSystem_C.OnMapRightClick(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetMainWidget(struct Unknown& MainWidget); // Function SmartPingSystem.SmartPingSystem_C.GetMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct Unknown CreateSmartPingWidget(); // Function SmartPingSystem.SmartPingSystem_C.CreateSmartPingWidget(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetIconType(struct Unknown Item, char& IsItem, enum class Unknow& ItemPingType); // Function SmartPingSystem.SmartPingSystem_C.GetIconType(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetActorIndex(struct Unknown Actor, int32_t& Index); // Function SmartPingSystem.SmartPingSystem_C.GetActorIndex(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void DeletePing(struct Unknown Owner); // Function SmartPingSystem.SmartPingSystem_C.DeletePing(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetPingActorFromOwner(struct Unknown OwnerState, struct Unknown& PingActor); // Function SmartPingSystem.SmartPingSystem_C.GetPingActorFromOwner(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetIconFromTableID(struct FName TableID, struct Unknown& Settings, char& bRet); // Function SmartPingSystem.SmartPingSystem_C.GetIconFromTableID(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Check(char& IsAgree, struct Unknown& TargetActor, char& MyPing); // Function SmartPingSystem.SmartPingSystem_C.Check(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void HandlePingOnClientFromWorldMap(struct Unknown WorldLocation, struct Unknown Owner, char HasMaker); // Function SmartPingSystem.SmartPingSystem_C.HandlePingOnClientFromWorldMap(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void IsShowSelectMenu(char& Ret); // Function SmartPingSystem.SmartPingSystem_C.IsShowSelectMenu(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetPingType(struct Unknown TargetActor, enum class Unknow& PingType, struct Unknown& RetTargetActor); // Function SmartPingSystem.SmartPingSystem_C.GetPingType(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CancelSelectionInMenu(); // Function SmartPingSystem.SmartPingSystem_C.CancelSelectionInMenu(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ConfirmSelectionInMenu(); // Function SmartPingSystem.SmartPingSystem_C.ConfirmSelectionInMenu(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void HandlePingOnClient(struct FName Icon, struct Unknown Owner); // Function SmartPingSystem.SmartPingSystem_C.HandlePingOnClient(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetHitUsingTraceSettings(struct Unknown& Hit); // Function SmartPingSystem.SmartPingSystem_C.GetHitUsingTraceSettings(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ToggleSelectionMenu(char Visible, char OnMap, char Enable, struct Unknown& SelectionMenu); // Function SmartPingSystem.SmartPingSystem_C.ToggleSelectionMenu(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function SmartPingSystem.SmartPingSystem_C.ReceiveBeginPlay(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnSelected(struct Unknown Selected, struct FName ID, char IsPingType, int32_t RequestMessageIndex); // Function SmartPingSystem.SmartPingSystem_C.OnSelected(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CreateBindOnSelect(); // Function SmartPingSystem.SmartPingSystem_C.CreateBindOnSelect(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void RequestPingOnServer(); // Function SmartPingSystem.SmartPingSystem_C.RequestPingOnServer(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void HandleGamepadInput(float XAxis, float YAxis); // Function SmartPingSystem.SmartPingSystem_C.HandleGamepadInput(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Direct(char Force, struct FName ForcePingTable); // Function SmartPingSystem.SmartPingSystem_C.Direct(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ResetSmartPing(struct TArray<Unknown>& TeamStateList); // Function SmartPingSystem.SmartPingSystem_C.ResetSmartPing(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void RemovePing(struct Unknown OwnerCharacter); // Function SmartPingSystem.SmartPingSystem_C.RemovePing(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Hovered(struct Unknown Settings, char IsPingType); // Function SmartPingSystem.SmartPingSystem_C.Hovered(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddPersonalSupplyBoxPing(struct Unknown NewPersonalSupplyBoxPosition); // Function SmartPingSystem.SmartPingSystem_C.AddPersonalSupplyBoxPing(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetPingByInputKey(int32_t KeyIndex); // Function SmartPingSystem.SmartPingSystem_C.SetPingByInputKey(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ClearPing(); // Function SmartPingSystem.SmartPingSystem_C.ClearPing(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddBookPing(struct Unknown NewPersonalSupplyBoxPosition); // Function SmartPingSystem.SmartPingSystem_C.AddBookPing(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void RemoveBookPing(); // Function SmartPingSystem.SmartPingSystem_C.RemoveBookPing(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void RemovePersonalSupplyBoxPing(); // Function SmartPingSystem.SmartPingSystem_C.RemovePersonalSupplyBoxPing(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowSmartPingMessage(struct FString Message, struct FString Color, struct FString UserName, struct FString ImagePath, struct FString TierIcon); // Function SmartPingSystem.SmartPingSystem_C.ShowSmartPingMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowSmartPingMunu(char bIsVisible, char bIsOnMap, char bIsEnableRequestMessage); // Function SmartPingSystem.SmartPingSystem_C.ShowSmartPingMunu(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_SmartPingSystem(int32_t EntryPoint); // Function SmartPingSystem.SmartPingSystem_C.ExecuteUbergraph_SmartPingSystem(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void PingReceivedOnServer__DelegateSignature(); // Function SmartPingSystem.SmartPingSystem_C.PingReceivedOnServer__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void MenuDeactivated__DelegateSignature(); // Function SmartPingSystem.SmartPingSystem_C.MenuDeactivated__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void MenuActivated__DelegateSignature(); // Function SmartPingSystem.SmartPingSystem_C.MenuActivated__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteOwningClient__DelegateSignature(struct Unknown PingInfo); // Function SmartPingSystem.SmartPingSystem_C.ExecuteOwningClient__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void RequestOnServer__DelegateSignature(struct Unknown PingInfo); // Function SmartPingSystem.SmartPingSystem_C.RequestOnServer__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

