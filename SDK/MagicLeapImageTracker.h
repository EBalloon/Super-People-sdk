// Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
class UMagicLeapImageTrackerComponent : public USceneComponent {

public:

	struct Unknown TargetImageTexture; // 0x238 (8)
	struct FString Name; // 0x240 (16)
	float LongerDimension; // 0x250 (4)
	char bIsStationary : 0; // 0x254 (1)
	char bUseUnreliablePose : 0; // 0x255 (1)
	struct FMulticastInlineDelegate OnSetImageTargetSucceeded; // 0x258 (16)
	struct FMulticastInlineDelegate OnSetImageTargetFailed; // 0x268 (16)
	struct FMulticastInlineDelegate OnImageTargetFound; // 0x278 (16)
	struct FMulticastInlineDelegate OnImageTargetLost; // 0x288 (16)
	struct FMulticastInlineDelegate OnImageTargetUnreliableTracking; // 0x298 (16)

	char SetTargetAsync(struct Unknown ImageTarget); // Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17ECF70>
	char RemoveTargetAsync(); // Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17ECED0>
};

