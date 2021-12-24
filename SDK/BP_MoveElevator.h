// BlueprintGeneratedClass BP_MoveElevator.BP_MoveElevator_C
class ABP_MoveElevator_C : public ABravoHotelMoveElevator {

public:

	struct Unknown UberGraphFrame; // 0x320 (8)
	struct Unknown Box2; // 0x328 (8)
	struct Unknown Box1; // 0x330 (8)
	struct Unknown BravoHotelAudioEmitter; // 0x338 (8)
	struct Unknown Upper_Rear_Display_Sub; // 0x340 (8)
	struct Unknown Upper_Front_Display_Sub; // 0x348 (8)
	struct Unknown Lower_Rear_Display_Sub; // 0x350 (8)
	struct Unknown Lower_Front_Display_Sub; // 0x358 (8)
	struct Unknown PointBox; // 0x360 (8)
	struct Unknown FloorBox; // 0x368 (8)
	struct Unknown Main_Display; // 0x370 (8)
	struct Unknown Box; // 0x378 (8)
	struct Unknown TextRender5; // 0x380 (8)
	struct Unknown TextRender7; // 0x388 (8)
	struct Unknown TextRender6; // 0x390 (8)
	struct Unknown TextRender1; // 0x398 (8)
	struct Unknown TextRender4; // 0x3A0 (8)
	struct Unknown TextRender3; // 0x3A8 (8)
	struct Unknown TextRender; // 0x3B0 (8)
	struct Unknown TextRender2; // 0x3B8 (8)
	struct Unknown Upper_Front_Button_Area; // 0x3C0 (8)
	struct Unknown Upper_Rear_Button_Area; // 0x3C8 (8)
	struct Unknown Lower_Rear_Button_Area; // 0x3D0 (8)
	struct Unknown Lower_Front_Button_Area; // 0x3D8 (8)
	struct Unknown Main_Rear_Button_Area; // 0x3E0 (8)
	struct Unknown Main_Front_Button_Area; // 0x3E8 (8)
	struct Unknown Main_Front_Button; // 0x3F0 (8)
	struct Unknown Main_Rear_Button; // 0x3F8 (8)
	struct Unknown Upper_Rear_Display; // 0x400 (8)
	struct Unknown Upper_Front_Display; // 0x408 (8)
	struct Unknown Lower_Rear_Display; // 0x410 (8)
	struct Unknown Lower_Front_Display; // 0x418 (8)
	struct Unknown Upper_Rear_Button; // 0x420 (8)
	struct Unknown Upper_Front_Button; // 0x428 (8)
	struct Unknown Lower_Rear_Button; // 0x430 (8)
	struct Unknown Lower_Front_Button; // 0x438 (8)
	struct Unknown Upper_Rear_Left; // 0x440 (8)
	struct Unknown Upper_Rear_Right; // 0x448 (8)
	struct Unknown Upper_Front_Left; // 0x450 (8)
	struct Unknown Upper_Front_Right; // 0x458 (8)
	struct Unknown Lower_Rear_Right; // 0x460 (8)
	struct Unknown Lower_Front_Right; // 0x468 (8)
	struct Unknown Lower_Front_Left; // 0x470 (8)
	struct Unknown Lower_Rear_Left; // 0x478 (8)
	struct Unknown Upper_Rear; // 0x480 (8)
	struct Unknown Upper_Front; // 0x488 (8)
	struct Unknown Lower_Rear; // 0x490 (8)
	struct Unknown Lower_Front; // 0x498 (8)
	struct Unknown Upper_Floor; // 0x4A0 (8)
	struct Unknown Front_Door; // 0x4A8 (8)
	struct Unknown Rear_Door; // 0x4B0 (8)
	struct Unknown Lower_Floor; // 0x4B8 (8)
	struct Unknown Main_Front_Right; // 0x4C0 (8)
	struct Unknown Main_Front_Left; // 0x4C8 (8)
	struct Unknown Main_Body; // 0x4D0 (8)
	struct Unknown Scene1; // 0x4D8 (8)
	struct Unknown Main_Rear_Right; // 0x4E0 (8)
	struct Unknown Main_Rear_Left; // 0x4E8 (8)
	float ElevatorCloseDoor______0_70C4393D45E164D3C8B473964F68015B; // 0x4F0 (4)
	char ElevatorCloseDoor__Direction_70C4393D45E164D3C8B473964F68015B; // 0x4F4 (1)
	struct Unknown ElevatorCloseDoor; // 0x4F8 (8)
	float LowerMoving______0_95D3AE1045ABFF7C4CC7778EAC04BCDA; // 0x500 (4)
	char LowerMoving__Direction_95D3AE1045ABFF7C4CC7778EAC04BCDA; // 0x504 (1)
	struct Unknown LowerMoving; // 0x508 (8)
	float ElevatorOpenDoor______0_5DABF5354368A8D3121A6FB4685095FB; // 0x510 (4)
	char ElevatorOpenDoor__Direction_5DABF5354368A8D3121A6FB4685095FB; // 0x514 (1)
	struct Unknown ElevatorOpenDoor; // 0x518 (8)
	float UpperMoving______0_B6B6057A44D35DFC9C1FCDB8B065C5D0; // 0x520 (4)
	char UpperMoving__Direction_B6B6057A44D35DFC9C1FCDB8B065C5D0; // 0x524 (1)
	struct Unknown UpperMoving; // 0x528 (8)
	struct Unknown Upper_Location; // 0x530 (12)
	struct Unknown Body_Position; // 0x53C (12)
	char IsLower : 0; // 0x548 (1)
	float DoorTravel; // 0x54C (4)
	float DoorMoveTime; // 0x550 (4)
	char IsMoving : 0; // 0x554 (1)
	struct Unknown RoomPos; // 0x558 (12)
	struct Unknown MoveFloor; // 0x568 (8)
	struct TArray<Unknown> AddCharacters; // 0x570 (16)
	float AddMoveOffest; // 0x580 (4)
	struct Unknown OpenDoorCompleted; // 0x588 (8)
	struct Unknown OpeningDoor; // 0x590 (8)
	struct Unknown ClosingDoor; // 0x598 (8)
	struct Unknown CloseDoorCompleted; // 0x5A0 (8)
	struct Unknown SoundEventForMoved; // 0x5A8 (8)
	struct Unknown SoundEventForMoving; // 0x5B0 (8)
	char IsTraceMoving : 0; // 0x5B8 (1)
	struct Unknown TraceLocation; // 0x5BC (12)
	struct TArray<Unknown> AttachActors; // 0x5C8 (16)
	char NewVar_1 : 0; // 0x5D8 (1)
	char NewVar_2 : 0; // 0x5D9 (1)
	struct Unknown ElevatorAKComponent; // 0x5E0 (8)
	struct Unknown ButtonSound; // 0x5E8 (8)

	void SetScalarParameterList(struct TArray<Unknown>& StaticMeshList, struct FName ParameterName, float ParameterValue); // Function BP_MoveElevator.BP_MoveElevator_C.SetScalarParameterList(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CloseLowerSubDoor(float AddLocation); // Function BP_MoveElevator.BP_MoveElevator_C.CloseLowerSubDoor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CloseUpperSubDoor(float AddLocation); // Function BP_MoveElevator.BP_MoveElevator_C.CloseUpperSubDoor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CloseDoor(float AddLocation); // Function BP_MoveElevator.BP_MoveElevator_C.CloseDoor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UserConstructionScript(); // Function BP_MoveElevator.BP_MoveElevator_C.UserConstructionScript(Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpperMoving__FinishedFunc(); // Function BP_MoveElevator.BP_MoveElevator_C.UpperMoving__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void UpperMoving__UpdateFunc(); // Function BP_MoveElevator.BP_MoveElevator_C.UpperMoving__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ElevatorCloseDoor__FinishedFunc(); // Function BP_MoveElevator.BP_MoveElevator_C.ElevatorCloseDoor__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ElevatorCloseDoor__UpdateFunc(); // Function BP_MoveElevator.BP_MoveElevator_C.ElevatorCloseDoor__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ElevatorOpenDoor__FinishedFunc(); // Function BP_MoveElevator.BP_MoveElevator_C.ElevatorOpenDoor__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ElevatorOpenDoor__UpdateFunc(); // Function BP_MoveElevator.BP_MoveElevator_C.ElevatorOpenDoor__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void LowerMoving__FinishedFunc(); // Function BP_MoveElevator.BP_MoveElevator_C.LowerMoving__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void LowerMoving__UpdateFunc(); // Function BP_MoveElevator.BP_MoveElevator_C.LowerMoving__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function BP_MoveElevator.BP_MoveElevator_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMoveUp(); // Function BP_MoveElevator.BP_MoveElevator_C.OnMoveUp(Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void InteractDoor(struct Unknown ElevatorComponet); // Function BP_MoveElevator.BP_MoveElevator_C.InteractDoor(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMoveDown(); // Function BP_MoveElevator.BP_MoveElevator_C.OnMoveDown(Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct Unknown OverlappedComponent, struct Unknown OtherActor, struct Unknown OtherComp, int32_t OtherBodyIndex, char bFromSweep, struct Unknown& SweepResult); // Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct Unknown OverlappedComponent, struct Unknown OtherActor, struct Unknown OtherComp, int32_t OtherBodyIndex); // Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void AttachItem(struct Unknown AttachActor); // Function BP_MoveElevator.BP_MoveElevator_C.AttachItem(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnChangeElevatorState(); // Function BP_MoveElevator.BP_MoveElevator_C.OnChangeElevatorState(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MoveStartEvent(float StartTime, char IsInit); // Function BP_MoveElevator.BP_MoveElevator_C.MoveStartEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OpenDoorEvent(float StartTime, char IsSound); // Function BP_MoveElevator.BP_MoveElevator_C.OpenDoorEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ElevatorMovingEvent(float AddLocation); // Function BP_MoveElevator.BP_MoveElevator_C.ElevatorMovingEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MovingSatrtEvent(float StartTime); // Function BP_MoveElevator.BP_MoveElevator_C.MovingSatrtEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetImpartBase(char IsImpartBase); // Function BP_MoveElevator.BP_MoveElevator_C.SetImpartBase(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void MoveTraceObject(); // Function BP_MoveElevator.BP_MoveElevator_C.MoveTraceObject(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DetachCharacter(struct Unknown Character); // Function BP_MoveElevator.BP_MoveElevator_C.DetachCharacter(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CharactersMovingEvent(char StopElevator); // Function BP_MoveElevator.BP_MoveElevator_C.CharactersMovingEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void DoorOutImpulse(struct Unknown DoorBox); // Function BP_MoveElevator.BP_MoveElevator_C.DoorOutImpulse(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Box1_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(struct Unknown OverlappedComponent, struct Unknown OtherActor, struct Unknown OtherComp, int32_t OtherBodyIndex, char bFromSweep, struct Unknown& SweepResult); // Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box1_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Box1_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(struct Unknown OverlappedComponent, struct Unknown OtherActor, struct Unknown OtherComp, int32_t OtherBodyIndex); // Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box1_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Box2_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature(struct Unknown OverlappedComponent, struct Unknown OtherActor, struct Unknown OtherComp, int32_t OtherBodyIndex, char bFromSweep, struct Unknown& SweepResult); // Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box2_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void BndEvt__Box2_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature(struct Unknown OverlappedComponent, struct Unknown OtherActor, struct Unknown OtherComp, int32_t OtherBodyIndex); // Function BP_MoveElevator.BP_MoveElevator_C.BndEvt__Box2_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_BP_MoveElevator(int32_t EntryPoint); // Function BP_MoveElevator.BP_MoveElevator_C.ExecuteUbergraph_BP_MoveElevator(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

