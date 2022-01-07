// Enum UFSM.FSM_Transition
enum class FSM_Transition : uint8_t {
	Aborted = 0,
	Succeeded = 1,
	FSM_MAX = 2,
};

// Enum UFSM.ESeverity
enum class ESeverity : uint8_t {
	Fatal = 0,
	Error = 1,
	Warning = 2,
	Info = 3,
	ESeverity_MAX = 4,
};

// Class UFSM.FSM_SetState_Async
class UFSM_SetState_Async : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	struct FName StateName; // 0x38 (8)
	float Timer; // 0x40 (4)
	char Repeat : 0; // 0x44 (1)
	struct Unknown TimerHandle; // 0x48 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x50 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x60 (16)

	struct Unknown FSM_SetState_Async(struct Unknown FSM, float WaitForSeconds, struct FName Name, char Loop); // Function UFSM.FSM_SetState_Async.FSM_SetState_Async(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1203EB0>
	void Execute(); // Function UFSM.FSM_SetState_Async.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12030E0>
};

// Class UFSM.FSM_SetStateID_Async
class UFSM_SetStateID_Async : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	char StateID; // 0x38 (1)
	float Timer; // 0x3C (4)
	char Repeat : 0; // 0x40 (1)
	struct Unknown TimerHandle; // 0x48 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x50 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x60 (16)

	struct Unknown FSM_SetStateID_Async(struct Unknown FSM, float WaitForSeconds, char ID, char Loop); // Function UFSM.FSM_SetStateID_Async.FSM_SetStateID_Async(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1203780>
	void Execute(); // Function UFSM.FSM_SetStateID_Async.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1203060>
};

// Class UFSM.FSM_SetState_ConditionalAsync
class UFSM_SetState_ConditionalAsync : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	enum class Unknow Conditional; // 0x38 (1)
	struct FName StateName; // 0x3C (8)
	float Timer; // 0x44 (4)
	char Repeat : 0; // 0x48 (1)
	struct Unknown TimerHandle; // 0x50 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x58 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x68 (16)

	struct Unknown FSM_SetState_ConditionalAsync(struct Unknown FSM, float WaitForSeconds, struct FName Name, enum class Unknow Condition, char Loop); // Function UFSM.FSM_SetState_ConditionalAsync.FSM_SetState_ConditionalAsync(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1204200>
	void Execute(); // Function UFSM.FSM_SetState_ConditionalAsync.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1203120>
};

// Class UFSM.FSM_SetStateID_ConditionalAsync
class UFSM_SetStateID_ConditionalAsync : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	enum class Unknow Conditional; // 0x38 (1)
	char StateID; // 0x39 (1)
	float Timer; // 0x3C (4)
	char Repeat : 0; // 0x40 (1)
	struct Unknown TimerHandle; // 0x48 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x50 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x60 (16)

	struct Unknown FSM_SetStateID_ConditionalAsync(struct Unknown FSM, float WaitForSeconds, char ID, enum class Unknow Condition, char Loop); // Function UFSM.FSM_SetStateID_ConditionalAsync.FSM_SetStateID_ConditionalAsync(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1203AE0>
	void Execute(); // Function UFSM.FSM_SetStateID_ConditionalAsync.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12030A0>
};

// Class UFSM.FSM_SetState_AsyncWithCallbacks
class UFSM_SetState_AsyncWithCallbacks : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	struct FDelegate InBegin; // 0x38 (16)
	struct FDelegate InExit; // 0x48 (16)
	struct FName StateName; // 0x58 (8)
	float Timer; // 0x60 (4)
	char Repeat : 0; // 0x64 (1)
	struct Unknown TimerHandle; // 0x68 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x70 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x80 (16)

	struct Unknown FSM_SetState_AsyncWithCallbacks(struct Unknown FSM, float WaitForSeconds, struct FName Name, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetState_AsyncWithCallbacks.FSM_SetState_AsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1203FF0>
	void Execute(); // Function UFSM.FSM_SetState_AsyncWithCallbacks.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1203100>
};

// Class UFSM.FSM_SetStateID_AsyncWithCallbacks
class UFSM_SetStateID_AsyncWithCallbacks : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	struct FDelegate InBegin; // 0x38 (16)
	struct FDelegate InExit; // 0x48 (16)
	char StateID; // 0x58 (1)
	float Timer; // 0x5C (4)
	char Repeat : 0; // 0x60 (1)
	struct Unknown TimerHandle; // 0x68 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x70 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x80 (16)

	struct Unknown FSM_SetStateID_AsyncWithCallbacks(struct Unknown FSM, float WaitForSeconds, char ID, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetStateID_AsyncWithCallbacks.FSM_SetStateID_AsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12038C0>
	void Execute(); // Function UFSM.FSM_SetStateID_AsyncWithCallbacks.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1203080>
};

// Class UFSM.FSM_SetState_ConditionalAsyncWithCallbacks
class UFSM_SetState_ConditionalAsyncWithCallbacks : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	enum class Unknow Conditional; // 0x38 (1)
	struct FDelegate InBegin; // 0x3C (16)
	struct FDelegate InExit; // 0x4C (16)
	struct FName StateName; // 0x5C (8)
	float Timer; // 0x64 (4)
	char Repeat : 0; // 0x68 (1)
	struct Unknown TimerHandle; // 0x70 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x78 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x88 (16)

	struct Unknown FSM_SetState_ConditionalAsyncWithCallbacks(struct Unknown FSM, float WaitForSeconds, struct FName Name, enum class Unknow Condition, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetState_ConditionalAsyncWithCallbacks.FSM_SetState_ConditionalAsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1204380>
	void Execute(); // Function UFSM.FSM_SetState_ConditionalAsyncWithCallbacks.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1203140>
};

// Class UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks
class UFSM_SetStateID_ConditionalAsyncWithCallbacks : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	enum class Unknow Conditional; // 0x38 (1)
	struct FDelegate InBegin; // 0x3C (16)
	struct FDelegate InExit; // 0x4C (16)
	char StateID; // 0x5C (1)
	float Timer; // 0x60 (4)
	char Repeat : 0; // 0x64 (1)
	struct Unknown TimerHandle; // 0x68 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x70 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x80 (16)

	struct Unknown FSM_SetStateID_ConditionalAsyncWithCallbacks(struct Unknown FSM, float WaitForSeconds, char ID, enum class Unknow Condition, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks.FSM_SetStateID_ConditionalAsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1203C60>
	void Execute(); // Function UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12030C0>
};

// Class UFSM.FSM_FinishState_Async
class UFSM_FinishState_Async : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	float Timer; // 0x38 (4)
	struct Unknown TimerHandle; // 0x40 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x48 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x58 (16)

	struct Unknown FSM_FinishState_Async(struct Unknown FSM, float WaitForSeconds); // Function UFSM.FSM_FinishState_Async.FSM_FinishState_Async(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1203160>
	void Execute(); // Function UFSM.FSM_FinishState_Async.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1202FE0>
};

// Class UFSM.FSM_FinishState_ConditionalAsync
class UFSM_FinishState_ConditionalAsync : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	enum class Unknow Conditional; // 0x38 (1)
	struct FName FallbackState; // 0x3C (8)
	float Timer; // 0x44 (4)
	struct Unknown TimerHandle; // 0x48 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x50 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x60 (16)

	struct Unknown FSM_FinishState_ConditionalAsync(struct Unknown FSM, enum class Unknow Condition, float WaitForSeconds, struct FName Fallback); // Function UFSM.FSM_FinishState_ConditionalAsync.FSM_FinishState_ConditionalAsync(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12033C0>
	void Execute(); // Function UFSM.FSM_FinishState_ConditionalAsync.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1203020>
};

// Class UFSM.FSM_FinishState_AsyncWithCallbacks
class UFSM_FinishState_AsyncWithCallbacks : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	struct FDelegate InBegin; // 0x38 (16)
	struct FDelegate InExit; // 0x48 (16)
	float Timer; // 0x58 (4)
	struct Unknown TimerHandle; // 0x60 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x68 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x78 (16)

	struct Unknown FSM_FinishState_AsyncWithCallbacks(struct Unknown FSM, float WaitForSeconds, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_FinishState_AsyncWithCallbacks.FSM_FinishState_AsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1203230>
	void Execute(); // Function UFSM.FSM_FinishState_AsyncWithCallbacks.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1203000>
};

// Class UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks
class UFSM_FinishState_ConditionalAsyncWithCallbacks : public UBlueprintAsyncActionBase {

public:

	struct Unknown Target; // 0x30 (8)
	enum class Unknow Conditional; // 0x38 (1)
	struct FDelegate InBegin; // 0x3C (16)
	struct FDelegate InExit; // 0x4C (16)
	struct FDelegate InFallback; // 0x5C (16)
	struct FName FallbackState; // 0x6C (8)
	float Timer; // 0x74 (4)
	struct Unknown TimerHandle; // 0x78 (8)
	struct FMulticastInlineDelegate OnSuccess; // 0x80 (16)
	struct FMulticastInlineDelegate OnAborted; // 0x90 (16)

	struct Unknown FSM_FinishState_ConditionalAsyncWithCallbacks(struct Unknown FSM, enum class Unknow Condition, float WaitForSeconds, struct FName Fallback, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback, struct FDelegate& BeginFallbackStateCallback); // Function UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks.FSM_FinishState_ConditionalAsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1203500>
	void Execute(); // Function UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks.Execute(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1203040>
};

// Class UFSM.BTTask_FSM_AddState
class UBTTask_FSM_AddState : public UBTTask_BlackboardBase {

public:

	struct Unknown FSM; // 0x98 (8)
	struct FName TargetFSM; // 0xA0 (8)
	struct FName NewStateName; // 0xA8 (8)
	char Debug : 0; // 0xB0 (1)
	char ForceSuccess : 0; // 0xB1 (1)
};

// Class UFSM.BTTask_FSM_SetState
class UBTTask_FSM_SetState : public UBTTask_BlackboardBase {

public:

	struct Unknown FSM; // 0x98 (8)
	struct FName TargetFSM; // 0xA0 (8)
	struct FName StateName; // 0xA8 (8)
	char Debug : 0; // 0xB0 (1)
	char ForceSuccess : 0; // 0xB1 (1)
};

// Class UFSM.BTTask_FSM_RemoveState
class UBTTask_FSM_RemoveState : public UBTTask_BlackboardBase {

public:

	struct Unknown FSM; // 0x98 (8)
	struct FName TargetFSM; // 0xA0 (8)
	struct FName StateName; // 0xA8 (8)
	char Debug : 0; // 0xB0 (1)
	char ForceSuccess : 0; // 0xB1 (1)
};

// Class UFSM.BTTask_FSM_CheckState
class UBTTask_FSM_CheckState : public UBTTask_BlackboardBase {

public:

	struct Unknown FSM; // 0x98 (8)
	struct FName TargetFSM; // 0xA0 (8)
	struct FName StateName; // 0xA8 (8)
	char Debug : 0; // 0xB0 (1)
	char ForceSuccess : 0; // 0xB1 (1)
};

// Class UFSM.RSM
class URSM : public Object {

public:

	struct Unknown SGUID; // 0x28 (16)
	int32_t PlayerId; // 0x38 (4)
	struct TWeakObjectPtr<struct Unknown> Owner; // 0x3C (8)
};

// Class UFSM.ReactiveStateMachine
class UReactiveStateMachine : public URSM {

public:

	struct TArray<Unknown> StateGraph; // 0x58 (16)
	float MachineTime; // 0x68 (4)
	struct FMulticastInlineDelegate _OnEntry; // 0x70 (16)
	struct FMulticastInlineDelegate _OnExit; // 0x80 (16)
	struct TMap<Unknown, Unknown> MachineData; // 0x90 (80)

	void Update(float DeltaTime); // Function UFSM.ReactiveStateMachine.Update(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1208C40>
	void OnUpdate(float DeltaTime); // Function UFSM.ReactiveStateMachine.OnUpdate(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnExit(); // Function UFSM.ReactiveStateMachine.OnExit(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnEntry(); // Function UFSM.ReactiveStateMachine.OnEntry(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void OnConstruct(); // Function UFSM.ReactiveStateMachine.OnConstruct(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	char IsMachineActive(); // Function UFSM.ReactiveStateMachine.IsMachineActive(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1208820>
	void Init(); // Function UFSM.ReactiveStateMachine.Init(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12084D0>
	float GetStateMachineUpdateTime(); // Function UFSM.ReactiveStateMachine.GetStateMachineUpdateTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1208470>
	struct Unknown GetOwnerAsStateMachine(); // Function UFSM.ReactiveStateMachine.GetOwnerAsStateMachine(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12082C0>
	struct Unknown GetOwnerAsHUD(); // Function UFSM.ReactiveStateMachine.GetOwnerAsHUD(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1208410>
	struct Unknown GetOwnerAsGameMode(); // Function UFSM.ReactiveStateMachine.GetOwnerAsGameMode(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12083E0>
	struct Unknown GetOwnerAsControllerAI(); // Function UFSM.ReactiveStateMachine.GetOwnerAsControllerAI(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12083B0>
	struct Unknown GetOwnerAsController(); // Function UFSM.ReactiveStateMachine.GetOwnerAsController(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1208380>
	struct Unknown GetOwnerAsComponent(); // Function UFSM.ReactiveStateMachine.GetOwnerAsComponent(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1208350>
	struct Unknown GetOwnerAsCharacter(); // Function UFSM.ReactiveStateMachine.GetOwnerAsCharacter(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1208320>
	struct Unknown GetOwnerAsActor(); // Function UFSM.ReactiveStateMachine.GetOwnerAsActor(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12082F0>
	struct Unknown GetOwner(); // Function UFSM.ReactiveStateMachine.GetOwner(Final|Native|Private|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1208290>
	void Exit(); // Function UFSM.ReactiveStateMachine.Exit(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12067C0>
	void Entry(); // Function UFSM.ReactiveStateMachine.Entry(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12067A0>
	void End(); // Function UFSM.ReactiveStateMachine.End(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1206780>
};

// Class UFSM.FSMSettings
class UFSMSettings : public Object {

public:

	char EnableInterfaceStatePropagation : 0; // 0x28 (1)
	char SuppressRPCWarnings : 0; // 0x29 (1)
	float DefaultTickInterval; // 0x2C (4)
	struct TArray<Unknown> DefaultStates; // 0x30 (16)
};

// Class UFSM.RSMSubsystem
class URSMSubsystem : public ULocalPlayerSubsystem {

public:

	struct TArray<Unknown> MachineStack; // 0x30 (16)
};

// Class UFSM.StateMachineABP
class UStateMachineABP : public UAnimInstance {

public:

	struct Unknown FSM; // 0x270 (8)
	char OverrideFSM : 0; // 0x278 (1)
	struct FName TargetFSM; // 0x27C (8)
	struct FName TargetASM; // 0x284 (8)

	struct Unknown GetFSMComponentByName(struct FName Name); // Function UFSM.StateMachineABP.GetFSMComponentByName(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120CEB0>
	struct Unknown GetFSMComponent(); // Function UFSM.StateMachineABP.GetFSMComponent(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120CE80>
};

// Class UFSM.StateMachineComponent
class UStateMachineComponent : public UActorComponent {

public:

	struct Unknown FSM_ExitArguments; // 0xB8 (12)
	struct Unknown FSM_BeginArguments; // 0xC4 (12)
	struct Unknown FSM_UpdateArguments; // 0xD0 (8)
	char IsOverriden : 0; // 0xE0 (1)
	char IsFullyInitialized : 0; // 0xE1 (1)
	char StateID; // 0xE2 (1)
	char PreviousStateID; // 0xE3 (1)
	float StateTime; // 0xE4 (4)
	struct Unknown STATE_Null; // 0xE8 (64)
	struct TMap<Unknown, Unknown> State; // 0x128 (80)
	struct FDelegate InBegin; // 0x178 (16)
	struct FDelegate InUpdate; // 0x188 (16)
	struct FDelegate InExit; // 0x198 (16)
	struct FName StartupState; // 0x1A8 (8)
	struct TArray<Unknown> States; // 0x1B0 (16)
	struct TMap<Unknown, Unknown> LINKS; // 0x1C0 (80)
	char UseEnumFromCPP : 0; // 0x210 (1)
	struct FString CPP_EnumName; // 0x218 (16)
	struct Unknown K2_Enumerator; // 0x228 (8)
	char ReplicationMode; // 0x230 (1)
	char BlueprintAutoFlowFSM : 0; // 0x231 (1)
	char BlueprintAutoFlowTransitions : 0; // 0x232 (1)
	char AlwaysTickFSM : 0; // 0x233 (1)
	char ReplicateStateID : 0; // 0x234 (1)
	char ReplicatePreviousStateID : 0; // 0x235 (1)
	char ReplicateStateTime : 0; // 0x236 (1)
	char Debug : 0; // 0x237 (1)
	struct FMulticastInlineDelegate OnInitialized; // 0x238 (16)
	struct FMulticastInlineDelegate OnBegin; // 0x248 (16)
	struct FMulticastInlineDelegate OnUpdate; // 0x258 (16)
	struct FMulticastInlineDelegate OnExit; // 0x268 (16)

	void Update(char UpState, struct FDelegate& Callback); // Function UFSM.StateMachineComponent.Update(Native|Protected|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120FC20>
	void SetStateWithCallbacks(struct FName Name, enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetStateWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120F640>
	void SetStateValueWithCallbacks(struct Unknown& Value, enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetStateValueWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120F070>
	void SetStateValue_ConditionalWithCallbacks(struct Unknown& Value, enum class Unknow Condition, enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetStateValue_ConditionalWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120F3F0>
	void SetStateValue_Conditional(struct Unknown& Value, enum class Unknow Condition, enum class Unknow& Transition); // Function UFSM.StateMachineComponent.SetStateValue_Conditional(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120F280>
	void SetStateValue(struct Unknown& Value, enum class Unknow& Transition); // Function UFSM.StateMachineComponent.SetStateValue(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120EF30>
	void SetStateIDWithCallbacks(char ID, enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetStateIDWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120EAA0>
	void SetStateID_ConditionalWithCallbacks(char ID, enum class Unknow Condition, enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetStateID_ConditionalWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120ED50>
	void SetStateID_Conditional(char ID, enum class Unknow Condition, enum class Unknow& Transition); // Function UFSM.StateMachineComponent.SetStateID_Conditional(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120EC40>
	void SetStateID(char ID, enum class Unknow& Transition); // Function UFSM.StateMachineComponent.SetStateID(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120E9D0>
	void SetState_ConditionalWithCallbacks(struct FName Name, enum class Unknow Condition, enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetState_ConditionalWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120F8F0>
	void SetState_Conditional(struct FName Name, enum class Unknow Condition, enum class Unknow& Transition); // Function UFSM.StateMachineComponent.SetState_Conditional(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120F7E0>
	void SetState(struct FName Name, enum class Unknow& Transition); // Function UFSM.StateMachineComponent.SetState(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120E900>
	void SERVER_SetStateValue(struct Unknown Value, char Validate); // Function UFSM.StateMachineComponent.SERVER_SetStateValue(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120E7B0>
	void SERVER_SetStateID(char ID, char Validate); // Function UFSM.StateMachineComponent.SERVER_SetStateID(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120E6B0>
	void SERVER_SetState(struct FName Name, char Validate); // Function UFSM.StateMachineComponent.SERVER_SetState(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120E5B0>
	void SERVER_RemoveState(struct FName Name, char Validate); // Function UFSM.StateMachineComponent.SERVER_RemoveState(Net|NetReliableNative|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120E4B0>
	void SERVER_MakeStates(struct TArray<Unknown> NewStates, char Validate); // Function UFSM.StateMachineComponent.SERVER_MakeStates(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120E390>
	void SERVER_GoToFSM(struct Unknown TargetMachine, char Validate); // Function UFSM.StateMachineComponent.SERVER_GoToFSM(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120E290>
	void SERVER_FinishState(char Validate); // Function UFSM.StateMachineComponent.SERVER_FinishState(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120E1D0>
	void SERVER_AddState(char ID, struct FName Name, char Validate); // Function UFSM.StateMachineComponent.SERVER_AddState(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120E090>
	void SERVER_ActivateFSM(char Validate); // Function UFSM.StateMachineComponent.SERVER_ActivateFSM(Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120DFD0>
	void RemoveState(struct FName Name, enum class Unknow& Transition); // Function UFSM.StateMachineComponent.RemoveState(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120DF00>
	enum class Unknow Pure_SetStateByID(char ID); // Function UFSM.StateMachineComponent.Pure_SetStateByID(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120DE70>
	enum class Unknow Pure_SetState(struct FName Name); // Function UFSM.StateMachineComponent.Pure_SetState(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120DDE0>
	enum class Unknow Pure_RemoveState(struct FName Name); // Function UFSM.StateMachineComponent.Pure_RemoveState(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120DD50>
	enum class Unknow Pure_AddState(char ID, struct FName Name); // Function UFSM.StateMachineComponent.Pure_AddState(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120DC90>
	void OnREP_StateTime(float& Time); // Function UFSM.StateMachineComponent.OnREP_StateTime(Native|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120DBF0>
	void OnREP_StateID(char& ID); // Function UFSM.StateMachineComponent.OnREP_StateID(Native|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120DB50>
	void OnREP_PreviousStateID(char& PreviousID); // Function UFSM.StateMachineComponent.OnREP_PreviousStateID(Native|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120DAB0>
	void OnInitializedFSM(struct Unknown Context); // Function UFSM.StateMachineComponent.OnInitializedFSM(Native|Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120DA20>
	void OnAnyUpdateState(struct Unknown Context, struct FName WithStateName, char WithStateID, float WithStateTime); // Function UFSM.StateMachineComponent.OnAnyUpdateState(Native|Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120D8E0>
	void OnAnyExitState(struct Unknown Context, struct FName WithStateName, char WithStateID); // Function UFSM.StateMachineComponent.OnAnyExitState(Native|Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120D7E0>
	void OnAnyBeginState(struct Unknown Context, struct FName WithStateName, char WithStateID, char WithPrevious); // Function UFSM.StateMachineComponent.OnAnyBeginState(Native|Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120D6A0>
	void MULTI_SetStateValue(struct Unknown Value); // Function UFSM.StateMachineComponent.MULTI_SetStateValue(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120D4C0>
	void MULTI_SetStateID(char ID); // Function UFSM.StateMachineComponent.MULTI_SetStateID(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120D440>
	void MULTI_SetState(struct FName Name); // Function UFSM.StateMachineComponent.MULTI_SetState(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120D3B0>
	void MULTI_RemoveState(struct FName Name); // Function UFSM.StateMachineComponent.MULTI_RemoveState(Net|NetReliableNative|Event|NetMulticast|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120D320>
	void MULTI_MakeStates(struct TArray<Unknown> NewStates); // Function UFSM.StateMachineComponent.MULTI_MakeStates(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120D280>
	void MULTI_GoToFSM(struct Unknown TargetMachine); // Function UFSM.StateMachineComponent.MULTI_GoToFSM(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120D1F0>
	void MULTI_FinishState(); // Function UFSM.StateMachineComponent.MULTI_FinishState(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120D1D0>
	void MULTI_AddState(char ID, struct FName Name); // Function UFSM.StateMachineComponent.MULTI_AddState(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120D100>
	void MULTI_ActivateFSM(); // Function UFSM.StateMachineComponent.MULTI_ActivateFSM(Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120D0E0>
	void MakeStates(struct TArray<Unknown>& NewStates, enum class Unknow& Transition); // Function UFSM.StateMachineComponent.MakeStates(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120D590>
	char IsInitializedFSM(); // Function UFSM.StateMachineComponent.IsInitializedFSM(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120D0C0>
	void GoToFSM(struct Unknown TargetMachine, enum class Unknow& Transition); // Function UFSM.StateMachineComponent.GoToFSM(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120CFF0>
	float GetTime(); // Function UFSM.StateMachineComponent.GetTime(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120CFD0>
	struct FName GetPreviousStateName(); // Function UFSM.StateMachineComponent.GetPreviousStateName(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120CF60>
	char GetPreviousStateID(); // Function UFSM.StateMachineComponent.GetPreviousStateID(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120CF40>
	struct FName GetCurrentStateName(); // Function UFSM.StateMachineComponent.GetCurrentStateName(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120CE50>
	char GetCurrentStateID(); // Function UFSM.StateMachineComponent.GetCurrentStateID(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120CE30>
	struct Unknown GetActiveState(); // Function UFSM.StateMachineComponent.GetActiveState(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120CDC0>
	void FSM_UpdateArgs(struct Unknown StateInfo); // Function UFSM.StateMachineComponent.FSM_UpdateArgs(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120C8F0>
	void FSM_TransitionRule(enum class Unknow& Condition); // Function UFSM.StateMachineComponent.FSM_TransitionRule(Final|Native|Private|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120C880>
	void FSM_ExitArgs(struct Unknown StateInfo); // Function UFSM.StateMachineComponent.FSM_ExitArgs(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120C810>
	void FSM_BeginArgs(struct Unknown StateInfo); // Function UFSM.StateMachineComponent.FSM_BeginArgs(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120C810>
	void FinishStateWithCallbacks(enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.FinishStateWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120C9E0>
	void FinishState_ConditionalWithCallbacks(enum class Unknow Condition, enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.FinishState_ConditionalWithCallbacks(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120CC20>
	void FinishState_Conditional(enum class Unknow Condition, enum class Unknow& Transition); // Function UFSM.StateMachineComponent.FinishState_Conditional(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120CB50>
	void FinishState(enum class Unknow& Transition); // Function UFSM.StateMachineComponent.FinishState(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120C950>
	char Exit(char ExitState, char NextState, enum class Unknow& Transition, struct FDelegate& Callback); // Function UFSM.StateMachineComponent.Exit(Native|Protected|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120C5B0>
	void Event_OnUpdateState(char CurrentState, struct FName StateName, float StateTimer); // Function UFSM.StateMachineComponent.Event_OnUpdateState(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Event_OnExitState(char CurrentState, struct FName StateName, enum class Unknow Transition); // Function UFSM.StateMachineComponent.Event_OnExitState(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Event_OnConstruct(); // Function UFSM.StateMachineComponent.Event_OnConstruct(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Event_OnBeginState(char CurrentState, char PreviousState, struct FName StateName, enum class Unknow Transition); // Function UFSM.StateMachineComponent.Event_OnBeginState(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void Enter(char InState, struct FDelegate& Callback); // Function UFSM.StateMachineComponent.Enter(Native|Protected|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120C400>
	void CLIENT_SetStateValue(struct Unknown Value); // Function UFSM.StateMachineComponent.CLIENT_SetStateValue(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120C330>
	void CLIENT_SetStateID(char ID); // Function UFSM.StateMachineComponent.CLIENT_SetStateID(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120C2B0>
	void CLIENT_SetState(struct FName Name); // Function UFSM.StateMachineComponent.CLIENT_SetState(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120C220>
	void CLIENT_RemoveState(struct FName Name); // Function UFSM.StateMachineComponent.CLIENT_RemoveState(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120C190>
	void CLIENT_MakeStates(struct TArray<Unknown> NewStates); // Function UFSM.StateMachineComponent.CLIENT_MakeStates(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120C0F0>
	void CLIENT_GoToFSM(struct Unknown TargetMachine); // Function UFSM.StateMachineComponent.CLIENT_GoToFSM(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120C060>
	void CLIENT_FinishState(); // Function UFSM.StateMachineComponent.CLIENT_FinishState(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120C040>
	void CLIENT_AddState(char ID, struct FName Name); // Function UFSM.StateMachineComponent.CLIENT_AddState(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120BF70>
	void CLIENT_ActivateFSM(); // Function UFSM.StateMachineComponent.CLIENT_ActivateFSM(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120BF50>
	struct Unknown AddState(char ID, struct FName Name, enum class Unknow& Transition); // Function UFSM.StateMachineComponent.AddState(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120BE00>
	void ActivateFSM(enum class Unknow& Transition); // Function UFSM.StateMachineComponent.ActivateFSM(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120BD70>
};

// ScriptStruct UFSM.SM_SetMachineState
struct FSM_SetMachineState : FAnimNode_Base {
	struct Unknown BasePose; // 0x10 (16)
	struct FName FSM; // 0x20 (8)
	struct FName ASM; // 0x28 (8)
	char EveryFrame : 0; // 0x30 (1)
};

// ScriptStruct UFSM.SM_BlendStateMachines
struct FSM_BlendStateMachines : FAnimNode_Base {
	struct Unknown BasePose; // 0x10 (16)
	struct Unknown BlendPose; // 0x20 (16)
};

// ScriptStruct UFSM.MachinePayloadData
struct FMachinePayloadData {
	struct TArray<Unknown> Actions; // 0x0 (16)
};

// ScriptStruct UFSM.SM_Link
struct FSM_Link {
	struct FName NextState; // 0x0 (8)
	struct FName Function; // 0x8 (8)
};

// ScriptStruct UFSM.SM_State
struct FSM_State {
	struct FName Name; // 0x0 (8)
	struct Unknown Owner; // 0x8 (8)
	struct FMulticastInlineDelegate OnBeginState; // 0x10 (16)
	struct FMulticastInlineDelegate OnUpdateState; // 0x20 (16)
	struct FMulticastInlineDelegate OnExitState; // 0x30 (16)
};

// ScriptStruct UFSM.SM_ExitEvent
struct FSM_ExitEvent {
	char StateID; // 0x0 (1)
	char NextStateID; // 0x1 (1)
	struct FName NextStateName; // 0x4 (8)
};

// ScriptStruct UFSM.SM_UpdateEvent
struct FSM_UpdateEvent {
	char StateID; // 0x0 (1)
	float StateTime; // 0x4 (4)
};

// ScriptStruct UFSM.SM_BeginEvent
struct FSM_BeginEvent {
	char StateID; // 0x0 (1)
	char PreviousStateID; // 0x1 (1)
	struct FName PreviousStateName; // 0x4 (8)
};

// Function UFSM.FSM_SetState_Async.FSM_SetState_Async
inline struct Unknown UFSM_SetState_Async::FSM_SetState_Async(struct Unknown FSM, float WaitForSeconds, struct FName Name, char Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetState_Async.FSM_SetState_Async");

	struct FSM_SetState_Async_Params {
		struct Unknown FSM;
		float WaitForSeconds;
		struct FName Name;
		char Loop;
		struct Unknown ReturnValue;

	}; FSM_SetState_Async_Params Params;

	Params.FSM = FSM;
	Params.WaitForSeconds = WaitForSeconds;
	Params.Name = Name;
	Params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.FSM_SetState_Async.Execute
inline void UFSM_SetState_Async::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetState_Async.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.FSM_SetStateID_Async.FSM_SetStateID_Async
inline struct Unknown UFSM_SetStateID_Async::FSM_SetStateID_Async(struct Unknown FSM, float WaitForSeconds, char ID, char Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetStateID_Async.FSM_SetStateID_Async");

	struct FSM_SetStateID_Async_Params {
		struct Unknown FSM;
		float WaitForSeconds;
		char ID;
		char Loop;
		struct Unknown ReturnValue;

	}; FSM_SetStateID_Async_Params Params;

	Params.FSM = FSM;
	Params.WaitForSeconds = WaitForSeconds;
	Params.ID = ID;
	Params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.FSM_SetStateID_Async.Execute
inline void UFSM_SetStateID_Async::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetStateID_Async.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.FSM_SetState_ConditionalAsync.FSM_SetState_ConditionalAsync
inline struct Unknown UFSM_SetState_ConditionalAsync::FSM_SetState_ConditionalAsync(struct Unknown FSM, float WaitForSeconds, struct FName Name, enum class Unknow Condition, char Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetState_ConditionalAsync.FSM_SetState_ConditionalAsync");

	struct FSM_SetState_ConditionalAsync_Params {
		struct Unknown FSM;
		float WaitForSeconds;
		struct FName Name;
		enum class Unknow Condition;
		char Loop;
		struct Unknown ReturnValue;

	}; FSM_SetState_ConditionalAsync_Params Params;

	Params.FSM = FSM;
	Params.WaitForSeconds = WaitForSeconds;
	Params.Name = Name;
	Params.Condition = Condition;
	Params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.FSM_SetState_ConditionalAsync.Execute
inline void UFSM_SetState_ConditionalAsync::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetState_ConditionalAsync.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.FSM_SetStateID_ConditionalAsync.FSM_SetStateID_ConditionalAsync
inline struct Unknown UFSM_SetStateID_ConditionalAsync::FSM_SetStateID_ConditionalAsync(struct Unknown FSM, float WaitForSeconds, char ID, enum class Unknow Condition, char Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetStateID_ConditionalAsync.FSM_SetStateID_ConditionalAsync");

	struct FSM_SetStateID_ConditionalAsync_Params {
		struct Unknown FSM;
		float WaitForSeconds;
		char ID;
		enum class Unknow Condition;
		char Loop;
		struct Unknown ReturnValue;

	}; FSM_SetStateID_ConditionalAsync_Params Params;

	Params.FSM = FSM;
	Params.WaitForSeconds = WaitForSeconds;
	Params.ID = ID;
	Params.Condition = Condition;
	Params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.FSM_SetStateID_ConditionalAsync.Execute
inline void UFSM_SetStateID_ConditionalAsync::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetStateID_ConditionalAsync.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.FSM_SetState_AsyncWithCallbacks.FSM_SetState_AsyncWithCallbacks
inline struct Unknown UFSM_SetState_AsyncWithCallbacks::FSM_SetState_AsyncWithCallbacks(struct Unknown FSM, float WaitForSeconds, struct FName Name, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetState_AsyncWithCallbacks.FSM_SetState_AsyncWithCallbacks");

	struct FSM_SetState_AsyncWithCallbacks_Params {
		struct Unknown FSM;
		float WaitForSeconds;
		struct FName Name;
		char Loop;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
		struct Unknown ReturnValue;

	}; FSM_SetState_AsyncWithCallbacks_Params Params;

	Params.FSM = FSM;
	Params.WaitForSeconds = WaitForSeconds;
	Params.Name = Name;
	Params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;


	return params.ReturnValue;
}

// Function UFSM.FSM_SetState_AsyncWithCallbacks.Execute
inline void UFSM_SetState_AsyncWithCallbacks::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetState_AsyncWithCallbacks.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.FSM_SetStateID_AsyncWithCallbacks.FSM_SetStateID_AsyncWithCallbacks
inline struct Unknown UFSM_SetStateID_AsyncWithCallbacks::FSM_SetStateID_AsyncWithCallbacks(struct Unknown FSM, float WaitForSeconds, char ID, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetStateID_AsyncWithCallbacks.FSM_SetStateID_AsyncWithCallbacks");

	struct FSM_SetStateID_AsyncWithCallbacks_Params {
		struct Unknown FSM;
		float WaitForSeconds;
		char ID;
		char Loop;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
		struct Unknown ReturnValue;

	}; FSM_SetStateID_AsyncWithCallbacks_Params Params;

	Params.FSM = FSM;
	Params.WaitForSeconds = WaitForSeconds;
	Params.ID = ID;
	Params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;


	return params.ReturnValue;
}

// Function UFSM.FSM_SetStateID_AsyncWithCallbacks.Execute
inline void UFSM_SetStateID_AsyncWithCallbacks::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetStateID_AsyncWithCallbacks.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.FSM_SetState_ConditionalAsyncWithCallbacks.FSM_SetState_ConditionalAsyncWithCallbacks
inline struct Unknown UFSM_SetState_ConditionalAsyncWithCallbacks::FSM_SetState_ConditionalAsyncWithCallbacks(struct Unknown FSM, float WaitForSeconds, struct FName Name, enum class Unknow Condition, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetState_ConditionalAsyncWithCallbacks.FSM_SetState_ConditionalAsyncWithCallbacks");

	struct FSM_SetState_ConditionalAsyncWithCallbacks_Params {
		struct Unknown FSM;
		float WaitForSeconds;
		struct FName Name;
		enum class Unknow Condition;
		char Loop;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
		struct Unknown ReturnValue;

	}; FSM_SetState_ConditionalAsyncWithCallbacks_Params Params;

	Params.FSM = FSM;
	Params.WaitForSeconds = WaitForSeconds;
	Params.Name = Name;
	Params.Condition = Condition;
	Params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;


	return params.ReturnValue;
}

// Function UFSM.FSM_SetState_ConditionalAsyncWithCallbacks.Execute
inline void UFSM_SetState_ConditionalAsyncWithCallbacks::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetState_ConditionalAsyncWithCallbacks.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks.FSM_SetStateID_ConditionalAsyncWithCallbacks
inline struct Unknown UFSM_SetStateID_ConditionalAsyncWithCallbacks::FSM_SetStateID_ConditionalAsyncWithCallbacks(struct Unknown FSM, float WaitForSeconds, char ID, enum class Unknow Condition, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks.FSM_SetStateID_ConditionalAsyncWithCallbacks");

	struct FSM_SetStateID_ConditionalAsyncWithCallbacks_Params {
		struct Unknown FSM;
		float WaitForSeconds;
		char ID;
		enum class Unknow Condition;
		char Loop;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
		struct Unknown ReturnValue;

	}; FSM_SetStateID_ConditionalAsyncWithCallbacks_Params Params;

	Params.FSM = FSM;
	Params.WaitForSeconds = WaitForSeconds;
	Params.ID = ID;
	Params.Condition = Condition;
	Params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;


	return params.ReturnValue;
}

// Function UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks.Execute
inline void UFSM_SetStateID_ConditionalAsyncWithCallbacks::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.FSM_FinishState_Async.FSM_FinishState_Async
inline struct Unknown UFSM_FinishState_Async::FSM_FinishState_Async(struct Unknown FSM, float WaitForSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_FinishState_Async.FSM_FinishState_Async");

	struct FSM_FinishState_Async_Params {
		struct Unknown FSM;
		float WaitForSeconds;
		struct Unknown ReturnValue;

	}; FSM_FinishState_Async_Params Params;

	Params.FSM = FSM;
	Params.WaitForSeconds = WaitForSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.FSM_FinishState_Async.Execute
inline void UFSM_FinishState_Async::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_FinishState_Async.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.FSM_FinishState_ConditionalAsync.FSM_FinishState_ConditionalAsync
inline struct Unknown UFSM_FinishState_ConditionalAsync::FSM_FinishState_ConditionalAsync(struct Unknown FSM, enum class Unknow Condition, float WaitForSeconds, struct FName Fallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_FinishState_ConditionalAsync.FSM_FinishState_ConditionalAsync");

	struct FSM_FinishState_ConditionalAsync_Params {
		struct Unknown FSM;
		enum class Unknow Condition;
		float WaitForSeconds;
		struct FName Fallback;
		struct Unknown ReturnValue;

	}; FSM_FinishState_ConditionalAsync_Params Params;

	Params.FSM = FSM;
	Params.Condition = Condition;
	Params.WaitForSeconds = WaitForSeconds;
	Params.Fallback = Fallback;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.FSM_FinishState_ConditionalAsync.Execute
inline void UFSM_FinishState_ConditionalAsync::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_FinishState_ConditionalAsync.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.FSM_FinishState_AsyncWithCallbacks.FSM_FinishState_AsyncWithCallbacks
inline struct Unknown UFSM_FinishState_AsyncWithCallbacks::FSM_FinishState_AsyncWithCallbacks(struct Unknown FSM, float WaitForSeconds, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_FinishState_AsyncWithCallbacks.FSM_FinishState_AsyncWithCallbacks");

	struct FSM_FinishState_AsyncWithCallbacks_Params {
		struct Unknown FSM;
		float WaitForSeconds;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
		struct Unknown ReturnValue;

	}; FSM_FinishState_AsyncWithCallbacks_Params Params;

	Params.FSM = FSM;
	Params.WaitForSeconds = WaitForSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;


	return params.ReturnValue;
}

// Function UFSM.FSM_FinishState_AsyncWithCallbacks.Execute
inline void UFSM_FinishState_AsyncWithCallbacks::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_FinishState_AsyncWithCallbacks.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks.FSM_FinishState_ConditionalAsyncWithCallbacks
inline struct Unknown UFSM_FinishState_ConditionalAsyncWithCallbacks::FSM_FinishState_ConditionalAsyncWithCallbacks(struct Unknown FSM, enum class Unknow Condition, float WaitForSeconds, struct FName Fallback, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback, struct FDelegate& BeginFallbackStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks.FSM_FinishState_ConditionalAsyncWithCallbacks");

	struct FSM_FinishState_ConditionalAsyncWithCallbacks_Params {
		struct Unknown FSM;
		enum class Unknow Condition;
		float WaitForSeconds;
		struct FName Fallback;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
		struct FDelegate& BeginFallbackStateCallback;
		struct Unknown ReturnValue;

	}; FSM_FinishState_ConditionalAsyncWithCallbacks_Params Params;

	Params.FSM = FSM;
	Params.Condition = Condition;
	Params.WaitForSeconds = WaitForSeconds;
	Params.Fallback = Fallback;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;
	BeginFallbackStateCallback = Params.BeginFallbackStateCallback;


	return params.ReturnValue;
}

// Function UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks.Execute
inline void UFSM_FinishState_ConditionalAsyncWithCallbacks::Execute() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks.Execute");

	struct Execute_Params {
		
	}; Execute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.ReactiveStateMachine.Update
inline void UReactiveStateMachine::Update(float DeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.Update");

	struct Update_Params {
		float DeltaTime;
	}; Update_Params Params;

	Params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.ReactiveStateMachine.OnUpdate
inline void UReactiveStateMachine::OnUpdate(float DeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.OnUpdate");

	struct OnUpdate_Params {
		float DeltaTime;
	}; OnUpdate_Params Params;

	Params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.ReactiveStateMachine.OnExit
inline void UReactiveStateMachine::OnExit() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.OnExit");

	struct OnExit_Params {
		
	}; OnExit_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.ReactiveStateMachine.OnEntry
inline void UReactiveStateMachine::OnEntry() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.OnEntry");

	struct OnEntry_Params {
		
	}; OnEntry_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.ReactiveStateMachine.OnConstruct
inline void UReactiveStateMachine::OnConstruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.OnConstruct");

	struct OnConstruct_Params {
		
	}; OnConstruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.ReactiveStateMachine.IsMachineActive
inline char UReactiveStateMachine::IsMachineActive() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.IsMachineActive");

	struct IsMachineActive_Params {
		
		char ReturnValue;

	}; IsMachineActive_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.ReactiveStateMachine.Init
inline void UReactiveStateMachine::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.Init");

	struct Init_Params {
		
	}; Init_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.ReactiveStateMachine.GetStateMachineUpdateTime
inline float UReactiveStateMachine::GetStateMachineUpdateTime() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.GetStateMachineUpdateTime");

	struct GetStateMachineUpdateTime_Params {
		
		float ReturnValue;

	}; GetStateMachineUpdateTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.ReactiveStateMachine.GetOwnerAsStateMachine
inline struct Unknown UReactiveStateMachine::GetOwnerAsStateMachine() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.GetOwnerAsStateMachine");

	struct GetOwnerAsStateMachine_Params {
		
		struct Unknown ReturnValue;

	}; GetOwnerAsStateMachine_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.ReactiveStateMachine.GetOwnerAsHUD
inline struct Unknown UReactiveStateMachine::GetOwnerAsHUD() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.GetOwnerAsHUD");

	struct GetOwnerAsHUD_Params {
		
		struct Unknown ReturnValue;

	}; GetOwnerAsHUD_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.ReactiveStateMachine.GetOwnerAsGameMode
inline struct Unknown UReactiveStateMachine::GetOwnerAsGameMode() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.GetOwnerAsGameMode");

	struct GetOwnerAsGameMode_Params {
		
		struct Unknown ReturnValue;

	}; GetOwnerAsGameMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.ReactiveStateMachine.GetOwnerAsControllerAI
inline struct Unknown UReactiveStateMachine::GetOwnerAsControllerAI() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.GetOwnerAsControllerAI");

	struct GetOwnerAsControllerAI_Params {
		
		struct Unknown ReturnValue;

	}; GetOwnerAsControllerAI_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.ReactiveStateMachine.GetOwnerAsController
inline struct Unknown UReactiveStateMachine::GetOwnerAsController() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.GetOwnerAsController");

	struct GetOwnerAsController_Params {
		
		struct Unknown ReturnValue;

	}; GetOwnerAsController_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.ReactiveStateMachine.GetOwnerAsComponent
inline struct Unknown UReactiveStateMachine::GetOwnerAsComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.GetOwnerAsComponent");

	struct GetOwnerAsComponent_Params {
		
		struct Unknown ReturnValue;

	}; GetOwnerAsComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.ReactiveStateMachine.GetOwnerAsCharacter
inline struct Unknown UReactiveStateMachine::GetOwnerAsCharacter() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.GetOwnerAsCharacter");

	struct GetOwnerAsCharacter_Params {
		
		struct Unknown ReturnValue;

	}; GetOwnerAsCharacter_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.ReactiveStateMachine.GetOwnerAsActor
inline struct Unknown UReactiveStateMachine::GetOwnerAsActor() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.GetOwnerAsActor");

	struct GetOwnerAsActor_Params {
		
		struct Unknown ReturnValue;

	}; GetOwnerAsActor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.ReactiveStateMachine.GetOwner
inline struct Unknown UReactiveStateMachine::GetOwner() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.GetOwner");

	struct GetOwner_Params {
		
		struct Unknown ReturnValue;

	}; GetOwner_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.ReactiveStateMachine.Exit
inline void UReactiveStateMachine::Exit() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.Exit");

	struct Exit_Params {
		
	}; Exit_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.ReactiveStateMachine.Entry
inline void UReactiveStateMachine::Entry() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.Entry");

	struct Entry_Params {
		
	}; Entry_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.ReactiveStateMachine.End
inline void UReactiveStateMachine::End() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.ReactiveStateMachine.End");

	struct End_Params {
		
	}; End_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineABP.GetFSMComponentByName
inline struct Unknown UStateMachineABP::GetFSMComponentByName(struct FName Name) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineABP.GetFSMComponentByName");

	struct GetFSMComponentByName_Params {
		struct FName Name;
		struct Unknown ReturnValue;

	}; GetFSMComponentByName_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineABP.GetFSMComponent
inline struct Unknown UStateMachineABP::GetFSMComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineABP.GetFSMComponent");

	struct GetFSMComponent_Params {
		
		struct Unknown ReturnValue;

	}; GetFSMComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.Update
inline void UStateMachineComponent::Update(char UpState, struct FDelegate& Callback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.Update");

	struct Update_Params {
		char UpState;
		struct FDelegate& Callback;
	}; Update_Params Params;

	Params.UpState = UpState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Callback = Params.Callback;

}

// Function UFSM.StateMachineComponent.SetStateWithCallbacks
inline void UStateMachineComponent::SetStateWithCallbacks(struct FName Name, enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetStateWithCallbacks");

	struct SetStateWithCallbacks_Params {
		struct FName Name;
		enum class Unknow& Transition;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
	}; SetStateWithCallbacks_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;
	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;

}

// Function UFSM.StateMachineComponent.SetStateValueWithCallbacks
inline void UStateMachineComponent::SetStateValueWithCallbacks(struct Unknown& Value, enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetStateValueWithCallbacks");

	struct SetStateValueWithCallbacks_Params {
		struct Unknown& Value;
		enum class Unknow& Transition;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
	}; SetStateValueWithCallbacks_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	Transition = Params.Transition;
	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;

}

// Function UFSM.StateMachineComponent.SetStateValue_ConditionalWithCallbacks
inline void UStateMachineComponent::SetStateValue_ConditionalWithCallbacks(struct Unknown& Value, enum class Unknow Condition, enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetStateValue_ConditionalWithCallbacks");

	struct SetStateValue_ConditionalWithCallbacks_Params {
		struct Unknown& Value;
		enum class Unknow Condition;
		enum class Unknow& Transition;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
	}; SetStateValue_ConditionalWithCallbacks_Params Params;

	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	Transition = Params.Transition;
	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;

}

// Function UFSM.StateMachineComponent.SetStateValue_Conditional
inline void UStateMachineComponent::SetStateValue_Conditional(struct Unknown& Value, enum class Unknow Condition, enum class Unknow& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetStateValue_Conditional");

	struct SetStateValue_Conditional_Params {
		struct Unknown& Value;
		enum class Unknow Condition;
		enum class Unknow& Transition;
	}; SetStateValue_Conditional_Params Params;

	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	Transition = Params.Transition;

}

// Function UFSM.StateMachineComponent.SetStateValue
inline void UStateMachineComponent::SetStateValue(struct Unknown& Value, enum class Unknow& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetStateValue");

	struct SetStateValue_Params {
		struct Unknown& Value;
		enum class Unknow& Transition;
	}; SetStateValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	Transition = Params.Transition;

}

// Function UFSM.StateMachineComponent.SetStateIDWithCallbacks
inline void UStateMachineComponent::SetStateIDWithCallbacks(char ID, enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetStateIDWithCallbacks");

	struct SetStateIDWithCallbacks_Params {
		char ID;
		enum class Unknow& Transition;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
	}; SetStateIDWithCallbacks_Params Params;

	Params.ID = ID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;
	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;

}

// Function UFSM.StateMachineComponent.SetStateID_ConditionalWithCallbacks
inline void UStateMachineComponent::SetStateID_ConditionalWithCallbacks(char ID, enum class Unknow Condition, enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetStateID_ConditionalWithCallbacks");

	struct SetStateID_ConditionalWithCallbacks_Params {
		char ID;
		enum class Unknow Condition;
		enum class Unknow& Transition;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
	}; SetStateID_ConditionalWithCallbacks_Params Params;

	Params.ID = ID;
	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;
	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;

}

// Function UFSM.StateMachineComponent.SetStateID_Conditional
inline void UStateMachineComponent::SetStateID_Conditional(char ID, enum class Unknow Condition, enum class Unknow& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetStateID_Conditional");

	struct SetStateID_Conditional_Params {
		char ID;
		enum class Unknow Condition;
		enum class Unknow& Transition;
	}; SetStateID_Conditional_Params Params;

	Params.ID = ID;
	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;

}

// Function UFSM.StateMachineComponent.SetStateID
inline void UStateMachineComponent::SetStateID(char ID, enum class Unknow& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetStateID");

	struct SetStateID_Params {
		char ID;
		enum class Unknow& Transition;
	}; SetStateID_Params Params;

	Params.ID = ID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;

}

// Function UFSM.StateMachineComponent.SetState_ConditionalWithCallbacks
inline void UStateMachineComponent::SetState_ConditionalWithCallbacks(struct FName Name, enum class Unknow Condition, enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetState_ConditionalWithCallbacks");

	struct SetState_ConditionalWithCallbacks_Params {
		struct FName Name;
		enum class Unknow Condition;
		enum class Unknow& Transition;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
	}; SetState_ConditionalWithCallbacks_Params Params;

	Params.Name = Name;
	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;
	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;

}

// Function UFSM.StateMachineComponent.SetState_Conditional
inline void UStateMachineComponent::SetState_Conditional(struct FName Name, enum class Unknow Condition, enum class Unknow& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetState_Conditional");

	struct SetState_Conditional_Params {
		struct FName Name;
		enum class Unknow Condition;
		enum class Unknow& Transition;
	}; SetState_Conditional_Params Params;

	Params.Name = Name;
	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;

}

// Function UFSM.StateMachineComponent.SetState
inline void UStateMachineComponent::SetState(struct FName Name, enum class Unknow& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SetState");

	struct SetState_Params {
		struct FName Name;
		enum class Unknow& Transition;
	}; SetState_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;

}

// Function UFSM.StateMachineComponent.SERVER_SetStateValue
inline void UStateMachineComponent::SERVER_SetStateValue(struct Unknown Value, char Validate) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SERVER_SetStateValue");

	struct SERVER_SetStateValue_Params {
		struct Unknown Value;
		char Validate;
	}; SERVER_SetStateValue_Params Params;

	Params.Value = Value;
	Params.Validate = Validate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.SERVER_SetStateID
inline void UStateMachineComponent::SERVER_SetStateID(char ID, char Validate) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SERVER_SetStateID");

	struct SERVER_SetStateID_Params {
		char ID;
		char Validate;
	}; SERVER_SetStateID_Params Params;

	Params.ID = ID;
	Params.Validate = Validate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.SERVER_SetState
inline void UStateMachineComponent::SERVER_SetState(struct FName Name, char Validate) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SERVER_SetState");

	struct SERVER_SetState_Params {
		struct FName Name;
		char Validate;
	}; SERVER_SetState_Params Params;

	Params.Name = Name;
	Params.Validate = Validate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.SERVER_RemoveState
inline void UStateMachineComponent::SERVER_RemoveState(struct FName Name, char Validate) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SERVER_RemoveState");

	struct SERVER_RemoveState_Params {
		struct FName Name;
		char Validate;
	}; SERVER_RemoveState_Params Params;

	Params.Name = Name;
	Params.Validate = Validate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.SERVER_MakeStates
inline void UStateMachineComponent::SERVER_MakeStates(struct TArray<Unknown> NewStates, char Validate) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SERVER_MakeStates");

	struct SERVER_MakeStates_Params {
		struct TArray<Unknown> NewStates;
		char Validate;
	}; SERVER_MakeStates_Params Params;

	Params.NewStates = NewStates;
	Params.Validate = Validate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.SERVER_GoToFSM
inline void UStateMachineComponent::SERVER_GoToFSM(struct Unknown TargetMachine, char Validate) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SERVER_GoToFSM");

	struct SERVER_GoToFSM_Params {
		struct Unknown TargetMachine;
		char Validate;
	}; SERVER_GoToFSM_Params Params;

	Params.TargetMachine = TargetMachine;
	Params.Validate = Validate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.SERVER_FinishState
inline void UStateMachineComponent::SERVER_FinishState(char Validate) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SERVER_FinishState");

	struct SERVER_FinishState_Params {
		char Validate;
	}; SERVER_FinishState_Params Params;

	Params.Validate = Validate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.SERVER_AddState
inline void UStateMachineComponent::SERVER_AddState(char ID, struct FName Name, char Validate) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SERVER_AddState");

	struct SERVER_AddState_Params {
		char ID;
		struct FName Name;
		char Validate;
	}; SERVER_AddState_Params Params;

	Params.ID = ID;
	Params.Name = Name;
	Params.Validate = Validate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.SERVER_ActivateFSM
inline void UStateMachineComponent::SERVER_ActivateFSM(char Validate) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.SERVER_ActivateFSM");

	struct SERVER_ActivateFSM_Params {
		char Validate;
	}; SERVER_ActivateFSM_Params Params;

	Params.Validate = Validate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.RemoveState
inline void UStateMachineComponent::RemoveState(struct FName Name, enum class Unknow& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.RemoveState");

	struct RemoveState_Params {
		struct FName Name;
		enum class Unknow& Transition;
	}; RemoveState_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;

}

// Function UFSM.StateMachineComponent.Pure_SetStateByID
inline enum class Unknow UStateMachineComponent::Pure_SetStateByID(char ID) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.Pure_SetStateByID");

	struct Pure_SetStateByID_Params {
		char ID;
		enum class Unknow ReturnValue;

	}; Pure_SetStateByID_Params Params;

	Params.ID = ID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.Pure_SetState
inline enum class Unknow UStateMachineComponent::Pure_SetState(struct FName Name) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.Pure_SetState");

	struct Pure_SetState_Params {
		struct FName Name;
		enum class Unknow ReturnValue;

	}; Pure_SetState_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.Pure_RemoveState
inline enum class Unknow UStateMachineComponent::Pure_RemoveState(struct FName Name) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.Pure_RemoveState");

	struct Pure_RemoveState_Params {
		struct FName Name;
		enum class Unknow ReturnValue;

	}; Pure_RemoveState_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.Pure_AddState
inline enum class Unknow UStateMachineComponent::Pure_AddState(char ID, struct FName Name) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.Pure_AddState");

	struct Pure_AddState_Params {
		char ID;
		struct FName Name;
		enum class Unknow ReturnValue;

	}; Pure_AddState_Params Params;

	Params.ID = ID;
	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.OnREP_StateTime
inline void UStateMachineComponent::OnREP_StateTime(float& Time) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.OnREP_StateTime");

	struct OnREP_StateTime_Params {
		float& Time;
	}; OnREP_StateTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Time = Params.Time;

}

// Function UFSM.StateMachineComponent.OnREP_StateID
inline void UStateMachineComponent::OnREP_StateID(char& ID) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.OnREP_StateID");

	struct OnREP_StateID_Params {
		char& ID;
	}; OnREP_StateID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ID = Params.ID;

}

// Function UFSM.StateMachineComponent.OnREP_PreviousStateID
inline void UStateMachineComponent::OnREP_PreviousStateID(char& PreviousID) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.OnREP_PreviousStateID");

	struct OnREP_PreviousStateID_Params {
		char& PreviousID;
	}; OnREP_PreviousStateID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PreviousID = Params.PreviousID;

}

// Function UFSM.StateMachineComponent.OnInitializedFSM
inline void UStateMachineComponent::OnInitializedFSM(struct Unknown Context) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.OnInitializedFSM");

	struct OnInitializedFSM_Params {
		struct Unknown Context;
	}; OnInitializedFSM_Params Params;

	Params.Context = Context;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.OnAnyUpdateState
inline void UStateMachineComponent::OnAnyUpdateState(struct Unknown Context, struct FName WithStateName, char WithStateID, float WithStateTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.OnAnyUpdateState");

	struct OnAnyUpdateState_Params {
		struct Unknown Context;
		struct FName WithStateName;
		char WithStateID;
		float WithStateTime;
	}; OnAnyUpdateState_Params Params;

	Params.Context = Context;
	Params.WithStateName = WithStateName;
	Params.WithStateID = WithStateID;
	Params.WithStateTime = WithStateTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.OnAnyExitState
inline void UStateMachineComponent::OnAnyExitState(struct Unknown Context, struct FName WithStateName, char WithStateID) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.OnAnyExitState");

	struct OnAnyExitState_Params {
		struct Unknown Context;
		struct FName WithStateName;
		char WithStateID;
	}; OnAnyExitState_Params Params;

	Params.Context = Context;
	Params.WithStateName = WithStateName;
	Params.WithStateID = WithStateID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.OnAnyBeginState
inline void UStateMachineComponent::OnAnyBeginState(struct Unknown Context, struct FName WithStateName, char WithStateID, char WithPrevious) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.OnAnyBeginState");

	struct OnAnyBeginState_Params {
		struct Unknown Context;
		struct FName WithStateName;
		char WithStateID;
		char WithPrevious;
	}; OnAnyBeginState_Params Params;

	Params.Context = Context;
	Params.WithStateName = WithStateName;
	Params.WithStateID = WithStateID;
	Params.WithPrevious = WithPrevious;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.MULTI_SetStateValue
inline void UStateMachineComponent::MULTI_SetStateValue(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.MULTI_SetStateValue");

	struct MULTI_SetStateValue_Params {
		struct Unknown Value;
	}; MULTI_SetStateValue_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.MULTI_SetStateID
inline void UStateMachineComponent::MULTI_SetStateID(char ID) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.MULTI_SetStateID");

	struct MULTI_SetStateID_Params {
		char ID;
	}; MULTI_SetStateID_Params Params;

	Params.ID = ID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.MULTI_SetState
inline void UStateMachineComponent::MULTI_SetState(struct FName Name) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.MULTI_SetState");

	struct MULTI_SetState_Params {
		struct FName Name;
	}; MULTI_SetState_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.MULTI_RemoveState
inline void UStateMachineComponent::MULTI_RemoveState(struct FName Name) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.MULTI_RemoveState");

	struct MULTI_RemoveState_Params {
		struct FName Name;
	}; MULTI_RemoveState_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.MULTI_MakeStates
inline void UStateMachineComponent::MULTI_MakeStates(struct TArray<Unknown> NewStates) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.MULTI_MakeStates");

	struct MULTI_MakeStates_Params {
		struct TArray<Unknown> NewStates;
	}; MULTI_MakeStates_Params Params;

	Params.NewStates = NewStates;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.MULTI_GoToFSM
inline void UStateMachineComponent::MULTI_GoToFSM(struct Unknown TargetMachine) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.MULTI_GoToFSM");

	struct MULTI_GoToFSM_Params {
		struct Unknown TargetMachine;
	}; MULTI_GoToFSM_Params Params;

	Params.TargetMachine = TargetMachine;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.MULTI_FinishState
inline void UStateMachineComponent::MULTI_FinishState() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.MULTI_FinishState");

	struct MULTI_FinishState_Params {
		
	}; MULTI_FinishState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.MULTI_AddState
inline void UStateMachineComponent::MULTI_AddState(char ID, struct FName Name) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.MULTI_AddState");

	struct MULTI_AddState_Params {
		char ID;
		struct FName Name;
	}; MULTI_AddState_Params Params;

	Params.ID = ID;
	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.MULTI_ActivateFSM
inline void UStateMachineComponent::MULTI_ActivateFSM() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.MULTI_ActivateFSM");

	struct MULTI_ActivateFSM_Params {
		
	}; MULTI_ActivateFSM_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.MakeStates
inline void UStateMachineComponent::MakeStates(struct TArray<Unknown>& NewStates, enum class Unknow& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.MakeStates");

	struct MakeStates_Params {
		struct TArray<Unknown>& NewStates;
		enum class Unknow& Transition;
	}; MakeStates_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewStates = Params.NewStates;
	Transition = Params.Transition;

}

// Function UFSM.StateMachineComponent.IsInitializedFSM
inline char UStateMachineComponent::IsInitializedFSM() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.IsInitializedFSM");

	struct IsInitializedFSM_Params {
		
		char ReturnValue;

	}; IsInitializedFSM_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.GoToFSM
inline void UStateMachineComponent::GoToFSM(struct Unknown TargetMachine, enum class Unknow& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.GoToFSM");

	struct GoToFSM_Params {
		struct Unknown TargetMachine;
		enum class Unknow& Transition;
	}; GoToFSM_Params Params;

	Params.TargetMachine = TargetMachine;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;

}

// Function UFSM.StateMachineComponent.GetTime
inline float UStateMachineComponent::GetTime() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.GetTime");

	struct GetTime_Params {
		
		float ReturnValue;

	}; GetTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.GetPreviousStateName
inline struct FName UStateMachineComponent::GetPreviousStateName() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.GetPreviousStateName");

	struct GetPreviousStateName_Params {
		
		struct FName ReturnValue;

	}; GetPreviousStateName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.GetPreviousStateID
inline char UStateMachineComponent::GetPreviousStateID() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.GetPreviousStateID");

	struct GetPreviousStateID_Params {
		
		char ReturnValue;

	}; GetPreviousStateID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.GetCurrentStateName
inline struct FName UStateMachineComponent::GetCurrentStateName() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.GetCurrentStateName");

	struct GetCurrentStateName_Params {
		
		struct FName ReturnValue;

	}; GetCurrentStateName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.GetCurrentStateID
inline char UStateMachineComponent::GetCurrentStateID() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.GetCurrentStateID");

	struct GetCurrentStateID_Params {
		
		char ReturnValue;

	}; GetCurrentStateID_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.GetActiveState
inline struct Unknown UStateMachineComponent::GetActiveState() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.GetActiveState");

	struct GetActiveState_Params {
		
		struct Unknown ReturnValue;

	}; GetActiveState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.FSM_UpdateArgs
inline void UStateMachineComponent::FSM_UpdateArgs(struct Unknown StateInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.FSM_UpdateArgs");

	struct FSM_UpdateArgs_Params {
		struct Unknown StateInfo;
	}; FSM_UpdateArgs_Params Params;

	Params.StateInfo = StateInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.FSM_TransitionRule
inline void UStateMachineComponent::FSM_TransitionRule(enum class Unknow& Condition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.FSM_TransitionRule");

	struct FSM_TransitionRule_Params {
		enum class Unknow& Condition;
	}; FSM_TransitionRule_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Condition = Params.Condition;

}

// Function UFSM.StateMachineComponent.FSM_ExitArgs
inline void UStateMachineComponent::FSM_ExitArgs(struct Unknown StateInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.FSM_ExitArgs");

	struct FSM_ExitArgs_Params {
		struct Unknown StateInfo;
	}; FSM_ExitArgs_Params Params;

	Params.StateInfo = StateInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.FSM_BeginArgs
inline void UStateMachineComponent::FSM_BeginArgs(struct Unknown StateInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.FSM_BeginArgs");

	struct FSM_BeginArgs_Params {
		struct Unknown StateInfo;
	}; FSM_BeginArgs_Params Params;

	Params.StateInfo = StateInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.FinishStateWithCallbacks
inline void UStateMachineComponent::FinishStateWithCallbacks(enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.FinishStateWithCallbacks");

	struct FinishStateWithCallbacks_Params {
		enum class Unknow& Transition;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
	}; FinishStateWithCallbacks_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;
	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;

}

// Function UFSM.StateMachineComponent.FinishState_ConditionalWithCallbacks
inline void UStateMachineComponent::FinishState_ConditionalWithCallbacks(enum class Unknow Condition, enum class Unknow& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.FinishState_ConditionalWithCallbacks");

	struct FinishState_ConditionalWithCallbacks_Params {
		enum class Unknow Condition;
		enum class Unknow& Transition;
		struct FDelegate& ExitPreviousStateCallback;
		struct FDelegate& BeginNextStateCallback;
	}; FinishState_ConditionalWithCallbacks_Params Params;

	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;
	ExitPreviousStateCallback = Params.ExitPreviousStateCallback;
	BeginNextStateCallback = Params.BeginNextStateCallback;

}

// Function UFSM.StateMachineComponent.FinishState_Conditional
inline void UStateMachineComponent::FinishState_Conditional(enum class Unknow Condition, enum class Unknow& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.FinishState_Conditional");

	struct FinishState_Conditional_Params {
		enum class Unknow Condition;
		enum class Unknow& Transition;
	}; FinishState_Conditional_Params Params;

	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;

}

// Function UFSM.StateMachineComponent.FinishState
inline void UStateMachineComponent::FinishState(enum class Unknow& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.FinishState");

	struct FinishState_Params {
		enum class Unknow& Transition;
	}; FinishState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;

}

// Function UFSM.StateMachineComponent.Exit
inline char UStateMachineComponent::Exit(char ExitState, char NextState, enum class Unknow& Transition, struct FDelegate& Callback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.Exit");

	struct Exit_Params {
		char ExitState;
		char NextState;
		enum class Unknow& Transition;
		struct FDelegate& Callback;
		char ReturnValue;

	}; Exit_Params Params;

	Params.ExitState = ExitState;
	Params.NextState = NextState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;
	Callback = Params.Callback;


	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.Event_OnUpdateState
inline void UStateMachineComponent::Event_OnUpdateState(char CurrentState, struct FName StateName, float StateTimer) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.Event_OnUpdateState");

	struct Event_OnUpdateState_Params {
		char CurrentState;
		struct FName StateName;
		float StateTimer;
	}; Event_OnUpdateState_Params Params;

	Params.CurrentState = CurrentState;
	Params.StateName = StateName;
	Params.StateTimer = StateTimer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.Event_OnExitState
inline void UStateMachineComponent::Event_OnExitState(char CurrentState, struct FName StateName, enum class Unknow Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.Event_OnExitState");

	struct Event_OnExitState_Params {
		char CurrentState;
		struct FName StateName;
		enum class Unknow Transition;
	}; Event_OnExitState_Params Params;

	Params.CurrentState = CurrentState;
	Params.StateName = StateName;
	Params.Transition = Transition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.Event_OnConstruct
inline void UStateMachineComponent::Event_OnConstruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.Event_OnConstruct");

	struct Event_OnConstruct_Params {
		
	}; Event_OnConstruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.Event_OnBeginState
inline void UStateMachineComponent::Event_OnBeginState(char CurrentState, char PreviousState, struct FName StateName, enum class Unknow Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.Event_OnBeginState");

	struct Event_OnBeginState_Params {
		char CurrentState;
		char PreviousState;
		struct FName StateName;
		enum class Unknow Transition;
	}; Event_OnBeginState_Params Params;

	Params.CurrentState = CurrentState;
	Params.PreviousState = PreviousState;
	Params.StateName = StateName;
	Params.Transition = Transition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.Enter
inline void UStateMachineComponent::Enter(char InState, struct FDelegate& Callback) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.Enter");

	struct Enter_Params {
		char InState;
		struct FDelegate& Callback;
	}; Enter_Params Params;

	Params.InState = InState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Callback = Params.Callback;

}

// Function UFSM.StateMachineComponent.CLIENT_SetStateValue
inline void UStateMachineComponent::CLIENT_SetStateValue(struct Unknown Value) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.CLIENT_SetStateValue");

	struct CLIENT_SetStateValue_Params {
		struct Unknown Value;
	}; CLIENT_SetStateValue_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.CLIENT_SetStateID
inline void UStateMachineComponent::CLIENT_SetStateID(char ID) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.CLIENT_SetStateID");

	struct CLIENT_SetStateID_Params {
		char ID;
	}; CLIENT_SetStateID_Params Params;

	Params.ID = ID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.CLIENT_SetState
inline void UStateMachineComponent::CLIENT_SetState(struct FName Name) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.CLIENT_SetState");

	struct CLIENT_SetState_Params {
		struct FName Name;
	}; CLIENT_SetState_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.CLIENT_RemoveState
inline void UStateMachineComponent::CLIENT_RemoveState(struct FName Name) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.CLIENT_RemoveState");

	struct CLIENT_RemoveState_Params {
		struct FName Name;
	}; CLIENT_RemoveState_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.CLIENT_MakeStates
inline void UStateMachineComponent::CLIENT_MakeStates(struct TArray<Unknown> NewStates) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.CLIENT_MakeStates");

	struct CLIENT_MakeStates_Params {
		struct TArray<Unknown> NewStates;
	}; CLIENT_MakeStates_Params Params;

	Params.NewStates = NewStates;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.CLIENT_GoToFSM
inline void UStateMachineComponent::CLIENT_GoToFSM(struct Unknown TargetMachine) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.CLIENT_GoToFSM");

	struct CLIENT_GoToFSM_Params {
		struct Unknown TargetMachine;
	}; CLIENT_GoToFSM_Params Params;

	Params.TargetMachine = TargetMachine;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.CLIENT_FinishState
inline void UStateMachineComponent::CLIENT_FinishState() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.CLIENT_FinishState");

	struct CLIENT_FinishState_Params {
		
	}; CLIENT_FinishState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.CLIENT_AddState
inline void UStateMachineComponent::CLIENT_AddState(char ID, struct FName Name) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.CLIENT_AddState");

	struct CLIENT_AddState_Params {
		char ID;
		struct FName Name;
	}; CLIENT_AddState_Params Params;

	Params.ID = ID;
	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.CLIENT_ActivateFSM
inline void UStateMachineComponent::CLIENT_ActivateFSM() {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.CLIENT_ActivateFSM");

	struct CLIENT_ActivateFSM_Params {
		
	}; CLIENT_ActivateFSM_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UFSM.StateMachineComponent.AddState
inline struct Unknown UStateMachineComponent::AddState(char ID, struct FName Name, enum class Unknow& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.AddState");

	struct AddState_Params {
		char ID;
		struct FName Name;
		enum class Unknow& Transition;
		struct Unknown ReturnValue;

	}; AddState_Params Params;

	Params.ID = ID;
	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;


	return params.ReturnValue;
}

// Function UFSM.StateMachineComponent.ActivateFSM
inline void UStateMachineComponent::ActivateFSM(enum class Unknow& Transition) {
	static auto fn = UObject::FindObject<UFunction>("Function UFSM.StateMachineComponent.ActivateFSM");

	struct ActivateFSM_Params {
		enum class Unknow& Transition;
	}; ActivateFSM_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transition = Params.Transition;

}

