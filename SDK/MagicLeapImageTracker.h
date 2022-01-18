// Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
class UMagicLeapImageTrackerComponent : public USceneComponent {

public:

	struct UTexture2D TargetImageTexture; // 0x220 (8)
	struct FString Name; // 0x228 (16)
	float LongerDimension; // 0x238 (4)
	char bIsStationary : 0; // 0x23C (1)
	char bUseUnreliablePose : 0; // 0x23D (1)
	struct FMulticastInlineDelegate OnSetImageTargetSucceeded; // 0x240 (16)
	struct FMulticastInlineDelegate OnSetImageTargetFailed; // 0x250 (16)
	struct FMulticastInlineDelegate OnImageTargetFound; // 0x260 (16)
	struct FMulticastInlineDelegate OnImageTargetLost; // 0x270 (16)
	struct FMulticastInlineDelegate OnImageTargetUnreliableTracking; // 0x280 (16)

	char SetTargetAsync(struct UTexture2D ImageTarget); // Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1803550>
	char RemoveTargetAsync(); // Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18034B0>
};

// Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync
inline char UMagicLeapImageTrackerComponent::SetTargetAsync(struct UTexture2D ImageTarget) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync");

	struct SetTargetAsync_Params {
		struct UTexture2D ImageTarget;
		char ReturnValue;

	}; SetTargetAsync_Params Params;

	Params.ImageTarget = ImageTarget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync
inline char UMagicLeapImageTrackerComponent::RemoveTargetAsync() {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync");

	struct RemoveTargetAsync_Params {
		
		char ReturnValue;

	}; RemoveTargetAsync_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

