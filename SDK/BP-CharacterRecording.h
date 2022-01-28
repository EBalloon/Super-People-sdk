// BlueprintGeneratedClass BP-CharacterRecording.BP-CharacterRecording_C
class ABP-CharacterRecording_C : public ABravoHotel3DViewActor {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328 (8)
	struct UPointLightComponent PointLight3; // 0x330 (8)
	struct UPointLightComponent PointLight2; // 0x338 (8)
	struct USpotLightComponent SpotLight; // 0x340 (8)
	struct UPointLightComponent PointLight1; // 0x348 (8)
	struct UBravoHotelSceneCaptureComponent2D BravoHotelSceneCaptureComponent2D; // 0x350 (8)
	struct UPointLightComponent PointLight; // 0x358 (8)
	struct USpotLightComponent SpotLight2; // 0x360 (8)
	struct UStaticMeshComponent Cube; // 0x368 (8)
	struct UCustomizableSkeletalComponent CustomizableSkeletal; // 0x370 (8)
	struct USkeletalMeshComponent SkeletalMesh; // 0x378 (8)
	struct UCameraComponent Camera; // 0x380 (8)
	struct USceneComponent Scene; // 0x388 (8)
	struct ABravoHotelCharacter CharacterRef; // 0x390 (8)
	struct TArray<struct ABravoHotelWeaponBase> PreviewWeapons; // 0x398 (16)
	char EnableTick : 0; // 0x3A8 (1)
	struct FRotator TargetAccel; // 0x3AC (12)
	struct FRotator CurrentAccel; // 0x3B8 (12)

	void Resize Render Target(int32_t SizeX, int32_t SizeY); // Function BP-CharacterRecording.BP-CharacterRecording_C.Resize Render Target(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void AddRotation(float Delta); // Function BP-CharacterRecording.BP-CharacterRecording_C.AddRotation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ReceiveBeginPlay(); // Function BP-CharacterRecording.BP-CharacterRecording_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ReceiveTick(float DeltaSeconds); // Function BP-CharacterRecording.BP-CharacterRecording_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnUpdatedMutable(struct UCustomizableObjectInstance Instance); // Function BP-CharacterRecording.BP-CharacterRecording_C.OnUpdatedMutable(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_BP-CharacterRecording(int32_t EntryPoint); // Function BP-CharacterRecording.BP-CharacterRecording_C.ExecuteUbergraph_BP-CharacterRecording(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function BP-CharacterRecording.BP-CharacterRecording_C.Resize Render Target
inline void ABP-CharacterRecording_C::Resize Render Target(int32_t SizeX, int32_t SizeY) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-CharacterRecording.BP-CharacterRecording_C.Resize Render Target");

	struct Resize Render Target_Params {
		int32_t SizeX;
		int32_t SizeY;
	}; Resize Render Target_Params Params;

	Params.SizeX = SizeX;
	Params.SizeY = SizeY;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-CharacterRecording.BP-CharacterRecording_C.AddRotation
inline void ABP-CharacterRecording_C::AddRotation(float Delta) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-CharacterRecording.BP-CharacterRecording_C.AddRotation");

	struct AddRotation_Params {
		float Delta;
	}; AddRotation_Params Params;

	Params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-CharacterRecording.BP-CharacterRecording_C.ReceiveBeginPlay
inline void ABP-CharacterRecording_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-CharacterRecording.BP-CharacterRecording_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-CharacterRecording.BP-CharacterRecording_C.ReceiveTick
inline void ABP-CharacterRecording_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-CharacterRecording.BP-CharacterRecording_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-CharacterRecording.BP-CharacterRecording_C.OnUpdatedMutable
inline void ABP-CharacterRecording_C::OnUpdatedMutable(struct UCustomizableObjectInstance Instance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-CharacterRecording.BP-CharacterRecording_C.OnUpdatedMutable");

	struct OnUpdatedMutable_Params {
		struct UCustomizableObjectInstance Instance;
	}; OnUpdatedMutable_Params Params;

	Params.Instance = Instance;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-CharacterRecording.BP-CharacterRecording_C.ExecuteUbergraph_BP-CharacterRecording
inline void ABP-CharacterRecording_C::ExecuteUbergraph_BP-CharacterRecording(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-CharacterRecording.BP-CharacterRecording_C.ExecuteUbergraph_BP-CharacterRecording");

	struct ExecuteUbergraph_BP-CharacterRecording_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-CharacterRecording_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

