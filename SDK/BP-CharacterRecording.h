// BlueprintGeneratedClass BP-CharacterRecording.BP-CharacterRecording_C
class ABP-CharacterRecording_C : public ABravoHotel3DViewActor {

public:

	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown PointLight3; // 0x318 (8)
	struct Unknown PointLight2; // 0x320 (8)
	struct Unknown SpotLight; // 0x328 (8)
	struct Unknown PointLight1; // 0x330 (8)
	struct Unknown BravoHotelSceneCaptureComponent2D; // 0x338 (8)
	struct Unknown PointLight; // 0x340 (8)
	struct Unknown SpotLight2; // 0x348 (8)
	struct Unknown Cube; // 0x350 (8)
	struct Unknown CustomizableSkeletal; // 0x358 (8)
	struct Unknown SkeletalMesh; // 0x360 (8)
	struct Unknown Camera; // 0x368 (8)
	struct Unknown Scene; // 0x370 (8)
	struct Unknown CharacterRef; // 0x378 (8)
	struct TArray<Unknown> PreviewWeapons; // 0x380 (16)
	char EnableTick : 0; // 0x390 (1)
	struct Unknown TargetAccel; // 0x394 (12)
	struct Unknown CurrentAccel; // 0x3A0 (12)

	void Resize Render Target(int32_t SizeX, int32_t SizeY); // Function BP-CharacterRecording.BP-CharacterRecording_C.Resize Render Target(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void AddRotation(float Delta); // Function BP-CharacterRecording.BP-CharacterRecording_C.AddRotation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveBeginPlay(); // Function BP-CharacterRecording.BP-CharacterRecording_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveTick(float DeltaSeconds); // Function BP-CharacterRecording.BP-CharacterRecording_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnUpdatedMutable(struct Unknown Instance); // Function BP-CharacterRecording.BP-CharacterRecording_C.OnUpdatedMutable(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_BP-CharacterRecording(int32_t EntryPoint); // Function BP-CharacterRecording.BP-CharacterRecording_C.ExecuteUbergraph_BP-CharacterRecording(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
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
inline void ABP-CharacterRecording_C::OnUpdatedMutable(struct Unknown Instance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-CharacterRecording.BP-CharacterRecording_C.OnUpdatedMutable");

	struct OnUpdatedMutable_Params {
		struct Unknown Instance;
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

