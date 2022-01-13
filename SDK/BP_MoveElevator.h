// BlueprintGeneratedClass BP_MoveElevator.BP_MoveElevator_C
class ABP_MoveElevator_C : public ABravoHotelMoveElevator {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328 (8)
	struct UBoxComponent Box2; // 0x330 (8)
	struct UBoxComponent Box1; // 0x338 (8)
	struct UBravoHotelAudioEmitterComponent BravoHotelAudioEmitter; // 0x340 (8)
	struct UStaticMeshComponent Upper_Rear_Display_Sub; // 0x348 (8)
	struct UStaticMeshComponent Upper_Front_Display_Sub; // 0x350 (8)
	struct UStaticMeshComponent Lower_Rear_Display_Sub; // 0x358 (8)
	struct UStaticMeshComponent Lower_Front_Display_Sub; // 0x360 (8)
	struct UBoxComponent PointBox; // 0x368 (8)
	struct UBoxComponent FloorBox; // 0x370 (8)
	struct UStaticMeshComponent Main_Display; // 0x378 (8)
	struct UBoxComponent Box; // 0x380 (8)
	struct UTextRenderComponent TextRender5; // 0x388 (8)
	struct UTextRenderComponent TextRender7; // 0x390 (8)
	struct UTextRenderComponent TextRender6; // 0x398 (8)
	struct UTextRenderComponent TextRender1; // 0x3A0 (8)
	struct UTextRenderComponent TextRender4; // 0x3A8 (8)
	struct UTextRenderComponent TextRender3; // 0x3B0 (8)
	struct UTextRenderComponent TextRender; // 0x3B8 (8)
	struct UTextRenderComponent TextRender2; // 0x3C0 (8)
	struct UBoxComponent Upper_Front_Button_Area; // 0x3C8 (8)
	struct UBoxComponent Upper_Rear_Button_Area; // 0x3D0 (8)
	struct UBoxComponent Lower_Rear_Button_Area; // 0x3D8 (8)
	struct UBoxComponent Lower_Front_Button_Area; // 0x3E0 (8)
	struct UBoxComponent Main_Rear_Button_Area; // 0x3E8 (8)
	struct UBoxComponent Main_Front_Button_Area; // 0x3F0 (8)
	struct UStaticMeshComponent Main_Front_Button; // 0x3F8 (8)
	struct UStaticMeshComponent Main_Rear_Button; // 0x400 (8)
	struct UStaticMeshComponent Upper_Rear_Display; // 0x408 (8)
	struct UStaticMeshComponent Upper_Front_Display; // 0x410 (8)
	struct UStaticMeshComponent Lower_Rear_Display; // 0x418 (8)
	struct UStaticMeshComponent Lower_Front_Display; // 0x420 (8)
	struct UStaticMeshComponent Upper_Rear_Button; // 0x428 (8)
	struct UStaticMeshComponent Upper_Front_Button; // 0x430 (8)
	struct UStaticMeshComponent Lower_Rear_Button; // 0x438 (8)
	struct UStaticMeshComponent Lower_Front_Button; // 0x440 (8)
	struct UStaticMeshComponent Upper_Rear_Left; // 0x448 (8)
	struct UStaticMeshComponent Upper_Rear_Right; // 0x450 (8)
	struct UStaticMeshComponent Upper_Front_Left; // 0x458 (8)
	struct UStaticMeshComponent Upper_Front_Right; // 0x460 (8)
	struct UStaticMeshComponent Lower_Rear_Right; // 0x468 (8)
	struct UStaticMeshComponent Lower_Front_Right; // 0x470 (8)
	struct UStaticMeshComponent Lower_Front_Left; // 0x478 (8)
	struct UStaticMeshComponent Lower_Rear_Left; // 0x480 (8)
	struct USceneComponent Upper_Rear; // 0x488 (8)
	struct USceneComponent Upper_Front; // 0x490 (8)
	struct USceneComponent Lower_Rear; // 0x498 (8)
	struct USceneComponent Lower_Front; // 0x4A0 (8)
	struct USceneComponent Upper_Floor; // 0x4A8 (8)
	struct USceneComponent Front_Door; // 0x4B0 (8)
	struct USceneComponent Rear_Door; // 0x4B8 (8)
	struct USceneComponent Lower_Floor; // 0x4C0 (8)
	struct UStaticMeshComponent Main_Front_Right; // 0x4C8 (8)
	struct UStaticMeshComponent Main_Front_Left; // 0x4D0 (8)
	struct UStaticMeshComponent Main_Body; // 0x4D8 (8)
	struct USceneComponent Scene1; // 0x4E0 (8)
	struct UStaticMeshComponent Main_Rear_Right; // 0x4E8 (8)
	struct UStaticMeshComponent Main_Rear_Left; // 0x4F0 (8)
	float ElevatorCloseDoor______0_70C4393D45E164D3C8B473964F68015B; // 0x4F8 (4)
	char ElevatorCloseDoor__Direction_70C4393D45E164D3C8B473964F68015B; // 0x4FC (1)
	struct UTimelineComponent ElevatorCloseDoor; // 0x500 (8)
	float LowerMoving______0_95D3AE1045ABFF7C4CC7778EAC04BCDA; // 0x508 (4)
	char LowerMoving__Direction_95D3AE1045ABFF7C4CC7778EAC04BCDA; // 0x50C (1)
	struct UTimelineComponent LowerMoving; // 0x510 (8)
	float ElevatorOpenDoor______0_5DABF5354368A8D3121A6FB4685095FB; // 0x518 (4)
	char ElevatorOpenDoor__Direction_5DABF5354368A8D3121A6FB4685095FB; // 0x51C (1)
	struct UTimelineComponent ElevatorOpenDoor; // 0x520 (8)
	float UpperMoving______0_B6B6057A44D35DFC9C1FCDB8B065C5D0; // 0x528 (4)
	char UpperMoving__Direction_B6B6057A44D35DFC9C1FCDB8B065C5D0; // 0x52C (1)
	struct UTimelineComponent UpperMoving; // 0x530 (8)
	struct FVector Upper_Location; // 0x538 (12)
	struct FVector Body_Position; // 0x544 (12)
	char IsLower : 0; // 0x550 (1)
	float DoorTravel; // 0x554 (4)
	float DoorMoveTime; // 0x558 (4)
	char IsMoving : 0; // 0x55C (1)
	struct FVector RoomPos; // 0x560 (12)
	struct USceneComponent MoveFloor; // 0x570 (8)
	struct TArray<struct ABravoHotelCharacter> AddCharacters; // 0x578 (16)
	float AddMoveOffest; // 0x588 (4)
	struct UAkAudioEvent OpenDoorCompleted; // 0x590 (8)
	struct UAkAudioEvent OpeningDoor; // 0x598 (8)
	struct UAkAudioEvent ClosingDoor; // 0x5A0 (8)
	struct UAkAudioEvent CloseDoorCompleted; // 0x5A8 (8)
	struct UAkAudioEvent SoundEventForMoved; // 0x5B0 (8)
	struct UAkAudioEvent SoundEventForMoving; // 0x5B8 (8)
	char IsTraceMoving : 0; // 0x5C0 (1)
	struct FVector TraceLocation; // 0x5C4 (12)
	struct TArray<struct UActor> AttachActors; // 0x5D0 (16)
	char NewVar_1 : 0; // 0x5E0 (1)
	char NewVar_2 : 0; // 0x5E1 (1)
	struct UAkComponent ElevatorAKComponent; // 0x5E8 (8)
	struct UAkAudioEvent ButtonSound; // 0x5F0 (8)

	void SetScalarParameterList(struct TArray<struct UStaticMeshComponent>& StaticMeshList, struct FName ParameterName, float ParameterValue); // Function BP_MoveElevator.BP_MoveElevator_C.SetScalarParameterList(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void CloseLowerSubDoor(float AddLocation); // Function BP_MoveElevator.BP_MoveElevator_C.CloseLowerSubDoor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void CloseUpperSubDoor(float AddLocation); // Function BP_MoveElevator.BP_MoveElevator_C.CloseUpperSubDoor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void CloseDoor(float AddLocation); // Function BP_MoveElevator.BP_MoveElevator_C.CloseDoor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void UserConstructionScript(); // Function BP_MoveElevator.BP_MoveElevator_C.UserConstructionScript(Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void UpperMoving__FinishedFunc(); // Function BP_MoveElevator.BP_MoveElevator_C.UpperMoving__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void UpperMoving__UpdateFunc(); // Function BP_MoveElevator.BP_MoveElevator_C.UpperMoving__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ElevatorCloseDoor__FinishedFunc(); // Function BP_MoveElevator.BP_MoveElevator_C.ElevatorCloseDoor__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ElevatorCloseDoor__UpdateFunc(); // Function BP_MoveElevator.BP_MoveElevator_C.ElevatorCloseDoor__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ElevatorOpenDoor__FinishedFunc(); // Function BP_MoveElevator.BP_MoveElevator_C.ElevatorOpenDoor__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ElevatorOpenDoor__UpdateFunc(); // Function BP_MoveElevator.BP_MoveElevator_C.ElevatorOpenDoor__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void LowerMoving__FinishedFunc(); // Function BP_MoveElevator.BP_MoveElevator_C.LowerMoving__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void LowerMoving__UpdateFunc(); // Function BP_MoveElevator.BP_MoveElevator_C.LowerMoving__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ReceiveBeginPlay(); // Function BP_MoveElevator.BP_MoveElevator_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnMoveUp(); // Function BP_MoveElevator.BP_MoveElevator_C.OnMoveUp(Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void InteractDoor(struct UPrimitiveComponent ElevatorComponet); // Function BP_MoveElevator.BP_MoveElevator_C.InteractDoor(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnMoveDown(); // Function BP_MoveElevator.BP_MoveElevator_C.OnMoveDown(Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent OverlappedComponent, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, char bFromSweep, struct FHitResult& SweepResult); // Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent OverlappedComponent, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex); // Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void AttachItem(struct UActor AttachActor); // Function BP_MoveElevator.BP_MoveElevator_C.AttachItem(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnChangeElevatorState(); // Function BP_MoveElevator.BP_MoveElevator_C.OnChangeElevatorState(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void MoveStartEvent(float StartTime, char IsInit); // Function BP_MoveElevator.BP_MoveElevator_C.MoveStartEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OpenDoorEvent(float StartTime, char IsSound); // Function BP_MoveElevator.BP_MoveElevator_C.OpenDoorEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ElevatorMovingEvent(float AddLocation); // Function BP_MoveElevator.BP_MoveElevator_C.ElevatorMovingEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void MovingSatrtEvent(float StartTime); // Function BP_MoveElevator.BP_MoveElevator_C.MovingSatrtEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetImpartBase(char IsImpartBase); // Function BP_MoveElevator.BP_MoveElevator_C.SetImpartBase(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void MoveTraceObject(); // Function BP_MoveElevator.BP_MoveElevator_C.MoveTraceObject(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void DetachCharacter(struct ABravoHotelCharacter Character); // Function BP_MoveElevator.BP_MoveElevator_C.DetachCharacter(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void CharactersMovingEvent(char StopElevator); // Function BP_MoveElevator.BP_MoveElevator_C.CharactersMovingEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void DoorOutImpulse(struct UBoxComponent DoorBox); // Function BP_MoveElevator.BP_MoveElevator_C.DoorOutImpulse(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Box1_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent OverlappedComponent, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, char bFromSweep, struct FHitResult& SweepResult); // Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box1_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Box1_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent OverlappedComponent, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex); // Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box1_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Box2_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent OverlappedComponent, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, char bFromSweep, struct FHitResult& SweepResult); // Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box2_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__Box2_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent OverlappedComponent, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex); // Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box2_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_BP_MoveElevator(int32_t EntryPoint); // Function BP_MoveElevator.BP_MoveElevator_C.ExecuteUbergraph_BP_MoveElevator(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function BP_MoveElevator.BP_MoveElevator_C.SetScalarParameterList
inline void ABP_MoveElevator_C::SetScalarParameterList(struct TArray<struct UStaticMeshComponent>& StaticMeshList, struct FName ParameterName, float ParameterValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.SetScalarParameterList");

	struct SetScalarParameterList_Params {
		struct TArray<struct UStaticMeshComponent>& StaticMeshList;
		struct FName ParameterName;
		float ParameterValue;
	}; SetScalarParameterList_Params Params;

	Params.ParameterName = ParameterName;
	Params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	StaticMeshList = Params.StaticMeshList;

}

// Function BP_MoveElevator.BP_MoveElevator_C.CloseLowerSubDoor
inline void ABP_MoveElevator_C::CloseLowerSubDoor(float AddLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.CloseLowerSubDoor");

	struct CloseLowerSubDoor_Params {
		float AddLocation;
	}; CloseLowerSubDoor_Params Params;

	Params.AddLocation = AddLocation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.CloseUpperSubDoor
inline void ABP_MoveElevator_C::CloseUpperSubDoor(float AddLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.CloseUpperSubDoor");

	struct CloseUpperSubDoor_Params {
		float AddLocation;
	}; CloseUpperSubDoor_Params Params;

	Params.AddLocation = AddLocation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.CloseDoor
inline void ABP_MoveElevator_C::CloseDoor(float AddLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.CloseDoor");

	struct CloseDoor_Params {
		float AddLocation;
	}; CloseDoor_Params Params;

	Params.AddLocation = AddLocation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.UserConstructionScript
inline void ABP_MoveElevator_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.UpperMoving__FinishedFunc
inline void ABP_MoveElevator_C::UpperMoving__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.UpperMoving__FinishedFunc");

	struct UpperMoving__FinishedFunc_Params {
		
	}; UpperMoving__FinishedFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.UpperMoving__UpdateFunc
inline void ABP_MoveElevator_C::UpperMoving__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.UpperMoving__UpdateFunc");

	struct UpperMoving__UpdateFunc_Params {
		
	}; UpperMoving__UpdateFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.ElevatorCloseDoor__FinishedFunc
inline void ABP_MoveElevator_C::ElevatorCloseDoor__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.ElevatorCloseDoor__FinishedFunc");

	struct ElevatorCloseDoor__FinishedFunc_Params {
		
	}; ElevatorCloseDoor__FinishedFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.ElevatorCloseDoor__UpdateFunc
inline void ABP_MoveElevator_C::ElevatorCloseDoor__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.ElevatorCloseDoor__UpdateFunc");

	struct ElevatorCloseDoor__UpdateFunc_Params {
		
	}; ElevatorCloseDoor__UpdateFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.ElevatorOpenDoor__FinishedFunc
inline void ABP_MoveElevator_C::ElevatorOpenDoor__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.ElevatorOpenDoor__FinishedFunc");

	struct ElevatorOpenDoor__FinishedFunc_Params {
		
	}; ElevatorOpenDoor__FinishedFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.ElevatorOpenDoor__UpdateFunc
inline void ABP_MoveElevator_C::ElevatorOpenDoor__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.ElevatorOpenDoor__UpdateFunc");

	struct ElevatorOpenDoor__UpdateFunc_Params {
		
	}; ElevatorOpenDoor__UpdateFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.LowerMoving__FinishedFunc
inline void ABP_MoveElevator_C::LowerMoving__FinishedFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.LowerMoving__FinishedFunc");

	struct LowerMoving__FinishedFunc_Params {
		
	}; LowerMoving__FinishedFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.LowerMoving__UpdateFunc
inline void ABP_MoveElevator_C::LowerMoving__UpdateFunc() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.LowerMoving__UpdateFunc");

	struct LowerMoving__UpdateFunc_Params {
		
	}; LowerMoving__UpdateFunc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.ReceiveBeginPlay
inline void ABP_MoveElevator_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.OnMoveUp
inline void ABP_MoveElevator_C::OnMoveUp() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.OnMoveUp");

	struct OnMoveUp_Params {
		
	}; OnMoveUp_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.InteractDoor
inline void ABP_MoveElevator_C::InteractDoor(struct UPrimitiveComponent ElevatorComponet) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.InteractDoor");

	struct InteractDoor_Params {
		struct UPrimitiveComponent ElevatorComponet;
	}; InteractDoor_Params Params;

	Params.ElevatorComponet = ElevatorComponet;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.OnMoveDown
inline void ABP_MoveElevator_C::OnMoveDown() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.OnMoveDown");

	struct OnMoveDown_Params {
		
	}; OnMoveDown_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
inline void ABP_MoveElevator_C::BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent OverlappedComponent, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, char bFromSweep, struct FHitResult& SweepResult) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	struct BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params {
		struct UPrimitiveComponent OverlappedComponent;
		struct UActor OtherActor;
		struct UPrimitiveComponent OtherComp;
		int32_t OtherBodyIndex;
		char bFromSweep;
		struct FHitResult& SweepResult;
	}; BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params Params;

	Params.OverlappedComponent = OverlappedComponent;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.OtherBodyIndex = OtherBodyIndex;
	Params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SweepResult = Params.SweepResult;

}

// Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
inline void ABP_MoveElevator_C::BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent OverlappedComponent, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	struct BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params {
		struct UPrimitiveComponent OverlappedComponent;
		struct UActor OtherActor;
		struct UPrimitiveComponent OtherComp;
		int32_t OtherBodyIndex;
	}; BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params Params;

	Params.OverlappedComponent = OverlappedComponent;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.AttachItem
inline void ABP_MoveElevator_C::AttachItem(struct UActor AttachActor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.AttachItem");

	struct AttachItem_Params {
		struct UActor AttachActor;
	}; AttachItem_Params Params;

	Params.AttachActor = AttachActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.OnChangeElevatorState
inline void ABP_MoveElevator_C::OnChangeElevatorState() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.OnChangeElevatorState");

	struct OnChangeElevatorState_Params {
		
	}; OnChangeElevatorState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.MoveStartEvent
inline void ABP_MoveElevator_C::MoveStartEvent(float StartTime, char IsInit) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.MoveStartEvent");

	struct MoveStartEvent_Params {
		float StartTime;
		char IsInit;
	}; MoveStartEvent_Params Params;

	Params.StartTime = StartTime;
	Params.IsInit = IsInit;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.OpenDoorEvent
inline void ABP_MoveElevator_C::OpenDoorEvent(float StartTime, char IsSound) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.OpenDoorEvent");

	struct OpenDoorEvent_Params {
		float StartTime;
		char IsSound;
	}; OpenDoorEvent_Params Params;

	Params.StartTime = StartTime;
	Params.IsSound = IsSound;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.ElevatorMovingEvent
inline void ABP_MoveElevator_C::ElevatorMovingEvent(float AddLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.ElevatorMovingEvent");

	struct ElevatorMovingEvent_Params {
		float AddLocation;
	}; ElevatorMovingEvent_Params Params;

	Params.AddLocation = AddLocation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.MovingSatrtEvent
inline void ABP_MoveElevator_C::MovingSatrtEvent(float StartTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.MovingSatrtEvent");

	struct MovingSatrtEvent_Params {
		float StartTime;
	}; MovingSatrtEvent_Params Params;

	Params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.SetImpartBase
inline void ABP_MoveElevator_C::SetImpartBase(char IsImpartBase) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.SetImpartBase");

	struct SetImpartBase_Params {
		char IsImpartBase;
	}; SetImpartBase_Params Params;

	Params.IsImpartBase = IsImpartBase;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.MoveTraceObject
inline void ABP_MoveElevator_C::MoveTraceObject() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.MoveTraceObject");

	struct MoveTraceObject_Params {
		
	}; MoveTraceObject_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.DetachCharacter
inline void ABP_MoveElevator_C::DetachCharacter(struct ABravoHotelCharacter Character) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.DetachCharacter");

	struct DetachCharacter_Params {
		struct ABravoHotelCharacter Character;
	}; DetachCharacter_Params Params;

	Params.Character = Character;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.CharactersMovingEvent
inline void ABP_MoveElevator_C::CharactersMovingEvent(char StopElevator) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.CharactersMovingEvent");

	struct CharactersMovingEvent_Params {
		char StopElevator;
	}; CharactersMovingEvent_Params Params;

	Params.StopElevator = StopElevator;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.DoorOutImpulse
inline void ABP_MoveElevator_C::DoorOutImpulse(struct UBoxComponent DoorBox) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.DoorOutImpulse");

	struct DoorOutImpulse_Params {
		struct UBoxComponent DoorBox;
	}; DoorOutImpulse_Params Params;

	Params.DoorBox = DoorBox;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box1_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
inline void ABP_MoveElevator_C::BndEvt__Box1_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent OverlappedComponent, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, char bFromSweep, struct FHitResult& SweepResult) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box1_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature");

	struct BndEvt__Box1_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params {
		struct UPrimitiveComponent OverlappedComponent;
		struct UActor OtherActor;
		struct UPrimitiveComponent OtherComp;
		int32_t OtherBodyIndex;
		char bFromSweep;
		struct FHitResult& SweepResult;
	}; BndEvt__Box1_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params Params;

	Params.OverlappedComponent = OverlappedComponent;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.OtherBodyIndex = OtherBodyIndex;
	Params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SweepResult = Params.SweepResult;

}

// Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box1_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature
inline void ABP_MoveElevator_C::BndEvt__Box1_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent OverlappedComponent, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box1_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature");

	struct BndEvt__Box1_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature_Params {
		struct UPrimitiveComponent OverlappedComponent;
		struct UActor OtherActor;
		struct UPrimitiveComponent OtherComp;
		int32_t OtherBodyIndex;
	}; BndEvt__Box1_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature_Params Params;

	Params.OverlappedComponent = OverlappedComponent;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box2_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature
inline void ABP_MoveElevator_C::BndEvt__Box2_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent OverlappedComponent, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, char bFromSweep, struct FHitResult& SweepResult) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box2_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature");

	struct BndEvt__Box2_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature_Params {
		struct UPrimitiveComponent OverlappedComponent;
		struct UActor OtherActor;
		struct UPrimitiveComponent OtherComp;
		int32_t OtherBodyIndex;
		char bFromSweep;
		struct FHitResult& SweepResult;
	}; BndEvt__Box2_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature_Params Params;

	Params.OverlappedComponent = OverlappedComponent;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.OtherBodyIndex = OtherBodyIndex;
	Params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SweepResult = Params.SweepResult;

}

// Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box2_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature
inline void ABP_MoveElevator_C::BndEvt__Box2_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent OverlappedComponent, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box2_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature");

	struct BndEvt__Box2_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature_Params {
		struct UPrimitiveComponent OverlappedComponent;
		struct UActor OtherActor;
		struct UPrimitiveComponent OtherComp;
		int32_t OtherBodyIndex;
	}; BndEvt__Box2_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature_Params Params;

	Params.OverlappedComponent = OverlappedComponent;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_MoveElevator.BP_MoveElevator_C.ExecuteUbergraph_BP_MoveElevator
inline void ABP_MoveElevator_C::ExecuteUbergraph_BP_MoveElevator(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MoveElevator.BP_MoveElevator_C.ExecuteUbergraph_BP_MoveElevator");

	struct ExecuteUbergraph_BP_MoveElevator_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP_MoveElevator_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

