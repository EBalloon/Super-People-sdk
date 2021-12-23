// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
class AMagicLeapSharedWorldGameMode : AGameMode {
	struct Unknown SharedWorldData; // 0x3F8 (16)
	struct FMulticastInlineDelegate OnNewLocalDataFromClients; // 0x408 (16)
	float PinSelectionConfidenceThreshold; // 0x418 (4)
	struct Unknown ChosenOne; // 0x4C0 (8)

	char SendSharedWorldDataToClients(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients(Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17BED10>
	void SelectChosenOne(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne(BlueprintAuthorityOnly|Native|Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17BECF0>
	void MagicLeapOnNewLocalDataFromClients__DelegateSignature(); // DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void DetermineSharedWorldData(struct Unknown& NewSharedWorldData); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData(BlueprintAuthorityOnly|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17BEBD0>
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
class AMagicLeapSharedWorldGameState : AGameState {
	struct Unknown SharedWorldData; // 0x380 (16)
	struct Unknown AlignmentTransforms; // 0x390 (16)
	struct FMulticastInlineDelegate OnSharedWorldDataUpdated; // 0x3A0 (16)
	struct FMulticastInlineDelegate OnAlignmentTransformsUpdated; // 0x3B0 (16)

	void OnReplicate_SharedWorldData(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17BECD0>
	void OnReplicate_AlignmentTransforms(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17BECB0>
	void MagicLeapSharedWorldEvent__DelegateSignature(); // DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct Unknown CalculateXRCameraRootTransform(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform(Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17BEA80>
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
struct FMagicLeapSharedWorldSharedData {
	struct TArray<Unknown> PinIDs; // 0x0 (16)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms
struct FMagicLeapSharedWorldAlignmentTransforms {
	struct TArray<Unknown> AlignmentTransforms; // 0x0 (16)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
struct FMagicLeapSharedWorldLocalData {
	struct TArray<Unknown> LocalPins; // 0x0 (16)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldPinData
struct FMagicLeapSharedWorldPinData {
	struct Unknown PinID; // 0x0 (16)
	struct Unknown PinState; // 0x10 (16)
};

