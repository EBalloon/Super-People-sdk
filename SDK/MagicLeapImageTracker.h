// Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
struct UMagicLeapImageTrackerComponent : USceneComponent {
	Unknown TargetImageTexture; //  0x238 Size(8)
	struct FString Name; //  0x240 Size(10)
	float LongerDimension; //  0x250 Size(4)
	char bIsStationary; //  0x254 Size(1)
	char bUseUnreliablePose; //  0x255 Size(1)
	struct FMulticastInlineDelegate OnSetImageTargetSucceeded; //  0x258 Size(10)
	struct FMulticastInlineDelegate OnSetImageTargetFailed; //  0x268 Size(10)
	struct FMulticastInlineDelegate OnImageTargetFound; //  0x278 Size(10)
	struct FMulticastInlineDelegate OnImageTargetLost; //  0x288 Size(10)
	struct FMulticastInlineDelegate OnImageTargetUnreliableTracking; //  0x298 Size(10)

	char SetTargetAsync(Unknown ImageTarget); // Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync(Final|Native|Public|BlueprintCallable) // <Game+0x17ead50>
};

