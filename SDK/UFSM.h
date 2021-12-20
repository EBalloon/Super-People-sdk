// Enum UFSM.FSM_Transition
enum class FSM_Transition : uint8 {
	FSM_Transition = 0,
	FSM_Transition = 1,
	FSM_Transition = 2
};

// Enum UFSM.ESeverity
enum class ESeverity : uint8 {
	ESeverity = 0,
	ESeverity = 1,
	ESeverity = 2,
	ESeverity = 3,
	ESeverity = 4
};

// Class UFSM.FSM_SetState_Async
struct UFSM_SetState_Async : UBlueprintAsyncActionBase {
	Unknown Target; //  0x30 Size(8)
	struct FName StateName; //  0x38 Size(8)
	float Timer; //  0x40 Size(4)
	char Repeat; //  0x44 Size(1)
	Unknown TimerHandle; //  0x48 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x50 Size(10)
	struct FMulticastInlineDelegate OnAb; //  0x60 Size(10)

	Unknown FSM_SetState_Async(Unknown FSM, float WaitForSeconds, struct FName Name, char Loop); // Function UFSM.FSM_SetState_Async.FSM_SetState_Async(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11ee010>
};

// Class UFSM.FSM_SetStateID_Async
struct UFSM_SetStateID_Async : UBlueprintAsyncActionBase {
	Unknown Target; //  0x30 Size(8)
	Unknown StateID; //  0x38 Size(1)
	float Timer; //  0x3c Size(4)
	char Repeat; //  0x40 Size(1)
	Unknown TimerHandle; //  0x48 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x50 Size(10)
	struct FMulticastInlineDelegate OnAb; //  0x60 Size(10)

	Unknown FSM_SetStateID_Async(Unknown FSM, float WaitForSeconds, Unknown ID, char Loop); // Function UFSM.FSM_SetStateID_Async.FSM_SetStateID_Async(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11ed8e0>
};

// Class UFSM.FSM_SetState_ConditionalAsync
struct UFSM_SetState_ConditionalAsync : UBlueprintAsyncActionBase {
	Unknown Target; //  0x30 Size(8)
	Unknown Conditional; //  0x38 Size(1)
	struct FName StateName; //  0x3c Size(8)
	float Timer; //  0x44 Size(4)
	char Repeat; //  0x48 Size(1)
	Unknown TimerHandle; //  0x50 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x58 Size(10)
	struct FMulticastInlineDelegate OnAb; //  0x68 Size(10)

	Unknown FSM_SetState_ConditionalAsync(Unknown FSM, float WaitForSeconds, struct FName Name, Unknown Condition, char Loop); // Function UFSM.FSM_SetState_ConditionalAsync.FSM_SetState_ConditionalAsync(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11ee360>
};

// Class UFSM.FSM_SetStateID_ConditionalAsync
struct UFSM_SetStateID_ConditionalAsync : UBlueprintAsyncActionBase {
	Unknown Target; //  0x30 Size(8)
	Unknown Conditional; //  0x38 Size(1)
	Unknown StateID; //  0x39 Size(1)
	float Timer; //  0x3c Size(4)
	char Repeat; //  0x40 Size(1)
	Unknown TimerHandle; //  0x48 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x50 Size(10)
	struct FMulticastInlineDelegate OnAb; //  0x60 Size(10)

	Unknown FSM_SetStateID_ConditionalAsync(Unknown FSM, float WaitForSeconds, Unknown ID, Unknown Condition, char Loop); // Function UFSM.FSM_SetStateID_ConditionalAsync.FSM_SetStateID_ConditionalAsync(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11edc40>
};

// Class UFSM.FSM_SetState_AsyncWithCallbacks
struct UFSM_SetState_AsyncWithCallbacks : UBlueprintAsyncActionBase {
	Unknown Target; //  0x30 Size(8)
	struct FDelegate InBegin; //  0x38 Size(10)
	struct FDelegate InExit; //  0x48 Size(10)
	struct FName StateName; //  0x58 Size(8)
	float Timer; //  0x60 Size(4)
	char Repeat; //  0x64 Size(1)
	Unknown TimerHandle; //  0x68 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x70 Size(10)
	struct FMulticastInlineDelegate OnAb; //  0x80 Size(10)

	Unknown FSM_SetState_AsyncWithCallbacks(Unknown FSM, float WaitForSeconds, struct FName Name, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetState_AsyncWithCallbacks.FSM_SetState_AsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11ee150>
};

// Class UFSM.FSM_SetStateID_AsyncWithCallbacks
struct UFSM_SetStateID_AsyncWithCallbacks : UBlueprintAsyncActionBase {
	Unknown Target; //  0x30 Size(8)
	struct FDelegate InBegin; //  0x38 Size(10)
	struct FDelegate InExit; //  0x48 Size(10)
	Unknown StateID; //  0x58 Size(1)
	float Timer; //  0x5c Size(4)
	char Repeat; //  0x60 Size(1)
	Unknown TimerHandle; //  0x68 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x70 Size(10)
	struct FMulticastInlineDelegate OnAb; //  0x80 Size(10)

	Unknown FSM_SetStateID_AsyncWithCallbacks(Unknown FSM, float WaitForSeconds, Unknown ID, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetStateID_AsyncWithCallbacks.FSM_SetStateID_AsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11eda20>
};

// Class UFSM.FSM_SetState_ConditionalAsyncWithCallbacks
struct UFSM_SetState_ConditionalAsyncWithCallbacks : UBlueprintAsyncActionBase {
	Unknown Target; //  0x30 Size(8)
	Unknown Conditional; //  0x38 Size(1)
	struct FDelegate InBegin; //  0x3c Size(10)
	struct FDelegate InExit; //  0x4c Size(10)
	struct FName StateName; //  0x5c Size(8)
	float Timer; //  0x64 Size(4)
	char Repeat; //  0x68 Size(1)
	Unknown TimerHandle; //  0x70 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x78 Size(10)
	struct FMulticastInlineDelegate OnAb; //  0x88 Size(10)

	Unknown FSM_SetState_ConditionalAsyncWithCallbacks(Unknown FSM, float WaitForSeconds, struct FName Name, Unknown Condition, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetState_ConditionalAsyncWithCallbacks.FSM_SetState_ConditionalAsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11ee4e0>
};

// Class UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks
struct UFSM_SetStateID_ConditionalAsyncWithCallbacks : UBlueprintAsyncActionBase {
	Unknown Target; //  0x30 Size(8)
	Unknown Conditional; //  0x38 Size(1)
	struct FDelegate InBegin; //  0x3c Size(10)
	struct FDelegate InExit; //  0x4c Size(10)
	Unknown StateID; //  0x5c Size(1)
	float Timer; //  0x60 Size(4)
	char Repeat; //  0x64 Size(1)
	Unknown TimerHandle; //  0x68 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x70 Size(10)
	struct FMulticastInlineDelegate OnAb; //  0x80 Size(10)

	Unknown FSM_SetStateID_ConditionalAsyncWithCallbacks(Unknown FSM, float WaitForSeconds, Unknown ID, Unknown Condition, char Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks.FSM_SetStateID_ConditionalAsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11eddc0>
};

// Class UFSM.FSM_FinishState_Async
struct UFSM_FinishState_Async : UBlueprintAsyncActionBase {
	Unknown Target; //  0x30 Size(8)
	float Timer; //  0x38 Size(4)
	Unknown TimerHandle; //  0x40 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x48 Size(10)
	struct FMulticastInlineDelegate OnAb; //  0x58 Size(10)

	Unknown FSM_FinishState_Async(Unknown FSM, float WaitForSeconds); // Function UFSM.FSM_FinishState_Async.FSM_FinishState_Async(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11ed2c0>
};

// Class UFSM.FSM_FinishState_ConditionalAsync
struct UFSM_FinishState_ConditionalAsync : UBlueprintAsyncActionBase {
	Unknown Target; //  0x30 Size(8)
	Unknown Conditional; //  0x38 Size(1)
	struct FName FallbackState; //  0x3c Size(8)
	float Timer; //  0x44 Size(4)
	Unknown TimerHandle; //  0x48 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x50 Size(10)
	struct FMulticastInlineDelegate OnAb; //  0x60 Size(10)

	Unknown FSM_FinishState_ConditionalAsync(Unknown FSM, Unknown Condition, float WaitForSeconds, struct FName Fallback); // Function UFSM.FSM_FinishState_ConditionalAsync.FSM_FinishState_ConditionalAsync(Final|Native|Static|Public|BlueprintCallable) // <Game+0x11ed520>
};

// Class UFSM.FSM_FinishState_AsyncWithCallbacks
struct UFSM_FinishState_AsyncWithCallbacks : UBlueprintAsyncActionBase {
	Unknown Target; //  0x30 Size(8)
	struct FDelegate InBegin; //  0x38 Size(10)
	struct FDelegate InExit; //  0x48 Size(10)
	float Timer; //  0x58 Size(4)
	Unknown TimerHandle; //  0x60 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x68 Size(10)
	struct FMulticastInlineDelegate OnAb; //  0x78 Size(10)

	Unknown FSM_FinishState_AsyncWithCallbacks(Unknown FSM, float WaitForSeconds, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_FinishState_AsyncWithCallbacks.FSM_FinishState_AsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11ed390>
};

// Class UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks
struct UFSM_FinishState_ConditionalAsyncWithCallbacks : UBlueprintAsyncActionBase {
	Unknown Target; //  0x30 Size(8)
	Unknown Conditional; //  0x38 Size(1)
	struct FDelegate InBegin; //  0x3c Size(10)
	struct FDelegate InExit; //  0x4c Size(10)
	struct FDelegate InFallback; //  0x5c Size(10)
	struct FName FallbackState; //  0x6c Size(8)
	float Timer; //  0x74 Size(4)
	Unknown TimerHandle; //  0x78 Size(8)
	struct FMulticastInlineDelegate OnSuccess; //  0x80 Size(10)
	struct FMulticastInlineDelegate OnAb; //  0x90 Size(10)

	Unknown FSM_FinishState_ConditionalAsyncWithCallbacks(Unknown FSM, Unknown Condition, float WaitForSeconds, struct FName Fallback, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback, struct FDelegate& BeginFallbackStateCallback); // Function UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks.FSM_FinishState_ConditionalAsyncWithCallbacks(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x11ed660>
};

// Class UFSM.BTTask_FSM_AddState
struct UBTTask_FSM_AddState : UBTTask_BlackboardBase {
	Unknown FSM; //  0x98 Size(8)
	struct FName TargetFSM; //  0xa0 Size(8)
	struct FName NewStateName; //  0xa8 Size(8)
	char Debug; //  0xb0 Size(1)
	char ForceSuccess; //  0xb1 Size(1)
};

// Class UFSM.BTTask_FSM_SetState
struct UBTTask_FSM_SetState : UBTTask_BlackboardBase {
	Unknown FSM; //  0x98 Size(8)
	struct FName TargetFSM; //  0xa0 Size(8)
	struct FName StateName; //  0xa8 Size(8)
	char Debug; //  0xb0 Size(1)
	char ForceSuccess; //  0xb1 Size(1)
};

// Class UFSM.BTTask_FSM_RemoveState
struct UBTTask_FSM_RemoveState : UBTTask_BlackboardBase {
	Unknown FSM; //  0x98 Size(8)
	struct FName TargetFSM; //  0xa0 Size(8)
	struct FName StateName; //  0xa8 Size(8)
	char Debug; //  0xb0 Size(1)
	char ForceSuccess; //  0xb1 Size(1)
};

// Class UFSM.BTTask_FSM_CheckState
struct UBTTask_FSM_CheckState : UBTTask_BlackboardBase {
	Unknown FSM; //  0x98 Size(8)
	struct FName TargetFSM; //  0xa0 Size(8)
	struct FName StateName; //  0xa8 Size(8)
	char Debug; //  0xb0 Size(1)
	char ForceSuccess; //  0xb1 Size(1)
};

// Class UFSM.RSM
struct URSM : Object {
	Unknown SGUID; //  0x28 Size(10)
	int32_t PlayerId; //  0x38 Size(4)
	Unknown Owner; //  0x3c Size(8)
};

// Class UFSM.ReactiveStateMachine
struct UReactiveStateMachine : URSM {
	Unknown StateGraph; //  0x58 Size(10)
	float MachineTime; //  0x68 Size(4)
	struct FMulticastInlineDelegate _OnEntry; //  0x70 Size(10)
	struct FMulticastInlineDelegate _OnExit; //  0x80 Size(10)
	Unknown MachineData; //  0x90 Size(50)

	void Update(float DeltaTime); // Function UFSM.ReactiveStateMachine.Update(Final|Native|Private) // <Game+0x11f2da0>
};

// Class UFSM.FSMSettings
struct UFSMSettings : Object {
	char Enab; //  0x28 Size(1)
	char SuppressRPCWarnings; //  0x29 Size(1)
	float DefaultTickInterval; //  0x2c Size(4)
	Unknown DefaultStates; //  0x30 Size(10)
};

// Class UFSM.RSMSubsystem
struct URSMSubsystem : ULocalPlayerSubsystem {
	Unknown MachineStack; //  0x30 Size(10)
};

// Class UFSM.StateMachineABP
struct UStateMachineABP : UAnimInstance {
	Unknown FSM; //  0x268 Size(8)
	char OverrideFSM; //  0x270 Size(1)
	struct FName TargetFSM; //  0x274 Size(8)
	struct FName TargetASM; //  0x27c Size(8)

	Unknown GetFSMComponentByName(struct FName Name); // Function UFSM.StateMachineABP.GetFSMComponentByName(Final|Native|Public|BlueprintCallable|BlueprintPure) // <Game+0x11f7010>
};

// Class UFSM.StateMachineComponent
struct UStateMachineComponent : UActorComponent {
	Unknown FSM_ExitArguments; //  0xb8 Size(c)
	Unknown FSM_BeginArguments; //  0xc4 Size(c)
	Unknown FSM_UpdateArguments; //  0xd0 Size(8)
	char IsOverriden; //  0xe0 Size(1)
	char IsFullyInitialized; //  0xe1 Size(1)
	Unknown StateID; //  0xe2 Size(1)
	Unknown PreviousStateID; //  0xe3 Size(1)
	float StateTime; //  0xe4 Size(4)
	Unknown STATE_Null; //  0xe8 Size(40)
	Unknown State; //  0x128 Size(50)
	struct FDelegate InBegin; //  0x178 Size(10)
	struct FDelegate InUpdate; //  0x188 Size(10)
	struct FDelegate InExit; //  0x198 Size(10)
	struct FName StartupState; //  0x1a8 Size(8)
	Unknown States; //  0x1b0 Size(10)
	Unknown LINKS; //  0x1c0 Size(50)
	char UseEnumFromCPP; //  0x210 Size(1)
	struct FString CPP_EnumName; //  0x218 Size(10)
	Unknown K2_Enumerator; //  0x228 Size(8)
	Unknown ReplicationMode; //  0x230 Size(1)
	char BlueprintAutoFlowFSM; //  0x231 Size(1)
	char BlueprintAutoFlowTransitions; //  0x232 Size(1)
	char AlwaysTickFSM; //  0x233 Size(1)
	char ReplicateStateID; //  0x234 Size(1)
	char ReplicatePreviousStateID; //  0x235 Size(1)
	char ReplicateStateTime; //  0x236 Size(1)
	char Debug; //  0x237 Size(1)
	struct FMulticastInlineDelegate OnInitialized; //  0x238 Size(10)
	struct FMulticastInlineDelegate OnBegin; //  0x248 Size(10)
	struct FMulticastInlineDelegate OnUpdate; //  0x258 Size(10)
	struct FMulticastInlineDelegate OnExit; //  0x268 Size(10)

	void Update(Unknown UpState, struct FDelegate& Callback); // Function UFSM.StateMachineComponent.Update(Native|Protected|HasOutParms) // <Game+0x11f9d80>
};

