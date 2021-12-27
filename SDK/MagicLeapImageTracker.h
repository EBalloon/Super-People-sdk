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

