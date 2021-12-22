// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
struct AMagicLeapSharedWorldGameMode : AGameMode {
	struct Unknown SharedWorldData; //  0x3f8 Size(10)
	struct FMulticastInlineDelegate OnNewLocalDataFromClients; //  0x408 Size(10)
	float PinSelectionConfidenceThres; //  0x418 Size(4)
	struct Unknown ChosenOne; //  0x4c0 Size(8)

	char SendSharedWorldDataToClients(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients(Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // <Game+0x17bed10>
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
struct AMagicLeapSharedWorldGameState : AGameState {
	struct Unknown SharedWorldData; //  0x380 Size(10)
	struct Unknown AlignmentTransforms; //  0x390 Size(10)
	struct FMulticastInlineDelegate OnSharedWorldDataUpdated; //  0x3a0 Size(10)
	struct FMulticastInlineDelegate OnAlignmentTransformsUpdated; //  0x3b0 Size(10)

	void OnReplicate_SharedWorldData(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData(Final|Native|Private) // <Game+0x17becd0>
};

