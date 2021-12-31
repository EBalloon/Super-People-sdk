// Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
class UMagicLeapImageTrackerComponent : public USceneComponent {

public:

	struct Unknown TargetImageTexture; // 0x230 (8)
	struct FString Name; // 0x238 (16)
	float LongerDimension; // 0x248 (4)
	char bIsStationary : 0; // 0x24C (1)
	char bUseUnreliablePose : 0; // 0x24D (1)
	struct FMulticastInlineDelegate OnSetImageTargetSucceeded; // 0x250 (16)
	struct FMulticastInlineDelegate OnSetImageTargetFailed; // 0x260 (16)
	struct FMulticastInlineDelegate OnImageTargetFound; // 0x270 (16)
	struct FMulticastInlineDelegate OnImageTargetLost; // 0x280 (16)
	struct FMulticastInlineDelegate OnImageTargetUnreliableTracking; // 0x290 (16)

	char SetTargetAsync(struct Unknown ImageTarget); // Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17FA050>
	char RemoveTargetAsync(); // Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17F9FB0>
};

// Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync
inline char UMagicLeapImageTrackerComponent::SetTargetAsync(struct Unknown ImageTarget) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync");

	struct SetTargetAsync_Params {
		struct Unknown ImageTarget;
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

