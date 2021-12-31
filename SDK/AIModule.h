// Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8_t {
	Success = 0,
	Blocked = 1,
	OffPath = 2,
	Aborted = 3,
	Skipped_DEPRECATED = 4,
	Invalid = 5,
	EPathFollowingResult_MAX = 6,
};

// Enum AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8_t {
	Processing = 0,
	Success = 1,
	Failed = 2,
	Aborted = 3,
	OwnerLost = 4,
	MissingParam = 5,
	EEnvQueryStatus_MAX = 6,
};

// Enum AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8_t {
	OnEveryPerception = 0,
	OnPerceptionChange = 1,
	EAISenseNotifyType_MAX = 2,
};

// Enum AIModule.EAITaskPriority
enum class EAITaskPriority : uint8_t {
	Lowest = 0,
	Low = 64,
	AutonomousAI = 127,
	High = 192,
	Ultimate = 254,
	EAITaskPriority_MAX = 255,
};

// Enum AIModule.EGenericAICheck
enum class EGenericAICheck : uint8_t {
	Less = 0,
	LessOrEqual = 1,
	Equal = 2,
	NotEqual = 3,
	GreaterOrEqual = 4,
	Greater = 5,
	IsTrue = 6,
	MAX = 7,
};

// Enum AIModule.EAILockSource
enum class EAILockSource : uint8_t {
	Animation = 0,
	Logic = 1,
	Script = 2,
	Gameplay = 3,
	MAX = 4,
};

// Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8_t {
	SoftScript = 0,
	Logic = 1,
	HardScript = 2,
	Reaction = 3,
	Ultimate = 4,
	MAX = 5,
};

// Enum AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8_t {
	Invalid = 0,
	FailedToStart = 1,
	InstantAbort = 2,
	FinishedAborting = 3,
	FinishedExecution = 4,
	Push = 5,
	EPawnActionEventType_MAX = 6,
};

// Enum AIModule.EPawnActionResult
enum class EPawnActionResult : uint8_t {
	NotStarted = 0,
	InProgress = 1,
	Success = 2,
	Failed = 3,
	Aborted = 4,
	EPawnActionResult_MAX = 5,
};

// Enum AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8_t {
	NeverStarted = 0,
	NotBeingAborted = 1,
	MarkPendingAbort = 2,
	LatentAbortInProgress = 3,
	AbortDone = 4,
	MAX = 5,
};

// Enum AIModule.FAIDistanceType
enum class FAIDistanceType : uint8_t {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	MAX = 3,
};

// Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8_t {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3,
};

// Enum AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8_t {
	None = 0,
	LowerPriority = 1,
	Self = 2,
	Both = 3,
	EBTFlowAbortMode_MAX = 4,
};

// Enum AIModule.EBTNodeResult
enum class EBTNodeResult : uint8_t {
	Succeeded = 0,
	Failed = 1,
	Aborted = 2,
	InProgress = 3,
	EBTNodeResult_MAX = 4,
};

// Enum AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8_t {
	Equal = 0,
	NotEqual = 1,
	Contain = 2,
	NotContain = 3,
	ETextKeyOperation_MAX = 4,
};

// Enum AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8_t {
	Equal = 0,
	NotEqual = 1,
	Less = 2,
	LessOrEqual = 3,
	Greater = 4,
	GreaterOrEqual = 5,
	EArithmeticKeyOperation_MAX = 6,
};

// Enum AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8_t {
	Set = 0,
	NotSet = 1,
	EBasicKeyOperation_MAX = 2,
};

// Enum AIModule.EBTParallelMode
enum class EBTParallelMode : uint8_t {
	AbortBackground = 0,
	WaitForBackground = 1,
	EBTParallelMode_MAX = 2,
};

// Enum AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8_t {
	Invalid = 0,
	Test = 1,
	And = 2,
	Or = 3,
	Not = 4,
	EBTDecoratorLogic_MAX = 5,
};

// Enum AIModule.EBTChildIndex
enum class EBTChildIndex : uint8_t {
	FirstNode = 0,
	TaskNode = 1,
	EBTChildIndex_MAX = 2,
};

// Enum AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8_t {
	ValueChange = 0,
	ResultChange = 1,
	EBTBlackboardRestart_MAX = 2,
};

// Enum AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8_t {
	Equal = 0,
	NotEqual = 1,
	EBlackBoardEntryComparison_MAX = 2,
};

// Enum AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8_t {
	NavmeshRaycast2D = 0,
	HierarchicalQuery = 1,
	RegularPathFinding = 2,
	EPathExistanceQueryType_MAX = 3,
};

// Enum AIModule.EPointOnCircleSpacingMethod
enum class EPointOnCircleSpacingMethod : uint8_t {
	BySpaceBetween = 0,
	ByNumberOfPoints = 1,
	EPointOnCircleSpacingMethod_MAX = 2,
};

// Enum AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8_t {
	Absolute = 0,
	RelativeToScores = 1,
	EEQSNormalizationType_MAX = 2,
};

// Enum AIModule.EEnvTestDistance
enum class EEnvTestDistance : uint8_t {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	DistanceAbsoluteZ = 3,
	EEnvTestDistance_MAX = 4,
};

// Enum AIModule.EEnvTestDot
enum class EEnvTestDot : uint8_t {
	Dot3D = 0,
	Dot2D = 1,
	EEnvTestDot_MAX = 2,
};

// Enum AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8_t {
	PathExist = 0,
	PathCost = 1,
	PathLength = 2,
	EEnvTestPathfinding_MAX = 3,
};

// Enum AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8_t {
	None = 0,
	SpecifiedValue = 1,
	FilterThreshold = 2,
	EEnvQueryTestClamping_MAX = 3,
};

// Enum AIModule.EEnvDirection
enum class EEnvDirection : uint8_t {
	TwoPoints = 0,
	Rotation = 1,
	EEnvDirection_MAX = 2,
};

// Enum AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : uint8_t {
	Box = 0,
	Sphere = 1,
	Capsule = 2,
	EEnvOverlapShape_MAX = 3,
};

// Enum AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8_t {
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	EEnvTraceShape_MAX = 4,
};

// Enum AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8_t {
	None = 0,
	Navigation = 1,
	Geometry = 2,
	NavigationOverLedges = 3,
	EEnvQueryTrace_MAX = 4,
};

// Enum AIModule.EAIParamType
enum class EAIParamType : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	MAX = 3,
};

// Enum AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	EEnvQueryParam_MAX = 3,
};

// Enum AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8_t {
	SingleResult = 0,
	RandomBest5Pct = 1,
	RandomBest25Pct = 2,
	AllMatching = 3,
	EEnvQueryRunMode_MAX = 4,
};

// Enum AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : uint8_t {
	AverageScore = 0,
	MinScore = 1,
	MaxScore = 2,
	Multiply = 3,
	EEnvTestScoreOperator_MAX = 4,
};

// Enum AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : uint8_t {
	AllPass = 0,
	AnyPass = 1,
	EEnvTestFilterOperator_MAX = 2,
};

// Enum AIModule.EEnvTestCost
enum class EEnvTestCost : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	EEnvTestCost_MAX = 3,
};

// Enum AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8_t {
	None = 0,
	Square = 1,
	Inverse = 2,
	Unused = 3,
	Constant = 4,
	Skip = 5,
	EEnvTestWeight_MAX = 6,
};

// Enum AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8_t {
	Linear = 0,
	Square = 1,
	InverseLinear = 2,
	SquareRoot = 3,
	Constant = 4,
	EEnvTestScoreEquation_MAX = 5,
};

// Enum AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8_t {
	Minimum = 0,
	Maximum = 1,
	Range = 2,
	Match = 3,
	EEnvTestFilterType_MAX = 4,
};

// Enum AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8_t {
	Filter = 0,
	Score = 1,
	FilterAndScore = 2,
	EEnvTestPurpose_MAX = 3,
};

// Enum AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8_t {
	All = 0,
	Best5Pct = 1,
	Best25Pct = 2,
	EEnvQueryHightlightMode_MAX = 3,
};

// Enum AIModule.ETeamAttitude
enum class ETeamAttitude : uint8_t {
	Friendly = 0,
	Neutral = 1,
	Hostile = 2,
	ETeamAttitude_MAX = 3,
};

// Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8_t {
	Failed = 0,
	AlreadyAtGoal = 1,
	RequestSuccessful = 2,
	EPathFollowingRequestResult_MAX = 3,
};

// Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8_t {
	Error = 0,
	NoMove = 1,
	DirectMove = 2,
	PartialPath = 3,
	PathToGoal = 4,
	EPathFollowingAction_MAX = 5,
};

// Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8_t {
	Idle = 0,
	Waiting = 1,
	Paused = 2,
	Moving = 3,
	EPathFollowingStatus_MAX = 4,
};

// Enum AIModule.EPawnActionFailHandling
enum class EPawnActionFailHandling : uint8_t {
	RequireSuccess = 0,
	IgnoreFailure = 1,
	EPawnActionFailHandling_MAX = 2,
};

// Enum AIModule.EPawnSubActionTriggeringPolicy
enum class EPawnSubActionTriggeringPolicy : uint8_t {
	CopyBeforeTriggering = 0,
	ReuseInstances = 1,
	EPawnSubActionTriggeringPolicy_MAX = 2,
};

// Enum AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : uint8_t {
	UsePathfinding = 0,
	StraightLine = 1,
	EPawnActionMoveMode_MAX = 2,
};

// Class AIModule.BTNode
class UBTNode : public Object {

public:

	struct FString NodeName; // 0x30 (16)
	struct Unknown TreeAsset; // 0x40 (8)
	struct Unknown ParentNode; // 0x48 (8)
};

// Class AIModule.BTTaskNode
class UBTTaskNode : public UBTNode {

public:

	struct TArray<Unknown> Services; // 0x58 (16)
	char bIgnoreRestartSelf : 0; // 0x68 (1)
};

// Class AIModule.BTTask_BlackboardBase
class UBTTask_BlackboardBase : public UBTTaskNode {

public:

	struct Unknown BlackboardKey; // 0x70 (40)
};

// Class AIModule.AIController
class AAIController : public AController {

public:

	char bStartAILogicOnPossess : 0; // 0x3D8 (1)
	char bStopAILogicOnUnposses : 0; // 0x3D8 (1)
	char bLOSflag : 0; // 0x3D8 (1)
	char bSkipExtraLOSChecks : 0; // 0x3D8 (1)
	char bAllowStrafe : 0; // 0x3D8 (1)
	char bWantsPlayerState : 0; // 0x3D8 (1)
	char bSetControlRotationFromPawnOrientation : 0; // 0x3D8 (1)
	struct Unknown PathFollowingComponent; // 0x3E0 (8)
	struct Unknown BrainComponent; // 0x3E8 (8)
	struct Unknown PerceptionComponent; // 0x3F0 (8)
	struct Unknown ActionsComp; // 0x3F8 (8)
	struct Unknown Blackboard; // 0x400 (8)
	struct Unknown CachedGameplayTasksComponent; // 0x408 (8)
	struct Unknown* DefaultNavigationFilterClass; // 0x410 (8)
	struct FMulticastInlineDelegate ReceiveMoveCompleted; // 0x418 (16)

	char UseBlackboard(struct Unknown BlackboardAsset, struct Unknown& BlackboardComponent); // Function AIModule.AIController.UseBlackboard(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4769670>
	void UnclaimTaskResource(struct Unknown* ResourceClass); // Function AIModule.AIController.UnclaimTaskResource(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47694E0>
	void SetPathFollowingComponent(struct Unknown NewPFComponent); // Function AIModule.AIController.SetPathFollowingComponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4769010>
	void SetMoveBlockDetection(char bEnable); // Function AIModule.AIController.SetMoveBlockDetection(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4768F80>
	char RunBehaviorTree(struct Unknown BTAsset); // Function AIModule.AIController.RunBehaviorTree(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4768DB0>
	void OnUsingBlackBoard(struct Unknown BlackboardComp, struct Unknown BlackboardAsset); // Function AIModule.AIController.OnUsingBlackBoard(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnGameplayTaskResourcesClaimed(struct Unknown NewlyClaimed, struct Unknown FreshlyReleased); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4768B40>
	char MoveToLocation(struct Unknown& Dest, float AcceptanceRadius, char bStopOnOverlap, char bUsePathfinding, char bProjectDestinationToNavigation, char bCanStrafe, struct Unknown* FilterClass, char bAllowPartialPath); // Function AIModule.AIController.MoveToLocation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47688D0>
	char MoveToActor(struct Unknown Goal, float AcceptanceRadius, char bStopOnOverlap, char bUsePathfinding, char bCanStrafe, struct Unknown* FilterClass, char bAllowPartialPath); // Function AIModule.AIController.MoveToActor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47686B0>
	void K2_SetFocus(struct Unknown NewFocus); // Function AIModule.AIController.K2_SetFocus(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4768520>
	void K2_SetFocalPoint(struct Unknown FP); // Function AIModule.AIController.K2_SetFocalPoint(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4768490>
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4768470>
	char HasPartialPath(); // Function AIModule.AIController.HasPartialPath(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4768290>
	struct Unknown GetPathFollowingComponent(); // Function AIModule.AIController.GetPathFollowingComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47680D0>
	char GetMoveStatus(); // Function AIModule.AIController.GetMoveStatus(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47680A0>
	struct Unknown GetImmediateMoveDestination(); // Function AIModule.AIController.GetImmediateMoveDestination(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4767F70>
	struct Unknown GetFocusActor(); // Function AIModule.AIController.GetFocusActor(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4767F40>
	struct Unknown GetFocalPointOnActor(struct Unknown Actor); // Function AIModule.AIController.GetFocalPointOnActor(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4767E90>
	struct Unknown GetFocalPoint(); // Function AIModule.AIController.GetFocalPoint(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4767E50>
	struct Unknown GetAIPerceptionComponent(); // Function AIModule.AIController.GetAIPerceptionComponent(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4581BB0>
	void ClaimTaskResource(struct Unknown* ResourceClass); // Function AIModule.AIController.ClaimTaskResource(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4767880>
};

// Class AIModule.BTService
class UBTService : public UBTAuxiliaryNode {

public:

	float Interval; // 0x60 (4)
	float RandomDeviation; // 0x64 (4)
	char bCallTickOnSearchStart : 0; // 0x68 (1)
	char bRestartTimerOnEachActivation : 0; // 0x68 (1)
};

// Class AIModule.AIAsyncTaskBlueprintProxy
class UAIAsyncTaskBlueprintProxy : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFail; // 0x38 (16)

	void OnMoveCompleted(struct Unknown RequestID, char MovementResult); // Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4768C10>
};

// Class AIModule.AIDataProvider_QueryParams
class UAIDataProvider_QueryParams : public UAIDataProvider {

public:

	struct FName ParamName; // 0x28 (8)
	float FloatValue; // 0x30 (4)
	int32_t IntValue; // 0x34 (4)
	char BoolValue : 0; // 0x38 (1)
};

// Class AIModule.AIDataProvider_Random
class UAIDataProvider_Random : public UAIDataProvider_QueryParams {

public:

	float Min; // 0x40 (4)
	float MAX; // 0x44 (4)
	char bInteger : 0; // 0x48 (1)
};

// Class AIModule.AIPerceptionComponent
class UAIPerceptionComponent : public UActorComponent {

public:

	struct TArray<Unknown> SensesConfig; // 0xB0 (16)
	struct Unknown* DominantSense; // 0xC0 (8)
	struct Unknown AIOwner; // 0xD8 (8)
	struct FMulticastInlineDelegate OnPerceptionUpdated; // 0x160 (16)
	struct FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x170 (16)

	void SetSenseEnabled(struct Unknown* SenseClass, char bEnable); // Function AIModule.AIPerceptionComponent.SetSenseEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4769090>
	void RequestStimuliListenerUpdate(); // Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4768D90>
	void OnOwnerEndPlay(struct Unknown Actor, char EndPlayReason); // Function AIModule.AIPerceptionComponent.OnOwnerEndPlay(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4768CD0>
	void GetPerceivedHostileActors(struct TArray<Unknown>& OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47681E0>
	void GetPerceivedActors(struct Unknown* SenseToUse, struct TArray<Unknown>& OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedActors(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47680F0>
	void GetKnownPerceivedActors(struct Unknown* SenseToUse, struct TArray<Unknown>& OutActors); // Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4767FB0>
	void GetCurrentlyPerceivedActors(struct Unknown* SenseToUse, struct TArray<Unknown>& OutActors); // Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4767D60>
	char GetActorsPerception(struct Unknown Actor, struct Unknown& Info); // Function AIModule.AIPerceptionComponent.GetActorsPerception(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4767B60>
	void ForgetAll(); // Function AIModule.AIPerceptionComponent.ForgetAll(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4767AC0>
};

// Class AIModule.AIPerceptionStimuliSourceComponent
class UAIPerceptionStimuliSourceComponent : public UActorComponent {

public:

	char bAutoRegisterAsSource : 0; // 0xB0 (1)
	struct TArray<Unknown> RegisterAsSourceForSenses; // 0xB8 (16)

	void UnregisterFromSense(struct Unknown* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x476E060>
	void UnregisterFromPerceptionSystem(); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x476E040>
	void RegisterWithPerceptionSystem(); // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x476D960>
	void RegisterForSense(struct Unknown* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x476D7F0>
};

// Class AIModule.AISubsystem
class UAISubsystem : public Object {

public:

	struct Unknown AISystem; // 0x30 (8)
};

// Class AIModule.AIPerceptionSystem
class UAIPerceptionSystem : public UAISubsystem {

public:

	struct TArray<Unknown> Senses; // 0x88 (16)
	float PerceptionAgingRate; // 0x98 (4)

	void ReportPerceptionEvent(struct Unknown WorldContextObject, struct Unknown PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportPerceptionEvent(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x476DD90>
	void ReportEvent(struct Unknown PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportEvent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x476DB50>
	char RegisterPerceptionStimuliSource(struct Unknown WorldContextObject, struct Unknown* Sense, struct Unknown Target); // Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x476D870>
	void OnPerceptionStimuliSourceEndPlay(struct Unknown Actor, char EndPlayReason); // Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay(Final|Native|Protected) // <BravoHotelClient-Win64-Shipping.protected.exe+0x476D730>
	struct Unknown* GetSenseClassForStimulus(struct Unknown WorldContextObject, struct Unknown& Stimulus); // Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x476D600>
};

// Class AIModule.AISense
class UAISense : public Object {

public:

	float DefaultExpirationAge; // 0x28 (4)
	enum class Unknow NotifyType; // 0x2C (1)
	char bWantsNewPawnNotification : 0; // 0x30 (1)
	char bAutoRegisterAllPawnsAsSources : 0; // 0x30 (1)
	struct Unknown PerceptionSystemInstance; // 0x38 (8)
};

// Class AIModule.AISense_Blueprint
class UAISense_Blueprint : public UAISense {

public:

	struct Unknown* ListenerDataType; // 0x80 (8)
	struct TArray<Unknown> ListenerContainer; // 0x88 (16)
	struct TArray<Unknown> UnprocessedEvents; // 0x98 (16)

	float OnUpdate(struct TArray<Unknown>& EventsToProcess); // Function AIModule.AISense_Blueprint.OnUpdate(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnListenerUpdated(struct Unknown ActorListener, struct Unknown PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUpdated(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnListenerUnregistered(struct Unknown ActorListener, struct Unknown PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUnregistered(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnListenerRegistered(struct Unknown ActorListener, struct Unknown PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerRegistered(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void K2_OnNewPawn(struct Unknown NewPawn); // Function AIModule.AISense_Blueprint.K2_OnNewPawn(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetAllListenerComponents(struct TArray<Unknown>& ListenerComponents); // Function AIModule.AISense_Blueprint.GetAllListenerComponents(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x476D550>
	void GetAllListenerActors(struct TArray<Unknown>& ListenerActors); // Function AIModule.AISense_Blueprint.GetAllListenerActors(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x476D4A0>
};

// Class AIModule.AISense_Damage
class UAISense_Damage : public UAISense {

public:

	struct TArray<Unknown> RegisteredEvents; // 0x80 (16)

	void ReportDamageEvent(struct Unknown WorldContextObject, struct Unknown DamagedActor, struct Unknown Instigator, float DamageAmount, struct Unknown EventLocation, struct Unknown HitLocation); // Function AIModule.AISense_Damage.ReportDamageEvent(Final|Native|Static|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x476D980>
};

// Class AIModule.AISense_Hearing
class UAISense_Hearing : public UAISense {

public:

	struct TArray<Unknown> NoiseEvents; // 0x80 (16)
	float SpeedOfSoundSq; // 0x90 (4)

	void ReportNoiseEvent(struct Unknown WorldContextObject, struct Unknown NoiseLocation, float Loudness, struct Unknown Instigator, float MaxRange, struct FName Tag); // Function AIModule.AISense_Hearing.ReportNoiseEvent(Final|Native|Static|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x476DBD0>
};

// Class AIModule.AISense_Prediction
class UAISense_Prediction : public UAISense {

public:

	struct TArray<Unknown> RegisteredEvents; // 0x80 (16)

	void RequestPawnPredictionEvent(struct Unknown Requestor, struct Unknown PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestPawnPredictionEvent(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x476DF40>
	void RequestControllerPredictionEvent(struct Unknown Requestor, struct Unknown PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestControllerPredictionEvent(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x476DE40>
};

// Class AIModule.AISense_Sight
class UAISense_Sight : public UAISense {

public:

	int32_t MaxTracesPerTick; // 0x148 (4)
	int32_t MinQueriesPerTimeSliceCheck; // 0x14C (4)
	double MaxTimeSlicePerTick; // 0x150 (8)
	float HighImportanceQueryDistanceThreshold; // 0x158 (4)
	float MaxQueryImportance; // 0x160 (4)
	float SightLimitQueryImportance; // 0x164 (4)
};

// Class AIModule.AISense_Team
class UAISense_Team : public UAISense {

public:

	struct TArray<Unknown> RegisteredEvents; // 0x80 (16)
};

// Class AIModule.AISense_Touch
class UAISense_Touch : public UAISense {

public:

	struct TArray<Unknown> RegisteredEvents; // 0x80 (16)
};

// Class AIModule.AISenseConfig
class UAISenseConfig : public Object {

public:

	struct Unknown DebugColor; // 0x28 (4)
	float MaxAge; // 0x2C (4)
	char bStartsEnabled : 0; // 0x30 (1)
};

// Class AIModule.AISenseConfig_Blueprint
class UAISenseConfig_Blueprint : public UAISenseConfig {

public:

	struct Unknown* Implementation; // 0x48 (8)
};

// Class AIModule.AISenseConfig_Damage
class UAISenseConfig_Damage : public UAISenseConfig {

public:

	struct Unknown* Implementation; // 0x48 (8)
};

// Class AIModule.AISenseConfig_Hearing
class UAISenseConfig_Hearing : public UAISenseConfig {

public:

	struct Unknown* Implementation; // 0x48 (8)
	float HearingRange; // 0x50 (4)
	float LoSHearingRange; // 0x54 (4)
	char bUseLoSHearing : 0; // 0x58 (1)
	struct Unknown DetectionByAffiliation; // 0x5C (4)
};

// Class AIModule.AISenseConfig_Sight
class UAISenseConfig_Sight : public UAISenseConfig {

public:

	struct Unknown* Implementation; // 0x48 (8)
	float SightRadius; // 0x50 (4)
	float LoseSightRadius; // 0x54 (4)
	float PeripheralVisionAngleDegrees; // 0x58 (4)
	struct Unknown DetectionByAffiliation; // 0x5C (4)
	float AutoSuccessRangeFromLastSeenLocation; // 0x60 (4)
};

// Class AIModule.AISenseEvent_Damage
class UAISenseEvent_Damage : public UAISenseEvent {

public:

	struct Unknown Event; // 0x28 (48)
};

// Class AIModule.AISenseEvent_Hearing
class UAISenseEvent_Hearing : public UAISenseEvent {

public:

	struct Unknown Event; // 0x28 (48)
};

// Class AIModule.AISystem
class UAISystem : public UAISystemBase {

public:

	struct Unknown PerceptionSystemClassName; // 0x58 (24)
	struct Unknown HotSpotManagerClassName; // 0x70 (24)
	float AcceptanceRadius; // 0x88 (4)
	float PathfollowingRegularPathPointAcceptanceRadius; // 0x8C (4)
	float PathfollowingNavLinkAcceptanceRadius; // 0x90 (4)
	char bFinishMoveOnGoalOverlap : 0; // 0x94 (1)
	char bAcceptPartialPaths : 0; // 0x95 (1)
	char bAllowStrafing : 0; // 0x96 (1)
	char bEnableBTAITasks : 0; // 0x97 (1)
	char bAllowControllersAsEQSQuerier : 0; // 0x98 (1)
	char bEnableDebuggerPlugin : 0; // 0x99 (1)
	char bForgetStaleActors : 0; // 0x9A (1)
	char DefaultSightCollisionChannel; // 0x9B (1)
	struct Unknown BehaviorTreeManager; // 0xA0 (8)
	struct Unknown EnvironmentQueryManager; // 0xA8 (8)
	struct Unknown PerceptionSystem; // 0xB0 (8)
	struct TArray<Unknown> AllProxyObjects; // 0xB8 (16)
	struct Unknown HotSpotManager; // 0xC8 (8)
	struct Unknown NavLocalGrids; // 0xD0 (8)

	void AILoggingVerbose(); // Function AIModule.AISystem.AILoggingVerbose(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x369DC30>
	void AIIgnorePlayers(); // Function AIModule.AISystem.AIIgnorePlayers(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C92A50>
};

// Class AIModule.AITask
class UAITask : public UGameplayTask {

public:

	struct Unknown OwnerController; // 0x68 (8)
};

// Class AIModule.AITask_MoveTo
class UAITask_MoveTo : public UAITask {

public:

	struct FMulticastInlineDelegate OnRequestFailed; // 0x70 (16)
	struct FMulticastInlineDelegate OnMoveFinished; // 0x80 (16)
	struct Unknown MoveRequest; // 0x90 (64)

	struct Unknown AIMoveTo(struct Unknown Controller, struct Unknown GoalLocation, struct Unknown GoalActor, float AcceptanceRadius, char StopOnOverlap, char AcceptPartialPath, char bUsePathfinding, char bLockAILogic, char bUseContinuosGoalTracking, char ProjectGoalOnNavigation); // Function AIModule.AITask_MoveTo.AIMoveTo(Final|Native|Static|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4771EF0>
};

// Class AIModule.BehaviorTree
class UBehaviorTree : public Object {

public:

	struct Unknown RootNode; // 0x30 (8)
	struct Unknown BlackboardAsset; // 0x38 (8)
	struct TArray<Unknown> RootDecorators; // 0x40 (16)
	struct TArray<Unknown> RootDecoratorOps; // 0x50 (16)
};

// Class AIModule.BrainComponent
class UBrainComponent : public UActorComponent {

public:

	struct Unknown BlackboardComp; // 0xB8 (8)
	struct Unknown AIOwner; // 0xC0 (8)

	void StopLogic(struct FString reason); // Function AIModule.BrainComponent.StopLogic(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4778C70>
	void StartLogic(); // Function AIModule.BrainComponent.StartLogic(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x205D580>
	void RestartLogic(); // Function AIModule.BrainComponent.RestartLogic(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1E651B0>
	char IsRunning(); // Function AIModule.BrainComponent.IsRunning(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4777F70>
	char IsPaused(); // Function AIModule.BrainComponent.IsPaused(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4777F40>
};

// Class AIModule.BehaviorTreeComponent
class UBehaviorTreeComponent : public UBrainComponent {

public:

	struct TArray<Unknown> NodeInstances; // 0x130 (16)
	struct Unknown DefaultBehaviorTreeAsset; // 0x268 (8)

	void SetDynamicSubtree(struct Unknown InjectTag, struct Unknown BehaviorAsset); // Function AIModule.BehaviorTreeComponent.SetDynamicSubtree(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4772DF0>
	float GetTagCooldownEndTime(struct Unknown CooldownTag); // Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4772540>
	void AddCooldownTagDuration(struct Unknown CooldownTag, float CooldownDuration, char bAddToExistingDuration); // Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47721C0>
};

// Class AIModule.BehaviorTreeManager
class UBehaviorTreeManager : public Object {

public:

	int32_t MaxDebuggerSteps; // 0x28 (4)
	struct TArray<Unknown> LoadedTemplates; // 0x30 (16)
	struct TArray<Unknown> ActiveComponents; // 0x40 (16)
};

// Class AIModule.BlackboardComponent
class UBlackboardComponent : public UActorComponent {

public:

	struct Unknown BrainComp; // 0xB0 (8)
	struct Unknown DefaultBlackboardAsset; // 0xB8 (8)
	struct Unknown BlackboardAsset; // 0xC0 (8)
	struct TArray<Unknown> KeyInstances; // 0xE8 (16)

	void SetValueAsVector(struct FName& KeyName, struct Unknown VectorValue); // Function AIModule.BlackboardComponent.SetValueAsVector(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47736B0>
	void SetValueAsString(struct FName& KeyName, struct FString StringValue); // Function AIModule.BlackboardComponent.SetValueAsString(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4773560>
	void SetValueAsRotator(struct FName& KeyName, struct Unknown VectorValue); // Function AIModule.BlackboardComponent.SetValueAsRotator(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4773470>
	void SetValueAsObject(struct FName& KeyName, struct Unknown ObjectValue); // Function AIModule.BlackboardComponent.SetValueAsObject(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47733A0>
	void SetValueAsName(struct FName& KeyName, struct FName NameValue); // Function AIModule.BlackboardComponent.SetValueAsName(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47732D0>
	void SetValueAsInt(struct FName& KeyName, int32_t IntValue); // Function AIModule.BlackboardComponent.SetValueAsInt(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4773200>
	void SetValueAsFloat(struct FName& KeyName, float FloatValue); // Function AIModule.BlackboardComponent.SetValueAsFloat(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4773130>
	void SetValueAsEnum(struct FName& KeyName, char EnumValue); // Function AIModule.BlackboardComponent.SetValueAsEnum(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4773060>
	void SetValueAsClass(struct FName& KeyName, struct Unknown* ClassValue); // Function AIModule.BlackboardComponent.SetValueAsClass(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4772F90>
	void SetValueAsBool(struct FName& KeyName, char BoolValue); // Function AIModule.BlackboardComponent.SetValueAsBool(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4772EC0>
	char IsVectorValueSet(struct FName& KeyName); // Function AIModule.BlackboardComponent.IsVectorValueSet(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4772C90>
	struct Unknown GetValueAsVector(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsVector(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4772BE0>
	struct FString GetValueAsString(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsString(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4772AF0>
	struct Unknown GetValueAsRotator(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsRotator(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4772A40>
	struct Unknown GetValueAsObject(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsObject(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47729A0>
	struct FName GetValueAsName(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsName(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4772900>
	int32_t GetValueAsInt(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsInt(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4772860>
	float GetValueAsFloat(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsFloat(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47727C0>
	char GetValueAsEnum(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsEnum(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4772720>
	struct Unknown* GetValueAsClass(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsClass(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4772680>
	char GetValueAsBool(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsBool(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47725E0>
	char GetRotationFromEntry(struct FName& KeyName, struct Unknown& ResultRotation); // Function AIModule.BlackboardComponent.GetRotationFromEntry(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4772450>
	char GetLocationFromEntry(struct FName& KeyName, struct Unknown& ResultLocation); // Function AIModule.BlackboardComponent.GetLocationFromEntry(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4772360>
	void ClearValue(struct FName& KeyName); // Function AIModule.BlackboardComponent.ClearValue(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47722D0>
};

// Class AIModule.BlackboardData
class UBlackboardData : public UDataAsset {

public:

	struct Unknown Parent; // 0x30 (8)
	struct TArray<Unknown> Keys; // 0x38 (16)
	char bHasSynchronizedKeys : 0; // 0x48 (1)
};

// Class AIModule.BlackboardKeyType_Class
class UBlackboardKeyType_Class : public UBlackboardKeyType {

public:

	struct Unknown* BaseClass; // 0x30 (8)
};

// Class AIModule.BlackboardKeyType_Enum
class UBlackboardKeyType_Enum : public UBlackboardKeyType {

public:

	struct Unknown EnumType; // 0x30 (8)
	struct FString EnumName; // 0x38 (16)
	char bIsEnumNameValid : 0; // 0x48 (1)
};

// Class AIModule.BlackboardKeyType_NativeEnum
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType {

public:

	struct FString EnumName; // 0x30 (16)
	struct Unknown EnumType; // 0x40 (8)
};

// Class AIModule.BlackboardKeyType_Object
class UBlackboardKeyType_Object : public UBlackboardKeyType {

public:

	struct Unknown* BaseClass; // 0x30 (8)
};

// Class AIModule.BlackboardKeyType_String
class UBlackboardKeyType_String : public UBlackboardKeyType {

public:

	struct FString StringValue; // 0x30 (16)
};

// Class AIModule.BTCompositeNode
class UBTCompositeNode : public UBTNode {

public:

	struct TArray<Unknown> Children; // 0x58 (16)
	struct TArray<Unknown> Services; // 0x68 (16)
	char bApplyDecoratorScope : 0; // 0x88 (1)
};

// Class AIModule.BTComposite_SimpleParallel
class UBTComposite_SimpleParallel : public UBTCompositeNode {

public:

	char FinishMode; // 0x90 (1)
};

// Class AIModule.BTDecorator
class UBTDecorator : public UBTAuxiliaryNode {

public:

	char bInverseCondition : 0; // 0x60 (1)
	char FlowAbortMode; // 0x64 (1)
};

// Class AIModule.BTDecorator_BlackboardBase
class UBTDecorator_BlackboardBase : public UBTDecorator {

public:

	struct Unknown BlackboardKey; // 0x68 (40)
};

// Class AIModule.BTDecorator_Blackboard
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase {

public:

	int32_t IntValue; // 0x90 (4)
	float FloatValue; // 0x94 (4)
	struct FString StringValue; // 0x98 (16)
	struct FString CachedDescription; // 0xA8 (16)
	char OperationType; // 0xB8 (1)
	char NotifyObserver; // 0xB9 (1)
};

// Class AIModule.BTDecorator_BlueprintBase
class UBTDecorator_BlueprintBase : public UBTDecorator {

public:

	struct Unknown AIOwner; // 0x68 (8)
	struct Unknown ActorOwner; // 0x70 (8)
	struct TArray<Unknown> ObservedKeyNames; // 0x78 (16)
	char bShowPropertyDetails : 0; // 0x98 (1)
	char bCheckConditionOnlyBlackBoardChanges : 0; // 0x98 (1)
	char bIsObservingBB : 0; // 0x98 (1)

	void ReceiveTickAI(struct Unknown OwnerController, struct Unknown ControlledPawn, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveTick(struct Unknown OwnerActor, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTick(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveObserverDeactivatedAI(struct Unknown OwnerController, struct Unknown ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveObserverDeactivated(struct Unknown OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveObserverActivatedAI(struct Unknown OwnerController, struct Unknown ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveObserverActivated(struct Unknown OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveExecutionStartAI(struct Unknown OwnerController, struct Unknown ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveExecutionStart(struct Unknown OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveExecutionFinishAI(struct Unknown OwnerController, struct Unknown ControlledPawn, char NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveExecutionFinish(struct Unknown OwnerActor, char NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	char PerformConditionCheckAI(struct Unknown OwnerController, struct Unknown ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	char PerformConditionCheck(struct Unknown OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	char IsDecoratorObserverActive(); // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive(Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4777F10>
	char IsDecoratorExecutionActive(); // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive(Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4777EE0>
};

// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator {

public:

	struct Unknown ActorToCheck; // 0x68 (40)
	enum class Unknow TagsToMatch; // 0x90 (1)
	struct Unknown GameplayTags; // 0x98 (32)
	struct FString CachedDescription; // 0xB8 (16)
};

// Class AIModule.BTDecorator_CompareBBEntries
class UBTDecorator_CompareBBEntries : public UBTDecorator {

public:

	char Operator; // 0x68 (1)
	struct Unknown BlackboardKeyA; // 0x70 (40)
	struct Unknown BlackboardKeyB; // 0x98 (40)
};

// Class AIModule.BTDecorator_ConeCheck
class UBTDecorator_ConeCheck : public UBTDecorator {

public:

	float ConeHalfAngle; // 0x68 (4)
	struct Unknown ConeOrigin; // 0x70 (40)
	struct Unknown ConeDirection; // 0x98 (40)
	struct Unknown Observed; // 0xC0 (40)
};

// Class AIModule.BTDecorator_Cooldown
class UBTDecorator_Cooldown : public UBTDecorator {

public:

	float CoolDownTime; // 0x68 (4)
};

// Class AIModule.BTDecorator_DoesPathExist
class UBTDecorator_DoesPathExist : public UBTDecorator {

public:

	struct Unknown BlackboardKeyA; // 0x68 (40)
	struct Unknown BlackboardKeyB; // 0x90 (40)
	char bUseSelf : 0; // 0xB8 (1)
	char PathQueryType; // 0xBC (1)
	struct Unknown* FilterClass; // 0xC0 (8)
};

// Class AIModule.BTDecorator_IsAtLocation
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase {

public:

	float AcceptableRadius; // 0x90 (4)
	struct Unknown ParametrizedAcceptableRadius; // 0x98 (56)
	enum class Unknow GeometricDistanceType; // 0xD0 (1)
	char bUseParametrizedRadius : 0; // 0xD4 (1)
	char bUseNavAgentGoalLocation : 0; // 0xD4 (1)
	char bPathFindingBasedTest : 0; // 0xD4 (1)
};

// Class AIModule.BTDecorator_IsBBEntryOfClass
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase {

public:

	struct Unknown* TestClass; // 0x90 (8)
};

// Class AIModule.BTDecorator_KeepInCone
class UBTDecorator_KeepInCone : public UBTDecorator {

public:

	float ConeHalfAngle; // 0x68 (4)
	struct Unknown ConeOrigin; // 0x70 (40)
	struct Unknown Observed; // 0x98 (40)
	char bUseSelfAsOrigin : 0; // 0xC0 (1)
	char bUseSelfAsObserved : 0; // 0xC0 (1)
};

// Class AIModule.BTDecorator_Loop
class UBTDecorator_Loop : public UBTDecorator {

public:

	int32_t NumLoops; // 0x68 (4)
	char bInfiniteLoop : 0; // 0x6C (1)
	float InfiniteLoopTimeoutTime; // 0x70 (4)
};

// Class AIModule.BTDecorator_SetTagCooldown
class UBTDecorator_SetTagCooldown : public UBTDecorator {

public:

	struct Unknown CooldownTag; // 0x68 (8)
	float CooldownDuration; // 0x70 (4)
	char bAddToExistingDuration : 0; // 0x74 (1)
};

// Class AIModule.BTDecorator_TagCooldown
class UBTDecorator_TagCooldown : public UBTDecorator {

public:

	struct Unknown CooldownTag; // 0x68 (8)
	float CooldownDuration; // 0x70 (4)
	char bAddToExistingDuration : 0; // 0x74 (1)
	char bActivatesCooldown : 0; // 0x75 (1)
};

// Class AIModule.BTDecorator_TimeLimit
class UBTDecorator_TimeLimit : public UBTDecorator {

public:

	float TimeLimit; // 0x68 (4)
};

// Class AIModule.BTService_BlackboardBase
class UBTService_BlackboardBase : public UBTService {

public:

	struct Unknown BlackboardKey; // 0x70 (40)
};

// Class AIModule.BTService_BlueprintBase
class UBTService_BlueprintBase : public UBTService {

public:

	struct Unknown AIOwner; // 0x70 (8)
	struct Unknown ActorOwner; // 0x78 (8)
	char bShowPropertyDetails : 0; // 0x90 (1)
	char bShowEventDetails : 0; // 0x90 (1)

	void ReceiveTickAI(struct Unknown OwnerController, struct Unknown ControlledPawn, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTickAI(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveTick(struct Unknown OwnerActor, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTick(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveSearchStartAI(struct Unknown OwnerController, struct Unknown ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveSearchStart(struct Unknown OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStart(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveDeactivationAI(struct Unknown OwnerController, struct Unknown ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveDeactivation(struct Unknown OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivation(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveActivationAI(struct Unknown OwnerController, struct Unknown ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveActivationAI(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveActivation(struct Unknown OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveActivation(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	char IsServiceActive(); // Function AIModule.BTService_BlueprintBase.IsServiceActive(Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x477BB00>
};

// Class AIModule.BTService_DefaultFocus
class UBTService_DefaultFocus : public UBTService_BlackboardBase {

public:

	char FocusPriority; // 0x98 (1)
};

// Class AIModule.BTService_RunEQS
class UBTService_RunEQS : public UBTService_BlackboardBase {

public:

	struct Unknown EQSRequest; // 0x98 (72)
};

// Class AIModule.BTTask_BlueprintBase
class UBTTask_BlueprintBase : public UBTTaskNode {

public:

	struct Unknown AIOwner; // 0x70 (8)
	struct Unknown ActorOwner; // 0x78 (8)
	struct Unknown TickInterval; // 0x80 (8)
	char bShowPropertyDetails : 0; // 0xA0 (1)

	void SetFinishOnMessageWithId(struct FName MessageName, int32_t RequestID); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId(Final|Native|Protected|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x477BC10>
	void SetFinishOnMessage(struct FName MessageName); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage(Final|Native|Protected|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x477BB90>
	void ReceiveTickAI(struct Unknown OwnerController, struct Unknown ControlledPawn, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTickAI(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveTick(struct Unknown OwnerActor, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTick(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveExecuteAI(struct Unknown OwnerController, struct Unknown ControlledPawn); // Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveExecute(struct Unknown OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveExecute(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveAbortAI(struct Unknown OwnerController, struct Unknown ControlledPawn); // Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveAbort(struct Unknown OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveAbort(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	char IsTaskExecuting(); // Function AIModule.BTTask_BlueprintBase.IsTaskExecuting(Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x477BB60>
	char IsTaskAborting(); // Function AIModule.BTTask_BlueprintBase.IsTaskAborting(Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x477BB30>
	void FinishExecute(char bSuccess); // Function AIModule.BTTask_BlueprintBase.FinishExecute(Final|Native|Protected|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x477BA70>
	void FinishAbort(); // Function AIModule.BTTask_BlueprintBase.FinishAbort(Final|Native|Protected|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x477BA50>
};

// Class AIModule.BTTask_FinishWithResult
class UBTTask_FinishWithResult : public UBTTaskNode {

public:

	char Result; // 0x70 (1)
};

// Class AIModule.BTTask_GameplayTaskBase
class UBTTask_GameplayTaskBase : public UBTTaskNode {

public:

	char bWaitForGameplayTask : 0; // 0x70 (1)
};

// Class AIModule.BTTask_MakeNoise
class UBTTask_MakeNoise : public UBTTaskNode {

public:

	float Loudnes; // 0x70 (4)
};

// Class AIModule.BTTask_MoveTo
class UBTTask_MoveTo : public UBTTask_BlackboardBase {

public:

	float AcceptableRadius; // 0x98 (4)
	struct Unknown* FilterClass; // 0xA0 (8)
	float ObservedBlackboardValueTolerance; // 0xA8 (4)
	char bObserveBlackboardValue : 0; // 0xAC (1)
	char bAllowStrafe : 0; // 0xAC (1)
	char bAllowPartialPath : 0; // 0xAC (1)
	char bTrackMovingGoal : 0; // 0xAC (1)
	char bProjectGoalLocation : 0; // 0xAC (1)
	char bReachTestIncludesAgentRadius : 0; // 0xAC (1)
	char bReachTestIncludesGoalRadius : 0; // 0xAC (1)
	char bStopOnOverlap : 0; // 0xAC (1)
	char bStopOnOverlapNeedsUpdate : 0; // 0xAD (1)
};

// Class AIModule.BTTask_MoveDirectlyToward
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo {

public:

	char bDisablePathUpdateOnGoalLocationChange : 0; // 0xB0 (1)
	char bProjectVectorGoalToNavigation : 0; // 0xB0 (1)
	char bUpdatedDeprecatedProperties : 0; // 0xB0 (1)
};

// Class AIModule.BTTask_PlayAnimation
class UBTTask_PlayAnimation : public UBTTaskNode {

public:

	struct Unknown AnimationToPlay; // 0x70 (8)
	char bLooping : 0; // 0x78 (1)
	char bNonBlocking : 0; // 0x78 (1)
	struct Unknown MyOwnerComp; // 0x80 (8)
	struct Unknown CachedSkelMesh; // 0x88 (8)
};

// Class AIModule.BTTask_PlaySound
class UBTTask_PlaySound : public UBTTaskNode {

public:

	struct Unknown SoundToPlay; // 0x70 (8)
};

// Class AIModule.BTTask_PushPawnAction
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase {

public:

	struct Unknown Action; // 0x70 (8)
};

// Class AIModule.BTTask_RotateToFaceBBEntry
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase {

public:

	float Precision; // 0x98 (4)
};

// Class AIModule.BTTask_RunBehavior
class UBTTask_RunBehavior : public UBTTaskNode {

public:

	struct Unknown BehaviorAsset; // 0x70 (8)
};

// Class AIModule.BTTask_RunBehaviorDynamic
class UBTTask_RunBehaviorDynamic : public UBTTaskNode {

public:

	struct Unknown InjectionTag; // 0x70 (8)
	struct Unknown DefaultBehaviorAsset; // 0x78 (8)
	struct Unknown BehaviorAsset; // 0x80 (8)
};

// Class AIModule.BTTask_RunEQSQuery
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase {

public:

	struct Unknown QueryTemplate; // 0x98 (8)
	struct TArray<Unknown> QueryParams; // 0xA0 (16)
	struct TArray<Unknown> QueryConfig; // 0xB0 (16)
	char RunMode; // 0xC0 (1)
	struct Unknown EQSQueryBlackboardKey; // 0xC8 (40)
	char bUseBBKey : 0; // 0xF0 (1)
	struct Unknown EQSRequest; // 0xF8 (72)
};

// Class AIModule.BTTask_SetTagCooldown
class UBTTask_SetTagCooldown : public UBTTaskNode {

public:

	struct Unknown CooldownTag; // 0x70 (8)
	char bAddToExistingDuration : 0; // 0x78 (1)
	float CooldownDuration; // 0x7C (4)
};

// Class AIModule.BTTask_Wait
class UBTTask_Wait : public UBTTaskNode {

public:

	float WaitTime; // 0x70 (4)
	float RandomDeviation; // 0x74 (4)
};

// Class AIModule.BTTask_WaitBlackboardTime
class UBTTask_WaitBlackboardTime : public UBTTask_Wait {

public:

	struct Unknown BlackboardKey; // 0x78 (40)
};

// Class AIModule.PathFollowingComponent
class UPathFollowingComponent : public UActorComponent {

public:

	struct Unknown MovementComp; // 0xE8 (8)
	struct Unknown MyNavData; // 0xF8 (8)

	void OnNavDataRegistered(struct Unknown NavData); // Function AIModule.PathFollowingComponent.OnNavDataRegistered(Final|Native|Protected) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47870C0>
	void OnActorBump(struct Unknown SelfActor, struct Unknown OtherActor, struct Unknown NormalImpulse, struct Unknown& Hit); // Function AIModule.PathFollowingComponent.OnActorBump(Native|Public|HasOutParms|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4786F30>
	struct Unknown GetPathDestination(); // Function AIModule.PathFollowingComponent.GetPathDestination(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4786BA0>
	char GetPathActionType(); // Function AIModule.PathFollowingComponent.GetPathActionType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4786B70>
};

// Class AIModule.CrowdFollowingComponent
class UCrowdFollowingComponent : public UPathFollowingComponent {

public:

	struct Unknown CharacterMovement; // 0x260 (8)
	struct Unknown CrowdAgentMoveDirection; // 0x268 (12)

	void SuspendCrowdSteering(char bSuspend); // Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x477BCD0>
};

// Class AIModule.CrowdManager
class UCrowdManager : public UCrowdManagerBase {

public:

	struct Unknown MyNavData; // 0x28 (8)
	struct TArray<Unknown> AvoidanceConfig; // 0x30 (16)
	struct TArray<Unknown> SamplingPatterns; // 0x40 (16)
	int32_t MaxAgents; // 0x50 (4)
	float MaxAgentRadius; // 0x54 (4)
	int32_t MaxAvoidedAgents; // 0x58 (4)
	int32_t MaxAvoidedWalls; // 0x5C (4)
	float NavmeshCheckInterval; // 0x60 (4)
	float PathOptimizationInterval; // 0x64 (4)
	float SeparationDirClamp; // 0x68 (4)
	float PathOffsetRadiusMultiplier; // 0x6C (4)
	char bResolveCollisions : 0; // 0x70 (1)
};

// Class AIModule.EnvQuery
class UEnvQuery : public UDataAsset {

public:

	struct FName QueryName; // 0x30 (8)
	struct TArray<Unknown> options; // 0x38 (16)
};

// Class AIModule.EnvQueryNode
class UEnvQueryNode : public Object {

public:

	int32_t VerNum; // 0x28 (4)
};

// Class AIModule.EnvQueryGenerator
class UEnvQueryGenerator : public UEnvQueryNode {

public:

	struct FString OptionName; // 0x30 (16)
	struct Unknown* ItemType; // 0x40 (8)
	char bAutoSortTests : 0; // 0x48 (1)
};

// Class AIModule.EnvQueryGenerator_ActorsOfClass
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator {

public:

	struct Unknown* SearchedActorClass; // 0x50 (8)
	struct Unknown GenerateOnlyActorsInRadius; // 0x58 (56)
	struct Unknown SearchRadius; // 0x90 (56)
	struct Unknown* SearchCenter; // 0xC8 (8)
};

// Class AIModule.EnvQueryGenerator_BlueprintBase
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator {

public:

	struct FText GeneratorsActionDescription; // 0x50 (24)
	struct Unknown* Context; // 0x68 (8)
	struct Unknown* GeneratedItemType; // 0x70 (8)

	struct Unknown GetQuerier(); // Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x477F370>
	void DoItemGeneration(struct TArray<Unknown>& ContextLocations); // Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration(Event|Public|HasOutParms|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void AddGeneratedVector(struct Unknown GeneratedVector); // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector(Final|Native|Public|HasDefaults|BlueprintCallable|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x477F250>
	void AddGeneratedActor(struct Unknown GeneratedActor); // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor(Final|Native|Public|BlueprintCallable|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x477F1D0>
};

// Class AIModule.EnvQueryGenerator_Composite
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator {

public:

	struct TArray<Unknown> Generators; // 0x50 (16)
	char bAllowDifferentItemTypes : 0; // 0x60 (1)
	char bHasMatchingItemType : 0; // 0x60 (1)
	struct Unknown* ForcedItemType; // 0x68 (8)
};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator {

public:

	struct Unknown ProjectionData; // 0x50 (48)
};

// Class AIModule.EnvQueryGenerator_Cone
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints {

public:

	struct Unknown AlignedPointsDistance; // 0x80 (56)
	struct Unknown ConeDegrees; // 0xB8 (56)
	struct Unknown AngleStep; // 0xF0 (56)
	struct Unknown Range; // 0x128 (56)
	struct Unknown* CenterActor; // 0x160 (8)
	char bIncludeContextLocation : 0; // 0x168 (1)
};

// Class AIModule.EnvQueryGenerator_CurrentLocation
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator {

public:

	struct Unknown* QueryContext; // 0x50 (8)
};

// Class AIModule.EnvQueryGenerator_Donut
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints {

public:

	struct Unknown InnerRadius; // 0x80 (56)
	struct Unknown OuterRadius; // 0xB8 (56)
	struct Unknown NumberOfRings; // 0xF0 (56)
	struct Unknown PointsPerRing; // 0x128 (56)
	struct Unknown ArcDirection; // 0x160 (32)
	struct Unknown ArcAngle; // 0x180 (56)
	char bUseSpiralPattern : 0; // 0x1B8 (1)
	struct Unknown* Center; // 0x1C0 (8)
	char bDefineArc : 0; // 0x1C8 (1)
};

// Class AIModule.EnvQueryGenerator_OnCircle
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints {

public:

	struct Unknown CircleRadius; // 0x80 (56)
	struct Unknown SpaceBetween; // 0xB8 (56)
	struct Unknown NumberOfPoints; // 0xF0 (56)
	enum class Unknow PointOnCircleSpacingMethod; // 0x128 (1)
	struct Unknown ArcDirection; // 0x130 (32)
	struct Unknown ArcAngle; // 0x150 (56)
	float AngleRadians; // 0x188 (4)
	struct Unknown* CircleCenter; // 0x190 (8)
	char bIgnoreAnyContextActorsWhenGeneratingCircle : 0; // 0x198 (1)
	struct Unknown CircleCenterZOffset; // 0x1A0 (56)
	struct Unknown TraceData; // 0x1D8 (48)
	char bDefineArc : 0; // 0x208 (1)
};

// Class AIModule.EnvQueryGenerator_SimpleGrid
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints {

public:

	struct Unknown GridSize; // 0x80 (56)
	struct Unknown SpaceBetween; // 0xB8 (56)
	struct Unknown* GenerateAround; // 0xF0 (8)
};

// Class AIModule.EnvQueryGenerator_PathingGrid
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid {

public:

	struct Unknown PathToItem; // 0xF8 (56)
	struct Unknown* NavigationFilter; // 0x130 (8)
	struct Unknown ScanRangeMultiplier; // 0x138 (56)
};

// Class AIModule.EnvQueryInstanceBlueprintWrapper
class UEnvQueryInstanceBlueprintWrapper : public Object {

public:

	int32_t QueryID; // 0x30 (4)
	struct Unknown* ItemType; // 0x58 (8)
	int32_t OptionIndex; // 0x60 (4)
	struct FMulticastInlineDelegate OnQueryFinishedEvent; // 0x68 (16)

	void SetNamedParam(struct FName ParamName, float Value); // Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x477F7A0>
	struct TArray<Unknown> GetResultsAsLocations(); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x477F5A0>
	struct TArray<Unknown> GetResultsAsActors(); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x477F520>
	char GetQueryResultsAsLocations(struct TArray<Unknown>& ResultLocations); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations(Final|Native|Public|HasOutParms|BlueprintCallable|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x477F460>
	char GetQueryResultsAsActors(struct TArray<Unknown>& ResultActors); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors(Final|Native|Public|HasOutParms|BlueprintCallable|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x477F3A0>
	float GetItemScore(int32_t ItemIndex); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x477F2E0>
	void EQSQueryDoneSignature__DelegateSignature(struct Unknown QueryInstance, char QueryStatus); // DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Class AIModule.EnvQueryManager
class UEnvQueryManager : public UAISubsystem {

public:

	struct TArray<Unknown> InstanceCache; // 0xA8 (16)
	struct TArray<Unknown> LocalContexts; // 0xB8 (16)
	struct TArray<Unknown> GCShieldedWrappers; // 0xC8 (16)
	float MaxAllowedTestingTime; // 0x12C (4)
	char bTestQueriesUsingBreadth : 0; // 0x130 (1)
	int32_t QueryCountWarningThreshold; // 0x134 (4)
	double QueryCountWarningInterval; // 0x138 (8)

	struct Unknown RunEQSQuery(struct Unknown WorldContextObject, struct Unknown QueryTemplate, struct Unknown Querier, char RunMode, struct Unknown* WrapperClass); // Function AIModule.EnvQueryManager.RunEQSQuery(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x477F620>
};

// Class AIModule.EnvQueryOption
class UEnvQueryOption : public Object {

public:

	struct Unknown Generator; // 0x28 (8)
	struct TArray<Unknown> Tests; // 0x30 (16)
};

// Class AIModule.EnvQueryTest
class UEnvQueryTest : public UEnvQueryNode {

public:

	int32_t TestOrder; // 0x30 (4)
	char TestPurpose; // 0x34 (1)
	struct FString TestComment; // 0x38 (16)
	char MultipleContextFilterOp; // 0x48 (1)
	char MultipleContextScoreOp; // 0x49 (1)
	char FilterType; // 0x4A (1)
	struct Unknown BoolValue; // 0x50 (56)
	struct Unknown FloatValueMin; // 0x88 (56)
	struct Unknown FloatValueMax; // 0xC0 (56)
	char ScoringEquation; // 0xF9 (1)
	char ClampMinType; // 0xFA (1)
	char ClampMaxType; // 0xFB (1)
	enum class Unknow NormalizationType; // 0xFC (1)
	struct Unknown ScoreClampMin; // 0x100 (56)
	struct Unknown ScoreClampMax; // 0x138 (56)
	struct Unknown ScoringFactor; // 0x170 (56)
	struct Unknown ReferenceValue; // 0x1A8 (56)
	char bDefineReferenceValue : 0; // 0x1E0 (1)
	char bWorkOnFloatValues : 0; // 0x1F0 (1)
};

// Class AIModule.EnvQueryTest_Distance
class UEnvQueryTest_Distance : public UEnvQueryTest {

public:

	char TestMode; // 0x1F8 (1)
	struct Unknown* DistanceTo; // 0x200 (8)
};

// Class AIModule.EnvQueryTest_Dot
class UEnvQueryTest_Dot : public UEnvQueryTest {

public:

	struct Unknown LineA; // 0x1F8 (32)
	struct Unknown LineB; // 0x218 (32)
	enum class Unknow TestMode; // 0x238 (1)
	char bAbsoluteValue : 0; // 0x239 (1)
};

// Class AIModule.EnvQueryTest_GameplayTags
class UEnvQueryTest_GameplayTags : public UEnvQueryTest {

public:

	struct Unknown TagQueryToMatch; // 0x1F8 (72)
	char bUpdatedToUseQuery : 0; // 0x240 (1)
	enum class Unknow TagsToMatch; // 0x241 (1)
	struct Unknown GameplayTags; // 0x248 (32)
};

// Class AIModule.EnvQueryTest_Overlap
class UEnvQueryTest_Overlap : public UEnvQueryTest {

public:

	struct Unknown OverlapData; // 0x1F8 (32)
};

// Class AIModule.EnvQueryTest_Pathfinding
class UEnvQueryTest_Pathfinding : public UEnvQueryTest {

public:

	char TestMode; // 0x1F8 (1)
	struct Unknown* Context; // 0x200 (8)
	struct Unknown PathFromContext; // 0x208 (56)
	struct Unknown SkipUnreachable; // 0x240 (56)
	struct Unknown* FilterClass; // 0x278 (8)
};

// Class AIModule.EnvQueryTest_PathfindingBatch
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding {

public:

	struct Unknown ScanRangeMultiplier; // 0x280 (56)
};

// Class AIModule.EnvQueryTest_Project
class UEnvQueryTest_Project : public UEnvQueryTest {

public:

	struct Unknown ProjectionData; // 0x1F8 (48)
};

// Class AIModule.EnvQueryTest_Trace
class UEnvQueryTest_Trace : public UEnvQueryTest {

public:

	struct Unknown TraceData; // 0x1F8 (48)
	struct Unknown TraceFromContext; // 0x228 (56)
	struct Unknown ItemHeightOffset; // 0x260 (56)
	struct Unknown ContextHeightOffset; // 0x298 (56)
	struct Unknown* Context; // 0x2D0 (8)
};

// Class AIModule.EnvQueryTest_Volume
class UEnvQueryTest_Volume : public UEnvQueryTest {

public:

	struct Unknown* VolumeContext; // 0x1F8 (8)
	struct Unknown* VolumeClass; // 0x200 (8)
	char bDoComplexVolumeTest : 0; // 0x208 (1)
};

// Class AIModule.EQSTestingPawn
class AEQSTestingPawn : public ACharacter {

public:

	struct Unknown QueryTemplate; // 0x5E0 (8)
	struct TArray<Unknown> QueryParams; // 0x5E8 (16)
	struct TArray<Unknown> QueryConfig; // 0x5F8 (16)
	float TimeLimitPerStep; // 0x608 (4)
	int32_t StepToDebugDraw; // 0x60C (4)
	enum class Unknow HighlightMode; // 0x610 (1)
	char bDrawLabels : 0; // 0x614 (1)
	char bDrawFailedItems : 0; // 0x614 (1)
	char bReRunQueryOnlyOnFinishedMove : 0; // 0x614 (1)
	char bShouldBeVisibleInGame : 0; // 0x614 (1)
	char bTickDuringGame : 0; // 0x614 (1)
	char QueryingMode; // 0x618 (1)
	struct Unknown NavAgentProperties; // 0x620 (48)
};

// Class AIModule.GridPathFollowingComponent
class UGridPathFollowingComponent : public UPathFollowingComponent {

public:

	struct Unknown GridManager; // 0x258 (8)
};

// Class AIModule.NavLinkProxy
class ANavLinkProxy : public UActor {

public:

	struct TArray<Unknown> PointLinks; // 0x320 (16)
	struct TArray<Unknown> SegmentLinks; // 0x330 (16)
	struct Unknown SmartLinkComp; // 0x340 (8)
	char bSmartLinkIsRelevant : 0; // 0x348 (1)
	struct FMulticastInlineDelegate OnSmartLinkReached; // 0x350 (16)

	void SetSmartLinkEnabled(char bEnabled); // Function AIModule.NavLinkProxy.SetSmartLinkEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4784AF0>
	void ResumePathFollowing(struct Unknown Agent); // Function AIModule.NavLinkProxy.ResumePathFollowing(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47849A0>
	void ReceiveSmartLinkReached(struct Unknown Agent, struct Unknown& Destination); // Function AIModule.NavLinkProxy.ReceiveSmartLinkReached(Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	char IsSmartLinkEnabled(); // Function AIModule.NavLinkProxy.IsSmartLinkEnabled(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4784880>
	char HasMovingAgents(); // Function AIModule.NavLinkProxy.HasMovingAgents(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4784850>
};

// Class AIModule.PawnAction
class UPawnAction : public Object {

public:

	struct Unknown ChildAction; // 0x28 (8)
	struct Unknown ParentAction; // 0x30 (8)
	struct Unknown OwnerComponent; // 0x38 (8)
	struct Unknown Instigator; // 0x40 (8)
	struct Unknown BrainComp; // 0x48 (8)
	char bAllowNewSameClassInstance : 0; // 0x80 (1)
	char bReplaceActiveSameClassInstance : 0; // 0x80 (1)
	char bShouldPauseMovement : 0; // 0x80 (1)
	char bAlwaysNotifyOnFinished : 0; // 0x80 (1)

	char GetActionPriority(); // Function AIModule.PawnAction.GetActionPriority(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x18A4190>
	void Finish(char WithResult); // Function AIModule.PawnAction.Finish(Native|Protected|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B47B50>
	struct Unknown CreateActionInstance(struct Unknown WorldContextObject, struct Unknown* ActionClass); // Function AIModule.PawnAction.CreateActionInstance(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4786AB0>
};

// Class AIModule.PawnAction_Move
class UPawnAction_Move : public UPawnAction {

public:

	struct Unknown GoalActor; // 0x98 (8)
	struct Unknown GoalLocation; // 0xA0 (12)
	float AcceptableRadius; // 0xAC (4)
	struct Unknown* FilterClass; // 0xB0 (8)
	char bAllowStrafe : 0; // 0xB8 (1)
	char bFinishOnOverlap : 0; // 0xB8 (1)
	char bUsePathfinding : 0; // 0xB8 (1)
	char bAllowPartialPath : 0; // 0xB8 (1)
	char bProjectGoalToNavigation : 0; // 0xB8 (1)
	char bUpdatePathToGoal : 0; // 0xB8 (1)
	char bAbortChildActionOnPathChange : 0; // 0xB8 (1)
};

// Class AIModule.PawnAction_Repeat
class UPawnAction_Repeat : public UPawnAction {

public:

	struct Unknown ActionToRepeat; // 0x98 (8)
	struct Unknown RecentActionCopy; // 0xA0 (8)
	char ChildFailureHandlingMode; // 0xA8 (1)
};

// Class AIModule.PawnAction_Sequence
class UPawnAction_Sequence : public UPawnAction {

public:

	struct TArray<Unknown> ActionSequence; // 0x98 (16)
	char ChildFailureHandlingMode; // 0xA8 (1)
	struct Unknown RecentActionCopy; // 0xB0 (8)
};

// Class AIModule.PawnAction_Wait
class UPawnAction_Wait : public UPawnAction {

public:

	float TimeToWait; // 0x98 (4)
};

// Class AIModule.PawnActionsComponent
class UPawnActionsComponent : public UActorComponent {

public:

	struct Unknown ControlledPawn; // 0xB0 (8)
	struct TArray<Unknown> ActionStacks; // 0xB8 (16)
	struct TArray<Unknown> ActionEvents; // 0xC8 (16)
	struct Unknown CurrentAction; // 0xD8 (8)

	char K2_PushAction(struct Unknown NewAction, char Priority, struct Unknown Instigator); // Function AIModule.PawnActionsComponent.K2_PushAction(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4786E30>
	char K2_PerformAction(struct Unknown Pawn, struct Unknown Action, char Priority); // Function AIModule.PawnActionsComponent.K2_PerformAction(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4786D40>
	char K2_ForceAbortAction(struct Unknown ActionToAbort); // Function AIModule.PawnActionsComponent.K2_ForceAbortAction(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4786CB0>
	char K2_AbortAction(struct Unknown ActionToAbort); // Function AIModule.PawnActionsComponent.K2_AbortAction(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4786C20>
};

// Class AIModule.PawnSensingComponent
class UPawnSensingComponent : public UActorComponent {

public:

	float HearingThreshold; // 0xB0 (4)
	float LOSHearingThreshold; // 0xB4 (4)
	float SightRadius; // 0xB8 (4)
	float SensingInterval; // 0xBC (4)
	float HearingMaxSoundAge; // 0xC0 (4)
	char bEnableSensingUpdates : 0; // 0xC4 (1)
	char bOnlySensePlayers : 0; // 0xC4 (1)
	char bSeePawns : 0; // 0xC4 (1)
	char bHearNoises : 0; // 0xC4 (1)
	struct FMulticastInlineDelegate OnSeePawn; // 0xD0 (16)
	struct FMulticastInlineDelegate OnHearNoise; // 0xE0 (16)
	float PeripheralVisionAngle; // 0xF0 (4)
	float PeripheralVisionCosine; // 0xF4 (4)

	void SetSensingUpdatesEnabled(char bEnabled); // Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled(BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4787240>
	void SetSensingInterval(float NewSensingInterval); // Function AIModule.PawnSensingComponent.SetSensingInterval(BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47871C0>
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle); // Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle(BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4787140>
	void SeePawnDelegate__DelegateSignature(struct Unknown Pawn); // DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void HearNoiseDelegate__DelegateSignature(struct Unknown Instigator, struct Unknown& Location, float Volume); // DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	float GetPeripheralVisionCosine(); // Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4786C00>
	float GetPeripheralVisionAngle(); // Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4786BE0>
};

// ScriptStruct AIModule.AIRequestID
struct FAIRequestID {
	uint32_t RequestID; // 0x0 (4)
};

// ScriptStruct AIModule.AIStimulus
struct FAIStimulus {
	float Age; // 0x0 (4)
	float ExpirationAge; // 0x4 (4)
	float Strength; // 0x8 (4)
	struct Unknown StimulusLocation; // 0xC (12)
	struct Unknown ReceiverLocation; // 0x18 (12)
	struct FName Tag; // 0x24 (8)
	char bSuccessfullySensed : 0; // 0x38 (1)
};

// ScriptStruct AIModule.AIDataProviderValue
struct FAIDataProviderValue {
	struct Unknown DataBinding; // 0x10 (8)
	struct FName DataField; // 0x18 (8)
};

// ScriptStruct AIModule.AIDataProviderTypedValue
struct FAIDataProviderTypedValue : FAIDataProviderValue {
	struct Unknown* PropertyType; // 0x20 (8)
};

// ScriptStruct AIModule.AIDataProviderBoolValue
struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	char DefaultValue : 0; // 0x30 (1)
};

// ScriptStruct AIModule.AIDataProviderFloatValue
struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	float DefaultValue; // 0x30 (4)
};

// ScriptStruct AIModule.AIDataProviderIntValue
struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	int32_t DefaultValue; // 0x30 (4)
};

// ScriptStruct AIModule.ActorPerceptionBlueprintInfo
struct FActorPerceptionBlueprintInfo {
	struct Unknown Target; // 0x0 (8)
	struct TArray<Unknown> LastSensedStimuli; // 0x8 (16)
	char bIsHostile : 0; // 0x18 (1)
};

// ScriptStruct AIModule.AISenseAffiliationFilter
struct FAISenseAffiliationFilter {
	char bDetectEnemies : 0; // 0x0 (1)
	char bDetectNeutrals : 0; // 0x0 (1)
	char bDetectFriendlies : 0; // 0x0 (1)
};

// ScriptStruct AIModule.AIDamageEvent
struct FAIDamageEvent {
	float Amount; // 0x0 (4)
	struct Unknown Location; // 0x4 (12)
	struct Unknown HitLocation; // 0x10 (12)
	struct Unknown DamagedActor; // 0x20 (8)
	struct Unknown Instigator; // 0x28 (8)
};

// ScriptStruct AIModule.AINoiseEvent
struct FAINoiseEvent {
	struct Unknown NoiseLocation; // 0x4 (12)
	float Loudness; // 0x10 (4)
	float MaxRange; // 0x14 (4)
	struct Unknown Instigator; // 0x18 (8)
	struct FName Tag; // 0x20 (8)
};

// ScriptStruct AIModule.AIPredictionEvent
struct FAIPredictionEvent {
	struct Unknown Requestor; // 0x0 (8)
	struct Unknown PredictedActor; // 0x8 (8)
};

// ScriptStruct AIModule.AISightEvent
struct FAISightEvent {
	struct Unknown SeenActor; // 0x8 (8)
	struct Unknown Observer; // 0x10 (8)
};

// ScriptStruct AIModule.AITeamStimulusEvent
struct FAITeamStimulusEvent {
	struct Unknown Broadcaster; // 0x28 (8)
	struct Unknown Enemy; // 0x30 (8)
};

// ScriptStruct AIModule.AITouchEvent
struct FAITouchEvent {
	struct Unknown TouchReceiver; // 0x10 (8)
	struct Unknown OtherActor; // 0x18 (8)
};

// ScriptStruct AIModule.IntervalCountdown
struct FIntervalCountdown {
	float Interval; // 0x0 (4)
};

// ScriptStruct AIModule.AIMoveRequest
struct FAIMoveRequest {
	struct Unknown GoalActor; // 0x0 (8)
};

// ScriptStruct AIModule.BehaviorTreeTemplateInfo
struct FBehaviorTreeTemplateInfo {
	struct Unknown Asset; // 0x0 (8)
	struct Unknown Template; // 0x8 (8)
};

// ScriptStruct AIModule.BlackboardKeySelector
struct FBlackboardKeySelector {
	struct TArray<Unknown> AllowedTypes; // 0x0 (16)
	struct FName SelectedKeyName; // 0x10 (8)
	struct Unknown* SelectedKeyType; // 0x18 (8)
	char SelectedKeyID; // 0x20 (1)
	char bNoneIsAllowedValue : 0; // 0x24 (1)
};

// ScriptStruct AIModule.BlackboardEntry
struct FBlackboardEntry {
	struct FName EntryName; // 0x0 (8)
	struct Unknown KeyType; // 0x8 (8)
	char bInstanceSynced : 0; // 0x10 (1)
};

// ScriptStruct AIModule.BTCompositeChild
struct FBTCompositeChild {
	struct Unknown ChildComposite; // 0x0 (8)
	struct Unknown ChildTask; // 0x8 (8)
	struct TArray<Unknown> Decorators; // 0x10 (16)
	struct TArray<Unknown> DecoratorOps; // 0x20 (16)
};

// ScriptStruct AIModule.BTDecoratorLogic
struct FBTDecoratorLogic {
	char Operation; // 0x0 (1)
	uint16_t Number; // 0x2 (2)
};

// ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
struct FCrowdAvoidanceSamplingPattern {
	struct TArray<Unknown> Angles; // 0x0 (16)
	struct TArray<Unknown> Radii; // 0x10 (16)
};

// ScriptStruct AIModule.CrowdAvoidanceConfig
struct FCrowdAvoidanceConfig {
	float VelocityBias; // 0x0 (4)
	float DesiredVelocityWeight; // 0x4 (4)
	float CurrentVelocityWeight; // 0x8 (4)
	float SideBiasWeight; // 0xC (4)
	float ImpactTimeWeight; // 0x10 (4)
	float ImpactTimeRange; // 0x14 (4)
	char CustomPatternIdx; // 0x18 (1)
	char AdaptiveDivisions; // 0x19 (1)
	char AdaptiveRings; // 0x1A (1)
	char AdaptiveDepth; // 0x1B (1)
};

// ScriptStruct AIModule.EnvQueryInstanceCache
struct FEnvQueryInstanceCache {
	struct Unknown Template; // 0x0 (8)
};

// ScriptStruct AIModule.EnvQueryRequest
struct FEnvQueryRequest {
	struct Unknown QueryTemplate; // 0x0 (8)
	struct Unknown Owner; // 0x8 (8)
	struct Unknown World; // 0x10 (8)
};

// ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
struct FEQSParametrizedQueryExecutionRequest {
	struct Unknown QueryTemplate; // 0x0 (8)
	struct TArray<Unknown> QueryConfig; // 0x8 (16)
	struct Unknown EQSQueryBlackboardKey; // 0x18 (40)
	char RunMode; // 0x40 (1)
	char bUseBBKeyForQueryTemplate : 0; // 0x44 (1)
};

// ScriptStruct AIModule.AIDynamicParam
struct FAIDynamicParam {
	struct FName ParamName; // 0x0 (8)
	enum class Unknow ParamType; // 0x8 (1)
	float Value; // 0xC (4)
	struct Unknown BBKey; // 0x10 (40)
};

// ScriptStruct AIModule.EnvQueryResult
struct FEnvQueryResult {
	struct Unknown* ItemType; // 0x10 (8)
	int32_t OptionIndex; // 0x2C (4)
	int32_t QueryID; // 0x30 (4)
};

// ScriptStruct AIModule.EnvOverlapData
struct FEnvOverlapData {
	float ExtentX; // 0x0 (4)
	float ExtentY; // 0x4 (4)
	float ExtentZ; // 0x8 (4)
	struct Unknown ShapeOffset; // 0xC (12)
	char OverlapChannel; // 0x18 (1)
	char OverlapShape; // 0x19 (1)
	char bOnlyBlockingHits : 0; // 0x1C (1)
	char bOverlapComplex : 0; // 0x1C (1)
	char bSkipOverlapQuerier : 0; // 0x1C (1)
};

// ScriptStruct AIModule.EnvTraceData
struct FEnvTraceData {
	int32_t VersionNum; // 0x0 (4)
	struct Unknown* NavigationFilter; // 0x8 (8)
	float ProjectDown; // 0x10 (4)
	float ProjectUp; // 0x14 (4)
	float ExtentX; // 0x18 (4)
	float ExtentY; // 0x1C (4)
	float ExtentZ; // 0x20 (4)
	float PostProjectionVerticalOffset; // 0x24 (4)
	char TraceChannel; // 0x28 (1)
	char SerializedChannel; // 0x29 (1)
	char TraceShape; // 0x2A (1)
	char TraceMode; // 0x2B (1)
	char bTraceComplex : 0; // 0x2C (1)
	char bOnlyBlockingHits : 0; // 0x2C (1)
	char bCanTraceOnNavMesh : 0; // 0x2C (1)
	char bCanTraceOnGeometry : 0; // 0x2C (1)
	char bCanDisableTrace : 0; // 0x2C (1)
	char bCanProjectDown : 0; // 0x2C (1)
};

// ScriptStruct AIModule.EnvDirection
struct FEnvDirection {
	struct Unknown* LineFrom; // 0x0 (8)
	struct Unknown* LineTo; // 0x8 (8)
	struct Unknown* Rotation; // 0x10 (8)
	char DirMode; // 0x18 (1)
};

// ScriptStruct AIModule.EnvNamedValue
struct FEnvNamedValue {
	struct FName ParamName; // 0x0 (8)
	enum class Unknow ParamType; // 0x8 (1)
	float Value; // 0xC (4)
};

// ScriptStruct AIModule.GenericTeamId
struct FGenericTeamId {
	char TeamID; // 0x0 (1)
};

// ScriptStruct AIModule.PawnActionStack
struct FPawnActionStack {
	struct Unknown TopAction; // 0x0 (8)
};

// ScriptStruct AIModule.PawnActionEvent
struct FPawnActionEvent {
	struct Unknown Action; // 0x0 (8)
};

// Function AIModule.AIController.UseBlackboard
inline char AAIController::UseBlackboard(struct Unknown BlackboardAsset, struct Unknown& BlackboardComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.UseBlackboard");

	struct UseBlackboard_Params {
		struct Unknown BlackboardAsset;
		struct Unknown& BlackboardComponent;
		char ReturnValue;

	}; UseBlackboard_Params Params;

	Params.BlackboardAsset = BlackboardAsset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	BlackboardComponent = Params.BlackboardComponent;


	return params.ReturnValue;
}

// Function AIModule.AIController.UnclaimTaskResource
inline void AAIController::UnclaimTaskResource(struct Unknown* ResourceClass) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.UnclaimTaskResource");

	struct UnclaimTaskResource_Params {
		struct Unknown* ResourceClass;
	}; UnclaimTaskResource_Params Params;

	Params.ResourceClass = ResourceClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIController.SetPathFollowingComponent
inline void AAIController::SetPathFollowingComponent(struct Unknown NewPFComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.SetPathFollowingComponent");

	struct SetPathFollowingComponent_Params {
		struct Unknown NewPFComponent;
	}; SetPathFollowingComponent_Params Params;

	Params.NewPFComponent = NewPFComponent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIController.SetMoveBlockDetection
inline void AAIController::SetMoveBlockDetection(char bEnable) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.SetMoveBlockDetection");

	struct SetMoveBlockDetection_Params {
		char bEnable;
	}; SetMoveBlockDetection_Params Params;

	Params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIController.RunBehaviorTree
inline char AAIController::RunBehaviorTree(struct Unknown BTAsset) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.RunBehaviorTree");

	struct RunBehaviorTree_Params {
		struct Unknown BTAsset;
		char ReturnValue;

	}; RunBehaviorTree_Params Params;

	Params.BTAsset = BTAsset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.AIController.OnUsingBlackBoard
inline void AAIController::OnUsingBlackBoard(struct Unknown BlackboardComp, struct Unknown BlackboardAsset) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.OnUsingBlackBoard");

	struct OnUsingBlackBoard_Params {
		struct Unknown BlackboardComp;
		struct Unknown BlackboardAsset;
	}; OnUsingBlackBoard_Params Params;

	Params.BlackboardComp = BlackboardComp;
	Params.BlackboardAsset = BlackboardAsset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIController.OnGameplayTaskResourcesClaimed
inline void AAIController::OnGameplayTaskResourcesClaimed(struct Unknown NewlyClaimed, struct Unknown FreshlyReleased) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.OnGameplayTaskResourcesClaimed");

	struct OnGameplayTaskResourcesClaimed_Params {
		struct Unknown NewlyClaimed;
		struct Unknown FreshlyReleased;
	}; OnGameplayTaskResourcesClaimed_Params Params;

	Params.NewlyClaimed = NewlyClaimed;
	Params.FreshlyReleased = FreshlyReleased;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIController.MoveToLocation
inline char AAIController::MoveToLocation(struct Unknown& Dest, float AcceptanceRadius, char bStopOnOverlap, char bUsePathfinding, char bProjectDestinationToNavigation, char bCanStrafe, struct Unknown* FilterClass, char bAllowPartialPath) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.MoveToLocation");

	struct MoveToLocation_Params {
		struct Unknown& Dest;
		float AcceptanceRadius;
		char bStopOnOverlap;
		char bUsePathfinding;
		char bProjectDestinationToNavigation;
		char bCanStrafe;
		struct Unknown* FilterClass;
		char bAllowPartialPath;
		char ReturnValue;

	}; MoveToLocation_Params Params;

	Params.AcceptanceRadius = AcceptanceRadius;
	Params.bStopOnOverlap = bStopOnOverlap;
	Params.bUsePathfinding = bUsePathfinding;
	Params.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
	Params.bCanStrafe = bCanStrafe;
	Params.FilterClass = FilterClass;
	Params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Dest = Params.Dest;


	return params.ReturnValue;
}

// Function AIModule.AIController.MoveToActor
inline char AAIController::MoveToActor(struct Unknown Goal, float AcceptanceRadius, char bStopOnOverlap, char bUsePathfinding, char bCanStrafe, struct Unknown* FilterClass, char bAllowPartialPath) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.MoveToActor");

	struct MoveToActor_Params {
		struct Unknown Goal;
		float AcceptanceRadius;
		char bStopOnOverlap;
		char bUsePathfinding;
		char bCanStrafe;
		struct Unknown* FilterClass;
		char bAllowPartialPath;
		char ReturnValue;

	}; MoveToActor_Params Params;

	Params.Goal = Goal;
	Params.AcceptanceRadius = AcceptanceRadius;
	Params.bStopOnOverlap = bStopOnOverlap;
	Params.bUsePathfinding = bUsePathfinding;
	Params.bCanStrafe = bCanStrafe;
	Params.FilterClass = FilterClass;
	Params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.AIController.K2_SetFocus
inline void AAIController::K2_SetFocus(struct Unknown NewFocus) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_SetFocus");

	struct K2_SetFocus_Params {
		struct Unknown NewFocus;
	}; K2_SetFocus_Params Params;

	Params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIController.K2_SetFocalPoint
inline void AAIController::K2_SetFocalPoint(struct Unknown FP) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_SetFocalPoint");

	struct K2_SetFocalPoint_Params {
		struct Unknown FP;
	}; K2_SetFocalPoint_Params Params;

	Params.FP = FP;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIController.K2_ClearFocus
inline void AAIController::K2_ClearFocus() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_ClearFocus");

	struct K2_ClearFocus_Params {
		
	}; K2_ClearFocus_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIController.HasPartialPath
inline char AAIController::HasPartialPath() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.HasPartialPath");

	struct HasPartialPath_Params {
		
		char ReturnValue;

	}; HasPartialPath_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.AIController.GetPathFollowingComponent
inline struct Unknown AAIController::GetPathFollowingComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetPathFollowingComponent");

	struct GetPathFollowingComponent_Params {
		
		struct Unknown ReturnValue;

	}; GetPathFollowingComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.AIController.GetMoveStatus
inline char AAIController::GetMoveStatus() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetMoveStatus");

	struct GetMoveStatus_Params {
		
		char ReturnValue;

	}; GetMoveStatus_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.AIController.GetImmediateMoveDestination
inline struct Unknown AAIController::GetImmediateMoveDestination() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetImmediateMoveDestination");

	struct GetImmediateMoveDestination_Params {
		
		struct Unknown ReturnValue;

	}; GetImmediateMoveDestination_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.AIController.GetFocusActor
inline struct Unknown AAIController::GetFocusActor() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocusActor");

	struct GetFocusActor_Params {
		
		struct Unknown ReturnValue;

	}; GetFocusActor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.AIController.GetFocalPointOnActor
inline struct Unknown AAIController::GetFocalPointOnActor(struct Unknown Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocalPointOnActor");

	struct GetFocalPointOnActor_Params {
		struct Unknown Actor;
		struct Unknown ReturnValue;

	}; GetFocalPointOnActor_Params Params;

	Params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.AIController.GetFocalPoint
inline struct Unknown AAIController::GetFocalPoint() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocalPoint");

	struct GetFocalPoint_Params {
		
		struct Unknown ReturnValue;

	}; GetFocalPoint_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.AIController.GetAIPerceptionComponent
inline struct Unknown AAIController::GetAIPerceptionComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetAIPerceptionComponent");

	struct GetAIPerceptionComponent_Params {
		
		struct Unknown ReturnValue;

	}; GetAIPerceptionComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.AIController.ClaimTaskResource
inline void AAIController::ClaimTaskResource(struct Unknown* ResourceClass) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.ClaimTaskResource");

	struct ClaimTaskResource_Params {
		struct Unknown* ResourceClass;
	}; ClaimTaskResource_Params Params;

	Params.ResourceClass = ResourceClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
inline void UAIAsyncTaskBlueprintProxy::OnMoveCompleted(struct Unknown RequestID, char MovementResult) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted");

	struct OnMoveCompleted_Params {
		struct Unknown RequestID;
		char MovementResult;
	}; OnMoveCompleted_Params Params;

	Params.RequestID = RequestID;
	Params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionComponent.SetSenseEnabled
inline void UAIPerceptionComponent::SetSenseEnabled(struct Unknown* SenseClass, char bEnable) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.SetSenseEnabled");

	struct SetSenseEnabled_Params {
		struct Unknown* SenseClass;
		char bEnable;
	}; SetSenseEnabled_Params Params;

	Params.SenseClass = SenseClass;
	Params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
inline void UAIPerceptionComponent::RequestStimuliListenerUpdate() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate");

	struct RequestStimuliListenerUpdate_Params {
		
	}; RequestStimuliListenerUpdate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
inline void UAIPerceptionComponent::OnOwnerEndPlay(struct Unknown Actor, char EndPlayReason) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.OnOwnerEndPlay");

	struct OnOwnerEndPlay_Params {
		struct Unknown Actor;
		char EndPlayReason;
	}; OnOwnerEndPlay_Params Params;

	Params.Actor = Actor;
	Params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
inline void UAIPerceptionComponent::GetPerceivedHostileActors(struct TArray<Unknown>& OutActors) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors");

	struct GetPerceivedHostileActors_Params {
		struct TArray<Unknown>& OutActors;
	}; GetPerceivedHostileActors_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutActors = Params.OutActors;

}

// Function AIModule.AIPerceptionComponent.GetPerceivedActors
inline void UAIPerceptionComponent::GetPerceivedActors(struct Unknown* SenseToUse, struct TArray<Unknown>& OutActors) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetPerceivedActors");

	struct GetPerceivedActors_Params {
		struct Unknown* SenseToUse;
		struct TArray<Unknown>& OutActors;
	}; GetPerceivedActors_Params Params;

	Params.SenseToUse = SenseToUse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutActors = Params.OutActors;

}

// Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
inline void UAIPerceptionComponent::GetKnownPerceivedActors(struct Unknown* SenseToUse, struct TArray<Unknown>& OutActors) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors");

	struct GetKnownPerceivedActors_Params {
		struct Unknown* SenseToUse;
		struct TArray<Unknown>& OutActors;
	}; GetKnownPerceivedActors_Params Params;

	Params.SenseToUse = SenseToUse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutActors = Params.OutActors;

}

// Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
inline void UAIPerceptionComponent::GetCurrentlyPerceivedActors(struct Unknown* SenseToUse, struct TArray<Unknown>& OutActors) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors");

	struct GetCurrentlyPerceivedActors_Params {
		struct Unknown* SenseToUse;
		struct TArray<Unknown>& OutActors;
	}; GetCurrentlyPerceivedActors_Params Params;

	Params.SenseToUse = SenseToUse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutActors = Params.OutActors;

}

// Function AIModule.AIPerceptionComponent.GetActorsPerception
inline char UAIPerceptionComponent::GetActorsPerception(struct Unknown Actor, struct Unknown& Info) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetActorsPerception");

	struct GetActorsPerception_Params {
		struct Unknown Actor;
		struct Unknown& Info;
		char ReturnValue;

	}; GetActorsPerception_Params Params;

	Params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Info = Params.Info;


	return params.ReturnValue;
}

// Function AIModule.AIPerceptionComponent.ForgetAll
inline void UAIPerceptionComponent::ForgetAll() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.ForgetAll");

	struct ForgetAll_Params {
		
	}; ForgetAll_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
inline void UAIPerceptionStimuliSourceComponent::UnregisterFromSense(struct Unknown* SenseClass) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense");

	struct UnregisterFromSense_Params {
		struct Unknown* SenseClass;
	}; UnregisterFromSense_Params Params;

	Params.SenseClass = SenseClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
inline void UAIPerceptionStimuliSourceComponent::UnregisterFromPerceptionSystem() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem");

	struct UnregisterFromPerceptionSystem_Params {
		
	}; UnregisterFromPerceptionSystem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
inline void UAIPerceptionStimuliSourceComponent::RegisterWithPerceptionSystem() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem");

	struct RegisterWithPerceptionSystem_Params {
		
	}; RegisterWithPerceptionSystem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
inline void UAIPerceptionStimuliSourceComponent::RegisterForSense(struct Unknown* SenseClass) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense");

	struct RegisterForSense_Params {
		struct Unknown* SenseClass;
	}; RegisterForSense_Params Params;

	Params.SenseClass = SenseClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
inline void UAIPerceptionSystem::ReportPerceptionEvent(struct Unknown WorldContextObject, struct Unknown PerceptionEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.ReportPerceptionEvent");

	struct ReportPerceptionEvent_Params {
		struct Unknown WorldContextObject;
		struct Unknown PerceptionEvent;
	}; ReportPerceptionEvent_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.PerceptionEvent = PerceptionEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionSystem.ReportEvent
inline void UAIPerceptionSystem::ReportEvent(struct Unknown PerceptionEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.ReportEvent");

	struct ReportEvent_Params {
		struct Unknown PerceptionEvent;
	}; ReportEvent_Params Params;

	Params.PerceptionEvent = PerceptionEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
inline char UAIPerceptionSystem::RegisterPerceptionStimuliSource(struct Unknown WorldContextObject, struct Unknown* Sense, struct Unknown Target) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource");

	struct RegisterPerceptionStimuliSource_Params {
		struct Unknown WorldContextObject;
		struct Unknown* Sense;
		struct Unknown Target;
		char ReturnValue;

	}; RegisterPerceptionStimuliSource_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.Sense = Sense;
	Params.Target = Target;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
inline void UAIPerceptionSystem::OnPerceptionStimuliSourceEndPlay(struct Unknown Actor, char EndPlayReason) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay");

	struct OnPerceptionStimuliSourceEndPlay_Params {
		struct Unknown Actor;
		char EndPlayReason;
	}; OnPerceptionStimuliSourceEndPlay_Params Params;

	Params.Actor = Actor;
	Params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
inline struct Unknown* UAIPerceptionSystem::GetSenseClassForStimulus(struct Unknown WorldContextObject, struct Unknown& Stimulus) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus");

	struct GetSenseClassForStimulus_Params {
		struct Unknown WorldContextObject;
		struct Unknown& Stimulus;
		struct Unknown* ReturnValue;

	}; GetSenseClassForStimulus_Params Params;

	Params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Stimulus = Params.Stimulus;


	return params.ReturnValue;
}

// Function AIModule.AISense_Blueprint.OnUpdate
inline float UAISense_Blueprint::OnUpdate(struct TArray<Unknown>& EventsToProcess) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnUpdate");

	struct OnUpdate_Params {
		struct TArray<Unknown>& EventsToProcess;
		float ReturnValue;

	}; OnUpdate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	EventsToProcess = Params.EventsToProcess;


	return params.ReturnValue;
}

// Function AIModule.AISense_Blueprint.OnListenerUpdated
inline void UAISense_Blueprint::OnListenerUpdated(struct Unknown ActorListener, struct Unknown PerceptionComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerUpdated");

	struct OnListenerUpdated_Params {
		struct Unknown ActorListener;
		struct Unknown PerceptionComponent;
	}; OnListenerUpdated_Params Params;

	Params.ActorListener = ActorListener;
	Params.PerceptionComponent = PerceptionComponent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AISense_Blueprint.OnListenerUnregistered
inline void UAISense_Blueprint::OnListenerUnregistered(struct Unknown ActorListener, struct Unknown PerceptionComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerUnregistered");

	struct OnListenerUnregistered_Params {
		struct Unknown ActorListener;
		struct Unknown PerceptionComponent;
	}; OnListenerUnregistered_Params Params;

	Params.ActorListener = ActorListener;
	Params.PerceptionComponent = PerceptionComponent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AISense_Blueprint.OnListenerRegistered
inline void UAISense_Blueprint::OnListenerRegistered(struct Unknown ActorListener, struct Unknown PerceptionComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerRegistered");

	struct OnListenerRegistered_Params {
		struct Unknown ActorListener;
		struct Unknown PerceptionComponent;
	}; OnListenerRegistered_Params Params;

	Params.ActorListener = ActorListener;
	Params.PerceptionComponent = PerceptionComponent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AISense_Blueprint.K2_OnNewPawn
inline void UAISense_Blueprint::K2_OnNewPawn(struct Unknown NewPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.K2_OnNewPawn");

	struct K2_OnNewPawn_Params {
		struct Unknown NewPawn;
	}; K2_OnNewPawn_Params Params;

	Params.NewPawn = NewPawn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AISense_Blueprint.GetAllListenerComponents
inline void UAISense_Blueprint::GetAllListenerComponents(struct TArray<Unknown>& ListenerComponents) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.GetAllListenerComponents");

	struct GetAllListenerComponents_Params {
		struct TArray<Unknown>& ListenerComponents;
	}; GetAllListenerComponents_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ListenerComponents = Params.ListenerComponents;

}

// Function AIModule.AISense_Blueprint.GetAllListenerActors
inline void UAISense_Blueprint::GetAllListenerActors(struct TArray<Unknown>& ListenerActors) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.GetAllListenerActors");

	struct GetAllListenerActors_Params {
		struct TArray<Unknown>& ListenerActors;
	}; GetAllListenerActors_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ListenerActors = Params.ListenerActors;

}

// Function AIModule.AISense_Damage.ReportDamageEvent
inline void UAISense_Damage::ReportDamageEvent(struct Unknown WorldContextObject, struct Unknown DamagedActor, struct Unknown Instigator, float DamageAmount, struct Unknown EventLocation, struct Unknown HitLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Damage.ReportDamageEvent");

	struct ReportDamageEvent_Params {
		struct Unknown WorldContextObject;
		struct Unknown DamagedActor;
		struct Unknown Instigator;
		float DamageAmount;
		struct Unknown EventLocation;
		struct Unknown HitLocation;
	}; ReportDamageEvent_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.DamagedActor = DamagedActor;
	Params.Instigator = Instigator;
	Params.DamageAmount = DamageAmount;
	Params.EventLocation = EventLocation;
	Params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AISense_Hearing.ReportNoiseEvent
inline void UAISense_Hearing::ReportNoiseEvent(struct Unknown WorldContextObject, struct Unknown NoiseLocation, float Loudness, struct Unknown Instigator, float MaxRange, struct FName Tag) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Hearing.ReportNoiseEvent");

	struct ReportNoiseEvent_Params {
		struct Unknown WorldContextObject;
		struct Unknown NoiseLocation;
		float Loudness;
		struct Unknown Instigator;
		float MaxRange;
		struct FName Tag;
	}; ReportNoiseEvent_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.NoiseLocation = NoiseLocation;
	Params.Loudness = Loudness;
	Params.Instigator = Instigator;
	Params.MaxRange = MaxRange;
	Params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
inline void UAISense_Prediction::RequestPawnPredictionEvent(struct Unknown Requestor, struct Unknown PredictedActor, float PredictionTime) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Prediction.RequestPawnPredictionEvent");

	struct RequestPawnPredictionEvent_Params {
		struct Unknown Requestor;
		struct Unknown PredictedActor;
		float PredictionTime;
	}; RequestPawnPredictionEvent_Params Params;

	Params.Requestor = Requestor;
	Params.PredictedActor = PredictedActor;
	Params.PredictionTime = PredictionTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
inline void UAISense_Prediction::RequestControllerPredictionEvent(struct Unknown Requestor, struct Unknown PredictedActor, float PredictionTime) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Prediction.RequestControllerPredictionEvent");

	struct RequestControllerPredictionEvent_Params {
		struct Unknown Requestor;
		struct Unknown PredictedActor;
		float PredictionTime;
	}; RequestControllerPredictionEvent_Params Params;

	Params.Requestor = Requestor;
	Params.PredictedActor = PredictedActor;
	Params.PredictionTime = PredictionTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AISystem.AILoggingVerbose
inline void UAISystem::AILoggingVerbose() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISystem.AILoggingVerbose");

	struct AILoggingVerbose_Params {
		
	}; AILoggingVerbose_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AISystem.AIIgnorePlayers
inline void UAISystem::AIIgnorePlayers() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISystem.AIIgnorePlayers");

	struct AIIgnorePlayers_Params {
		
	}; AIIgnorePlayers_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AITask_MoveTo.AIMoveTo
inline struct Unknown UAITask_MoveTo::AIMoveTo(struct Unknown Controller, struct Unknown GoalLocation, struct Unknown GoalActor, float AcceptanceRadius, char StopOnOverlap, char AcceptPartialPath, char bUsePathfinding, char bLockAILogic, char bUseContinuosGoalTracking, char ProjectGoalOnNavigation) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AITask_MoveTo.AIMoveTo");

	struct AIMoveTo_Params {
		struct Unknown Controller;
		struct Unknown GoalLocation;
		struct Unknown GoalActor;
		float AcceptanceRadius;
		char StopOnOverlap;
		char AcceptPartialPath;
		char bUsePathfinding;
		char bLockAILogic;
		char bUseContinuosGoalTracking;
		char ProjectGoalOnNavigation;
		struct Unknown ReturnValue;

	}; AIMoveTo_Params Params;

	Params.Controller = Controller;
	Params.GoalLocation = GoalLocation;
	Params.GoalActor = GoalActor;
	Params.AcceptanceRadius = AcceptanceRadius;
	Params.StopOnOverlap = StopOnOverlap;
	Params.AcceptPartialPath = AcceptPartialPath;
	Params.bUsePathfinding = bUsePathfinding;
	Params.bLockAILogic = bLockAILogic;
	Params.bUseContinuosGoalTracking = bUseContinuosGoalTracking;
	Params.ProjectGoalOnNavigation = ProjectGoalOnNavigation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.BrainComponent.StopLogic
inline void UBrainComponent::StopLogic(struct FString reason) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.StopLogic");

	struct StopLogic_Params {
		struct FString reason;
	}; StopLogic_Params Params;

	Params.reason = reason;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BrainComponent.StartLogic
inline void UBrainComponent::StartLogic() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.StartLogic");

	struct StartLogic_Params {
		
	}; StartLogic_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BrainComponent.RestartLogic
inline void UBrainComponent::RestartLogic() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.RestartLogic");

	struct RestartLogic_Params {
		
	}; RestartLogic_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BrainComponent.IsRunning
inline char UBrainComponent::IsRunning() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.IsRunning");

	struct IsRunning_Params {
		
		char ReturnValue;

	}; IsRunning_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.BrainComponent.IsPaused
inline char UBrainComponent::IsPaused() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.IsPaused");

	struct IsPaused_Params {
		
		char ReturnValue;

	}; IsPaused_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
inline void UBehaviorTreeComponent::SetDynamicSubtree(struct Unknown InjectTag, struct Unknown BehaviorAsset) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.SetDynamicSubtree");

	struct SetDynamicSubtree_Params {
		struct Unknown InjectTag;
		struct Unknown BehaviorAsset;
	}; SetDynamicSubtree_Params Params;

	Params.InjectTag = InjectTag;
	Params.BehaviorAsset = BehaviorAsset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
inline float UBehaviorTreeComponent::GetTagCooldownEndTime(struct Unknown CooldownTag) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime");

	struct GetTagCooldownEndTime_Params {
		struct Unknown CooldownTag;
		float ReturnValue;

	}; GetTagCooldownEndTime_Params Params;

	Params.CooldownTag = CooldownTag;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
inline void UBehaviorTreeComponent::AddCooldownTagDuration(struct Unknown CooldownTag, float CooldownDuration, char bAddToExistingDuration) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration");

	struct AddCooldownTagDuration_Params {
		struct Unknown CooldownTag;
		float CooldownDuration;
		char bAddToExistingDuration;
	}; AddCooldownTagDuration_Params Params;

	Params.CooldownTag = CooldownTag;
	Params.CooldownDuration = CooldownDuration;
	Params.bAddToExistingDuration = bAddToExistingDuration;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BlackboardComponent.SetValueAsVector
inline void UBlackboardComponent::SetValueAsVector(struct FName& KeyName, struct Unknown VectorValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsVector");

	struct SetValueAsVector_Params {
		struct FName& KeyName;
		struct Unknown VectorValue;
	}; SetValueAsVector_Params Params;

	Params.VectorValue = VectorValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;

}

// Function AIModule.BlackboardComponent.SetValueAsString
inline void UBlackboardComponent::SetValueAsString(struct FName& KeyName, struct FString StringValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsString");

	struct SetValueAsString_Params {
		struct FName& KeyName;
		struct FString StringValue;
	}; SetValueAsString_Params Params;

	Params.StringValue = StringValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;

}

// Function AIModule.BlackboardComponent.SetValueAsRotator
inline void UBlackboardComponent::SetValueAsRotator(struct FName& KeyName, struct Unknown VectorValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsRotator");

	struct SetValueAsRotator_Params {
		struct FName& KeyName;
		struct Unknown VectorValue;
	}; SetValueAsRotator_Params Params;

	Params.VectorValue = VectorValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;

}

// Function AIModule.BlackboardComponent.SetValueAsObject
inline void UBlackboardComponent::SetValueAsObject(struct FName& KeyName, struct Unknown ObjectValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsObject");

	struct SetValueAsObject_Params {
		struct FName& KeyName;
		struct Unknown ObjectValue;
	}; SetValueAsObject_Params Params;

	Params.ObjectValue = ObjectValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;

}

// Function AIModule.BlackboardComponent.SetValueAsName
inline void UBlackboardComponent::SetValueAsName(struct FName& KeyName, struct FName NameValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsName");

	struct SetValueAsName_Params {
		struct FName& KeyName;
		struct FName NameValue;
	}; SetValueAsName_Params Params;

	Params.NameValue = NameValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;

}

// Function AIModule.BlackboardComponent.SetValueAsInt
inline void UBlackboardComponent::SetValueAsInt(struct FName& KeyName, int32_t IntValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsInt");

	struct SetValueAsInt_Params {
		struct FName& KeyName;
		int32_t IntValue;
	}; SetValueAsInt_Params Params;

	Params.IntValue = IntValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;

}

// Function AIModule.BlackboardComponent.SetValueAsFloat
inline void UBlackboardComponent::SetValueAsFloat(struct FName& KeyName, float FloatValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsFloat");

	struct SetValueAsFloat_Params {
		struct FName& KeyName;
		float FloatValue;
	}; SetValueAsFloat_Params Params;

	Params.FloatValue = FloatValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;

}

// Function AIModule.BlackboardComponent.SetValueAsEnum
inline void UBlackboardComponent::SetValueAsEnum(struct FName& KeyName, char EnumValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsEnum");

	struct SetValueAsEnum_Params {
		struct FName& KeyName;
		char EnumValue;
	}; SetValueAsEnum_Params Params;

	Params.EnumValue = EnumValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;

}

// Function AIModule.BlackboardComponent.SetValueAsClass
inline void UBlackboardComponent::SetValueAsClass(struct FName& KeyName, struct Unknown* ClassValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsClass");

	struct SetValueAsClass_Params {
		struct FName& KeyName;
		struct Unknown* ClassValue;
	}; SetValueAsClass_Params Params;

	Params.ClassValue = ClassValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;

}

// Function AIModule.BlackboardComponent.SetValueAsBool
inline void UBlackboardComponent::SetValueAsBool(struct FName& KeyName, char BoolValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsBool");

	struct SetValueAsBool_Params {
		struct FName& KeyName;
		char BoolValue;
	}; SetValueAsBool_Params Params;

	Params.BoolValue = BoolValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;

}

// Function AIModule.BlackboardComponent.IsVectorValueSet
inline char UBlackboardComponent::IsVectorValueSet(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.IsVectorValueSet");

	struct IsVectorValueSet_Params {
		struct FName& KeyName;
		char ReturnValue;

	}; IsVectorValueSet_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetValueAsVector
inline struct Unknown UBlackboardComponent::GetValueAsVector(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsVector");

	struct GetValueAsVector_Params {
		struct FName& KeyName;
		struct Unknown ReturnValue;

	}; GetValueAsVector_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetValueAsString
inline struct FString UBlackboardComponent::GetValueAsString(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsString");

	struct GetValueAsString_Params {
		struct FName& KeyName;
		struct FString ReturnValue;

	}; GetValueAsString_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetValueAsRotator
inline struct Unknown UBlackboardComponent::GetValueAsRotator(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsRotator");

	struct GetValueAsRotator_Params {
		struct FName& KeyName;
		struct Unknown ReturnValue;

	}; GetValueAsRotator_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetValueAsObject
inline struct Unknown UBlackboardComponent::GetValueAsObject(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsObject");

	struct GetValueAsObject_Params {
		struct FName& KeyName;
		struct Unknown ReturnValue;

	}; GetValueAsObject_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetValueAsName
inline struct FName UBlackboardComponent::GetValueAsName(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsName");

	struct GetValueAsName_Params {
		struct FName& KeyName;
		struct FName ReturnValue;

	}; GetValueAsName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetValueAsInt
inline int32_t UBlackboardComponent::GetValueAsInt(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsInt");

	struct GetValueAsInt_Params {
		struct FName& KeyName;
		int32_t ReturnValue;

	}; GetValueAsInt_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetValueAsFloat
inline float UBlackboardComponent::GetValueAsFloat(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsFloat");

	struct GetValueAsFloat_Params {
		struct FName& KeyName;
		float ReturnValue;

	}; GetValueAsFloat_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetValueAsEnum
inline char UBlackboardComponent::GetValueAsEnum(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsEnum");

	struct GetValueAsEnum_Params {
		struct FName& KeyName;
		char ReturnValue;

	}; GetValueAsEnum_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetValueAsClass
inline struct Unknown* UBlackboardComponent::GetValueAsClass(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsClass");

	struct GetValueAsClass_Params {
		struct FName& KeyName;
		struct Unknown* ReturnValue;

	}; GetValueAsClass_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetValueAsBool
inline char UBlackboardComponent::GetValueAsBool(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsBool");

	struct GetValueAsBool_Params {
		struct FName& KeyName;
		char ReturnValue;

	}; GetValueAsBool_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetRotationFromEntry
inline char UBlackboardComponent::GetRotationFromEntry(struct FName& KeyName, struct Unknown& ResultRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetRotationFromEntry");

	struct GetRotationFromEntry_Params {
		struct FName& KeyName;
		struct Unknown& ResultRotation;
		char ReturnValue;

	}; GetRotationFromEntry_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;
	ResultRotation = Params.ResultRotation;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetLocationFromEntry
inline char UBlackboardComponent::GetLocationFromEntry(struct FName& KeyName, struct Unknown& ResultLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetLocationFromEntry");

	struct GetLocationFromEntry_Params {
		struct FName& KeyName;
		struct Unknown& ResultLocation;
		char ReturnValue;

	}; GetLocationFromEntry_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;
	ResultLocation = Params.ResultLocation;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.ClearValue
inline void UBlackboardComponent::ClearValue(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.ClearValue");

	struct ClearValue_Params {
		struct FName& KeyName;
	}; ClearValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;

}

// Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
inline void UBTDecorator_BlueprintBase::ReceiveTickAI(struct Unknown OwnerController, struct Unknown ControlledPawn, float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI");

	struct ReceiveTickAI_Params {
		struct Unknown OwnerController;
		struct Unknown ControlledPawn;
		float DeltaSeconds;
	}; ReceiveTickAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;
	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
inline void UBTDecorator_BlueprintBase::ReceiveTick(struct Unknown OwnerActor, float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveTick");

	struct ReceiveTick_Params {
		struct Unknown OwnerActor;
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.OwnerActor = OwnerActor;
	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
inline void UBTDecorator_BlueprintBase::ReceiveObserverDeactivatedAI(struct Unknown OwnerController, struct Unknown ControlledPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI");

	struct ReceiveObserverDeactivatedAI_Params {
		struct Unknown OwnerController;
		struct Unknown ControlledPawn;
	}; ReceiveObserverDeactivatedAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
inline void UBTDecorator_BlueprintBase::ReceiveObserverDeactivated(struct Unknown OwnerActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated");

	struct ReceiveObserverDeactivated_Params {
		struct Unknown OwnerActor;
	}; ReceiveObserverDeactivated_Params Params;

	Params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
inline void UBTDecorator_BlueprintBase::ReceiveObserverActivatedAI(struct Unknown OwnerController, struct Unknown ControlledPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI");

	struct ReceiveObserverActivatedAI_Params {
		struct Unknown OwnerController;
		struct Unknown ControlledPawn;
	}; ReceiveObserverActivatedAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
inline void UBTDecorator_BlueprintBase::ReceiveObserverActivated(struct Unknown OwnerActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated");

	struct ReceiveObserverActivated_Params {
		struct Unknown OwnerActor;
	}; ReceiveObserverActivated_Params Params;

	Params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
inline void UBTDecorator_BlueprintBase::ReceiveExecutionStartAI(struct Unknown OwnerController, struct Unknown ControlledPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI");

	struct ReceiveExecutionStartAI_Params {
		struct Unknown OwnerController;
		struct Unknown ControlledPawn;
	}; ReceiveExecutionStartAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
inline void UBTDecorator_BlueprintBase::ReceiveExecutionStart(struct Unknown OwnerActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart");

	struct ReceiveExecutionStart_Params {
		struct Unknown OwnerActor;
	}; ReceiveExecutionStart_Params Params;

	Params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
inline void UBTDecorator_BlueprintBase::ReceiveExecutionFinishAI(struct Unknown OwnerController, struct Unknown ControlledPawn, char NodeResult) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI");

	struct ReceiveExecutionFinishAI_Params {
		struct Unknown OwnerController;
		struct Unknown ControlledPawn;
		char NodeResult;
	}; ReceiveExecutionFinishAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;
	Params.NodeResult = NodeResult;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
inline void UBTDecorator_BlueprintBase::ReceiveExecutionFinish(struct Unknown OwnerActor, char NodeResult) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish");

	struct ReceiveExecutionFinish_Params {
		struct Unknown OwnerActor;
		char NodeResult;
	}; ReceiveExecutionFinish_Params Params;

	Params.OwnerActor = OwnerActor;
	Params.NodeResult = NodeResult;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
inline char UBTDecorator_BlueprintBase::PerformConditionCheckAI(struct Unknown OwnerController, struct Unknown ControlledPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI");

	struct PerformConditionCheckAI_Params {
		struct Unknown OwnerController;
		struct Unknown ControlledPawn;
		char ReturnValue;

	}; PerformConditionCheckAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
inline char UBTDecorator_BlueprintBase::PerformConditionCheck(struct Unknown OwnerActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck");

	struct PerformConditionCheck_Params {
		struct Unknown OwnerActor;
		char ReturnValue;

	}; PerformConditionCheck_Params Params;

	Params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
inline char UBTDecorator_BlueprintBase::IsDecoratorObserverActive() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive");

	struct IsDecoratorObserverActive_Params {
		
		char ReturnValue;

	}; IsDecoratorObserverActive_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
inline char UBTDecorator_BlueprintBase::IsDecoratorExecutionActive() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive");

	struct IsDecoratorExecutionActive_Params {
		
		char ReturnValue;

	}; IsDecoratorExecutionActive_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.BTService_BlueprintBase.ReceiveTickAI
inline void UBTService_BlueprintBase::ReceiveTickAI(struct Unknown OwnerController, struct Unknown ControlledPawn, float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveTickAI");

	struct ReceiveTickAI_Params {
		struct Unknown OwnerController;
		struct Unknown ControlledPawn;
		float DeltaSeconds;
	}; ReceiveTickAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;
	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTService_BlueprintBase.ReceiveTick
inline void UBTService_BlueprintBase::ReceiveTick(struct Unknown OwnerActor, float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveTick");

	struct ReceiveTick_Params {
		struct Unknown OwnerActor;
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.OwnerActor = OwnerActor;
	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
inline void UBTService_BlueprintBase::ReceiveSearchStartAI(struct Unknown OwnerController, struct Unknown ControlledPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI");

	struct ReceiveSearchStartAI_Params {
		struct Unknown OwnerController;
		struct Unknown ControlledPawn;
	}; ReceiveSearchStartAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
inline void UBTService_BlueprintBase::ReceiveSearchStart(struct Unknown OwnerActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveSearchStart");

	struct ReceiveSearchStart_Params {
		struct Unknown OwnerActor;
	}; ReceiveSearchStart_Params Params;

	Params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
inline void UBTService_BlueprintBase::ReceiveDeactivationAI(struct Unknown OwnerController, struct Unknown ControlledPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI");

	struct ReceiveDeactivationAI_Params {
		struct Unknown OwnerController;
		struct Unknown ControlledPawn;
	}; ReceiveDeactivationAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
inline void UBTService_BlueprintBase::ReceiveDeactivation(struct Unknown OwnerActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveDeactivation");

	struct ReceiveDeactivation_Params {
		struct Unknown OwnerActor;
	}; ReceiveDeactivation_Params Params;

	Params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
inline void UBTService_BlueprintBase::ReceiveActivationAI(struct Unknown OwnerController, struct Unknown ControlledPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveActivationAI");

	struct ReceiveActivationAI_Params {
		struct Unknown OwnerController;
		struct Unknown ControlledPawn;
	}; ReceiveActivationAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTService_BlueprintBase.ReceiveActivation
inline void UBTService_BlueprintBase::ReceiveActivation(struct Unknown OwnerActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveActivation");

	struct ReceiveActivation_Params {
		struct Unknown OwnerActor;
	}; ReceiveActivation_Params Params;

	Params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTService_BlueprintBase.IsServiceActive
inline char UBTService_BlueprintBase::IsServiceActive() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.IsServiceActive");

	struct IsServiceActive_Params {
		
		char ReturnValue;

	}; IsServiceActive_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
inline void UBTTask_BlueprintBase::SetFinishOnMessageWithId(struct FName MessageName, int32_t RequestID) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId");

	struct SetFinishOnMessageWithId_Params {
		struct FName MessageName;
		int32_t RequestID;
	}; SetFinishOnMessageWithId_Params Params;

	Params.MessageName = MessageName;
	Params.RequestID = RequestID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
inline void UBTTask_BlueprintBase::SetFinishOnMessage(struct FName MessageName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage");

	struct SetFinishOnMessage_Params {
		struct FName MessageName;
	}; SetFinishOnMessage_Params Params;

	Params.MessageName = MessageName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
inline void UBTTask_BlueprintBase::ReceiveTickAI(struct Unknown OwnerController, struct Unknown ControlledPawn, float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveTickAI");

	struct ReceiveTickAI_Params {
		struct Unknown OwnerController;
		struct Unknown ControlledPawn;
		float DeltaSeconds;
	}; ReceiveTickAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;
	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTTask_BlueprintBase.ReceiveTick
inline void UBTTask_BlueprintBase::ReceiveTick(struct Unknown OwnerActor, float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveTick");

	struct ReceiveTick_Params {
		struct Unknown OwnerActor;
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.OwnerActor = OwnerActor;
	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
inline void UBTTask_BlueprintBase::ReceiveExecuteAI(struct Unknown OwnerController, struct Unknown ControlledPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI");

	struct ReceiveExecuteAI_Params {
		struct Unknown OwnerController;
		struct Unknown ControlledPawn;
	}; ReceiveExecuteAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTTask_BlueprintBase.ReceiveExecute
inline void UBTTask_BlueprintBase::ReceiveExecute(struct Unknown OwnerActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveExecute");

	struct ReceiveExecute_Params {
		struct Unknown OwnerActor;
	}; ReceiveExecute_Params Params;

	Params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
inline void UBTTask_BlueprintBase::ReceiveAbortAI(struct Unknown OwnerController, struct Unknown ControlledPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI");

	struct ReceiveAbortAI_Params {
		struct Unknown OwnerController;
		struct Unknown ControlledPawn;
	}; ReceiveAbortAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTTask_BlueprintBase.ReceiveAbort
inline void UBTTask_BlueprintBase::ReceiveAbort(struct Unknown OwnerActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveAbort");

	struct ReceiveAbort_Params {
		struct Unknown OwnerActor;
	}; ReceiveAbort_Params Params;

	Params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
inline char UBTTask_BlueprintBase::IsTaskExecuting() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.IsTaskExecuting");

	struct IsTaskExecuting_Params {
		
		char ReturnValue;

	}; IsTaskExecuting_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.BTTask_BlueprintBase.IsTaskAborting
inline char UBTTask_BlueprintBase::IsTaskAborting() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.IsTaskAborting");

	struct IsTaskAborting_Params {
		
		char ReturnValue;

	}; IsTaskAborting_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.BTTask_BlueprintBase.FinishExecute
inline void UBTTask_BlueprintBase::FinishExecute(char bSuccess) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.FinishExecute");

	struct FinishExecute_Params {
		char bSuccess;
	}; FinishExecute_Params Params;

	Params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTTask_BlueprintBase.FinishAbort
inline void UBTTask_BlueprintBase::FinishAbort() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.FinishAbort");

	struct FinishAbort_Params {
		
	}; FinishAbort_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.PathFollowingComponent.OnNavDataRegistered
inline void UPathFollowingComponent::OnNavDataRegistered(struct Unknown NavData) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.OnNavDataRegistered");

	struct OnNavDataRegistered_Params {
		struct Unknown NavData;
	}; OnNavDataRegistered_Params Params;

	Params.NavData = NavData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.PathFollowingComponent.OnActorBump
inline void UPathFollowingComponent::OnActorBump(struct Unknown SelfActor, struct Unknown OtherActor, struct Unknown NormalImpulse, struct Unknown& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.OnActorBump");

	struct OnActorBump_Params {
		struct Unknown SelfActor;
		struct Unknown OtherActor;
		struct Unknown NormalImpulse;
		struct Unknown& Hit;
	}; OnActorBump_Params Params;

	Params.SelfActor = SelfActor;
	Params.OtherActor = OtherActor;
	Params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Hit = Params.Hit;

}

// Function AIModule.PathFollowingComponent.GetPathDestination
inline struct Unknown UPathFollowingComponent::GetPathDestination() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.GetPathDestination");

	struct GetPathDestination_Params {
		
		struct Unknown ReturnValue;

	}; GetPathDestination_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.PathFollowingComponent.GetPathActionType
inline char UPathFollowingComponent::GetPathActionType() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.GetPathActionType");

	struct GetPathActionType_Params {
		
		char ReturnValue;

	}; GetPathActionType_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
inline void UCrowdFollowingComponent::SuspendCrowdSteering(char bSuspend) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering");

	struct SuspendCrowdSteering_Params {
		char bSuspend;
	}; SuspendCrowdSteering_Params Params;

	Params.bSuspend = bSuspend;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
inline struct Unknown UEnvQueryGenerator_BlueprintBase::GetQuerier() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier");

	struct GetQuerier_Params {
		
		struct Unknown ReturnValue;

	}; GetQuerier_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
inline void UEnvQueryGenerator_BlueprintBase::DoItemGeneration(struct TArray<Unknown>& ContextLocations) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration");

	struct DoItemGeneration_Params {
		struct TArray<Unknown>& ContextLocations;
	}; DoItemGeneration_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ContextLocations = Params.ContextLocations;

}

// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
inline void UEnvQueryGenerator_BlueprintBase::AddGeneratedVector(struct Unknown GeneratedVector) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector");

	struct AddGeneratedVector_Params {
		struct Unknown GeneratedVector;
	}; AddGeneratedVector_Params Params;

	Params.GeneratedVector = GeneratedVector;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
inline void UEnvQueryGenerator_BlueprintBase::AddGeneratedActor(struct Unknown GeneratedActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor");

	struct AddGeneratedActor_Params {
		struct Unknown GeneratedActor;
	}; AddGeneratedActor_Params Params;

	Params.GeneratedActor = GeneratedActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
inline void UEnvQueryInstanceBlueprintWrapper::SetNamedParam(struct FName ParamName, float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam");

	struct SetNamedParam_Params {
		struct FName ParamName;
		float Value;
	}; SetNamedParam_Params Params;

	Params.ParamName = ParamName;
	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
inline struct TArray<Unknown> UEnvQueryInstanceBlueprintWrapper::GetResultsAsLocations() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations");

	struct GetResultsAsLocations_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetResultsAsLocations_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
inline struct TArray<Unknown> UEnvQueryInstanceBlueprintWrapper::GetResultsAsActors() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors");

	struct GetResultsAsActors_Params {
		
		struct TArray<Unknown> ReturnValue;

	}; GetResultsAsActors_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
inline char UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsLocations(struct TArray<Unknown>& ResultLocations) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations");

	struct GetQueryResultsAsLocations_Params {
		struct TArray<Unknown>& ResultLocations;
		char ReturnValue;

	}; GetQueryResultsAsLocations_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ResultLocations = Params.ResultLocations;


	return params.ReturnValue;
}

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
inline char UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsActors(struct TArray<Unknown>& ResultActors) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors");

	struct GetQueryResultsAsActors_Params {
		struct TArray<Unknown>& ResultActors;
		char ReturnValue;

	}; GetQueryResultsAsActors_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ResultActors = Params.ResultActors;


	return params.ReturnValue;
}

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
inline float UEnvQueryInstanceBlueprintWrapper::GetItemScore(int32_t ItemIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore");

	struct GetItemScore_Params {
		int32_t ItemIndex;
		float ReturnValue;

	}; GetItemScore_Params Params;

	Params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
inline void UEnvQueryInstanceBlueprintWrapper::EQSQueryDoneSignature__DelegateSignature(struct Unknown QueryInstance, char QueryStatus) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature");

	struct EQSQueryDoneSignature__DelegateSignature_Params {
		struct Unknown QueryInstance;
		char QueryStatus;
	}; EQSQueryDoneSignature__DelegateSignature_Params Params;

	Params.QueryInstance = QueryInstance;
	Params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.EnvQueryManager.RunEQSQuery
inline struct Unknown UEnvQueryManager::RunEQSQuery(struct Unknown WorldContextObject, struct Unknown QueryTemplate, struct Unknown Querier, char RunMode, struct Unknown* WrapperClass) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryManager.RunEQSQuery");

	struct RunEQSQuery_Params {
		struct Unknown WorldContextObject;
		struct Unknown QueryTemplate;
		struct Unknown Querier;
		char RunMode;
		struct Unknown* WrapperClass;
		struct Unknown ReturnValue;

	}; RunEQSQuery_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.QueryTemplate = QueryTemplate;
	Params.Querier = Querier;
	Params.RunMode = RunMode;
	Params.WrapperClass = WrapperClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.NavLinkProxy.SetSmartLinkEnabled
inline void ANavLinkProxy::SetSmartLinkEnabled(char bEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.SetSmartLinkEnabled");

	struct SetSmartLinkEnabled_Params {
		char bEnabled;
	}; SetSmartLinkEnabled_Params Params;

	Params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.NavLinkProxy.ResumePathFollowing
inline void ANavLinkProxy::ResumePathFollowing(struct Unknown Agent) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.ResumePathFollowing");

	struct ResumePathFollowing_Params {
		struct Unknown Agent;
	}; ResumePathFollowing_Params Params;

	Params.Agent = Agent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.NavLinkProxy.ReceiveSmartLinkReached
inline void ANavLinkProxy::ReceiveSmartLinkReached(struct Unknown Agent, struct Unknown& Destination) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.ReceiveSmartLinkReached");

	struct ReceiveSmartLinkReached_Params {
		struct Unknown Agent;
		struct Unknown& Destination;
	}; ReceiveSmartLinkReached_Params Params;

	Params.Agent = Agent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Destination = Params.Destination;

}

// Function AIModule.NavLinkProxy.IsSmartLinkEnabled
inline char ANavLinkProxy::IsSmartLinkEnabled() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.IsSmartLinkEnabled");

	struct IsSmartLinkEnabled_Params {
		
		char ReturnValue;

	}; IsSmartLinkEnabled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.NavLinkProxy.HasMovingAgents
inline char ANavLinkProxy::HasMovingAgents() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.HasMovingAgents");

	struct HasMovingAgents_Params {
		
		char ReturnValue;

	}; HasMovingAgents_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.PawnAction.GetActionPriority
inline char UPawnAction::GetActionPriority() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.GetActionPriority");

	struct GetActionPriority_Params {
		
		char ReturnValue;

	}; GetActionPriority_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.PawnAction.Finish
inline void UPawnAction::Finish(char WithResult) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.Finish");

	struct Finish_Params {
		char WithResult;
	}; Finish_Params Params;

	Params.WithResult = WithResult;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.PawnAction.CreateActionInstance
inline struct Unknown UPawnAction::CreateActionInstance(struct Unknown WorldContextObject, struct Unknown* ActionClass) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.CreateActionInstance");

	struct CreateActionInstance_Params {
		struct Unknown WorldContextObject;
		struct Unknown* ActionClass;
		struct Unknown ReturnValue;

	}; CreateActionInstance_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.ActionClass = ActionClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.PawnActionsComponent.K2_PushAction
inline char UPawnActionsComponent::K2_PushAction(struct Unknown NewAction, char Priority, struct Unknown Instigator) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_PushAction");

	struct K2_PushAction_Params {
		struct Unknown NewAction;
		char Priority;
		struct Unknown Instigator;
		char ReturnValue;

	}; K2_PushAction_Params Params;

	Params.NewAction = NewAction;
	Params.Priority = Priority;
	Params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.PawnActionsComponent.K2_PerformAction
inline char UPawnActionsComponent::K2_PerformAction(struct Unknown Pawn, struct Unknown Action, char Priority) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_PerformAction");

	struct K2_PerformAction_Params {
		struct Unknown Pawn;
		struct Unknown Action;
		char Priority;
		char ReturnValue;

	}; K2_PerformAction_Params Params;

	Params.Pawn = Pawn;
	Params.Action = Action;
	Params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.PawnActionsComponent.K2_ForceAbortAction
inline char UPawnActionsComponent::K2_ForceAbortAction(struct Unknown ActionToAbort) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_ForceAbortAction");

	struct K2_ForceAbortAction_Params {
		struct Unknown ActionToAbort;
		char ReturnValue;

	}; K2_ForceAbortAction_Params Params;

	Params.ActionToAbort = ActionToAbort;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.PawnActionsComponent.K2_AbortAction
inline char UPawnActionsComponent::K2_AbortAction(struct Unknown ActionToAbort) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_AbortAction");

	struct K2_AbortAction_Params {
		struct Unknown ActionToAbort;
		char ReturnValue;

	}; K2_AbortAction_Params Params;

	Params.ActionToAbort = ActionToAbort;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
inline void UPawnSensingComponent::SetSensingUpdatesEnabled(char bEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled");

	struct SetSensingUpdatesEnabled_Params {
		char bEnabled;
	}; SetSensingUpdatesEnabled_Params Params;

	Params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.PawnSensingComponent.SetSensingInterval
inline void UPawnSensingComponent::SetSensingInterval(float NewSensingInterval) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetSensingInterval");

	struct SetSensingInterval_Params {
		float NewSensingInterval;
	}; SetSensingInterval_Params Params;

	Params.NewSensingInterval = NewSensingInterval;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
inline void UPawnSensingComponent::SetPeripheralVisionAngle(float NewPeripheralVisionAngle) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle");

	struct SetPeripheralVisionAngle_Params {
		float NewPeripheralVisionAngle;
	}; SetPeripheralVisionAngle_Params Params;

	Params.NewPeripheralVisionAngle = NewPeripheralVisionAngle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
inline void UPawnSensingComponent::SeePawnDelegate__DelegateSignature(struct Unknown Pawn) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature");

	struct SeePawnDelegate__DelegateSignature_Params {
		struct Unknown Pawn;
	}; SeePawnDelegate__DelegateSignature_Params Params;

	Params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
inline void UPawnSensingComponent::HearNoiseDelegate__DelegateSignature(struct Unknown Instigator, struct Unknown& Location, float Volume) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature");

	struct HearNoiseDelegate__DelegateSignature_Params {
		struct Unknown Instigator;
		struct Unknown& Location;
		float Volume;
	}; HearNoiseDelegate__DelegateSignature_Params Params;

	Params.Instigator = Instigator;
	Params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Location = Params.Location;

}

// Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
inline float UPawnSensingComponent::GetPeripheralVisionCosine() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine");

	struct GetPeripheralVisionCosine_Params {
		
		float ReturnValue;

	}; GetPeripheralVisionCosine_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
inline float UPawnSensingComponent::GetPeripheralVisionAngle() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle");

	struct GetPeripheralVisionAngle_Params {
		
		float ReturnValue;

	}; GetPeripheralVisionAngle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

