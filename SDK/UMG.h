// Enum UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8_t {
	NotAccessible = 0,
	Auto = 1,
	Summary = 2,
	Custom = 3,
	ToolTip = 4,
	ESlateAccessibleBehavior_MAX = 5,
};

// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t {
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	SelfHitTestInvisible = 4,
	ESlateVisibility_MAX = 5,
};

// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8_t {
	Default = 0,
	Number = 1,
	Web = 2,
	Email = 3,
	Password = 4,
	AlphaNumeric = 5,
	EVirtualKeyboardType_MAX = 6,
};

// Enum UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8_t {
	Started = 0,
	Finished = 1,
	EWidgetAnimationEvent_MAX = 2,
};

// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t {
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	EUMGSequencePlayMode_MAX = 3,
};

// Enum UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8_t {
	Never = 0,
	Auto = 1,
	EWidgetTickFrequency_MAX = 2,
};

// Enum UMG.EDragPivot
enum class EDragPivot : uint8_t {
	MouseDown = 0,
	TopLeft = 1,
	TopCenter = 2,
	TopRight = 3,
	CenterLeft = 4,
	CenterCenter = 5,
	CenterRight = 6,
	BottomLeft = 7,
	BottomCenter = 8,
	BottomRight = 9,
	EDragPivot_MAX = 10,
};

// Enum UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	Wrap = 2,
	Overlay = 3,
	EDynamicBoxType_MAX = 4,
};

// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t {
	Automatic = 0,
	Fill = 1,
	ESlateSizeRule_MAX = 2,
};

// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t {
	None = 0,
	Designing = 1,
	ShowOutline = 2,
	ExecutePreConstruct = 4,
	EWidgetDesignFlags_MAX = 5,
};

// Enum UMG.EBindingKind
enum class EBindingKind : uint8_t {
	Function = 0,
	Property = 1,
	EBindingKind_MAX = 2,
};

// Enum UMG.EWindowVisibility
enum class EWindowVisibility : uint8_t {
	Visible = 0,
	SelfHitTestInvisible = 1,
	EWindowVisibility_MAX = 2,
};

// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8_t {
	Plane = 0,
	Cylinder = 1,
	EWidgetGeometryMode_MAX = 2,
};

// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t {
	Opaque = 0,
	Masked = 1,
	Transparent = 2,
	EWidgetBlendMode_MAX = 3,
};

// Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8_t {
	RealTime = 0,
	GameTime = 1,
	EWidgetTimingPolicy_MAX = 2,
};

// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t {
	World = 0,
	Screen = 1,
	EWidgetSpace_MAX = 2,
};

// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8_t {
	World = 0,
	Mouse = 1,
	CenterScreen = 2,
	Custom = 3,
	EWidgetInteractionSource_MAX = 4,
};

// Class UMG.Widget
class UWidget : public UVisual {

public:

	struct UPanelSlot Slot; // 0x28 (8)
	struct FDelegate bIsEnabledDelegate; // 0x30 (16)
	struct FText ToolTipText; // 0x40 (24)
	struct FDelegate ToolTipTextDelegate; // 0x58 (16)
	struct UWidget ToolTipWidget; // 0x68 (8)
	struct FDelegate ToolTipWidgetDelegate; // 0x70 (16)
	struct FDelegate VisibilityDelegate; // 0x80 (16)
	struct FWidgetTransform RenderTransform; // 0x90 (28)
	struct FVector2D RenderTransformPivot; // 0xAC (8)
	char bIsVariable : 0; // 0xB4 (1)
	char bCreatedByConstructionScript : 0; // 0xB4 (1)
	char bIsEnabled : 0; // 0xB4 (1)
	char bOverride_Cursor : 0; // 0xB4 (1)
	struct USlateAccessibleWidgetData AccessibleWidgetData; // 0xB8 (8)
	char bIsVolatile : 0; // 0xC0 (1)
	char Cursor; // 0xC1 (1)
	enum class EWidgetClipping Clipping; // 0xC2 (1)
	enum class ESlateVisibility Visibility; // 0xC3 (1)
	float RenderOpacity; // 0xC4 (4)
	struct UWidgetNavigation Navigation; // 0xC8 (8)
	enum class EFlowDirectionPreference FlowDirectionPreference; // 0xD0 (1)
	struct TArray<struct UPropertyBinding> NativeBindings; // 0xF8 (16)

	void SetVisibility(enum class ESlateVisibility InVisibility); // Function UMG.Widget.SetVisibility(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7B1B0>
	void SetUserFocus(struct APlayerController PlayerController); // Function UMG.Widget.SetUserFocus(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7AF90>
	void SetToolTipText(struct FText& InToolTipText); // Function UMG.Widget.SetToolTipText(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7AEC0>
	void SetToolTip(struct UWidget Widget); // Function UMG.Widget.SetToolTip(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7AE40>
	void SetRenderTranslation(struct FVector2D Translation); // Function UMG.Widget.SetRenderTranslation(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7AD30>
	void SetRenderTransformPivot(struct FVector2D Pivot); // Function UMG.Widget.SetRenderTransformPivot(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7ACB0>
	void SetRenderTransformAngle(float Angle); // Function UMG.Widget.SetRenderTransformAngle(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7AC30>
	void SetRenderTransform(struct FWidgetTransform InTransform); // Function UMG.Widget.SetRenderTransform(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7AB50>
	void SetRenderShear(struct FVector2D Shear); // Function UMG.Widget.SetRenderShear(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7AAD0>
	void SetRenderScale(struct FVector2D Scale); // Function UMG.Widget.SetRenderScale(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7AA50>
	void SetRenderOpacity(float InOpacity); // Function UMG.Widget.SetRenderOpacity(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7A9D0>
	void SetNavigationRuleExplicit(enum class EUINavigation Direction, struct UWidget InWidget); // Function UMG.Widget.SetNavigationRuleExplicit(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7A880>
	void SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustomBoundary(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7A7A0>
	void SetNavigationRuleCustom(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustom(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7A6C0>
	void SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule); // Function UMG.Widget.SetNavigationRuleBase(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7A600>
	void SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetNavigationRule(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7A4F0>
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7A4D0>
	void SetIsEnabled(char bInIsEnabled); // Function UMG.Widget.SetIsEnabled(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7A440>
	void SetFocus(); // Function UMG.Widget.SetFocus(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7A3A0>
	void SetCursor(char InCursor); // Function UMG.Widget.SetCursor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7A320>
	void SetClipping(enum class EWidgetClipping InClipping); // Function UMG.Widget.SetClipping(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7A2A0>
	void SetAllNavigationRules(enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetAllNavigationRules(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7A1E0>
	void ResetCursor(); // Function UMG.Widget.ResetCursor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7A1C0>
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7A1A0>
	struct FEventReply OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature(Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	char IsVisible(); // Function UMG.Widget.IsVisible(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7A170>
	char IsHovered(); // Function UMG.Widget.IsHovered(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36D1FF0>
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7A150>
	char HasUserFocusedDescendants(struct APlayerController PlayerController); // Function UMG.Widget.HasUserFocusedDescendants(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7A0C0>
	char HasUserFocus(struct APlayerController PlayerController); // Function UMG.Widget.HasUserFocus(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7A030>
	char HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex); // Function UMG.Widget.HasMouseCaptureByUser(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79F70>
	char HasMouseCapture(); // Function UMG.Widget.HasMouseCapture(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79F40>
	char HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79F10>
	char HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79EE0>
	char HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79EB0>
	struct UWidget GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	enum class ESlateVisibility GetVisibility(); // Function UMG.Widget.GetVisibility(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79E80>
	struct FGeometry GetTickSpaceGeometry(); // Function UMG.Widget.GetTickSpaceGeometry(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79D60>
	struct FText GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FSlateColor GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FSlateBrush GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	float GetRenderTransformAngle(); // Function UMG.Widget.GetRenderTransformAngle(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79D30>
	float GetRenderOpacity(); // Function UMG.Widget.GetRenderOpacity(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79D00>
	struct UPanelWidget GetParent(); // Function UMG.Widget.GetParent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79CD0>
	struct FGeometry GetPaintSpaceGeometry(); // Function UMG.Widget.GetPaintSpaceGeometry(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79C90>
	struct APlayerController GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer(BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79C60>
	struct ULocalPlayer GetOwningLocalPlayer(); // Function UMG.Widget.GetOwningLocalPlayer(BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79C30>
	char GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FLinearColor GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature(Public|Delegate|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	char GetIsEnabled(); // Function UMG.Widget.GetIsEnabled(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79C00>
	int32_t GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct UGameInstance GetGameInstance(); // Function UMG.Widget.GetGameInstance(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79BD0>
	float GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FVector2D GetDesiredSize(); // Function UMG.Widget.GetDesiredSize(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79B90>
	enum class EWidgetClipping GetClipping(); // Function UMG.Widget.GetClipping(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79B60>
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FGeometry GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79B20>
	char GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct UWidget GenerateWidgetForString__DelegateSignature(struct FString Item); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct UWidget GenerateWidgetForObject__DelegateSignature(struct Object Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ForceVolatile(char bForce); // Function UMG.Widget.ForceVolatile(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79A90>
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79A70>
};

// Class UMG.UserWidget
class UUserWidget : public UWidget {

public:

	struct FLinearColor ColorAndOpacity; // 0x110 (16)
	struct FDelegate ColorAndOpacityDelegate; // 0x120 (16)
	struct FSlateColor ForegroundColor; // 0x130 (40)
	struct FDelegate ForegroundColorDelegate; // 0x158 (16)
	struct FMargin Padding; // 0x168 (16)
	struct TArray<struct UUMGSequencePlayer> ActiveSequencePlayers; // 0x178 (16)
	struct TArray<struct UUMGSequencePlayer> StoppedSequencePlayers; // 0x188 (16)
	char NoPixelSnapping : 0; // 0x198 (1)
	struct FDelegate NoPixelSnappingDelegate; // 0x19C (16)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; // 0x1B0 (16)
	struct UWidgetTree WidgetTree; // 0x1C0 (8)
	int32_t Priority; // 0x1C8 (4)
	char bSupportsKeyboardFocus : 0; // 0x1CC (1)
	char bIsFocusable : 0; // 0x1CC (1)
	char bStopAction : 0; // 0x1CC (1)
	char bHasScriptImplementedTick : 0; // 0x1CC (1)
	char bHasScriptImplementedPaint : 0; // 0x1CC (1)
	char bCookedWidgetTree : 0; // 0x1CC (1)
	enum class EWidgetTickFrequency TickFrequency; // 0x1D8 (1)
	struct UInputComponent InputComponent; // 0x1E0 (8)
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks; // 0x1E8 (16)

	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent(Final|Native|Protected|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B77EC0>
	void UnbindFromAnimationStarted(struct UWidgetAnimation Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationStarted(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B77DE0>
	void UnbindFromAnimationFinished(struct UWidgetAnimation Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationFinished(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B77D00>
	void UnbindAllFromAnimationStarted(struct UWidgetAnimation Animation); // Function UMG.UserWidget.UnbindAllFromAnimationStarted(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B77C80>
	void UnbindAllFromAnimationFinished(struct UWidgetAnimation Animation); // Function UMG.UserWidget.UnbindAllFromAnimationFinished(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B77C00>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG.UserWidget.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void StopListeningForInputAction(struct FName ActionName, char EventType); // Function UMG.UserWidget.StopListeningForInputAction(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B77B40>
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B77B20>
	void StopAnimationsAndLatentActions(); // Function UMG.UserWidget.StopAnimationsAndLatentActions(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B77B00>
	void StopAnimation(struct UWidgetAnimation InAnimation); // Function UMG.UserWidget.StopAnimation(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B77A80>
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B77A60>
	void SetPositionInViewport(struct FVector2D Position, char bRemoveDPIScale); // Function UMG.UserWidget.SetPositionInViewport(Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B77380>
	void SetPlaybackSpeed(struct UWidgetAnimation InAnimation, float PlaybackSpeed); // Function UMG.UserWidget.SetPlaybackSpeed(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B772B0>
	void SetPadding(struct FMargin InPadding); // Function UMG.UserWidget.SetPadding(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B77220>
	void SetOwningPlayer(struct APlayerController LocalPlayerController); // Function UMG.UserWidget.SetOwningPlayer(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B771A0>
	void SetNumLoopsToPlay(struct UWidgetAnimation InAnimation, int32_t NumLoopsToPlay); // Function UMG.UserWidget.SetNumLoopsToPlay(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B76FE0>
	void SetNoPixelSnapping(char InNoSnapping); // Function UMG.UserWidget.SetNoPixelSnapping(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B76F50>
	void SetInputActionPriority(int32_t NewPriority); // Function UMG.UserWidget.SetInputActionPriority(Final|Native|Protected|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B76C00>
	void SetInputActionBlocking(char bShouldBlock); // Function UMG.UserWidget.SetInputActionBlocking(Final|Native|Protected|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B76B70>
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.UserWidget.SetForegroundColor(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B76A00>
	void SetDesiredSizeInViewport(struct FVector2D Size); // Function UMG.UserWidget.SetDesiredSizeInViewport(Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B76770>
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.UserWidget.SetColorAndOpacity(Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B76670>
	void SetAnchorsInViewport(struct FAnchors Anchors); // Function UMG.UserWidget.SetAnchorsInViewport(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B762B0>
	void SetAlignmentInViewport(struct FVector2D Alignment); // Function UMG.UserWidget.SetAlignmentInViewport(Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B76230>
	void ReverseAnimation(struct UWidgetAnimation InAnimation); // Function UMG.UserWidget.ReverseAnimation(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B761B0>
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B76190>
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent(Final|Native|Protected|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B76170>
	void PreConstruct(char IsDesignTime); // Function UMG.UserWidget.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void PlaySound(struct USoundBase SoundToPlay); // Function UMG.UserWidget.PlaySound(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B760F0>
	struct UUMGSequencePlayer PlayAnimationTimeRange(struct UWidgetAnimation InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, char PlayMode, float PlaybackSpeed, char bRestoreState); // Function UMG.UserWidget.PlayAnimationTimeRange(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B75F00>
	struct UUMGSequencePlayer PlayAnimationReverse(struct UWidgetAnimation InAnimation, float PlaybackSpeed, char bRestoreState); // Function UMG.UserWidget.PlayAnimationReverse(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B75DF0>
	struct UUMGSequencePlayer PlayAnimationForward(struct UWidgetAnimation InAnimation, float PlaybackSpeed, char bRestoreState); // Function UMG.UserWidget.PlayAnimationForward(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B75CE0>
	struct UUMGSequencePlayer PlayAnimation(struct UWidgetAnimation InAnimation, float StartAtTime, int32_t NumLoopsToPlay, char PlayMode, float PlaybackSpeed, char bRestoreState); // Function UMG.UserWidget.PlayAnimation(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B75B20>
	float PauseAnimation(struct UWidgetAnimation InAnimation); // Function UMG.UserWidget.PauseAnimation(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B75A80>
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchStarted(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchMoved(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent& GestureEvent); // Function UMG.UserWidget.OnTouchGesture(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnTouchForceChanged(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchForceChanged(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchEnded(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnRemovedFromFocusPath(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnPreviewMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnPreviewKeyDown(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnPaint(struct FPaintContext& Context); // Function UMG.UserWidget.OnPaint(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseWheel(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseMove(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMouseCaptureLost(); // Function UMG.UserWidget.OnMouseCaptureLost(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function UMG.UserWidget.OnMouseButtonDoubleClick(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent); // Function UMG.UserWidget.OnMotionDetected(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyUp(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyDown(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent); // Function UMG.UserWidget.OnKeyChar(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnInitialized(); // Function UMG.UserWidget.OnInitialized(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusReceived(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusLost(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	char OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UMG.UserWidget.OnDrop(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	char OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UMG.UserWidget.OnDragOver(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UMG.UserWidget.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UMG.UserWidget.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation& Operation); // Function UMG.UserWidget.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation Operation); // Function UMG.UserWidget.OnDragCancelled(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnAnimationStarted(struct UWidgetAnimation Animation); // Function UMG.UserWidget.OnAnimationStarted(BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B759F0>
	void OnAnimationFinished(struct UWidgetAnimation Animation); // Function UMG.UserWidget.OnAnimationFinished(BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B75960>
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function UMG.UserWidget.OnAnalogValueChanged(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnAddedToFocusPath(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ListenForInputAction(struct FName ActionName, char EventType, char bConsume, struct FDelegate Callback); // Function UMG.UserWidget.ListenForInputAction(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B757E0>
	char IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B757B0>
	char IsListeningForInputAction(struct FName ActionName); // Function UMG.UserWidget.IsListeningForInputAction(Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B75720>
	char IsInViewport(); // Function UMG.UserWidget.IsInViewport(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B75390>
	char IsInteractable(); // Function UMG.UserWidget.IsInteractable(BlueprintCosmetic|Event|Public|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	char IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B756F0>
	char IsAnimationPlayingForward(struct UWidgetAnimation InAnimation); // Function UMG.UserWidget.IsAnimationPlayingForward(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B75660>
	char IsAnimationPlaying(struct UWidgetAnimation InAnimation); // Function UMG.UserWidget.IsAnimationPlaying(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B755D0>
	struct APawn GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B753C0>
	char GetIsVisible(); // Function UMG.UserWidget.GetIsVisible(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B75390>
	float GetAnimationCurrentTime(struct UWidgetAnimation InAnimation); // Function UMG.UserWidget.GetAnimationCurrentTime(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B75290>
	struct FAnchors GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B75250>
	struct FVector2D GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport(Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B75210>
	void Destruct(); // Function UMG.UserWidget.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Construct(); // Function UMG.UserWidget.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void CancelLatentActions(); // Function UMG.UserWidget.CancelLatentActions(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B751B0>
	void BindToAnimationStarted(struct UWidgetAnimation Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationStarted(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B750D0>
	void BindToAnimationFinished(struct UWidgetAnimation Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationFinished(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B74FF0>
	void BindToAnimationEvent(struct UWidgetAnimation Animation, struct FDelegate Delegate, enum class EWidgetAnimationEvent AnimationEvent, struct FName UserTag); // Function UMG.UserWidget.BindToAnimationEvent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B74E80>
	void AddToViewport(int32_t ZOrder); // Function UMG.UserWidget.AddToViewport(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B74E00>
	char AddToPlayerScreen(int32_t ZOrder); // Function UMG.UserWidget.AddToPlayerScreen(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B74D70>
};

// Class UMG.PanelWidget
class UPanelWidget : public UWidget {

public:

	struct TArray<struct UPanelSlot> Slots; // 0x108 (16)

	char RemoveChildAt(int32_t Index); // Function UMG.PanelWidget.RemoveChildAt(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65870>
	char RemoveChild(struct UWidget Content); // Function UMG.PanelWidget.RemoveChild(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B657E0>
	char HasChild(struct UWidget Content); // Function UMG.PanelWidget.HasChild(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65640>
	char HasAnyChildren(); // Function UMG.PanelWidget.HasAnyChildren(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65610>
	int32_t GetChildrenCount(); // Function UMG.PanelWidget.GetChildrenCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65260>
	int32_t GetChildIndex(struct UWidget Content); // Function UMG.PanelWidget.GetChildIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B651D0>
	struct UWidget GetChildAt(int32_t Index); // Function UMG.PanelWidget.GetChildAt(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65140>
	struct TArray<struct UWidget> GetAllChildren(); // Function UMG.PanelWidget.GetAllChildren(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B650C0>
	void ClearChildren(); // Function UMG.PanelWidget.ClearChildren(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1EE8C80>
	struct UPanelSlot AddChild(struct UWidget Content); // Function UMG.PanelWidget.AddChild(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B64EF0>
};

// Class UMG.Border
class UBorder : public UContentWidget {

public:

	char HorizontalAlignment; // 0x120 (1)
	char VerticalAlignment; // 0x121 (1)
	char bShowEffectWhenDisabled : 0; // 0x122 (1)
	struct FLinearColor ContentColorAndOpacity; // 0x124 (16)
	struct FDelegate ContentColorAndOpacityDelegate; // 0x134 (16)
	struct FMargin Padding; // 0x144 (16)
	struct FSlateBrush Background; // 0x158 (136)
	struct FDelegate BackgroundDelegate; // 0x1E0 (16)
	struct FLinearColor BrushColor; // 0x1F0 (16)
	struct FDelegate BrushColorDelegate; // 0x200 (16)
	struct FVector2D DesiredSizeScale; // 0x210 (8)
	char bFlipForRightToLeftFlowDirection : 0; // 0x218 (1)
	struct FDelegate OnMouseButtonDownEvent; // 0x21C (16)
	struct FDelegate OnMouseButtonUpEvent; // 0x22C (16)
	struct FDelegate OnMouseMoveEvent; // 0x23C (16)
	struct FDelegate OnMouseDoubleClickEvent; // 0x24C (16)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.Border.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B58D40>
	void SetPadding(struct FMargin InPadding); // Function UMG.Border.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B587B0>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.Border.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B580D0>
	void SetDesiredSizeScale(struct FVector2D InScale); // Function UMG.Border.SetDesiredSizeScale(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B57F50>
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity); // Function UMG.Border.SetContentColorAndOpacity(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B57ED0>
	void SetBrushFromTexture(struct UTexture2D Texture); // Function UMG.Border.SetBrushFromTexture(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B57CD0>
	void SetBrushFromMaterial(struct UMaterialInterface Material); // Function UMG.Border.SetBrushFromMaterial(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B57CD0>
	void SetBrushFromAsset(struct USlateBrushAsset Asset); // Function UMG.Border.SetBrushFromAsset(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B57C50>
	void SetBrushColor(struct FLinearColor InBrushColor); // Function UMG.Border.SetBrushColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B57BD0>
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Border.SetBrush(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B57A50>
	struct UMaterialInstanceDynamic GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B573C0>
};

// Class UMG.AsyncTaskDownloadImage
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFail; // 0x40 (16)

	struct UAsyncTaskDownloadImage DownloadImage(struct FString URL); // Function UMG.AsyncTaskDownloadImage.DownloadImage(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B571F0>
};

// Class UMG.BackgroundBlur
class UBackgroundBlur : public UContentWidget {

public:

	struct FMargin Padding; // 0x120 (16)
	char HorizontalAlignment; // 0x130 (1)
	char VerticalAlignment; // 0x131 (1)
	char bApplyAlphaToBlur : 0; // 0x132 (1)
	float BlurStrength; // 0x134 (4)
	char bOverrideAutoRadiusCalculation : 0; // 0x138 (1)
	int32_t BlurRadius; // 0x13C (4)
	struct FSlateBrush LowQualityFallbackBrush; // 0x140 (136)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.BackgroundBlur.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B58C40>
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlur.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B58690>
	void SetLowQualityFallbackBrush(struct FSlateBrush& InBrush); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B58380>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.BackgroundBlur.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B57FD0>
	void SetBlurStrength(float InStrength); // Function UMG.BackgroundBlur.SetBlurStrength(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B579D0>
	void SetBlurRadius(int32_t InBlurRadius); // Function UMG.BackgroundBlur.SetBlurRadius(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B57950>
	void SetApplyAlphaToBlur(char bInApplyAlphaToBlur); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B577B0>
};

// Class UMG.PanelSlot
class UPanelSlot : public UVisual {

public:

	struct UPanelWidget Parent; // 0x28 (8)
	struct UWidget Content; // 0x30 (8)
};

// Class UMG.BackgroundBlurSlot
class UBackgroundBlurSlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x38 (16)
	char HorizontalAlignment; // 0x48 (1)
	char VerticalAlignment; // 0x49 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.BackgroundBlurSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B58CC0>
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlurSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B58720>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.BackgroundBlurSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B58050>
};

// Class UMG.PropertyBinding
class UPropertyBinding : public Object {

public:

	struct TWeakObjectPtr<struct Object> SourceObject; // 0x28 (8)
	struct FDynamicPropertyPath SourcePath; // 0x30 (40)
	struct FName DestinationProperty; // 0x58 (8)
};

// Class UMG.BorderSlot
class UBorderSlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x38 (16)
	char HorizontalAlignment; // 0x48 (1)
	char VerticalAlignment; // 0x49 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.BorderSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B58DC0>
	void SetPadding(struct FMargin InPadding); // Function UMG.BorderSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B58840>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.BorderSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B58150>
};

// Class UMG.Button
class UButton : public UContentWidget {

public:

	struct USlateWidgetStyleAsset Style; // 0x160 (8)
	struct FButtonStyle WidgetStyle; // 0x168 (632)
	struct FLinearColor ColorAndOpacity; // 0x3E0 (16)
	struct FLinearColor BackgroundColor; // 0x3F0 (16)
	char ClickMethod; // 0x400 (1)
	char TouchMethod; // 0x401 (1)
	char PressMethod; // 0x402 (1)
	char IsFocusable : 0; // 0x403 (1)
	struct FMulticastInlineDelegate OnClicked; // 0x408 (16)
	struct FMulticastInlineDelegate OnPressed; // 0x418 (16)
	struct FMulticastInlineDelegate OnReleased; // 0x428 (16)
	struct FMulticastInlineDelegate OnHovered; // 0x438 (16)
	struct FMulticastInlineDelegate OnUnhovered; // 0x448 (16)

	void SetTouchMethod(char InTouchMethod); // Function UMG.Button.SetTouchMethod(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B58BC0>
	void SetStyle(struct FButtonStyle& InStyle); // Function UMG.Button.SetStyle(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B58AE0>
	void SetPressMethod(char InPressMethod); // Function UMG.Button.SetPressMethod(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B589E0>
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Button.SetColorAndOpacity(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B57E50>
	void SetClickMethod(char InClickMethod); // Function UMG.Button.SetClickMethod(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B57DD0>
	void SetBackgroundColor(struct FLinearColor InBackgroundColor); // Function UMG.Button.SetBackgroundColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B578D0>
	char IsPressed(); // Function UMG.Button.IsPressed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B57640>
};

// Class UMG.ButtonSlot
class UButtonSlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x38 (16)
	char HorizontalAlignment; // 0x48 (1)
	char VerticalAlignment; // 0x49 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.ButtonSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B58E40>
	void SetPadding(struct FMargin InPadding); // Function UMG.ButtonSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B588D0>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.ButtonSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B581D0>
};

// Class UMG.CanvasPanelSlot
class UCanvasPanelSlot : public UPanelSlot {

public:

	struct FAnchorData LayoutData; // 0x38 (40)
	char bAutoSize : 0; // 0x60 (1)
	int32_t ZOrder; // 0x64 (4)

	void SetZOrder(int32_t InZOrder); // Function UMG.CanvasPanelSlot.SetZOrder(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B58EC0>
	void SetSize(struct FVector2D InSize); // Function UMG.CanvasPanelSlot.SetSize(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B58A60>
	void SetPosition(struct FVector2D InPosition); // Function UMG.CanvasPanelSlot.SetPosition(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B58960>
	void SetOffsets(struct FMargin InOffset); // Function UMG.CanvasPanelSlot.SetOffsets(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B58600>
	void SetMinimum(struct FVector2D InMinimumAnchors); // Function UMG.CanvasPanelSlot.SetMinimum(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B58580>
	void SetMaximum(struct FVector2D InMaximumAnchors); // Function UMG.CanvasPanelSlot.SetMaximum(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B58500>
	void SetLayout(struct FAnchorData& InLayoutData); // Function UMG.CanvasPanelSlot.SetLayout(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B582E0>
	void SetAutoSize(char InbAutoSize); // Function UMG.CanvasPanelSlot.SetAutoSize(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B57840>
	void SetAnchors(struct FAnchors InAnchors); // Function UMG.CanvasPanelSlot.SetAnchors(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B57720>
	void SetAlignment(struct FVector2D InAlignment); // Function UMG.CanvasPanelSlot.SetAlignment(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B576A0>
	int32_t GetZOrder(); // Function UMG.CanvasPanelSlot.GetZOrder(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B575E0>
	struct FVector2D GetSize(); // Function UMG.CanvasPanelSlot.GetSize(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B574C0>
	struct FVector2D GetPosition(); // Function UMG.CanvasPanelSlot.GetPosition(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B57480>
	struct FMargin GetOffsets(); // Function UMG.CanvasPanelSlot.GetOffsets(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B57440>
	struct FAnchorData GetLayout(); // Function UMG.CanvasPanelSlot.GetLayout(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B573F0>
	char GetAutoSize(); // Function UMG.CanvasPanelSlot.GetAutoSize(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B57360>
	struct FAnchors GetAnchors(); // Function UMG.CanvasPanelSlot.GetAnchors(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B57320>
	struct FVector2D GetAlignment(); // Function UMG.CanvasPanelSlot.GetAlignment(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B572E0>
};

// Class UMG.CheckBox
class UCheckBox : public UContentWidget {

public:

	enum class ECheckBoxState CheckedState; // 0x120 (1)
	struct FDelegate CheckedStateDelegate; // 0x124 (16)
	struct FCheckBoxStyle WidgetStyle; // 0x138 (1408)
	struct USlateWidgetStyleAsset Style; // 0x6B8 (8)
	struct USlateBrushAsset UncheckedImage; // 0x6C0 (8)
	struct USlateBrushAsset UncheckedHoveredImage; // 0x6C8 (8)
	struct USlateBrushAsset UncheckedPressedImage; // 0x6D0 (8)
	struct USlateBrushAsset CheckedImage; // 0x6D8 (8)
	struct USlateBrushAsset CheckedHoveredImage; // 0x6E0 (8)
	struct USlateBrushAsset CheckedPressedImage; // 0x6E8 (8)
	struct USlateBrushAsset UndeterminedImage; // 0x6F0 (8)
	struct USlateBrushAsset UndeterminedHoveredImage; // 0x6F8 (8)
	struct USlateBrushAsset UndeterminedPressedImage; // 0x700 (8)
	char HorizontalAlignment; // 0x708 (1)
	struct FMargin Padding; // 0x70C (16)
	struct FSlateColor BorderBackgroundColor; // 0x720 (40)
	char IsFocusable : 0; // 0x748 (1)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0x750 (16)

	void SetIsChecked(char InIsChecked); // Function UMG.CheckBox.SetIsChecked(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B58250>
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function UMG.CheckBox.SetCheckedState(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B57D50>
	char IsPressed(); // Function UMG.CheckBox.IsPressed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B57670>
	char IsChecked(); // Function UMG.CheckBox.IsChecked(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B57610>
	enum class ECheckBoxState GetCheckedState(); // Function UMG.CheckBox.GetCheckedState(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B57390>
};

// Class UMG.CircularThrobber
class UCircularThrobber : public UWidget {

public:

	int32_t NumberOfPieces; // 0x108 (4)
	float Period; // 0x10C (4)
	float Radius; // 0x110 (4)
	struct USlateBrushAsset PieceImage; // 0x118 (8)
	struct FSlateBrush Image; // 0x120 (136)
	char bEnableRadius : 0; // 0x1A8 (1)

	void SetRadius(float InRadius); // Function UMG.CircularThrobber.SetRadius(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5C5C0>
	void SetPeriod(float InPeriod); // Function UMG.CircularThrobber.SetPeriod(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5C540>
	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.CircularThrobber.SetNumberOfPieces(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5C4C0>
};

// Class UMG.ComboBox
class UComboBox : public UWidget {

public:

	struct TArray<struct Object> Items; // 0x108 (16)
	struct FDelegate OnGenerateWidgetEvent; // 0x118 (16)
	char bIsFocusable : 0; // 0x128 (1)
};

// Class UMG.ComboBoxString
class UComboBoxString : public UWidget {

public:

	struct TArray<struct FString> DefaultOptions; // 0x108 (16)
	struct FString SelectedOption; // 0x118 (16)
	struct FComboBoxStyle WidgetStyle; // 0x128 (1008)
	struct FTableRowStyle ItemStyle; // 0x518 (1992)
	struct FMargin ContentPadding; // 0xCE0 (16)
	float MaxListHeight; // 0xCF0 (4)
	char HasDownArrow : 0; // 0xCF4 (1)
	char EnableGamepadNavigationMode : 0; // 0xCF5 (1)
	struct FSlateFontInfo Font; // 0xCF8 (80)
	struct FSlateColor ForegroundColor; // 0xD48 (40)
	char bIsFocusable : 0; // 0xD70 (1)
	struct FDelegate OnGenerateWidgetEvent; // 0xD74 (16)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0xD88 (16)
	struct FMulticastInlineDelegate OnOpening; // 0xD98 (16)

	void SetSelectedOption(struct FString Option); // Function UMG.ComboBoxString.SetSelectedOption(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5C6C0>
	void SetSelectedIndex(int32_t Index); // Function UMG.ComboBoxString.SetSelectedIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5C640>
	char RemoveOption(struct FString Option); // Function UMG.ComboBoxString.RemoveOption(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5BC60>
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5BBC0>
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	char IsOpen(); // Function UMG.ComboBoxString.IsOpen(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5BB90>
	struct FString GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5B900>
	int32_t GetSelectedIndex(); // Function UMG.ComboBoxString.GetSelectedIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5B8D0>
	int32_t GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5B8A0>
	struct FString GetOptionAtIndex(int32_t Index); // Function UMG.ComboBoxString.GetOptionAtIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5B7C0>
	int32_t FindOptionIndex(struct FString Option); // Function UMG.ComboBoxString.FindOptionIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5B5B0>
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5B200>
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5B1E0>
	void AddOption(struct FString Option); // Function UMG.ComboBoxString.AddOption(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5B060>
};

// Class UMG.DragDropOperation
class UDragDropOperation : public Object {

public:

	struct FString Tag; // 0x28 (16)
	struct Object payload; // 0x38 (8)
	struct UWidget DefaultDragVisual; // 0x40 (8)
	enum class EDragPivot Pivot; // 0x48 (1)
	struct FVector2D Offset; // 0x4C (8)
	char bUseMoveAnimation : 0; // 0x54 (1)
	struct FMulticastInlineDelegate OnDrop; // 0x58 (16)
	struct FMulticastInlineDelegate OnDragCancelled; // 0x68 (16)
	struct FMulticastInlineDelegate OnDragged; // 0x78 (16)

	void Drop(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Drop(Native|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5B480>
	void Dragged(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Dragged(Native|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5B350>
	void DragCancelled(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.DragCancelled(Native|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5B220>
};

// Class UMG.DynamicEntryBoxBase
class UDynamicEntryBoxBase : public UWidget {

public:

	enum class EDynamicBoxType EntryBoxType; // 0x108 (1)
	struct FVector2D EntrySpacing; // 0x10C (8)
	struct TArray<struct FVector2D> SpacingPattern; // 0x118 (16)
	struct FSlateChildSize EntrySizeRule; // 0x128 (8)
	char EntryHorizontalAlignment; // 0x130 (1)
	char EntryVerticalAlignment; // 0x131 (1)
	int32_t MaxElementSize; // 0x134 (4)
	struct FUserWidgetPool EntryWidgetPool; // 0x148 (128)

	void SetEntrySpacing(struct FVector2D& InEntrySpacing); // Function UMG.DynamicEntryBoxBase.SetEntrySpacing(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5BE50>
	int32_t GetNumEntries(); // Function UMG.DynamicEntryBoxBase.GetNumEntries(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5B790>
	struct TArray<struct UUserWidget> GetAllEntries(); // Function UMG.DynamicEntryBoxBase.GetAllEntries(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5B660>
};

// Class UMG.DynamicEntryBox
class UDynamicEntryBox : public UDynamicEntryBoxBase {

public:

	struct UClass* EntryWidgetClass; // 0x1C8 (8)

	void Reset(char bDeleteWidgets); // Function UMG.DynamicEntryBox.Reset(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5BD10>
	void RemoveEntry(struct UUserWidget EntryWidget); // Function UMG.DynamicEntryBox.RemoveEntry(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5BBE0>
	struct UUserWidget BP_CreateEntryOfClass(struct UClass* EntryClass); // Function UMG.DynamicEntryBox.BP_CreateEntryOfClass(Final|Native|Private|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5B130>
	struct UUserWidget BP_CreateEntry(); // Function UMG.DynamicEntryBox.BP_CreateEntry(Final|Native|Private|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5B100>
};

// Class UMG.EditableText
class UEditableText : public UWidget {

public:

	struct FText Text; // 0x108 (24)
	struct FDelegate TextDelegate; // 0x120 (16)
	struct FText HintText; // 0x130 (24)
	struct FDelegate HintTextDelegate; // 0x148 (16)
	struct FEditableTextStyle WidgetStyle; // 0x158 (536)
	struct USlateWidgetStyleAsset Style; // 0x370 (8)
	struct USlateBrushAsset BackgroundImageSelected; // 0x378 (8)
	struct USlateBrushAsset BackgroundImageComposing; // 0x380 (8)
	struct USlateBrushAsset CaretImage; // 0x388 (8)
	struct FSlateFontInfo Font; // 0x390 (80)
	struct FSlateColor ColorAndOpacity; // 0x3E0 (40)
	char IsReadOnly : 0; // 0x408 (1)
	char IsPassword : 0; // 0x409 (1)
	float MinimumDesiredWidth; // 0x40C (4)
	char IsCaretMovedWhenGainFocus : 0; // 0x410 (1)
	char SelectAllTextWhenFocused : 0; // 0x411 (1)
	char RevertTextOnEscape : 0; // 0x412 (1)
	char ClearKeyboardFocusOnCommit : 0; // 0x413 (1)
	char SelectAllTextOnCommit : 0; // 0x414 (1)
	char AllowContextMenu : 0; // 0x415 (1)
	char KeyboardType; // 0x416 (1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x417 (1)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x418 (1)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x419 (1)
	char Justification; // 0x41A (1)
	struct FShapedTextOptions ShapedTextOptions; // 0x41B (3)
	struct FMulticastInlineDelegate OnTextChanged; // 0x420 (16)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x430 (16)

	void SetText(struct FText InText); // Function UMG.EditableText.SetText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5C7B0>
	void SetJustification(char InJustification); // Function UMG.EditableText.SetJustification(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5C3C0>
	void SetIsReadOnly(char InbIsReadyOnly); // Function UMG.EditableText.SetIsReadOnly(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5C2A0>
	void SetIsPassword(char InbIsPassword); // Function UMG.EditableText.SetIsPassword(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5C180>
	void SetHintText(struct FText InHintText); // Function UMG.EditableText.SetHintText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5BFC0>
	void OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FText GetText(); // Function UMG.EditableText.GetText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5B9F0>
};

// Class UMG.EditableTextBox
class UEditableTextBox : public UWidget {

public:

	struct FText Text; // 0x108 (24)
	struct FDelegate TextDelegate; // 0x120 (16)
	struct FEditableTextBoxStyle WidgetStyle; // 0x130 (2032)
	struct USlateWidgetStyleAsset Style; // 0x920 (8)
	struct FText HintText; // 0x928 (24)
	struct FDelegate HintTextDelegate; // 0x940 (16)
	struct FSlateFontInfo Font; // 0x950 (80)
	struct FLinearColor ForegroundColor; // 0x9A0 (16)
	struct FLinearColor BackgroundColor; // 0x9B0 (16)
	struct FLinearColor ReadOnlyForegroundColor; // 0x9C0 (16)
	char IsReadOnly : 0; // 0x9D0 (1)
	char IsPassword : 0; // 0x9D1 (1)
	float MinimumDesiredWidth; // 0x9D4 (4)
	struct FMargin Padding; // 0x9D8 (16)
	char IsCaretMovedWhenGainFocus : 0; // 0x9E8 (1)
	char SelectAllTextWhenFocused : 0; // 0x9E9 (1)
	char RevertTextOnEscape : 0; // 0x9EA (1)
	char ClearKeyboardFocusOnCommit : 0; // 0x9EB (1)
	char SelectAllTextOnCommit : 0; // 0x9EC (1)
	char AllowContextMenu : 0; // 0x9ED (1)
	char KeyboardType; // 0x9EE (1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x9EF (1)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x9F0 (1)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x9F1 (1)
	char Justification; // 0x9F2 (1)
	struct FShapedTextOptions ShapedTextOptions; // 0x9F3 (3)
	struct FMulticastInlineDelegate OnTextChanged; // 0x9F8 (16)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xA08 (16)

	void SetText(struct FText InText); // Function UMG.EditableTextBox.SetText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5C890>
	void SetJustification(char InJustification); // Function UMG.EditableTextBox.SetJustification(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5C440>
	void SetIsReadOnly(char bReadOnly); // Function UMG.EditableTextBox.SetIsReadOnly(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5C330>
	void SetIsPassword(char bIsPassword); // Function UMG.EditableTextBox.SetIsPassword(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5C210>
	void SetHintText(struct FText InText); // Function UMG.EditableTextBox.SetHintText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5C0A0>
	void SetError(struct FText InError); // Function UMG.EditableTextBox.SetError(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5BEE0>
	void SelectWordAt(); // Function UMG.EditableTextBox.SelectWordAt(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5BDA0>
	void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	char HasError(); // Function UMG.EditableTextBox.HasError(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5BB60>
	struct FText GetText(); // Function UMG.EditableTextBox.GetText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5BA90>
	void ClearError(); // Function UMG.EditableTextBox.ClearError(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5B1C0>
};

// Class UMG.ExpandableArea
class UExpandableArea : public UWidget {

public:

	struct FExpandableAreaStyle Style; // 0x110 (288)
	struct FSlateBrush BorderBrush; // 0x230 (136)
	struct FSlateColor BorderColor; // 0x2B8 (40)
	char bIsExpanded : 0; // 0x2E0 (1)
	float MaxHeight; // 0x2E4 (4)
	struct FMargin HeaderPadding; // 0x2E8 (16)
	struct FMargin AreaPadding; // 0x2F8 (16)
	struct FMulticastInlineDelegate OnExpansionChanged; // 0x308 (16)
	struct UWidget HeaderContent; // 0x318 (8)
	struct UWidget BodyContent; // 0x320 (8)

	void SetIsExpanded_Animated(char IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded_Animated(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B60C10>
	void SetIsExpanded(char IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B60B80>
	char GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5F5F0>
};

// Class UMG.GridPanel
class UGridPanel : public UPanelWidget {

public:

	struct TArray<float> ColumnFill; // 0x120 (16)
	struct TArray<float> RowFill; // 0x130 (16)

	void SetRowFill(int32_t columnIndex, float Coefficient); // Function UMG.GridPanel.SetRowFill(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B61180>
	void SetColumnFill(int32_t columnIndex, float Coefficient); // Function UMG.GridPanel.SetColumnFill(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B60820>
	struct UGridSlot AddChildToGrid(struct UWidget Content, int32_t InRow, int32_t InColumn); // Function UMG.GridPanel.AddChildToGrid(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5EDE0>
};

// Class UMG.GridSlot
class UGridSlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x38 (16)
	char HorizontalAlignment; // 0x48 (1)
	char VerticalAlignment; // 0x49 (1)
	int32_t Row; // 0x4C (4)
	int32_t RowSpan; // 0x50 (4)
	int32_t Column; // 0x54 (4)
	int32_t ColumnSpan; // 0x58 (4)
	int32_t Layer; // 0x5C (4)
	struct FVector2D Nudge; // 0x60 (8)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.GridSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B615D0>
	void SetRowSpan(int32_t InRowSpan); // Function UMG.GridSlot.SetRowSpan(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B61250>
	void SetRow(int32_t InRow); // Function UMG.GridSlot.SetRow(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B61100>
	void SetPadding(struct FMargin InPadding); // Function UMG.GridSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B60FE0>
	void SetNudge(struct FVector2D InNudge); // Function UMG.GridSlot.SetNudge(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B60EE0>
	void SetLayer(int32_t InLayer); // Function UMG.GridSlot.SetLayer(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B60D80>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.GridSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B60A80>
	void SetColumnSpan(int32_t InColumnSpan); // Function UMG.GridSlot.SetColumnSpan(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B608F0>
	void SetColumn(int32_t InColumn); // Function UMG.GridSlot.SetColumn(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B607A0>
};

// Class UMG.HorizontalBoxSlot
class UHorizontalBoxSlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x40 (16)
	struct FSlateChildSize Size; // 0x50 (8)
	char HorizontalAlignment; // 0x58 (1)
	char VerticalAlignment; // 0x59 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.HorizontalBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B61650>
	void SetSize(struct FSlateChildSize InSize); // Function UMG.HorizontalBoxSlot.SetSize(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B614C0>
	void SetPadding(struct FMargin InPadding); // Function UMG.HorizontalBoxSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B61070>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.HorizontalBoxSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B60B00>
};

// Class UMG.Image
class UImage : public UWidget {

public:

	struct FSlateBrush Brush; // 0x108 (136)
	struct FDelegate BrushDelegate; // 0x190 (16)
	struct FLinearColor ColorAndOpacity; // 0x1A0 (16)
	struct FDelegate ColorAndOpacityDelegate; // 0x1B0 (16)
	char bFlipForRightToLeftFlowDirection : 0; // 0x1C0 (1)
	struct FDelegate OnMouseButtonDownEvent; // 0x1C4 (16)

	void SetOpacity(float InOpacity); // Function UMG.Image.SetOpacity(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B60F60>
	void SetGammaCorrect(); // Function UMG.Image.SetGammaCorrect(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B60A60>
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Image.SetColorAndOpacity(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B60720>
	void SetBrushTintColor(struct FSlateColor TintColor); // Function UMG.Image.SetBrushTintColor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B605A0>
	void SetBrushSize(struct FVector2D DesiredSize); // Function UMG.Image.SetBrushSize(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B60520>
	void SetBrushResourceObject(struct Object ResourceObject); // Function UMG.Image.SetBrushResourceObject(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B604A0>
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic Texture, char bMatchSize); // Function UMG.Image.SetBrushFromTextureDynamic(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B603D0>
	void SetBrushFromTexture(struct UTexture2D Texture, char bMatchSize); // Function UMG.Image.SetBrushFromTexture(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B60300>
	void SetBrushFromSoftTexture(struct TSoftObjectPtr<UTexture2D> SoftTexture, char bMatchSize); // Function UMG.Image.SetBrushFromSoftTexture(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B601A0>
	void SetBrushFromSoftMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial); // Function UMG.Image.SetBrushFromSoftMaterial(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B60080>
	void SetBrushFromMaterial(struct UMaterialInterface Material); // Function UMG.Image.SetBrushFromMaterial(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5FFF0>
	void SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, char bMatchSize); // Function UMG.Image.SetBrushFromAtlasInterface(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5FF00>
	void SetBrushFromAsset(struct USlateBrushAsset Asset); // Function UMG.Image.SetBrushFromAsset(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5FE70>
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Image.SetBrush(Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5FCF0>
	struct UMaterialInstanceDynamic GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5F530>
};

// Class UMG.InputKeySelector
class UInputKeySelector : public UWidget {

public:

	struct FButtonStyle WidgetStyle; // 0x108 (632)
	struct FTextBlockStyle TextStyle; // 0x380 (616)
	struct FInputChord SelectedKey; // 0x5E8 (32)
	struct FSlateFontInfo Font; // 0x608 (80)
	struct FMargin Margin; // 0x658 (16)
	struct FLinearColor ColorAndOpacity; // 0x668 (16)
	struct FText KeySelectionText; // 0x678 (24)
	struct FText NoKeySpecifiedText; // 0x690 (24)
	char bAllowModifierKeys : 0; // 0x6A8 (1)
	char bAllowGamepadKeys : 0; // 0x6A9 (1)
	struct TArray<struct FKey> EscapeKeys; // 0x6B0 (16)
	struct FMulticastInlineDelegate OnKeySelected; // 0x6C0 (16)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x6D0 (16)

	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility); // Function UMG.InputKeySelector.SetTextBlockVisibility(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B61550>
	void SetSelectedKey(struct FInputChord& InSelectedKey); // Function UMG.InputKeySelector.SetSelectedKey(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B61350>
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText); // Function UMG.InputKeySelector.SetNoKeySpecifiedText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B60E00>
	void SetKeySelectionText(struct FText InKeySelectionText); // Function UMG.InputKeySelector.SetKeySelectionText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B60CA0>
	void SetEscapeKeys(struct TArray<struct FKey>& InKeys); // Function UMG.InputKeySelector.SetEscapeKeys(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B60970>
	void SetAllowModifierKeys(char bInAllowModifierKeys); // Function UMG.InputKeySelector.SetAllowModifierKeys(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5FC60>
	void SetAllowGamepadKeys(char bInAllowGamepadKeys); // Function UMG.InputKeySelector.SetAllowGamepadKeys(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5FBD0>
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	char GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5F620>
};

// Class UMG.InvalidationBox
class UInvalidationBox : public UContentWidget {

public:

	char bCanCache : 0; // 0x120 (1)
	char CacheRelativeTransforms : 0; // 0x121 (1)

	void SetCanCache(char CanCache); // Function UMG.InvalidationBox.SetCanCache(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B60690>
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1540D70>
	char GetCanCache(); // Function UMG.InvalidationBox.GetCanCache(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5F500>
};

// Class UMG.ListViewBase
class UListViewBase : public UWidget {

public:

	struct UClass* EntryWidgetClass; // 0x108 (8)
	float WheelScrollMultiplier; // 0x110 (4)
	char bEnableScrollAnimation : 0; // 0x114 (1)
	char bEnableFixedLineOffset : 0; // 0x115 (1)
	float FixedLineScrollOffset; // 0x118 (4)
	struct FMulticastInlineDelegate BP_OnEntryGenerated; // 0x120 (16)
	struct FMulticastInlineDelegate BP_OnEntryReleased; // 0x130 (16)
	struct FUserWidgetPool EntryWidgetPool; // 0x140 (128)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ListViewBase.SetWheelScrollMultiplier(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B662A0>
	void SetScrollOffset(float InScrollOffset); // Function UMG.ListViewBase.SetScrollOffset(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65EB0>
	void SetScrollbarVisibility(enum class ESlateVisibility InVisibility); // Function UMG.ListViewBase.SetScrollbarVisibility(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65F30>
	void ScrollToTop(); // Function UMG.ListViewBase.ScrollToTop(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65940>
	void ScrollToBottom(); // Function UMG.ListViewBase.ScrollToBottom(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65920>
	void RequestRefresh(); // Function UMG.ListViewBase.RequestRefresh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65900>
	void RegenerateAllEntries(); // Function UMG.ListViewBase.RegenerateAllEntries(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B657C0>
	struct TArray<struct UUserWidget> GetDisplayedEntryWidgets(); // Function UMG.ListViewBase.GetDisplayedEntryWidgets(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65290>
};

// Class UMG.ListView
class UListView : public UListViewBase {

public:

	char Orientation; // 0x2D8 (1)
	char SelectionMode; // 0x2D9 (1)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x2DA (1)
	char bClearSelectionOnClick : 0; // 0x2DB (1)
	char bIsFocusable : 0; // 0x2DC (1)
	float EntrySpacing; // 0x2E0 (4)
	char bReturnFocusToSelection : 0; // 0x2E4 (1)
	struct TArray<struct Object> ListItems; // 0x2E8 (16)
	struct FMulticastInlineDelegate BP_OnEntryInitialized; // 0x308 (16)
	struct FMulticastInlineDelegate BP_OnItemClicked; // 0x318 (16)
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x328 (16)
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x338 (16)
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x348 (16)
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x358 (16)

	void SetSelectionMode(char SelectionMode); // Function UMG.ListView.SetSelectionMode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B61440>
	void SetSelectedIndex(int32_t Index); // Function UMG.ListView.SetSelectedIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B612D0>
	void ScrollIndexIntoView(int32_t Index); // Function UMG.ListView.ScrollIndexIntoView(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5FB50>
	void RemoveItem(struct Object Item); // Function UMG.ListView.RemoveItem(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5FAD0>
	void NavigateToIndex(int32_t Index); // Function UMG.ListView.NavigateToIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5FA50>
	char IsRefreshPending(); // Function UMG.ListView.IsRefreshPending(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5FA20>
	int32_t GetNumItems(); // Function UMG.ListView.GetNumItems(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5F7B0>
	struct TArray<struct Object> GetListItems(); // Function UMG.ListView.GetListItems(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5F780>
	struct Object GetItemAt(int32_t Index); // Function UMG.ListView.GetItemAt(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5F650>
	int32_t GetIndexForItem(struct Object Item); // Function UMG.ListView.GetIndexForItem(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5F560>
	void ClearListItems(); // Function UMG.ListView.ClearListItems(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5F4E0>
	void BP_SetSelectedItem(struct Object Item); // Function UMG.ListView.BP_SetSelectedItem(Final|Native|Private|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5F460>
	void BP_SetListItems(struct TArray<struct Object>& InListItems); // Function UMG.ListView.BP_SetListItems(Final|Native|Private|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5F3B0>
	void BP_SetItemSelection(struct Object Item, char bSelected); // Function UMG.ListView.BP_SetItemSelection(Final|Native|Private|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5F2E0>
	void BP_ScrollItemIntoView(struct Object Item); // Function UMG.ListView.BP_ScrollItemIntoView(Final|Native|Private|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5F260>
	void BP_NavigateToItem(struct Object Item); // Function UMG.ListView.BP_NavigateToItem(Final|Native|Private|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5F1E0>
	char BP_IsItemVisible(struct Object Item); // Function UMG.ListView.BP_IsItemVisible(Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5F150>
	char BP_GetSelectedItems(struct TArray<struct Object>& Items); // Function UMG.ListView.BP_GetSelectedItems(Final|Native|Private|HasOutParms|BlueprintCallable|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5F090>
	struct Object BP_GetSelectedItem(); // Function UMG.ListView.BP_GetSelectedItem(Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5F060>
	int32_t BP_GetNumItemsSelected(); // Function UMG.ListView.BP_GetNumItemsSelected(Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5F030>
	void BP_ClearSelection(); // Function UMG.ListView.BP_ClearSelection(Final|Native|Private|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5F010>
	void BP_CancelScrollIntoView(); // Function UMG.ListView.BP_CancelScrollIntoView(Final|Native|Private|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5EFF0>
	void AddItem(struct Object Item); // Function UMG.ListView.AddItem(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5EF70>
};

// Class UMG.MenuAnchor
class UMenuAnchor : public UContentWidget {

public:

	struct UClass* MenuClass; // 0x120 (8)
	struct FDelegate OnGetMenuContentEvent; // 0x128 (16)
	char Placement; // 0x138 (1)
	char bFitInWindow : 0; // 0x139 (1)
	char ShouldDeferPaintingAfterWindowContent : 0; // 0x13A (1)
	char UseApplicationMenuStack : 0; // 0x13B (1)
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x140 (16)

	void ToggleOpen(char bFocusOnOpen); // Function UMG.MenuAnchor.ToggleOpen(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B66400>
	char ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B663D0>
	void SetPlacement(char InPlacement); // Function UMG.MenuAnchor.SetPlacement(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65E30>
	void Open(char bFocusMenu); // Function UMG.MenuAnchor.Open(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65730>
	char IsOpen(); // Function UMG.MenuAnchor.IsOpen(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65700>
	char HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B656D0>
	struct FVector2D GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65460>
	void FitInWindow(char bFit); // Function UMG.MenuAnchor.FitInWindow(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65030>
	void Close(); // Function UMG.MenuAnchor.Close(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65010>
};

// Class UMG.MovieScene2DTransformSection
class UMovieScene2DTransformSection : public UMovieSceneSection {

public:

	struct FMovieScene2DTransformMask TransformMask; // 0xE0 (4)
	struct FMovieSceneFloatChannel Translation[0x2]; // 0xE8 (320)
	struct FMovieSceneFloatChannel Rotation; // 0x228 (160)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x2C8 (320)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x408 (320)
};

// Class UMG.MovieSceneMarginSection
class UMovieSceneMarginSection : public UMovieSceneSection {

public:

	struct FMovieSceneFloatChannel TopCurve; // 0xE0 (160)
	struct FMovieSceneFloatChannel LeftCurve; // 0x180 (160)
	struct FMovieSceneFloatChannel RightCurve; // 0x220 (160)
	struct FMovieSceneFloatChannel BottomCurve; // 0x2C0 (160)
};

// Class UMG.MovieSceneWidgetMaterialTrack
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack {

public:

	struct TArray<struct FName> BrushPropertyNamePath; // 0x68 (16)
	struct FName TrackName; // 0x78 (8)
};

// Class UMG.TextLayoutWidget
class UTextLayoutWidget : public UWidget {

public:

	struct FShapedTextOptions ShapedTextOptions; // 0x108 (3)
	char Justification; // 0x10B (1)
	enum class ETextWrappingPolicy WrappingPolicy; // 0x10C (1)
	char AutoWrapText : 0; // 0x10D (1)
	float WrapTextAt; // 0x110 (4)
	struct FMargin Margin; // 0x114 (16)
	float LineHeightPercentage; // 0x124 (4)

	void SetJustification(char InJustification); // Function UMG.TextLayoutWidget.SetJustification(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B76D50>
};

// Class UMG.MultiLineEditableText
class UMultiLineEditableText : public UTextLayoutWidget {

public:

	struct FText Text; // 0x128 (24)
	struct FText HintText; // 0x140 (24)
	struct FDelegate HintTextDelegate; // 0x158 (16)
	struct FTextBlockStyle WidgetStyle; // 0x168 (616)
	char bIsReadOnly : 0; // 0x3D0 (1)
	struct FSlateFontInfo Font; // 0x3D8 (80)
	char SelectAllTextWhenFocused : 0; // 0x428 (1)
	char ClearTextSelectionOnFocusLoss : 0; // 0x429 (1)
	char RevertTextOnEscape : 0; // 0x42A (1)
	char ClearKeyboardFocusOnCommit : 0; // 0x42B (1)
	char AllowContextMenu : 0; // 0x42C (1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x42D (1)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x42E (1)
	struct FMulticastInlineDelegate OnTextChanged; // 0x430 (16)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x440 (16)

	void SetWidgetStyle(struct FTextBlockStyle& InWidgetStyle); // Function UMG.MultiLineEditableText.SetWidgetStyle(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B66320>
	void SetText(struct FText InText); // Function UMG.MultiLineEditableText.SetText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65FB0>
	void SetIsReadOnly(char bReadOnly); // Function UMG.MultiLineEditableText.SetIsReadOnly(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65C80>
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableText.SetHintText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65A40>
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FText GetText(); // Function UMG.MultiLineEditableText.GetText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B654A0>
	struct FText GetHintText(); // Function UMG.MultiLineEditableText.GetHintText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65320>
};

// Class UMG.MultiLineEditableTextBox
class UMultiLineEditableTextBox : public UTextLayoutWidget {

public:

	struct FText Text; // 0x128 (24)
	struct FText HintText; // 0x140 (24)
	struct FDelegate HintTextDelegate; // 0x158 (16)
	struct FEditableTextBoxStyle WidgetStyle; // 0x168 (2032)
	struct FTextBlockStyle TextStyle; // 0x958 (616)
	char bIsReadOnly : 0; // 0xBC0 (1)
	char AllowContextMenu : 0; // 0xBC1 (1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xBC2 (1)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xBC3 (1)
	struct USlateWidgetStyleAsset Style; // 0xBC8 (8)
	struct FSlateFontInfo Font; // 0xBD0 (80)
	struct FLinearColor ForegroundColor; // 0xC20 (16)
	struct FLinearColor BackgroundColor; // 0xC30 (16)
	struct FLinearColor ReadOnlyForegroundColor; // 0xC40 (16)
	struct FMulticastInlineDelegate OnTextChanged; // 0xC50 (16)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xC60 (16)

	void SetTextStyle(struct FTextBlockStyle& InTextStyle); // Function UMG.MultiLineEditableTextBox.SetTextStyle(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B66170>
	void SetText(struct FText InText); // Function UMG.MultiLineEditableTextBox.SetText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B66090>
	void SetIsReadOnly(char bReadOnly); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65D10>
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableTextBox.SetHintText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65B20>
	void SetError(struct FText InError); // Function UMG.MultiLineEditableTextBox.SetError(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65960>
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	struct FText GetText(); // Function UMG.MultiLineEditableTextBox.GetText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65540>
	struct FText GetHintText(); // Function UMG.MultiLineEditableTextBox.GetHintText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B653C0>
};

// Class UMG.OverlaySlot
class UOverlaySlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x40 (16)
	char HorizontalAlignment; // 0x50 (1)
	char VerticalAlignment; // 0x51 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.OverlaySlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B66220>
	void SetPadding(struct FMargin InPadding); // Function UMG.OverlaySlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65DA0>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.OverlaySlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65C00>
};

// Class UMG.ProgressBar
class UProgressBar : public UWidget {

public:

	struct FProgressBarStyle WidgetStyle; // 0x108 (416)
	struct USlateWidgetStyleAsset Style; // 0x2A8 (8)
	struct USlateBrushAsset BackgroundImage; // 0x2B0 (8)
	struct USlateBrushAsset FillImage; // 0x2B8 (8)
	struct USlateBrushAsset MarqueeImage; // 0x2C0 (8)
	float Percent; // 0x2C8 (4)
	char BarFillType; // 0x2CC (1)
	char bIsMarquee : 0; // 0x2CD (1)
	struct FVector2D BorderPadding; // 0x2D0 (8)
	struct FDelegate PercentDelegate; // 0x2D8 (16)
	struct FLinearColor FillColorAndOpacity; // 0x2E8 (16)
	struct FDelegate FillColorAndOpacityDelegate; // 0x2F8 (16)

	void SetPercent(float InPercent); // Function UMG.ProgressBar.SetPercent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6A0D0>
	void SetIsMarquee(char InbIsMarquee); // Function UMG.ProgressBar.SetIsMarquee(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B69B20>
	void SetFillColorAndOpacity(struct FLinearColor InColor); // Function UMG.ProgressBar.SetFillColorAndOpacity(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B69910>
};

// Class UMG.RetainerBox
class URetainerBox : public UContentWidget {

public:

	char RenderOnInvalidation : 0; // 0x120 (1)
	char RenderOnPhase : 0; // 0x121 (1)
	int32_t Phase; // 0x124 (4)
	int32_t PhaseCount; // 0x128 (4)
	struct UMaterialInterface EffectMaterial; // 0x130 (8)
	struct FName TextureParameter; // 0x138 (8)

	void SetTextureParameter(struct FName TextureParameter); // Function UMG.RetainerBox.SetTextureParameter(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6A8D0>
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases); // Function UMG.RetainerBox.SetRenderingPhase(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6A150>
	void SetEffectMaterial(struct UMaterialInterface EffectMaterial); // Function UMG.RetainerBox.SetEffectMaterial(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B69890>
	void RequestRender(); // Function UMG.RetainerBox.RequestRender(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B68EF0>
	struct UMaterialInstanceDynamic GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B68D90>
};

// Class UMG.RichTextBlock
class URichTextBlock : public UTextLayoutWidget {

public:

	struct FText Text; // 0x128 (24)
	struct UDataTable TextStyleSet; // 0x140 (8)
	struct TArray<struct UClass*> DecoratorClasses; // 0x148 (16)
	char bOverrideDefaultStyle : 0; // 0x158 (1)
	struct FTextBlockStyle DefaultTextStyleOverride; // 0x160 (616)
	float MinDesiredWidth; // 0x3C8 (4)
	struct TArray<struct URichTextBlockDecorator> InstanceDecorators; // 0x638 (16)

	void SetTextStyleSet(struct UDataTable NewTextStyleSet); // Function UMG.RichTextBlock.SetTextStyleSet(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6A850>
	void SetText(struct FText& InText); // Function UMG.RichTextBlock.SetText(Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6A770>
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.RichTextBlock.SetMinDesiredWidth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B69E30>
	void SetDefaultTextStyle(struct FTextBlockStyle& InDefaultTextStyle); // Function UMG.RichTextBlock.SetDefaultTextStyle(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B697E0>
	void SetDefaultStrikeBrush(struct FSlateBrush& InStrikeBrush); // Function UMG.RichTextBlock.SetDefaultStrikeBrush(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B69660>
	void SetDefaultShadowOffset(struct FVector2D InShadowOffset); // Function UMG.RichTextBlock.SetDefaultShadowOffset(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B695E0>
	void SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B69560>
	void SetDefaultFont(struct FSlateFontInfo InFontInfo); // Function UMG.RichTextBlock.SetDefaultFont(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B69450>
	void SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultColorAndOpacity(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B69360>
	void SetAutoWrapText(char InAutoTextWrap); // Function UMG.RichTextBlock.SetAutoWrapText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B69250>
	struct FText GetText(); // Function UMG.RichTextBlock.GetText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B68E20>
	struct URichTextBlockDecorator GetDecoratorByClass(struct UClass* DecoratorClass); // Function UMG.RichTextBlock.GetDecoratorByClass(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B68D00>
	void ClearAllDefaultStyleOverrides(); // Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B68BC0>
};

// Class UMG.RichTextBlockImageDecorator
class URichTextBlockImageDecorator : public URichTextBlockDecorator {

public:

	struct UDataTable ImageSet; // 0x28 (8)
};

// Class UMG.SafeZone
class USafeZone : public UContentWidget {

public:

	char PadLeft : 0; // 0x120 (1)
	char PadRight : 0; // 0x121 (1)
	char PadTop : 0; // 0x122 (1)
	char PadBottom : 0; // 0x123 (1)

	void SetSidesToPad(char InPadLeft, char InPadRight, char InPadTop, char InPadBottom); // Function UMG.SafeZone.SetSidesToPad(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6A440>
};

// Class UMG.SafeZoneSlot
class USafeZoneSlot : public UPanelSlot {

public:

	char bIsTitleSafe : 0; // 0x38 (1)
	struct FMargin SafeAreaScale; // 0x3C (16)
	char HAlign; // 0x4C (1)
	char VAlign; // 0x4D (1)
	struct FMargin Padding; // 0x50 (16)
};

// Class UMG.ScaleBox
class UScaleBox : public UContentWidget {

public:

	char Stretch; // 0x120 (1)
	char StretchDirection; // 0x121 (1)
	float UserSpecifiedScale; // 0x124 (4)
	char IgnoreInheritedScale : 0; // 0x128 (1)

	void SetUserSpecifiedScale(float InUserSpecifiedScale); // Function UMG.ScaleBox.SetUserSpecifiedScale(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6A950>
	void SetStretchDirection(char InStretchDirection); // Function UMG.ScaleBox.SetStretchDirection(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6A6F0>
	void SetStretch(char InStretch); // Function UMG.ScaleBox.SetStretch(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6A670>
	void SetIgnoreInheritedScale(char bInIgnoreInheritedScale); // Function UMG.ScaleBox.SetIgnoreInheritedScale(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B69A90>
};

// Class UMG.ScaleBoxSlot
class UScaleBoxSlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x38 (16)
	char HorizontalAlignment; // 0x48 (1)
	char VerticalAlignment; // 0x49 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.ScaleBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B58E40>
	void SetPadding(struct FMargin InPadding); // Function UMG.ScaleBoxSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B69FB0>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.ScaleBoxSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B581D0>
};

// Class UMG.ScrollBar
class UScrollBar : public UWidget {

public:

	struct FScrollBarStyle WidgetStyle; // 0x108 (1232)
	struct USlateWidgetStyleAsset Style; // 0x5D8 (8)
	char bAlwaysShowScrollbar : 0; // 0x5E0 (1)
	char bAlwaysShowScrollbarTrack : 0; // 0x5E1 (1)
	char Orientation; // 0x5E2 (1)
	struct FVector2D Thickness; // 0x5E4 (8)
	struct FMargin Padding; // 0x5EC (16)

	void SetState(float InOffsetFraction, float InThumbSizeFraction); // Function UMG.ScrollBar.SetState(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6A5B0>
};

// Class UMG.ScrollBox
class UScrollBox : public UPanelWidget {

public:

	struct FScrollBoxStyle WidgetStyle; // 0x120 (552)
	struct FScrollBarStyle WidgetBarStyle; // 0x348 (1232)
	struct USlateWidgetStyleAsset Style; // 0x818 (8)
	struct USlateWidgetStyleAsset BarStyle; // 0x820 (8)
	char Orientation; // 0x828 (1)
	enum class ESlateVisibility ScrollBarVisibility; // 0x829 (1)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x82A (1)
	struct FVector2D ScrollbarThickness; // 0x82C (8)
	struct FMargin ScrollbarPadding; // 0x834 (16)
	char AlwaysShowScrollbar : 0; // 0x844 (1)
	char AlwaysShowScrollbarTrack : 0; // 0x845 (1)
	char AllowOverscroll : 0; // 0x846 (1)
	char bAnimateWheelScrolling : 0; // 0x847 (1)
	enum class EDescendantScrollDestination NavigationDestination; // 0x848 (1)
	float NavigationScrollPadding; // 0x84C (4)
	enum class EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0x850 (1)
	char bAllowRightClickDragScrolling : 0; // 0x851 (1)
	float WheelScrollMultiplier; // 0x854 (4)
	struct FMulticastInlineDelegate OnUserScrolled; // 0x858 (16)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ScrollBox.SetWheelScrollMultiplier(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6AA50>
	void SetScrollOffset(float NewScrollOffset); // Function UMG.ScrollBox.SetScrollOffset(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6A290>
	void SetScrollbarVisibility(enum class ESlateVisibility NewScrollBarVisibility); // Function UMG.ScrollBox.SetScrollbarVisibility(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6A210>
	void SetScrollbarThickness(struct FVector2D& NewScrollbarThickness); // Function UMG.ScrollBox.SetScrollbarThickness(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6A3B0>
	void SetScrollbarPadding(struct FMargin& NewScrollbarPadding); // Function UMG.ScrollBox.SetScrollbarPadding(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6A310>
	void SetOrientation(char NewOrientation); // Function UMG.ScrollBox.SetOrientation(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B69F30>
	void SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel); // Function UMG.ScrollBox.SetConsumeMouseWheel(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B692E0>
	void SetAnimateWheelScrolling(char bShouldAnimateWheelScrolling); // Function UMG.ScrollBox.SetAnimateWheelScrolling(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B691C0>
	void SetAlwaysShowScrollbar(char NewAlwaysShowScrollbar); // Function UMG.ScrollBox.SetAlwaysShowScrollbar(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B69130>
	void SetAllowOverscroll(char NewAllowOverscroll); // Function UMG.ScrollBox.SetAllowOverscroll(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B690A0>
	void ScrollWidgetIntoView(struct UWidget WidgetToFind, char AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding); // Function UMG.ScrollBox.ScrollWidgetIntoView(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B68F50>
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B68F30>
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B68F10>
	float GetViewOffsetFraction(); // Function UMG.ScrollBox.GetViewOffsetFraction(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B68EC0>
	float GetScrollOffsetOfEnd(); // Function UMG.ScrollBox.GetScrollOffsetOfEnd(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B68DF0>
	float GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B68DC0>
	void EndInertialScrolling(); // Function UMG.ScrollBox.EndInertialScrolling(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B68CE0>
};

// Class UMG.ScrollBoxSlot
class UScrollBoxSlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x38 (16)
	char HorizontalAlignment; // 0x48 (1)
	char VerticalAlignment; // 0x49 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.ScrollBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6A9D0>
	void SetPadding(struct FMargin InPadding); // Function UMG.ScrollBoxSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6A040>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.ScrollBoxSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B69A10>
};

// Class UMG.SizeBox
class USizeBox : public UContentWidget {

public:

	float WidthOverride; // 0x130 (4)
	float HeightOverride; // 0x134 (4)
	float MinDesiredWidth; // 0x138 (4)
	float MinDesiredHeight; // 0x13C (4)
	float MaxDesiredWidth; // 0x140 (4)
	float MaxDesiredHeight; // 0x144 (4)
	float MinAspectRatio; // 0x148 (4)
	float MaxAspectRatio; // 0x14C (4)
	char bOverride_WidthOverride : 0; // 0x150 (1)
	char bOverride_HeightOverride : 0; // 0x150 (1)
	char bOverride_MinDesiredWidth : 0; // 0x150 (1)
	char bOverride_MinDesiredHeight : 0; // 0x150 (1)
	char bOverride_MaxDesiredWidth : 0; // 0x150 (1)
	char bOverride_MaxDesiredHeight : 0; // 0x150 (1)
	char bOverride_MinAspectRatio : 0; // 0x150 (1)
	char bOverride_MaxAspectRatio : 0; // 0x150 (1)

	void SetWidthOverride(float InWidthOverride); // Function UMG.SizeBox.SetWidthOverride(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6AAD0>
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.SizeBox.SetMinDesiredWidth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B69EB0>
	void SetMinDesiredHeight(float InMinDesiredHeight); // Function UMG.SizeBox.SetMinDesiredHeight(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B69DB0>
	void SetMinAspectRatio(float InMinAspectRatio); // Function UMG.SizeBox.SetMinAspectRatio(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B69D30>
	void SetMaxDesiredWidth(float InMaxDesiredWidth); // Function UMG.SizeBox.SetMaxDesiredWidth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B69CB0>
	void SetMaxDesiredHeight(float InMaxDesiredHeight); // Function UMG.SizeBox.SetMaxDesiredHeight(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B69C30>
	void SetMaxAspectRatio(float InMaxAspectRatio); // Function UMG.SizeBox.SetMaxAspectRatio(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B69BB0>
	void SetHeightOverride(float InHeightOverride); // Function UMG.SizeBox.SetHeightOverride(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B69990>
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B68CC0>
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B68CA0>
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B68C80>
	void ClearMinAspectRatio(); // Function UMG.SizeBox.ClearMinAspectRatio(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B68C60>
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B68C40>
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B68C20>
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B68C00>
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B68BE0>
};

// Class UMG.SizeBoxSlot
class USizeBoxSlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x38 (16)
	char HorizontalAlignment; // 0x58 (1)
	char VerticalAlignment; // 0x59 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.SizeBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6EAE0>
	void SetPadding(struct FMargin InPadding); // Function UMG.SizeBoxSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6E750>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.SizeBoxSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6E1B0>
};

// Class UMG.SlateVectorArtData
class USlateVectorArtData : public Object {

public:

	struct TArray<struct FSlateMeshVertex> VertexData; // 0x28 (16)
	struct TArray<uint32_t> IndexData; // 0x38 (16)
	struct UMaterialInterface Material; // 0x48 (8)
	struct FVector2D ExtentMin; // 0x50 (8)
	struct FVector2D ExtentMax; // 0x58 (8)
};

// Class UMG.SlateAccessibleWidgetData
class USlateAccessibleWidgetData : public Object {

public:

	char bCanChildrenBeAccessible : 0; // 0x28 (1)
	enum class ESlateAccessibleBehavior AccessibleBehavior; // 0x29 (1)
	enum class ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x2A (1)
	struct FText AccessibleText; // 0x30 (24)
	struct FDelegate AccessibleTextDelegate; // 0x48 (16)
	struct FText AccessibleSummaryText; // 0x58 (24)
	struct FDelegate AccessibleSummaryTextDelegate; // 0x70 (16)
};

// Class UMG.Slider
class USlider : public UWidget {

public:

	float Value; // 0x108 (4)
	struct FDelegate ValueDelegate; // 0x10C (16)
	float MinValue; // 0x11C (4)
	float MaxValue; // 0x120 (4)
	struct FSliderStyle WidgetStyle; // 0x128 (832)
	char Orientation; // 0x468 (1)
	struct FLinearColor SliderBarColor; // 0x46C (16)
	struct FLinearColor SliderHandleColor; // 0x47C (16)
	char IndentHandle : 0; // 0x48C (1)
	char Locked : 0; // 0x48D (1)
	char MouseUsesStep : 0; // 0x48E (1)
	char RequiresControllerLock : 0; // 0x48F (1)
	float StepSize; // 0x490 (4)
	char IsFocusable : 0; // 0x494 (1)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x498 (16)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x4A8 (16)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x4B8 (16)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x4C8 (16)
	struct FMulticastInlineDelegate OnValueChanged; // 0x4D8 (16)

	void SetValue(float InValue); // Function UMG.Slider.SetValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6E9E0>
	void SetStepSize(float InValue); // Function UMG.Slider.SetStepSize(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6E960>
	void SetSliderHandleColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderHandleColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6E8E0>
	void SetSliderBarColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderBarColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6E860>
	void SetMinValue(float InValue); // Function UMG.Slider.SetMinValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6E650>
	void SetMaxValue(float InValue); // Function UMG.Slider.SetMaxValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6E450>
	void SetLocked(char InValue); // Function UMG.Slider.SetLocked(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6E2C0>
	void SetIndentHandle(char InValue); // Function UMG.Slider.SetIndentHandle(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6E230>
	float GetValue(); // Function UMG.Slider.GetValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6D750>
	float GetNormalizedValue(); // Function UMG.Slider.GetNormalizedValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6D720>
};

// Class UMG.Spacer
class USpacer : public UWidget {

public:

	struct FVector2D Size; // 0x108 (8)

	void SetSize(struct FVector2D InSize); // Function UMG.Spacer.SetSize(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6E7E0>
};

// Class UMG.SpinBox
class USpinBox : public UWidget {

public:

	float Value; // 0x108 (4)
	struct FDelegate ValueDelegate; // 0x10C (16)
	struct FSpinBoxStyle WidgetStyle; // 0x120 (744)
	struct USlateWidgetStyleAsset Style; // 0x408 (8)
	int32_t MinFractionalDigits; // 0x410 (4)
	int32_t MaxFractionalDigits; // 0x414 (4)
	char bAlwaysUsesDeltaSnap : 0; // 0x418 (1)
	float Delta; // 0x41C (4)
	float SliderExponent; // 0x420 (4)
	struct FSlateFontInfo Font; // 0x428 (80)
	char Justification; // 0x478 (1)
	float MinDesiredWidth; // 0x47C (4)
	char ClearKeyboardFocusOnCommit : 0; // 0x480 (1)
	char SelectAllTextOnCommit : 0; // 0x481 (1)
	struct FSlateColor ForegroundColor; // 0x488 (40)
	struct FMulticastInlineDelegate OnValueChanged; // 0x4B0 (16)
	struct FMulticastInlineDelegate OnValueCommitted; // 0x4C0 (16)
	struct FMulticastInlineDelegate OnBeginSliderMovement; // 0x4D0 (16)
	struct FMulticastInlineDelegate OnEndSliderMovement; // 0x4E0 (16)
	char bOverride_MinValue : 0; // 0x4F0 (1)
	char bOverride_MaxValue : 0; // 0x4F0 (1)
	char bOverride_MinSliderValue : 0; // 0x4F0 (1)
	char bOverride_MaxSliderValue : 0; // 0x4F0 (1)
	float MinValue; // 0x4F4 (4)
	float MaxValue; // 0x4F8 (4)
	float MinSliderValue; // 0x4FC (4)
	float MaxSliderValue; // 0x500 (4)

	void SetValue(float NewValue); // Function UMG.SpinBox.SetValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6EA60>
	void SetMinValue(float NewValue); // Function UMG.SpinBox.SetMinValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6E6D0>
	void SetMinSliderValue(float NewValue); // Function UMG.SpinBox.SetMinSliderValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6E5D0>
	void SetMinFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMinFractionalDigits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6E550>
	void SetMaxValue(float NewValue); // Function UMG.SpinBox.SetMaxValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6E4D0>
	void SetMaxSliderValue(float NewValue); // Function UMG.SpinBox.SetMaxSliderValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6E3D0>
	void SetMaxFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMaxFractionalDigits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6E350>
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.SpinBox.SetForegroundColor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6E0C0>
	void SetDelta(float NewValue); // Function UMG.SpinBox.SetDelta(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6E040>
	void SetAlwaysUsesDeltaSnap(char bNewValue); // Function UMG.SpinBox.SetAlwaysUsesDeltaSnap(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6DFB0>
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, char CommitMethod); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	float GetValue(); // Function UMG.SpinBox.GetValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6D780>
	float GetMinValue(); // Function UMG.SpinBox.GetMinValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6D6F0>
	float GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6D6C0>
	int32_t GetMinFractionalDigits(); // Function UMG.SpinBox.GetMinFractionalDigits(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6D690>
	float GetMaxValue(); // Function UMG.SpinBox.GetMaxValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6D660>
	float GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6D630>
	int32_t GetMaxFractionalDigits(); // Function UMG.SpinBox.GetMaxFractionalDigits(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6D600>
	float GetDelta(); // Function UMG.SpinBox.GetDelta(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6D450>
	char GetAlwaysUsesDeltaSnap(); // Function UMG.SpinBox.GetAlwaysUsesDeltaSnap(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6D420>
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6D090>
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6D070>
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6D050>
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B6D030>
};

// Class UMG.TextBlock
class UTextBlock : public UTextLayoutWidget {

public:

	struct FText Text; // 0x128 (24)
	struct FDelegate TextDelegate; // 0x140 (16)
	struct FSlateColor ColorAndOpacity; // 0x150 (40)
	struct FDelegate ColorAndOpacityDelegate; // 0x178 (16)
	struct FSlateFontInfo Font; // 0x188 (80)
	struct FSlateBrush StrikeBrush; // 0x1D8 (136)
	struct FVector2D ShadowOffset; // 0x260 (8)
	struct FLinearColor ShadowColorAndOpacity; // 0x268 (16)
	struct FDelegate ShadowColorAndOpacityDelegate; // 0x278 (16)
	float MinDesiredWidth; // 0x288 (4)
	char bWrapWithInvalidationPanel : 0; // 0x28C (1)
	char bAutoWrapText : 0; // 0x28D (1)
	char bSimpleTextMode : 0; // 0x28E (1)

	void SetText(struct FText InText); // Function UMG.TextBlock.SetText(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B77880>
	void SetStrikeBrush(struct FSlateBrush InStrikeBrush); // Function UMG.TextBlock.SetStrikeBrush(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B77650>
	void SetShadowOffset(struct FVector2D InShadowOffset); // Function UMG.TextBlock.SetShadowOffset(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B77540>
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.TextBlock.SetShadowColorAndOpacity(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B774C0>
	void SetOpacity(float InOpacity); // Function UMG.TextBlock.SetOpacity(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B77120>
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.TextBlock.SetMinDesiredWidth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B76ED0>
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.TextBlock.SetFont(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B768F0>
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.TextBlock.SetColorAndOpacity(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B76580>
	void SetAutoWrapText(char InAutoTextWrap); // Function UMG.TextBlock.SetAutoWrapText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B764F0>
	struct FText GetText(); // Function UMG.TextBlock.GetText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B75470>
	struct UMaterialInstanceDynamic GetDynamicOutlineMaterial(); // Function UMG.TextBlock.GetDynamicOutlineMaterial(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B75360>
	struct UMaterialInstanceDynamic GetDynamicFontMaterial(); // Function UMG.TextBlock.GetDynamicFontMaterial(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B75330>
};

// Class UMG.Throbber
class UThrobber : public UWidget {

public:

	int32_t NumberOfPieces; // 0x108 (4)
	char bAnimateHorizontally : 0; // 0x10C (1)
	char bAnimateVertically : 0; // 0x10D (1)
	char bAnimateOpacity : 0; // 0x10E (1)
	struct USlateBrushAsset PieceImage; // 0x110 (8)
	struct FSlateBrush Image; // 0x118 (136)

	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.Throbber.SetNumberOfPieces(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B770A0>
	void SetAnimateVertically(char bInAnimateVertically); // Function UMG.Throbber.SetAnimateVertically(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B76460>
	void SetAnimateOpacity(char bInAnimateOpacity); // Function UMG.Throbber.SetAnimateOpacity(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B763D0>
	void SetAnimateHorizontally(char bInAnimateHorizontally); // Function UMG.Throbber.SetAnimateHorizontally(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B76340>
};

// Class UMG.TileView
class UTileView : public UListView {

public:

	float EntryHeight; // 0x368 (4)
	float EntryWidth; // 0x36C (4)
	enum class EListItemAlignment TileAlignment; // 0x370 (1)
	char bWrapHorizontalNavigation : 0; // 0x371 (1)

	void SetEntryWidth(float NewWidth); // Function UMG.TileView.SetEntryWidth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B76870>
	void SetEntryHeight(float NewHeight); // Function UMG.TileView.SetEntryHeight(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B767F0>
};

// Class UMG.TreeView
class UTreeView : public UListView {

public:

	struct FDelegate BP_OnGetItemChildren; // 0x378 (16)
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x388 (16)

	void SetItemExpansion(struct Object Item, char bExpandItem); // Function UMG.TreeView.SetItemExpansion(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B76C80>
	void ExpandAll(); // Function UMG.TreeView.ExpandAll(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B751F0>
	void CollapseAll(); // Function UMG.TreeView.CollapseAll(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B751D0>
};

// Class UMG.UMGSequencePlayer
class UUMGSequencePlayer : public Object {

public:

	struct UWidgetAnimation Animation; // 0x408 (8)

	void SetUserTag(struct FName InUserTag); // Function UMG.UMGSequencePlayer.SetUserTag(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B77960>
	struct FName GetUserTag(); // Function UMG.UMGSequencePlayer.GetUserTag(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B755B0>
};

// Class UMG.UniformGridPanel
class UUniformGridPanel : public UPanelWidget {

public:

	struct FMargin SlotPadding; // 0x120 (16)
	float MinDesiredSlotWidth; // 0x130 (4)
	float MinDesiredSlotHeight; // 0x134 (4)

	void SetSlotPadding(struct FMargin InSlotPadding); // Function UMG.UniformGridPanel.SetSlotPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B775C0>
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B76E50>
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B76DD0>
	struct UUniformGridSlot AddChildToUniformGrid(struct UWidget Content, int32_t InRow, int32_t InColumn); // Function UMG.UniformGridPanel.AddChildToUniformGrid(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B74C70>
};

// Class UMG.UniformGridSlot
class UUniformGridSlot : public UPanelSlot {

public:

	char HorizontalAlignment; // 0x38 (1)
	char VerticalAlignment; // 0x39 (1)
	int32_t Row; // 0x3C (4)
	int32_t Column; // 0x40 (4)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.UniformGridSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B779E0>
	void SetRow(int32_t InRow); // Function UMG.UniformGridSlot.SetRow(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B77440>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.UniformGridSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B76AF0>
	void SetColumn(int32_t InColumn); // Function UMG.UniformGridSlot.SetColumn(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B766F0>
};

// Class UMG.VerticalBoxSlot
class UVerticalBoxSlot : public UPanelSlot {

public:

	struct FSlateChildSize Size; // 0x38 (8)
	struct FMargin Padding; // 0x40 (16)
	char HorizontalAlignment; // 0x58 (1)
	char VerticalAlignment; // 0x59 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.VerticalBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7B010>
	void SetSize(struct FSlateChildSize InSize); // Function UMG.VerticalBoxSlot.SetSize(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7ADB0>
	void SetPadding(struct FMargin InPadding); // Function UMG.VerticalBoxSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7A940>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.VerticalBoxSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7A3C0>
};

// Class UMG.Viewport
class UViewport : public UContentWidget {

public:

	struct FLinearColor BackgroundColor; // 0x120 (16)

	struct UActor Spawn(struct UClass* ActorClass); // Function UMG.Viewport.Spawn(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7B230>
	void SetViewRotation(struct FRotator Rotation); // Function UMG.Viewport.SetViewRotation(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7B120>
	void SetViewLocation(struct FVector Location); // Function UMG.Viewport.SetViewLocation(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7B090>
	struct FRotator GetViewRotation(); // Function UMG.Viewport.GetViewRotation(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79E10>
	struct UWorld GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79E50>
	struct FVector GetViewLocation(); // Function UMG.Viewport.GetViewLocation(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B79DD0>
};

// Class UMG.WidgetAnimation
class UWidgetAnimation : public UMovieSceneSequence {

public:

	struct UMovieScene MovieScene; // 0x348 (8)
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings; // 0x350 (16)
	char bLegacyFinishOnStop : 0; // 0x360 (1)
	struct FString DisplayLabel; // 0x368 (16)

	void UnbindFromAnimationStarted(struct UUserWidget Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationStarted(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B817C0>
	void UnbindFromAnimationFinished(struct UUserWidget Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationFinished(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B816E0>
	void UnbindAllFromAnimationStarted(struct UUserWidget Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B81660>
	void UnbindAllFromAnimationFinished(struct UUserWidget Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B815E0>
	float GetStartTime(); // Function UMG.WidgetAnimation.GetStartTime(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B800A0>
	float GetEndTime(); // Function UMG.WidgetAnimation.GetEndTime(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7F850>
	void BindToAnimationStarted(struct UUserWidget Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationStarted(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7D610>
	void BindToAnimationFinished(struct UUserWidget Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationFinished(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7D530>
};

// Class UMG.WidgetAnimationDelegateBinding
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding {

public:

	struct TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28 (16)
};

// Class UMG.WidgetAnimationPlayCallbackProxy
class UWidgetAnimationPlayCallbackProxy : public Object {

public:

	struct FMulticastInlineDelegate Finished; // 0x28 (16)

	struct UWidgetAnimationPlayCallbackProxy CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer& Result, struct UUserWidget Widget, struct UWidgetAnimation InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, char PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7DE50>
	struct UWidgetAnimationPlayCallbackProxy CreatePlayAnimationProxyObject(struct UUMGSequencePlayer& Result, struct UUserWidget Widget, struct UWidgetAnimation InAnimation, float StartAtTime, int32_t NumLoopsToPlay, char PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B7DC50>
};

// Class UMG.WidgetBlueprintGeneratedClass
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass {

public:

	struct UWidgetTree WidgetTree; // 0x3C8 (8)
	char bAllowTemplate : 0; // 0x3D0 (1)
	char bAllowDynamicCreation : 0; // 0x3D0 (1)
	char bValidTemplate : 0; // 0x3D0 (1)
	char bTemplateInitialized : 0; // 0x3D0 (1)
	char bCookedTemplate : 0; // 0x3D0 (1)
	char bClassRequiresNativeTick : 0; // 0x3D0 (1)
	struct TArray<struct FDelegateRuntimeBinding> Bindings; // 0x3D8 (16)
	struct TArray<struct UWidgetAnimation> Animations; // 0x3E8 (16)
	struct TArray<struct FName> NamedSlots; // 0x3F8 (16)
	struct TSoftObjectPtr<UUserWidget> TemplateAsset; // 0x408 (40)
	struct UUserWidget Template; // 0x430 (8)
};

// Class UMG.WidgetComponent
class UWidgetComponent : public UMeshComponent {

public:

	enum class EWidgetSpace Space; // 0x4E0 (1)
	enum class EWidgetTimingPolicy TimingPolicy; // 0x4E1 (1)
	struct UClass* WidgetClass; // 0x4E8 (8)
	struct FIntPoint DrawSize; // 0x4F0 (8)
	char bManuallyRedraw : 0; // 0x4F8 (1)
	char bRedrawRequested : 0; // 0x4F9 (1)
	float RedrawTime; // 0x4FC (4)
	struct FIntPoint CurrentDrawSize; // 0x508 (8)
	char bDrawAtDesiredSize : 0; // 0x510 (1)
	struct FVector2D Pivot; // 0x514 (8)
	char bReceiveHardwareInput : 0; // 0x51C (1)
	char bWindowFocusable : 0; // 0x51D (1)
	enum class EWindowVisibility WindowVisibility; // 0x51E (1)
	char bApplyGammaCorrection : 0; // 0x51F (1)
	struct ULocalPlayer OwnerPlayer; // 0x520 (8)
	struct FLinearColor BackgroundColor; // 0x528 (16)
	struct FLinearColor TintColorAndOpacity; // 0x538 (16)
	float OpacityFromTexture; // 0x548 (4)
	enum class EWidgetBlendMode BlendMode; // 0x54C (1)
	char bIsTwoSided : 0; // 0x54D (1)
	char TickWhenOffscreen : 0; // 0x54E (1)
	struct UUserWidget Widget; // 0x550 (8)
	struct UBodySetup BodySetup; // 0x578 (8)
	struct UMaterialInterface TranslucentMaterial; // 0x580 (8)
	struct UMaterialInterface TranslucentMaterial_OneSided; // 0x588 (8)
	struct UMaterialInterface OpaqueMaterial; // 0x590 (8)
	struct UMaterialInterface OpaqueMaterial_OneSided; // 0x598 (8)
	struct UMaterialInterface MaskedMaterial; // 0x5A0 (8)
	struct UMaterialInterface MaskedMaterial_OneSided; // 0x5A8 (8)
	struct UTextureRenderTarget2D RenderTarget; // 0x5B0 (8)
	struct UMaterialInstanceDynamic MaterialInstance; // 0x5B8 (8)
	char bAddedToScreen : 0; // 0x5C0 (1)
	char bEditTimeUsable : 0; // 0x5C1 (1)
	struct FName SharedLayerName; // 0x5C4 (8)
	int32_t LayerZOrder; // 0x5CC (4)
	enum class EWidgetGeometryMode GeometryMode; // 0x5D0 (1)
	float CylinderArcAngle; // 0x5D4 (4)

	void SetWindowVisibility(enum class EWindowVisibility InVisibility); // Function UMG.WidgetComponent.SetWindowVisibility(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B85440>
	void SetWindowFocusable(char bInWindowFocusable); // Function UMG.WidgetComponent.SetWindowFocusable(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B853B0>
	void SetWidgetSpace(enum class EWidgetSpace NewSpace); // Function UMG.WidgetComponent.SetWidgetSpace(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B85330>
	void SetWidget(struct UUserWidget Widget); // Function UMG.WidgetComponent.SetWidget(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B852A0>
	void SetTwoSided(char bWantTwoSided); // Function UMG.WidgetComponent.SetTwoSided(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B85210>
	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity); // Function UMG.WidgetComponent.SetTintColorAndOpacity(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B85190>
	void SetTickWhenOffscreen(char bWantTickWhenOffscreen); // Function UMG.WidgetComponent.SetTickWhenOffscreen(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B85110>
	void SetRedrawTime(float InRedrawTime); // Function UMG.WidgetComponent.SetRedrawTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B85090>
	void SetPivot(struct FVector2D& InPivot); // Function UMG.WidgetComponent.SetPivot(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B85000>
	void SetOwnerPlayer(struct ULocalPlayer LocalPlayer); // Function UMG.WidgetComponent.SetOwnerPlayer(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B84F80>
	void SetManuallyRedraw(char bUseManualRedraw); // Function UMG.WidgetComponent.SetManuallyRedraw(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B84EF0>
	void SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode); // Function UMG.WidgetComponent.SetGeometryMode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B84E70>
	void SetDrawSize(struct FVector2D Size); // Function UMG.WidgetComponent.SetDrawSize(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B84D70>
	void SetDrawAtDesiredSize(char bInDrawAtDesiredSize); // Function UMG.WidgetComponent.SetDrawAtDesiredSize(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B84CF0>
	void SetCylinderArcAngle(float InCylinderArcAngle); // Function UMG.WidgetComponent.SetCylinderArcAngle(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B84C70>
	void SetBackgroundColor(struct FLinearColor NewBackgroundColor); // Function UMG.WidgetComponent.SetBackgroundColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B84B10>
	void RequestRedraw(); // Function UMG.WidgetComponent.RequestRedraw(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B84920>
	enum class EWindowVisibility GetWindowVisiblility(); // Function UMG.WidgetComponent.GetWindowVisiblility(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B84030>
	char GetWindowFocusable(); // Function UMG.WidgetComponent.GetWindowFocusable(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B84010>
	enum class EWidgetSpace GetWidgetSpace(); // Function UMG.WidgetComponent.GetWidgetSpace(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B83FF0>
	struct UUserWidget GetUserWidgetObject(); // Function UMG.WidgetComponent.GetUserWidgetObject(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B83DF0>
	char GetTwoSided(); // Function UMG.WidgetComponent.GetTwoSided(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B83DD0>
	char GetTickWhenOffscreen(); // Function UMG.WidgetComponent.GetTickWhenOffscreen(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B83DB0>
	struct UTextureRenderTarget2D GetRenderTarget(); // Function UMG.WidgetComponent.GetRenderTarget(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B83D80>
	float GetRedrawTime(); // Function UMG.WidgetComponent.GetRedrawTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B83D60>
	struct FVector2D GetPivot(); // Function UMG.WidgetComponent.GetPivot(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B83C80>
	struct ULocalPlayer GetOwnerPlayer(); // Function UMG.WidgetComponent.GetOwnerPlayer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B83C50>
	struct UMaterialInstanceDynamic GetMaterialInstance(); // Function UMG.WidgetComponent.GetMaterialInstance(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B83A30>
	char GetManuallyRedraw(); // Function UMG.WidgetComponent.GetManuallyRedraw(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B83A10>
	enum class EWidgetGeometryMode GetGeometryMode(); // Function UMG.WidgetComponent.GetGeometryMode(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B83970>
	struct FVector2D GetDrawSize(); // Function UMG.WidgetComponent.GetDrawSize(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B83930>
	char GetDrawAtDesiredSize(); // Function UMG.WidgetComponent.GetDrawAtDesiredSize(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B83910>
	float GetCylinderArcAngle(); // Function UMG.WidgetComponent.GetCylinderArcAngle(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B838F0>
	struct FVector2D GetCurrentDrawSize(); // Function UMG.WidgetComponent.GetCurrentDrawSize(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B838B0>
};

// Class UMG.WidgetInteractionComponent
class UWidgetInteractionComponent : public USceneComponent {

public:

	struct FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x230 (16)
	int32_t VirtualUserIndex; // 0x250 (4)
	float PointerIndex; // 0x254 (4)
	char TraceChannel; // 0x258 (1)
	float InteractionDistance; // 0x25C (4)
	enum class EWidgetInteractionSource InteractionSource; // 0x260 (1)
	char bEnableHitTesting : 0; // 0x261 (1)
	char bShowDebug : 0; // 0x262 (1)
	struct FLinearColor DebugColor; // 0x264 (16)
	struct FHitResult CustomHitResult; // 0x2F0 (136)
	struct FVector2D LocalHitLocation; // 0x378 (8)
	struct FVector2D LastLocalHitLocation; // 0x380 (8)
	struct UWidgetComponent HoveredWidgetComponent; // 0x388 (8)
	struct FHitResult LastHitResult; // 0x390 (136)
	char bIsHoveredWidgetInteractable : 0; // 0x418 (1)
	char bIsHoveredWidgetFocusable : 0; // 0x419 (1)
	char bIsHoveredWidgetHitTestVisible : 0; // 0x41A (1)

	void SetFocus(struct UWidget FocusWidget); // Function UMG.WidgetInteractionComponent.SetFocus(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B84DF0>
	void SetCustomHitResult(struct FHitResult& HitResult); // Function UMG.WidgetInteractionComponent.SetCustomHitResult(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B84B90>
	char SendKeyChar(struct FString Characters, char bRepeat); // Function UMG.WidgetInteractionComponent.SendKeyChar(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B849C0>
	void ScrollWheel(float ScrollDelta); // Function UMG.WidgetInteractionComponent.ScrollWheel(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B84940>
	void ReleasePointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleasePointerKey(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B847C0>
	char ReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleaseKey(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B846C0>
	void PressPointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressPointerKey(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B84310>
	char PressKey(struct FKey Key, char bRepeat); // Function UMG.WidgetInteractionComponent.PressKey(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B841E0>
	char PressAndReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressAndReleaseKey(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B840E0>
	char IsOverInteractableWidget(); // Function UMG.WidgetInteractionComponent.IsOverInteractableWidget(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B840B0>
	char IsOverHitTestVisibleWidget(); // Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B84080>
	char IsOverFocusableWidget(); // Function UMG.WidgetInteractionComponent.IsOverFocusableWidget(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B84050>
	struct FHitResult GetLastHitResult(); // Function UMG.WidgetInteractionComponent.GetLastHitResult(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B83990>
	struct UWidgetComponent GetHoveredWidgetComponent(); // Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x36E5C80>
	struct FVector2D Get2DHitLocation(); // Function UMG.WidgetInteractionComponent.Get2DHitLocation(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B83870>
};

// Class UMG.WidgetNavigation
class UWidgetNavigation : public Object {

public:

	struct FWidgetNavigationData Up; // 0x28 (36)
	struct FWidgetNavigationData Down; // 0x4C (36)
	struct FWidgetNavigationData Left; // 0x70 (36)
	struct FWidgetNavigationData Right; // 0x94 (36)
	struct FWidgetNavigationData Next; // 0xB8 (36)
	struct FWidgetNavigationData Previous; // 0xDC (36)
};

// Class UMG.WidgetSwitcher
class UWidgetSwitcher : public UPanelWidget {

public:

	int32_t ActiveWidgetIndex; // 0x120 (4)

	void SetActiveWidgetIndex(int32_t Index); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B87150>
	void SetActiveWidget(struct UWidget Widget); // Function UMG.WidgetSwitcher.SetActiveWidget(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B5FFF0>
	struct UWidget GetWidgetAtIndex(int32_t Index); // Function UMG.WidgetSwitcher.GetWidgetAtIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B870C0>
	int32_t GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B87090>
	int32_t GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B87060>
	struct UWidget GetActiveWidget(); // Function UMG.WidgetSwitcher.GetActiveWidget(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B87030>
};

// Class UMG.WidgetSwitcherSlot
class UWidgetSwitcherSlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x40 (16)
	char HorizontalAlignment; // 0x50 (1)
	char VerticalAlignment; // 0x51 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.WidgetSwitcherSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B877A0>
	void SetPadding(struct FMargin InPadding); // Function UMG.WidgetSwitcherSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B65DA0>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B872F0>
};

// Class UMG.WidgetTree
class UWidgetTree : public Object {

public:

	struct UWidget RootWidget; // 0x28 (8)
};

// Class UMG.WindowTitleBarArea
class UWindowTitleBarArea : public UContentWidget {

public:

	char bWindowButtonsEnabled : 0; // 0x120 (1)
	char bDoubleClickTogglesFullscreen : 0; // 0x121 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.WindowTitleBarArea.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B87820>
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarArea.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B875F0>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.WindowTitleBarArea.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B87370>
};

// Class UMG.WindowTitleBarAreaSlot
class UWindowTitleBarAreaSlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x38 (16)
	char HorizontalAlignment; // 0x48 (1)
	char VerticalAlignment; // 0x49 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B878A0>
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarAreaSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B87680>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B873F0>
};

// Class UMG.WrapBox
class UWrapBox : public UPanelWidget {

public:

	struct FVector2D InnerSlotPadding; // 0x120 (8)
	float WrapWidth; // 0x128 (4)
	char bExplicitWrapWidth : 0; // 0x12C (1)
	char HorizontalAlignment; // 0x12D (1)

	void SetInnerSlotPadding(struct FVector2D InPadding); // Function UMG.WrapBox.SetInnerSlotPadding(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B87570>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.WrapBox.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B87470>
	struct UWrapBoxSlot AddChildToWrapBox(struct UWidget Content); // Function UMG.WrapBox.AddChildToWrapBox(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B86FA0>
};

// Class UMG.WrapBoxSlot
class UWrapBoxSlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x38 (16)
	char bFillEmptySpace : 0; // 0x48 (1)
	float FillSpanWhenLessThan; // 0x4C (4)
	char HorizontalAlignment; // 0x50 (1)
	char VerticalAlignment; // 0x51 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.WrapBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B87920>
	void SetPadding(struct FMargin InPadding); // Function UMG.WrapBoxSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B87710>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.WrapBoxSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B874F0>
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B87270>
	void SetFillEmptySpace(char InbFillEmptySpace); // Function UMG.WrapBoxSlot.SetFillEmptySpace(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3B871E0>
};

// ScriptStruct UMG.WidgetTransform
struct FWidgetTransform {
	struct FVector2D Translation; // 0x0 (8)
	struct FVector2D Scale; // 0x8 (8)
	struct FVector2D Shear; // 0x10 (8)
	float Angle; // 0x18 (4)
};

// ScriptStruct UMG.ShapedTextOptions
struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 0; // 0x0 (1)
	char bOverride_TextFlowDirection : 0; // 0x0 (1)
	enum class ETextShapingMethod TextShapingMethod; // 0x1 (1)
	enum class ETextFlowDirection TextFlowDirection; // 0x2 (1)
};

// ScriptStruct UMG.AnimationEventBinding
struct FAnimationEventBinding {
	struct UWidgetAnimation Animation; // 0x0 (8)
	struct FDelegate Delegate; // 0x8 (16)
	enum class EWidgetAnimationEvent AnimationEvent; // 0x18 (1)
	struct FName UserTag; // 0x1C (8)
};

// ScriptStruct UMG.NamedSlotBinding
struct FNamedSlotBinding {
	struct FName Name; // 0x0 (8)
	struct UWidget Content; // 0x8 (8)
};

// ScriptStruct UMG.AnchorData
struct FAnchorData {
	struct FMargin Offsets; // 0x0 (16)
	struct FAnchors Anchors; // 0x10 (16)
	struct FVector2D Alignment; // 0x20 (8)
};

// ScriptStruct UMG.MovieScene2DTransformMask
struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x0 (4)
};

// ScriptStruct UMG.MovieScene2DTransformSectionTemplate
struct FMovieScene2DTransformSectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel Translation[0x2]; // 0x48 (320)
	struct FMovieSceneFloatChannel Rotation; // 0x188 (160)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x228 (320)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x368 (320)
	enum class EMovieSceneBlendType BlendType; // 0x4A8 (1)
	struct FMovieScene2DTransformMask Mask; // 0x4AC (4)
};

// ScriptStruct UMG.MovieSceneMarginSectionTemplate
struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel TopCurve; // 0x48 (160)
	struct FMovieSceneFloatChannel LeftCurve; // 0xE8 (160)
	struct FMovieSceneFloatChannel RightCurve; // 0x188 (160)
	struct FMovieSceneFloatChannel BottomCurve; // 0x228 (160)
	enum class EMovieSceneBlendType BlendType; // 0x2C8 (1)
};

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	struct TArray<struct FName> BrushPropertyNamePath; // 0x80 (16)
};

// ScriptStruct UMG.RichTextStyleRow
struct FRichTextStyleRow : FTableRowBase {
	struct FTextBlockStyle TextStyle; // 0x8 (616)
};

// ScriptStruct UMG.RichImageRow
struct FRichImageRow : FTableRowBase {
	struct FSlateBrush Brush; // 0x8 (136)
};

// ScriptStruct UMG.SlateMeshVertex
struct FSlateMeshVertex {
	struct FVector2D Position; // 0x0 (8)
	struct FColor Color; // 0x8 (4)
	struct FVector2D UV0; // 0xC (8)
	struct FVector2D UV1; // 0x14 (8)
	struct FVector2D UV2; // 0x1C (8)
	struct FVector2D UV3; // 0x24 (8)
	struct FVector2D UV4; // 0x2C (8)
	struct FVector2D UV5; // 0x34 (8)
};

// ScriptStruct UMG.SlateChildSize
struct FSlateChildSize {
	float Value; // 0x0 (4)
	char SizeRule; // 0x4 (1)
};

// ScriptStruct UMG.UserWidgetPool
struct FUserWidgetPool {
	struct TArray<struct UUserWidget> ActiveWidgets; // 0x0 (16)
	struct TArray<struct UUserWidget> InactiveWidgets; // 0x10 (16)
};

// ScriptStruct UMG.WidgetAnimationBinding
struct FWidgetAnimationBinding {
	struct FName WidgetName; // 0x0 (8)
	struct FName SlotWidgetName; // 0x8 (8)
	struct FGuid AnimationGuid; // 0x10 (16)
	char bIsRootWidget : 0; // 0x20 (1)
};

// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
struct FBlueprintWidgetAnimationDelegateBinding {
	enum class EWidgetAnimationEvent Action; // 0x0 (1)
	struct FName AnimationToBind; // 0x4 (8)
	struct FName FunctionNameToBind; // 0xC (8)
	struct FName UserTag; // 0x14 (8)
};

// ScriptStruct UMG.DelegateRuntimeBinding
struct FDelegateRuntimeBinding {
	struct FString ObjectName; // 0x0 (16)
	struct FName PropertyName; // 0x10 (8)
	struct FName FunctionName; // 0x18 (8)
	struct FDynamicPropertyPath SourcePath; // 0x20 (40)
	enum class EBindingKind Kind; // 0x48 (1)
};

// ScriptStruct UMG.WidgetNavigationData
struct FWidgetNavigationData {
	enum class EUINavigationRule Rule; // 0x0 (1)
	struct FName WidgetToFocus; // 0x4 (8)
	struct TWeakObjectPtr<struct UWidget> Widget; // 0xC (8)
	struct FDelegate CustomDelegate; // 0x14 (16)
};

// Function UMG.Widget.SetVisibility
inline void UWidget::SetVisibility(enum class ESlateVisibility InVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetVisibility");

	struct SetVisibility_Params {
		enum class ESlateVisibility InVisibility;
	}; SetVisibility_Params Params;

	Params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetUserFocus
inline void UWidget::SetUserFocus(struct APlayerController PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetUserFocus");

	struct SetUserFocus_Params {
		struct APlayerController PlayerController;
	}; SetUserFocus_Params Params;

	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetToolTipText
inline void UWidget::SetToolTipText(struct FText& InToolTipText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetToolTipText");

	struct SetToolTipText_Params {
		struct FText& InToolTipText;
	}; SetToolTipText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InToolTipText = Params.InToolTipText;

}

// Function UMG.Widget.SetToolTip
inline void UWidget::SetToolTip(struct UWidget Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetToolTip");

	struct SetToolTip_Params {
		struct UWidget Widget;
	}; SetToolTip_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetRenderTranslation
inline void UWidget::SetRenderTranslation(struct FVector2D Translation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTranslation");

	struct SetRenderTranslation_Params {
		struct FVector2D Translation;
	}; SetRenderTranslation_Params Params;

	Params.Translation = Translation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetRenderTransformPivot
inline void UWidget::SetRenderTransformPivot(struct FVector2D Pivot) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransformPivot");

	struct SetRenderTransformPivot_Params {
		struct FVector2D Pivot;
	}; SetRenderTransformPivot_Params Params;

	Params.Pivot = Pivot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetRenderTransformAngle
inline void UWidget::SetRenderTransformAngle(float Angle) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransformAngle");

	struct SetRenderTransformAngle_Params {
		float Angle;
	}; SetRenderTransformAngle_Params Params;

	Params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetRenderTransform
inline void UWidget::SetRenderTransform(struct FWidgetTransform InTransform) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransform");

	struct SetRenderTransform_Params {
		struct FWidgetTransform InTransform;
	}; SetRenderTransform_Params Params;

	Params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetRenderShear
inline void UWidget::SetRenderShear(struct FVector2D Shear) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderShear");

	struct SetRenderShear_Params {
		struct FVector2D Shear;
	}; SetRenderShear_Params Params;

	Params.Shear = Shear;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetRenderScale
inline void UWidget::SetRenderScale(struct FVector2D Scale) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderScale");

	struct SetRenderScale_Params {
		struct FVector2D Scale;
	}; SetRenderScale_Params Params;

	Params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetRenderOpacity
inline void UWidget::SetRenderOpacity(float InOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderOpacity");

	struct SetRenderOpacity_Params {
		float InOpacity;
	}; SetRenderOpacity_Params Params;

	Params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetNavigationRuleExplicit
inline void UWidget::SetNavigationRuleExplicit(enum class EUINavigation Direction, struct UWidget InWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleExplicit");

	struct SetNavigationRuleExplicit_Params {
		enum class EUINavigation Direction;
		struct UWidget InWidget;
	}; SetNavigationRuleExplicit_Params Params;

	Params.Direction = Direction;
	Params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetNavigationRuleCustomBoundary
inline void UWidget::SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, struct FDelegate InCustomDelegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleCustomBoundary");

	struct SetNavigationRuleCustomBoundary_Params {
		enum class EUINavigation Direction;
		struct FDelegate InCustomDelegate;
	}; SetNavigationRuleCustomBoundary_Params Params;

	Params.Direction = Direction;
	Params.InCustomDelegate = InCustomDelegate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetNavigationRuleCustom
inline void UWidget::SetNavigationRuleCustom(enum class EUINavigation Direction, struct FDelegate InCustomDelegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleCustom");

	struct SetNavigationRuleCustom_Params {
		enum class EUINavigation Direction;
		struct FDelegate InCustomDelegate;
	}; SetNavigationRuleCustom_Params Params;

	Params.Direction = Direction;
	Params.InCustomDelegate = InCustomDelegate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetNavigationRuleBase
inline void UWidget::SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleBase");

	struct SetNavigationRuleBase_Params {
		enum class EUINavigation Direction;
		enum class EUINavigationRule Rule;
	}; SetNavigationRuleBase_Params Params;

	Params.Direction = Direction;
	Params.Rule = Rule;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetNavigationRule
inline void UWidget::SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, struct FName WidgetToFocus) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRule");

	struct SetNavigationRule_Params {
		enum class EUINavigation Direction;
		enum class EUINavigationRule Rule;
		struct FName WidgetToFocus;
	}; SetNavigationRule_Params Params;

	Params.Direction = Direction;
	Params.Rule = Rule;
	Params.WidgetToFocus = WidgetToFocus;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetKeyboardFocus
inline void UWidget::SetKeyboardFocus() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetKeyboardFocus");

	struct SetKeyboardFocus_Params {
		
	}; SetKeyboardFocus_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetIsEnabled
inline void UWidget::SetIsEnabled(char bInIsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetIsEnabled");

	struct SetIsEnabled_Params {
		char bInIsEnabled;
	}; SetIsEnabled_Params Params;

	Params.bInIsEnabled = bInIsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetFocus
inline void UWidget::SetFocus() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetFocus");

	struct SetFocus_Params {
		
	}; SetFocus_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetCursor
inline void UWidget::SetCursor(char InCursor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetCursor");

	struct SetCursor_Params {
		char InCursor;
	}; SetCursor_Params Params;

	Params.InCursor = InCursor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetClipping
inline void UWidget::SetClipping(enum class EWidgetClipping InClipping) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetClipping");

	struct SetClipping_Params {
		enum class EWidgetClipping InClipping;
	}; SetClipping_Params Params;

	Params.InClipping = InClipping;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetAllNavigationRules
inline void UWidget::SetAllNavigationRules(enum class EUINavigationRule Rule, struct FName WidgetToFocus) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetAllNavigationRules");

	struct SetAllNavigationRules_Params {
		enum class EUINavigationRule Rule;
		struct FName WidgetToFocus;
	}; SetAllNavigationRules_Params Params;

	Params.Rule = Rule;
	Params.WidgetToFocus = WidgetToFocus;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.ResetCursor
inline void UWidget::ResetCursor() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.ResetCursor");

	struct ResetCursor_Params {
		
	}; ResetCursor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.RemoveFromParent
inline void UWidget::RemoveFromParent() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.RemoveFromParent");

	struct RemoveFromParent_Params {
		
	}; RemoveFromParent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.Widget.OnReply__DelegateSignature
inline struct FEventReply UWidget::OnReply__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.OnReply__DelegateSignature");

	struct OnReply__DelegateSignature_Params {
		
		struct FEventReply ReturnValue;

	}; OnReply__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
inline struct FEventReply UWidget::OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature");

	struct OnPointerEvent__DelegateSignature_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnPointerEvent__DelegateSignature_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UMG.Widget.IsVisible
inline char UWidget::IsVisible() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.IsVisible");

	struct IsVisible_Params {
		
		char ReturnValue;

	}; IsVisible_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.IsHovered
inline char UWidget::IsHovered() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.IsHovered");

	struct IsHovered_Params {
		
		char ReturnValue;

	}; IsHovered_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.InvalidateLayoutAndVolatility
inline void UWidget::InvalidateLayoutAndVolatility() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.InvalidateLayoutAndVolatility");

	struct InvalidateLayoutAndVolatility_Params {
		
	}; InvalidateLayoutAndVolatility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.HasUserFocusedDescendants
inline char UWidget::HasUserFocusedDescendants(struct APlayerController PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasUserFocusedDescendants");

	struct HasUserFocusedDescendants_Params {
		struct APlayerController PlayerController;
		char ReturnValue;

	}; HasUserFocusedDescendants_Params Params;

	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.HasUserFocus
inline char UWidget::HasUserFocus(struct APlayerController PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasUserFocus");

	struct HasUserFocus_Params {
		struct APlayerController PlayerController;
		char ReturnValue;

	}; HasUserFocus_Params Params;

	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.HasMouseCaptureByUser
inline char UWidget::HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasMouseCaptureByUser");

	struct HasMouseCaptureByUser_Params {
		int32_t UserIndex;
		int32_t PointerIndex;
		char ReturnValue;

	}; HasMouseCaptureByUser_Params Params;

	Params.UserIndex = UserIndex;
	Params.PointerIndex = PointerIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.HasMouseCapture
inline char UWidget::HasMouseCapture() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasMouseCapture");

	struct HasMouseCapture_Params {
		
		char ReturnValue;

	}; HasMouseCapture_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.HasKeyboardFocus
inline char UWidget::HasKeyboardFocus() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasKeyboardFocus");

	struct HasKeyboardFocus_Params {
		
		char ReturnValue;

	}; HasKeyboardFocus_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.HasFocusedDescendants
inline char UWidget::HasFocusedDescendants() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasFocusedDescendants");

	struct HasFocusedDescendants_Params {
		
		char ReturnValue;

	}; HasFocusedDescendants_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.HasAnyUserFocus
inline char UWidget::HasAnyUserFocus() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasAnyUserFocus");

	struct HasAnyUserFocus_Params {
		
		char ReturnValue;

	}; HasAnyUserFocus_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
inline struct UWidget UWidget::GetWidget__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetWidget__DelegateSignature");

	struct GetWidget__DelegateSignature_Params {
		
		struct UWidget ReturnValue;

	}; GetWidget__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetVisibility
inline enum class ESlateVisibility UWidget::GetVisibility() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetVisibility");

	struct GetVisibility_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; GetVisibility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetTickSpaceGeometry
inline struct FGeometry UWidget::GetTickSpaceGeometry() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetTickSpaceGeometry");

	struct GetTickSpaceGeometry_Params {
		
		struct FGeometry ReturnValue;

	}; GetTickSpaceGeometry_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GetText__DelegateSignature
inline struct FText UWidget::GetText__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetText__DelegateSignature");

	struct GetText__DelegateSignature_Params {
		
		struct FText ReturnValue;

	}; GetText__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
inline enum class ESlateVisibility UWidget::GetSlateVisibility__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature");

	struct GetSlateVisibility__DelegateSignature_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; GetSlateVisibility__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
inline struct FSlateColor UWidget::GetSlateColor__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature");

	struct GetSlateColor__DelegateSignature_Params {
		
		struct FSlateColor ReturnValue;

	}; GetSlateColor__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
inline struct FSlateBrush UWidget::GetSlateBrush__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature");

	struct GetSlateBrush__DelegateSignature_Params {
		
		struct FSlateBrush ReturnValue;

	}; GetSlateBrush__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetRenderTransformAngle
inline float UWidget::GetRenderTransformAngle() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetRenderTransformAngle");

	struct GetRenderTransformAngle_Params {
		
		float ReturnValue;

	}; GetRenderTransformAngle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetRenderOpacity
inline float UWidget::GetRenderOpacity() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetRenderOpacity");

	struct GetRenderOpacity_Params {
		
		float ReturnValue;

	}; GetRenderOpacity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetParent
inline struct UPanelWidget UWidget::GetParent() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetParent");

	struct GetParent_Params {
		
		struct UPanelWidget ReturnValue;

	}; GetParent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetPaintSpaceGeometry
inline struct FGeometry UWidget::GetPaintSpaceGeometry() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetPaintSpaceGeometry");

	struct GetPaintSpaceGeometry_Params {
		
		struct FGeometry ReturnValue;

	}; GetPaintSpaceGeometry_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetOwningPlayer
inline struct APlayerController UWidget::GetOwningPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetOwningPlayer");

	struct GetOwningPlayer_Params {
		
		struct APlayerController ReturnValue;

	}; GetOwningPlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetOwningLocalPlayer
inline struct ULocalPlayer UWidget::GetOwningLocalPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetOwningLocalPlayer");

	struct GetOwningLocalPlayer_Params {
		
		struct ULocalPlayer ReturnValue;

	}; GetOwningLocalPlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
inline char UWidget::GetMouseCursor__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature");

	struct GetMouseCursor__DelegateSignature_Params {
		
		char ReturnValue;

	}; GetMouseCursor__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
inline struct FLinearColor UWidget::GetLinearColor__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature");

	struct GetLinearColor__DelegateSignature_Params {
		
		struct FLinearColor ReturnValue;

	}; GetLinearColor__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetIsEnabled
inline char UWidget::GetIsEnabled() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetIsEnabled");

	struct GetIsEnabled_Params {
		
		char ReturnValue;

	}; GetIsEnabled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
inline int32_t UWidget::GetInt32__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetInt32__DelegateSignature");

	struct GetInt32__DelegateSignature_Params {
		
		int32_t ReturnValue;

	}; GetInt32__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetGameInstance
inline struct UGameInstance UWidget::GetGameInstance() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetGameInstance");

	struct GetGameInstance_Params {
		
		struct UGameInstance ReturnValue;

	}; GetGameInstance_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
inline float UWidget::GetFloat__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetFloat__DelegateSignature");

	struct GetFloat__DelegateSignature_Params {
		
		float ReturnValue;

	}; GetFloat__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetDesiredSize
inline struct FVector2D UWidget::GetDesiredSize() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetDesiredSize");

	struct GetDesiredSize_Params {
		
		struct FVector2D ReturnValue;

	}; GetDesiredSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetClipping
inline enum class EWidgetClipping UWidget::GetClipping() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetClipping");

	struct GetClipping_Params {
		
		enum class EWidgetClipping ReturnValue;

	}; GetClipping_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
inline enum class ECheckBoxState UWidget::GetCheckBoxState__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature");

	struct GetCheckBoxState__DelegateSignature_Params {
		
		enum class ECheckBoxState ReturnValue;

	}; GetCheckBoxState__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetCachedGeometry
inline struct FGeometry UWidget::GetCachedGeometry() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetCachedGeometry");

	struct GetCachedGeometry_Params {
		
		struct FGeometry ReturnValue;

	}; GetCachedGeometry_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GetBool__DelegateSignature
inline char UWidget::GetBool__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetBool__DelegateSignature");

	struct GetBool__DelegateSignature_Params {
		
		char ReturnValue;

	}; GetBool__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
inline struct UWidget UWidget::GenerateWidgetForString__DelegateSignature(struct FString Item) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature");

	struct GenerateWidgetForString__DelegateSignature_Params {
		struct FString Item;
		struct UWidget ReturnValue;

	}; GenerateWidgetForString__DelegateSignature_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
inline struct UWidget UWidget::GenerateWidgetForObject__DelegateSignature(struct Object Item) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature");

	struct GenerateWidgetForObject__DelegateSignature_Params {
		struct Object Item;
		struct UWidget ReturnValue;

	}; GenerateWidgetForObject__DelegateSignature_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.ForceVolatile
inline void UWidget::ForceVolatile(char bForce) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.ForceVolatile");

	struct ForceVolatile_Params {
		char bForce;
	}; ForceVolatile_Params Params;

	Params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.ForceLayoutPrepass
inline void UWidget::ForceLayoutPrepass() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.ForceLayoutPrepass");

	struct ForceLayoutPrepass_Params {
		
	}; ForceLayoutPrepass_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.UnregisterInputComponent
inline void UUserWidget::UnregisterInputComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnregisterInputComponent");

	struct UnregisterInputComponent_Params {
		
	}; UnregisterInputComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.UnbindFromAnimationStarted
inline void UUserWidget::UnbindFromAnimationStarted(struct UWidgetAnimation Animation, struct FDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindFromAnimationStarted");

	struct UnbindFromAnimationStarted_Params {
		struct UWidgetAnimation Animation;
		struct FDelegate Delegate;
	}; UnbindFromAnimationStarted_Params Params;

	Params.Animation = Animation;
	Params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.UnbindFromAnimationFinished
inline void UUserWidget::UnbindFromAnimationFinished(struct UWidgetAnimation Animation, struct FDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindFromAnimationFinished");

	struct UnbindFromAnimationFinished_Params {
		struct UWidgetAnimation Animation;
		struct FDelegate Delegate;
	}; UnbindFromAnimationFinished_Params Params;

	Params.Animation = Animation;
	Params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.UnbindAllFromAnimationStarted
inline void UUserWidget::UnbindAllFromAnimationStarted(struct UWidgetAnimation Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindAllFromAnimationStarted");

	struct UnbindAllFromAnimationStarted_Params {
		struct UWidgetAnimation Animation;
	}; UnbindAllFromAnimationStarted_Params Params;

	Params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.UnbindAllFromAnimationFinished
inline void UUserWidget::UnbindAllFromAnimationFinished(struct UWidgetAnimation Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindAllFromAnimationFinished");

	struct UnbindAllFromAnimationFinished_Params {
		struct UWidgetAnimation Animation;
	}; UnbindAllFromAnimationFinished_Params Params;

	Params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.Tick
inline void UUserWidget::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Tick");

	struct Tick_Params {
		struct FGeometry MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.StopListeningForInputAction
inline void UUserWidget::StopListeningForInputAction(struct FName ActionName, char EventType) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopListeningForInputAction");

	struct StopListeningForInputAction_Params {
		struct FName ActionName;
		char EventType;
	}; StopListeningForInputAction_Params Params;

	Params.ActionName = ActionName;
	Params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.StopListeningForAllInputActions
inline void UUserWidget::StopListeningForAllInputActions() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopListeningForAllInputActions");

	struct StopListeningForAllInputActions_Params {
		
	}; StopListeningForAllInputActions_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.StopAnimationsAndLatentActions
inline void UUserWidget::StopAnimationsAndLatentActions() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAnimationsAndLatentActions");

	struct StopAnimationsAndLatentActions_Params {
		
	}; StopAnimationsAndLatentActions_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.StopAnimation
inline void UUserWidget::StopAnimation(struct UWidgetAnimation InAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAnimation");

	struct StopAnimation_Params {
		struct UWidgetAnimation InAnimation;
	}; StopAnimation_Params Params;

	Params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.StopAllAnimations
inline void UUserWidget::StopAllAnimations() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAllAnimations");

	struct StopAllAnimations_Params {
		
	}; StopAllAnimations_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetPositionInViewport
inline void UUserWidget::SetPositionInViewport(struct FVector2D Position, char bRemoveDPIScale) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPositionInViewport");

	struct SetPositionInViewport_Params {
		struct FVector2D Position;
		char bRemoveDPIScale;
	}; SetPositionInViewport_Params Params;

	Params.Position = Position;
	Params.bRemoveDPIScale = bRemoveDPIScale;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetPlaybackSpeed
inline void UUserWidget::SetPlaybackSpeed(struct UWidgetAnimation InAnimation, float PlaybackSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPlaybackSpeed");

	struct SetPlaybackSpeed_Params {
		struct UWidgetAnimation InAnimation;
		float PlaybackSpeed;
	}; SetPlaybackSpeed_Params Params;

	Params.InAnimation = InAnimation;
	Params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetPadding
inline void UUserWidget::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetOwningPlayer
inline void UUserWidget::SetOwningPlayer(struct APlayerController LocalPlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetOwningPlayer");

	struct SetOwningPlayer_Params {
		struct APlayerController LocalPlayerController;
	}; SetOwningPlayer_Params Params;

	Params.LocalPlayerController = LocalPlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetNumLoopsToPlay
inline void UUserWidget::SetNumLoopsToPlay(struct UWidgetAnimation InAnimation, int32_t NumLoopsToPlay) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetNumLoopsToPlay");

	struct SetNumLoopsToPlay_Params {
		struct UWidgetAnimation InAnimation;
		int32_t NumLoopsToPlay;
	}; SetNumLoopsToPlay_Params Params;

	Params.InAnimation = InAnimation;
	Params.NumLoopsToPlay = NumLoopsToPlay;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetNoPixelSnapping
inline void UUserWidget::SetNoPixelSnapping(char InNoSnapping) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetNoPixelSnapping");

	struct SetNoPixelSnapping_Params {
		char InNoSnapping;
	}; SetNoPixelSnapping_Params Params;

	Params.InNoSnapping = InNoSnapping;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetInputActionPriority
inline void UUserWidget::SetInputActionPriority(int32_t NewPriority) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetInputActionPriority");

	struct SetInputActionPriority_Params {
		int32_t NewPriority;
	}; SetInputActionPriority_Params Params;

	Params.NewPriority = NewPriority;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetInputActionBlocking
inline void UUserWidget::SetInputActionBlocking(char bShouldBlock) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetInputActionBlocking");

	struct SetInputActionBlocking_Params {
		char bShouldBlock;
	}; SetInputActionBlocking_Params Params;

	Params.bShouldBlock = bShouldBlock;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetForegroundColor
inline void UUserWidget::SetForegroundColor(struct FSlateColor InForegroundColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetForegroundColor");

	struct SetForegroundColor_Params {
		struct FSlateColor InForegroundColor;
	}; SetForegroundColor_Params Params;

	Params.InForegroundColor = InForegroundColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetDesiredSizeInViewport
inline void UUserWidget::SetDesiredSizeInViewport(struct FVector2D Size) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetDesiredSizeInViewport");

	struct SetDesiredSizeInViewport_Params {
		struct FVector2D Size;
	}; SetDesiredSizeInViewport_Params Params;

	Params.Size = Size;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetColorAndOpacity
inline void UUserWidget::SetColorAndOpacity(struct FLinearColor InColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetColorAndOpacity");

	struct SetColorAndOpacity_Params {
		struct FLinearColor InColorAndOpacity;
	}; SetColorAndOpacity_Params Params;

	Params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetAnchorsInViewport
inline void UUserWidget::SetAnchorsInViewport(struct FAnchors Anchors) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAnchorsInViewport");

	struct SetAnchorsInViewport_Params {
		struct FAnchors Anchors;
	}; SetAnchorsInViewport_Params Params;

	Params.Anchors = Anchors;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetAlignmentInViewport
inline void UUserWidget::SetAlignmentInViewport(struct FVector2D Alignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAlignmentInViewport");

	struct SetAlignmentInViewport_Params {
		struct FVector2D Alignment;
	}; SetAlignmentInViewport_Params Params;

	Params.Alignment = Alignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.ReverseAnimation
inline void UUserWidget::ReverseAnimation(struct UWidgetAnimation InAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.ReverseAnimation");

	struct ReverseAnimation_Params {
		struct UWidgetAnimation InAnimation;
	}; ReverseAnimation_Params Params;

	Params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.RemoveFromViewport
inline void UUserWidget::RemoveFromViewport() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.RemoveFromViewport");

	struct RemoveFromViewport_Params {
		
	}; RemoveFromViewport_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.RegisterInputComponent
inline void UUserWidget::RegisterInputComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.RegisterInputComponent");

	struct RegisterInputComponent_Params {
		
	}; RegisterInputComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.PreConstruct
inline void UUserWidget::PreConstruct(char IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PreConstruct");

	struct PreConstruct_Params {
		char IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.PlaySound
inline void UUserWidget::PlaySound(struct USoundBase SoundToPlay) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlaySound");

	struct PlaySound_Params {
		struct USoundBase SoundToPlay;
	}; PlaySound_Params Params;

	Params.SoundToPlay = SoundToPlay;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.PlayAnimationTimeRange
inline struct UUMGSequencePlayer UUserWidget::PlayAnimationTimeRange(struct UWidgetAnimation InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, char PlayMode, float PlaybackSpeed, char bRestoreState) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationTimeRange");

	struct PlayAnimationTimeRange_Params {
		struct UWidgetAnimation InAnimation;
		float StartAtTime;
		float EndAtTime;
		int32_t NumLoopsToPlay;
		char PlayMode;
		float PlaybackSpeed;
		char bRestoreState;
		struct UUMGSequencePlayer ReturnValue;

	}; PlayAnimationTimeRange_Params Params;

	Params.InAnimation = InAnimation;
	Params.StartAtTime = StartAtTime;
	Params.EndAtTime = EndAtTime;
	Params.NumLoopsToPlay = NumLoopsToPlay;
	Params.PlayMode = PlayMode;
	Params.PlaybackSpeed = PlaybackSpeed;
	Params.bRestoreState = bRestoreState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.PlayAnimationReverse
inline struct UUMGSequencePlayer UUserWidget::PlayAnimationReverse(struct UWidgetAnimation InAnimation, float PlaybackSpeed, char bRestoreState) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationReverse");

	struct PlayAnimationReverse_Params {
		struct UWidgetAnimation InAnimation;
		float PlaybackSpeed;
		char bRestoreState;
		struct UUMGSequencePlayer ReturnValue;

	}; PlayAnimationReverse_Params Params;

	Params.InAnimation = InAnimation;
	Params.PlaybackSpeed = PlaybackSpeed;
	Params.bRestoreState = bRestoreState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.PlayAnimationForward
inline struct UUMGSequencePlayer UUserWidget::PlayAnimationForward(struct UWidgetAnimation InAnimation, float PlaybackSpeed, char bRestoreState) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationForward");

	struct PlayAnimationForward_Params {
		struct UWidgetAnimation InAnimation;
		float PlaybackSpeed;
		char bRestoreState;
		struct UUMGSequencePlayer ReturnValue;

	}; PlayAnimationForward_Params Params;

	Params.InAnimation = InAnimation;
	Params.PlaybackSpeed = PlaybackSpeed;
	Params.bRestoreState = bRestoreState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.PlayAnimation
inline struct UUMGSequencePlayer UUserWidget::PlayAnimation(struct UWidgetAnimation InAnimation, float StartAtTime, int32_t NumLoopsToPlay, char PlayMode, float PlaybackSpeed, char bRestoreState) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimation");

	struct PlayAnimation_Params {
		struct UWidgetAnimation InAnimation;
		float StartAtTime;
		int32_t NumLoopsToPlay;
		char PlayMode;
		float PlaybackSpeed;
		char bRestoreState;
		struct UUMGSequencePlayer ReturnValue;

	}; PlayAnimation_Params Params;

	Params.InAnimation = InAnimation;
	Params.StartAtTime = StartAtTime;
	Params.NumLoopsToPlay = NumLoopsToPlay;
	Params.PlayMode = PlayMode;
	Params.PlaybackSpeed = PlaybackSpeed;
	Params.bRestoreState = bRestoreState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.PauseAnimation
inline float UUserWidget::PauseAnimation(struct UWidgetAnimation InAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PauseAnimation");

	struct PauseAnimation_Params {
		struct UWidgetAnimation InAnimation;
		float ReturnValue;

	}; PauseAnimation_Params Params;

	Params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.OnTouchStarted
inline struct FEventReply UUserWidget::OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchStarted");

	struct OnTouchStarted_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& InTouchEvent;
		struct FEventReply ReturnValue;

	}; OnTouchStarted_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InTouchEvent = Params.InTouchEvent;


	return params.ReturnValue;
}

// Function UMG.UserWidget.OnTouchMoved
inline struct FEventReply UUserWidget::OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchMoved");

	struct OnTouchMoved_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& InTouchEvent;
		struct FEventReply ReturnValue;

	}; OnTouchMoved_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InTouchEvent = Params.InTouchEvent;


	return params.ReturnValue;
}

// Function UMG.UserWidget.OnTouchGesture
inline struct FEventReply UUserWidget::OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent& GestureEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchGesture");

	struct OnTouchGesture_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& GestureEvent;
		struct FEventReply ReturnValue;

	}; OnTouchGesture_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	GestureEvent = Params.GestureEvent;


	return params.ReturnValue;
}

// Function UMG.UserWidget.OnTouchForceChanged
inline struct FEventReply UUserWidget::OnTouchForceChanged(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchForceChanged");

	struct OnTouchForceChanged_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& InTouchEvent;
		struct FEventReply ReturnValue;

	}; OnTouchForceChanged_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InTouchEvent = Params.InTouchEvent;


	return params.ReturnValue;
}

// Function UMG.UserWidget.OnTouchEnded
inline struct FEventReply UUserWidget::OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchEnded");

	struct OnTouchEnded_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& InTouchEvent;
		struct FEventReply ReturnValue;

	}; OnTouchEnded_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InTouchEvent = Params.InTouchEvent;


	return params.ReturnValue;
}

// Function UMG.UserWidget.OnRemovedFromFocusPath
inline void UUserWidget::OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnRemovedFromFocusPath");

	struct OnRemovedFromFocusPath_Params {
		struct FFocusEvent InFocusEvent;
	}; OnRemovedFromFocusPath_Params Params;

	Params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.OnPreviewMouseButtonDown
inline struct FEventReply UUserWidget::OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPreviewMouseButtonDown");

	struct OnPreviewMouseButtonDown_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnPreviewMouseButtonDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UMG.UserWidget.OnPreviewKeyDown
inline struct FEventReply UUserWidget::OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPreviewKeyDown");

	struct OnPreviewKeyDown_Params {
		struct FGeometry MyGeometry;
		struct FKeyEvent InKeyEvent;
		struct FEventReply ReturnValue;

	}; OnPreviewKeyDown_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.OnPaint
inline void UUserWidget::OnPaint(struct FPaintContext& Context) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPaint");

	struct OnPaint_Params {
		struct FPaintContext& Context;
	}; OnPaint_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Context = Params.Context;

}

// Function UMG.UserWidget.OnMouseWheel
inline struct FEventReply UUserWidget::OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseWheel");

	struct OnMouseWheel_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseWheel_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UMG.UserWidget.OnMouseMove
inline struct FEventReply UUserWidget::OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseMove");

	struct OnMouseMove_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseMove_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UMG.UserWidget.OnMouseLeave
inline void UUserWidget::OnMouseLeave(struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct FPointerEvent& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UMG.UserWidget.OnMouseEnter
inline void UUserWidget::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseEnter");

	struct OnMouseEnter_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
	}; OnMouseEnter_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UMG.UserWidget.OnMouseCaptureLost
inline void UUserWidget::OnMouseCaptureLost() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseCaptureLost");

	struct OnMouseCaptureLost_Params {
		
	}; OnMouseCaptureLost_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.OnMouseButtonUp
inline struct FEventReply UUserWidget::OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonUp");

	struct OnMouseButtonUp_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonUp_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UMG.UserWidget.OnMouseButtonDown
inline struct FEventReply UUserWidget::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonDown");

	struct OnMouseButtonDown_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UMG.UserWidget.OnMouseButtonDoubleClick
inline struct FEventReply UUserWidget::OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonDoubleClick");

	struct OnMouseButtonDoubleClick_Params {
		struct FGeometry InMyGeometry;
		struct FPointerEvent& InMouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonDoubleClick_Params Params;

	Params.InMyGeometry = InMyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InMouseEvent = Params.InMouseEvent;


	return params.ReturnValue;
}

// Function UMG.UserWidget.OnMotionDetected
inline struct FEventReply UUserWidget::OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMotionDetected");

	struct OnMotionDetected_Params {
		struct FGeometry MyGeometry;
		struct FMotionEvent InMotionEvent;
		struct FEventReply ReturnValue;

	}; OnMotionDetected_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InMotionEvent = InMotionEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.OnKeyUp
inline struct FEventReply UUserWidget::OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyUp");

	struct OnKeyUp_Params {
		struct FGeometry MyGeometry;
		struct FKeyEvent InKeyEvent;
		struct FEventReply ReturnValue;

	}; OnKeyUp_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.OnKeyDown
inline struct FEventReply UUserWidget::OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyDown");

	struct OnKeyDown_Params {
		struct FGeometry MyGeometry;
		struct FKeyEvent InKeyEvent;
		struct FEventReply ReturnValue;

	}; OnKeyDown_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.OnKeyChar
inline struct FEventReply UUserWidget::OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyChar");

	struct OnKeyChar_Params {
		struct FGeometry MyGeometry;
		struct FCharacterEvent InCharacterEvent;
		struct FEventReply ReturnValue;

	}; OnKeyChar_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InCharacterEvent = InCharacterEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.OnInitialized
inline void UUserWidget::OnInitialized() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnInitialized");

	struct OnInitialized_Params {
		
	}; OnInitialized_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.OnFocusReceived
inline struct FEventReply UUserWidget::OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnFocusReceived");

	struct OnFocusReceived_Params {
		struct FGeometry MyGeometry;
		struct FFocusEvent InFocusEvent;
		struct FEventReply ReturnValue;

	}; OnFocusReceived_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.OnFocusLost
inline void UUserWidget::OnFocusLost(struct FFocusEvent InFocusEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnFocusLost");

	struct OnFocusLost_Params {
		struct FFocusEvent InFocusEvent;
	}; OnFocusLost_Params Params;

	Params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.OnDrop
inline char UUserWidget::OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDrop");

	struct OnDrop_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent PointerEvent;
		struct UDragDropOperation Operation;
		char ReturnValue;

	}; OnDrop_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.OnDragOver
inline char UUserWidget::OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragOver");

	struct OnDragOver_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent PointerEvent;
		struct UDragDropOperation Operation;
		char ReturnValue;

	}; OnDragOver_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.OnDragLeave
inline void UUserWidget::OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragLeave");

	struct OnDragLeave_Params {
		struct FPointerEvent PointerEvent;
		struct UDragDropOperation Operation;
	}; OnDragLeave_Params Params;

	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.OnDragEnter
inline void UUserWidget::OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragEnter");

	struct OnDragEnter_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent PointerEvent;
		struct UDragDropOperation Operation;
	}; OnDragEnter_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.OnDragDetected
inline void UUserWidget::OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation& Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragDetected");

	struct OnDragDetected_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& PointerEvent;
		struct UDragDropOperation& Operation;
	}; OnDragDetected_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PointerEvent = Params.PointerEvent;
	Operation = Params.Operation;

}

// Function UMG.UserWidget.OnDragCancelled
inline void UUserWidget::OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragCancelled");

	struct OnDragCancelled_Params {
		struct FPointerEvent& PointerEvent;
		struct UDragDropOperation Operation;
	}; OnDragCancelled_Params Params;

	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PointerEvent = Params.PointerEvent;

}

// Function UMG.UserWidget.OnAnimationStarted
inline void UUserWidget::OnAnimationStarted(struct UWidgetAnimation Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnimationStarted");

	struct OnAnimationStarted_Params {
		struct UWidgetAnimation Animation;
	}; OnAnimationStarted_Params Params;

	Params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.OnAnimationFinished
inline void UUserWidget::OnAnimationFinished(struct UWidgetAnimation Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnimationFinished");

	struct OnAnimationFinished_Params {
		struct UWidgetAnimation Animation;
	}; OnAnimationFinished_Params Params;

	Params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.OnAnalogValueChanged
inline struct FEventReply UUserWidget::OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnalogValueChanged");

	struct OnAnalogValueChanged_Params {
		struct FGeometry MyGeometry;
		struct FAnalogInputEvent InAnalogInputEvent;
		struct FEventReply ReturnValue;

	}; OnAnalogValueChanged_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.OnAddedToFocusPath
inline void UUserWidget::OnAddedToFocusPath(struct FFocusEvent InFocusEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAddedToFocusPath");

	struct OnAddedToFocusPath_Params {
		struct FFocusEvent InFocusEvent;
	}; OnAddedToFocusPath_Params Params;

	Params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.ListenForInputAction
inline void UUserWidget::ListenForInputAction(struct FName ActionName, char EventType, char bConsume, struct FDelegate Callback) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.ListenForInputAction");

	struct ListenForInputAction_Params {
		struct FName ActionName;
		char EventType;
		char bConsume;
		struct FDelegate Callback;
	}; ListenForInputAction_Params Params;

	Params.ActionName = ActionName;
	Params.EventType = EventType;
	Params.bConsume = bConsume;
	Params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.IsPlayingAnimation
inline char UUserWidget::IsPlayingAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsPlayingAnimation");

	struct IsPlayingAnimation_Params {
		
		char ReturnValue;

	}; IsPlayingAnimation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.IsListeningForInputAction
inline char UUserWidget::IsListeningForInputAction(struct FName ActionName) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsListeningForInputAction");

	struct IsListeningForInputAction_Params {
		struct FName ActionName;
		char ReturnValue;

	}; IsListeningForInputAction_Params Params;

	Params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.IsInViewport
inline char UUserWidget::IsInViewport() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsInViewport");

	struct IsInViewport_Params {
		
		char ReturnValue;

	}; IsInViewport_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.IsInteractable
inline char UUserWidget::IsInteractable() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsInteractable");

	struct IsInteractable_Params {
		
		char ReturnValue;

	}; IsInteractable_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.IsAnyAnimationPlaying
inline char UUserWidget::IsAnyAnimationPlaying() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnyAnimationPlaying");

	struct IsAnyAnimationPlaying_Params {
		
		char ReturnValue;

	}; IsAnyAnimationPlaying_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.IsAnimationPlayingForward
inline char UUserWidget::IsAnimationPlayingForward(struct UWidgetAnimation InAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnimationPlayingForward");

	struct IsAnimationPlayingForward_Params {
		struct UWidgetAnimation InAnimation;
		char ReturnValue;

	}; IsAnimationPlayingForward_Params Params;

	Params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.IsAnimationPlaying
inline char UUserWidget::IsAnimationPlaying(struct UWidgetAnimation InAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnimationPlaying");

	struct IsAnimationPlaying_Params {
		struct UWidgetAnimation InAnimation;
		char ReturnValue;

	}; IsAnimationPlaying_Params Params;

	Params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.GetOwningPlayerPawn
inline struct APawn UUserWidget::GetOwningPlayerPawn() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetOwningPlayerPawn");

	struct GetOwningPlayerPawn_Params {
		
		struct APawn ReturnValue;

	}; GetOwningPlayerPawn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.GetIsVisible
inline char UUserWidget::GetIsVisible() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetIsVisible");

	struct GetIsVisible_Params {
		
		char ReturnValue;

	}; GetIsVisible_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.GetAnimationCurrentTime
inline float UUserWidget::GetAnimationCurrentTime(struct UWidgetAnimation InAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAnimationCurrentTime");

	struct GetAnimationCurrentTime_Params {
		struct UWidgetAnimation InAnimation;
		float ReturnValue;

	}; GetAnimationCurrentTime_Params Params;

	Params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.GetAnchorsInViewport
inline struct FAnchors UUserWidget::GetAnchorsInViewport() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAnchorsInViewport");

	struct GetAnchorsInViewport_Params {
		
		struct FAnchors ReturnValue;

	}; GetAnchorsInViewport_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.GetAlignmentInViewport
inline struct FVector2D UUserWidget::GetAlignmentInViewport() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAlignmentInViewport");

	struct GetAlignmentInViewport_Params {
		
		struct FVector2D ReturnValue;

	}; GetAlignmentInViewport_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.Destruct
inline void UUserWidget::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.Construct
inline void UUserWidget::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.CancelLatentActions
inline void UUserWidget::CancelLatentActions() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.CancelLatentActions");

	struct CancelLatentActions_Params {
		
	}; CancelLatentActions_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.BindToAnimationStarted
inline void UUserWidget::BindToAnimationStarted(struct UWidgetAnimation Animation, struct FDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationStarted");

	struct BindToAnimationStarted_Params {
		struct UWidgetAnimation Animation;
		struct FDelegate Delegate;
	}; BindToAnimationStarted_Params Params;

	Params.Animation = Animation;
	Params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.BindToAnimationFinished
inline void UUserWidget::BindToAnimationFinished(struct UWidgetAnimation Animation, struct FDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationFinished");

	struct BindToAnimationFinished_Params {
		struct UWidgetAnimation Animation;
		struct FDelegate Delegate;
	}; BindToAnimationFinished_Params Params;

	Params.Animation = Animation;
	Params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.BindToAnimationEvent
inline void UUserWidget::BindToAnimationEvent(struct UWidgetAnimation Animation, struct FDelegate Delegate, enum class EWidgetAnimationEvent AnimationEvent, struct FName UserTag) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationEvent");

	struct BindToAnimationEvent_Params {
		struct UWidgetAnimation Animation;
		struct FDelegate Delegate;
		enum class EWidgetAnimationEvent AnimationEvent;
		struct FName UserTag;
	}; BindToAnimationEvent_Params Params;

	Params.Animation = Animation;
	Params.Delegate = Delegate;
	Params.AnimationEvent = AnimationEvent;
	Params.UserTag = UserTag;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.AddToViewport
inline void UUserWidget::AddToViewport(int32_t ZOrder) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.AddToViewport");

	struct AddToViewport_Params {
		int32_t ZOrder;
	}; AddToViewport_Params Params;

	Params.ZOrder = ZOrder;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.AddToPlayerScreen
inline char UUserWidget::AddToPlayerScreen(int32_t ZOrder) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.AddToPlayerScreen");

	struct AddToPlayerScreen_Params {
		int32_t ZOrder;
		char ReturnValue;

	}; AddToPlayerScreen_Params Params;

	Params.ZOrder = ZOrder;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.PanelWidget.RemoveChildAt
inline char UPanelWidget::RemoveChildAt(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.RemoveChildAt");

	struct RemoveChildAt_Params {
		int32_t Index;
		char ReturnValue;

	}; RemoveChildAt_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.PanelWidget.RemoveChild
inline char UPanelWidget::RemoveChild(struct UWidget Content) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.RemoveChild");

	struct RemoveChild_Params {
		struct UWidget Content;
		char ReturnValue;

	}; RemoveChild_Params Params;

	Params.Content = Content;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.PanelWidget.HasChild
inline char UPanelWidget::HasChild(struct UWidget Content) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.HasChild");

	struct HasChild_Params {
		struct UWidget Content;
		char ReturnValue;

	}; HasChild_Params Params;

	Params.Content = Content;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.PanelWidget.HasAnyChildren
inline char UPanelWidget::HasAnyChildren() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.HasAnyChildren");

	struct HasAnyChildren_Params {
		
		char ReturnValue;

	}; HasAnyChildren_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.PanelWidget.GetChildrenCount
inline int32_t UPanelWidget::GetChildrenCount() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildrenCount");

	struct GetChildrenCount_Params {
		
		int32_t ReturnValue;

	}; GetChildrenCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.PanelWidget.GetChildIndex
inline int32_t UPanelWidget::GetChildIndex(struct UWidget Content) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildIndex");

	struct GetChildIndex_Params {
		struct UWidget Content;
		int32_t ReturnValue;

	}; GetChildIndex_Params Params;

	Params.Content = Content;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.PanelWidget.GetChildAt
inline struct UWidget UPanelWidget::GetChildAt(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildAt");

	struct GetChildAt_Params {
		int32_t Index;
		struct UWidget ReturnValue;

	}; GetChildAt_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.PanelWidget.GetAllChildren
inline struct TArray<struct UWidget> UPanelWidget::GetAllChildren() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetAllChildren");

	struct GetAllChildren_Params {
		
		struct TArray<struct UWidget> ReturnValue;

	}; GetAllChildren_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.PanelWidget.ClearChildren
inline void UPanelWidget::ClearChildren() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.ClearChildren");

	struct ClearChildren_Params {
		
	}; ClearChildren_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.PanelWidget.AddChild
inline struct UPanelSlot UPanelWidget::AddChild(struct UWidget Content) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.AddChild");

	struct AddChild_Params {
		struct UWidget Content;
		struct UPanelSlot ReturnValue;

	}; AddChild_Params Params;

	Params.Content = Content;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Border.SetVerticalAlignment
inline void UBorder::SetVerticalAlignment(char InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		char InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Border.SetPadding
inline void UBorder::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Border.SetHorizontalAlignment
inline void UBorder::SetHorizontalAlignment(char InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		char InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Border.SetDesiredSizeScale
inline void UBorder::SetDesiredSizeScale(struct FVector2D InScale) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetDesiredSizeScale");

	struct SetDesiredSizeScale_Params {
		struct FVector2D InScale;
	}; SetDesiredSizeScale_Params Params;

	Params.InScale = InScale;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Border.SetContentColorAndOpacity
inline void UBorder::SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetContentColorAndOpacity");

	struct SetContentColorAndOpacity_Params {
		struct FLinearColor InContentColorAndOpacity;
	}; SetContentColorAndOpacity_Params Params;

	Params.InContentColorAndOpacity = InContentColorAndOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Border.SetBrushFromTexture
inline void UBorder::SetBrushFromTexture(struct UTexture2D Texture) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromTexture");

	struct SetBrushFromTexture_Params {
		struct UTexture2D Texture;
	}; SetBrushFromTexture_Params Params;

	Params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Border.SetBrushFromMaterial
inline void UBorder::SetBrushFromMaterial(struct UMaterialInterface Material) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromMaterial");

	struct SetBrushFromMaterial_Params {
		struct UMaterialInterface Material;
	}; SetBrushFromMaterial_Params Params;

	Params.Material = Material;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Border.SetBrushFromAsset
inline void UBorder::SetBrushFromAsset(struct USlateBrushAsset Asset) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromAsset");

	struct SetBrushFromAsset_Params {
		struct USlateBrushAsset Asset;
	}; SetBrushFromAsset_Params Params;

	Params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Border.SetBrushColor
inline void UBorder::SetBrushColor(struct FLinearColor InBrushColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushColor");

	struct SetBrushColor_Params {
		struct FLinearColor InBrushColor;
	}; SetBrushColor_Params Params;

	Params.InBrushColor = InBrushColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Border.SetBrush
inline void UBorder::SetBrush(struct FSlateBrush& InBrush) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrush");

	struct SetBrush_Params {
		struct FSlateBrush& InBrush;
	}; SetBrush_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InBrush = Params.InBrush;

}

// Function UMG.Border.GetDynamicMaterial
inline struct UMaterialInstanceDynamic UBorder::GetDynamicMaterial() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.GetDynamicMaterial");

	struct GetDynamicMaterial_Params {
		
		struct UMaterialInstanceDynamic ReturnValue;

	}; GetDynamicMaterial_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.AsyncTaskDownloadImage.DownloadImage
inline struct UAsyncTaskDownloadImage UAsyncTaskDownloadImage::DownloadImage(struct FString URL) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.AsyncTaskDownloadImage.DownloadImage");

	struct DownloadImage_Params {
		struct FString URL;
		struct UAsyncTaskDownloadImage ReturnValue;

	}; DownloadImage_Params Params;

	Params.URL = URL;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.BackgroundBlur.SetVerticalAlignment
inline void UBackgroundBlur::SetVerticalAlignment(char InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		char InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.BackgroundBlur.SetPadding
inline void UBackgroundBlur::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
inline void UBackgroundBlur::SetLowQualityFallbackBrush(struct FSlateBrush& InBrush) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetLowQualityFallbackBrush");

	struct SetLowQualityFallbackBrush_Params {
		struct FSlateBrush& InBrush;
	}; SetLowQualityFallbackBrush_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InBrush = Params.InBrush;

}

// Function UMG.BackgroundBlur.SetHorizontalAlignment
inline void UBackgroundBlur::SetHorizontalAlignment(char InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		char InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.BackgroundBlur.SetBlurStrength
inline void UBackgroundBlur::SetBlurStrength(float InStrength) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetBlurStrength");

	struct SetBlurStrength_Params {
		float InStrength;
	}; SetBlurStrength_Params Params;

	Params.InStrength = InStrength;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.BackgroundBlur.SetBlurRadius
inline void UBackgroundBlur::SetBlurRadius(int32_t InBlurRadius) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetBlurRadius");

	struct SetBlurRadius_Params {
		int32_t InBlurRadius;
	}; SetBlurRadius_Params Params;

	Params.InBlurRadius = InBlurRadius;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.BackgroundBlur.SetApplyAlphaToBlur
inline void UBackgroundBlur::SetApplyAlphaToBlur(char bInApplyAlphaToBlur) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetApplyAlphaToBlur");

	struct SetApplyAlphaToBlur_Params {
		char bInApplyAlphaToBlur;
	}; SetApplyAlphaToBlur_Params Params;

	Params.bInApplyAlphaToBlur = bInApplyAlphaToBlur;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.BackgroundBlurSlot.SetVerticalAlignment
inline void UBackgroundBlurSlot::SetVerticalAlignment(char InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		char InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.BackgroundBlurSlot.SetPadding
inline void UBackgroundBlurSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
inline void UBackgroundBlurSlot::SetHorizontalAlignment(char InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		char InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.BorderSlot.SetVerticalAlignment
inline void UBorderSlot::SetVerticalAlignment(char InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		char InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.BorderSlot.SetPadding
inline void UBorderSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.BorderSlot.SetHorizontalAlignment
inline void UBorderSlot::SetHorizontalAlignment(char InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		char InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Button.SetTouchMethod
inline void UButton::SetTouchMethod(char InTouchMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetTouchMethod");

	struct SetTouchMethod_Params {
		char InTouchMethod;
	}; SetTouchMethod_Params Params;

	Params.InTouchMethod = InTouchMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Button.SetStyle
inline void UButton::SetStyle(struct FButtonStyle& InStyle) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetStyle");

	struct SetStyle_Params {
		struct FButtonStyle& InStyle;
	}; SetStyle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InStyle = Params.InStyle;

}

// Function UMG.Button.SetPressMethod
inline void UButton::SetPressMethod(char InPressMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetPressMethod");

	struct SetPressMethod_Params {
		char InPressMethod;
	}; SetPressMethod_Params Params;

	Params.InPressMethod = InPressMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Button.SetColorAndOpacity
inline void UButton::SetColorAndOpacity(struct FLinearColor InColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetColorAndOpacity");

	struct SetColorAndOpacity_Params {
		struct FLinearColor InColorAndOpacity;
	}; SetColorAndOpacity_Params Params;

	Params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Button.SetClickMethod
inline void UButton::SetClickMethod(char InClickMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetClickMethod");

	struct SetClickMethod_Params {
		char InClickMethod;
	}; SetClickMethod_Params Params;

	Params.InClickMethod = InClickMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Button.SetBackgroundColor
inline void UButton::SetBackgroundColor(struct FLinearColor InBackgroundColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetBackgroundColor");

	struct SetBackgroundColor_Params {
		struct FLinearColor InBackgroundColor;
	}; SetBackgroundColor_Params Params;

	Params.InBackgroundColor = InBackgroundColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Button.IsPressed
inline char UButton::IsPressed() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.IsPressed");

	struct IsPressed_Params {
		
		char ReturnValue;

	}; IsPressed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ButtonSlot.SetVerticalAlignment
inline void UButtonSlot::SetVerticalAlignment(char InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		char InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ButtonSlot.SetPadding
inline void UButtonSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ButtonSlot.SetHorizontalAlignment
inline void UButtonSlot::SetHorizontalAlignment(char InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		char InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CanvasPanelSlot.SetZOrder
inline void UCanvasPanelSlot::SetZOrder(int32_t InZOrder) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetZOrder");

	struct SetZOrder_Params {
		int32_t InZOrder;
	}; SetZOrder_Params Params;

	Params.InZOrder = InZOrder;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CanvasPanelSlot.SetSize
inline void UCanvasPanelSlot::SetSize(struct FVector2D InSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetSize");

	struct SetSize_Params {
		struct FVector2D InSize;
	}; SetSize_Params Params;

	Params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CanvasPanelSlot.SetPosition
inline void UCanvasPanelSlot::SetPosition(struct FVector2D InPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetPosition");

	struct SetPosition_Params {
		struct FVector2D InPosition;
	}; SetPosition_Params Params;

	Params.InPosition = InPosition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CanvasPanelSlot.SetOffsets
inline void UCanvasPanelSlot::SetOffsets(struct FMargin InOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetOffsets");

	struct SetOffsets_Params {
		struct FMargin InOffset;
	}; SetOffsets_Params Params;

	Params.InOffset = InOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CanvasPanelSlot.SetMinimum
inline void UCanvasPanelSlot::SetMinimum(struct FVector2D InMinimumAnchors) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetMinimum");

	struct SetMinimum_Params {
		struct FVector2D InMinimumAnchors;
	}; SetMinimum_Params Params;

	Params.InMinimumAnchors = InMinimumAnchors;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CanvasPanelSlot.SetMaximum
inline void UCanvasPanelSlot::SetMaximum(struct FVector2D InMaximumAnchors) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetMaximum");

	struct SetMaximum_Params {
		struct FVector2D InMaximumAnchors;
	}; SetMaximum_Params Params;

	Params.InMaximumAnchors = InMaximumAnchors;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CanvasPanelSlot.SetLayout
inline void UCanvasPanelSlot::SetLayout(struct FAnchorData& InLayoutData) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetLayout");

	struct SetLayout_Params {
		struct FAnchorData& InLayoutData;
	}; SetLayout_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InLayoutData = Params.InLayoutData;

}

// Function UMG.CanvasPanelSlot.SetAutoSize
inline void UCanvasPanelSlot::SetAutoSize(char InbAutoSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAutoSize");

	struct SetAutoSize_Params {
		char InbAutoSize;
	}; SetAutoSize_Params Params;

	Params.InbAutoSize = InbAutoSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CanvasPanelSlot.SetAnchors
inline void UCanvasPanelSlot::SetAnchors(struct FAnchors InAnchors) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAnchors");

	struct SetAnchors_Params {
		struct FAnchors InAnchors;
	}; SetAnchors_Params Params;

	Params.InAnchors = InAnchors;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CanvasPanelSlot.SetAlignment
inline void UCanvasPanelSlot::SetAlignment(struct FVector2D InAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAlignment");

	struct SetAlignment_Params {
		struct FVector2D InAlignment;
	}; SetAlignment_Params Params;

	Params.InAlignment = InAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CanvasPanelSlot.GetZOrder
inline int32_t UCanvasPanelSlot::GetZOrder() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetZOrder");

	struct GetZOrder_Params {
		
		int32_t ReturnValue;

	}; GetZOrder_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.CanvasPanelSlot.GetSize
inline struct FVector2D UCanvasPanelSlot::GetSize() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetSize");

	struct GetSize_Params {
		
		struct FVector2D ReturnValue;

	}; GetSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.CanvasPanelSlot.GetPosition
inline struct FVector2D UCanvasPanelSlot::GetPosition() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetPosition");

	struct GetPosition_Params {
		
		struct FVector2D ReturnValue;

	}; GetPosition_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.CanvasPanelSlot.GetOffsets
inline struct FMargin UCanvasPanelSlot::GetOffsets() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetOffsets");

	struct GetOffsets_Params {
		
		struct FMargin ReturnValue;

	}; GetOffsets_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.CanvasPanelSlot.GetLayout
inline struct FAnchorData UCanvasPanelSlot::GetLayout() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetLayout");

	struct GetLayout_Params {
		
		struct FAnchorData ReturnValue;

	}; GetLayout_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.CanvasPanelSlot.GetAutoSize
inline char UCanvasPanelSlot::GetAutoSize() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAutoSize");

	struct GetAutoSize_Params {
		
		char ReturnValue;

	}; GetAutoSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.CanvasPanelSlot.GetAnchors
inline struct FAnchors UCanvasPanelSlot::GetAnchors() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAnchors");

	struct GetAnchors_Params {
		
		struct FAnchors ReturnValue;

	}; GetAnchors_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.CanvasPanelSlot.GetAlignment
inline struct FVector2D UCanvasPanelSlot::GetAlignment() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAlignment");

	struct GetAlignment_Params {
		
		struct FVector2D ReturnValue;

	}; GetAlignment_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.CheckBox.SetIsChecked
inline void UCheckBox::SetIsChecked(char InIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetIsChecked");

	struct SetIsChecked_Params {
		char InIsChecked;
	}; SetIsChecked_Params Params;

	Params.InIsChecked = InIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CheckBox.SetCheckedState
inline void UCheckBox::SetCheckedState(enum class ECheckBoxState InCheckedState) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetCheckedState");

	struct SetCheckedState_Params {
		enum class ECheckBoxState InCheckedState;
	}; SetCheckedState_Params Params;

	Params.InCheckedState = InCheckedState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CheckBox.IsPressed
inline char UCheckBox::IsPressed() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.IsPressed");

	struct IsPressed_Params {
		
		char ReturnValue;

	}; IsPressed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.CheckBox.IsChecked
inline char UCheckBox::IsChecked() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.IsChecked");

	struct IsChecked_Params {
		
		char ReturnValue;

	}; IsChecked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.CheckBox.GetCheckedState
inline enum class ECheckBoxState UCheckBox::GetCheckedState() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.GetCheckedState");

	struct GetCheckedState_Params {
		
		enum class ECheckBoxState ReturnValue;

	}; GetCheckedState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.CircularThrobber.SetRadius
inline void UCircularThrobber::SetRadius(float InRadius) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetRadius");

	struct SetRadius_Params {
		float InRadius;
	}; SetRadius_Params Params;

	Params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CircularThrobber.SetPeriod
inline void UCircularThrobber::SetPeriod(float InPeriod) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetPeriod");

	struct SetPeriod_Params {
		float InPeriod;
	}; SetPeriod_Params Params;

	Params.InPeriod = InPeriod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CircularThrobber.SetNumberOfPieces
inline void UCircularThrobber::SetNumberOfPieces(int32_t InNumberOfPieces) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetNumberOfPieces");

	struct SetNumberOfPieces_Params {
		int32_t InNumberOfPieces;
	}; SetNumberOfPieces_Params Params;

	Params.InNumberOfPieces = InNumberOfPieces;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ComboBoxString.SetSelectedOption
inline void UComboBoxString::SetSelectedOption(struct FString Option) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.SetSelectedOption");

	struct SetSelectedOption_Params {
		struct FString Option;
	}; SetSelectedOption_Params Params;

	Params.Option = Option;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ComboBoxString.SetSelectedIndex
inline void UComboBoxString::SetSelectedIndex(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.SetSelectedIndex");

	struct SetSelectedIndex_Params {
		int32_t Index;
	}; SetSelectedIndex_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ComboBoxString.RemoveOption
inline char UComboBoxString::RemoveOption(struct FString Option) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.RemoveOption");

	struct RemoveOption_Params {
		struct FString Option;
		char ReturnValue;

	}; RemoveOption_Params Params;

	Params.Option = Option;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ComboBoxString.RefreshOptions
inline void UComboBoxString::RefreshOptions() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.RefreshOptions");

	struct RefreshOptions_Params {
		
	}; RefreshOptions_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
inline void UComboBoxString::OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature");

	struct OnSelectionChangedEvent__DelegateSignature_Params {
		struct FString SelectedItem;
		char SelectionType;
	}; OnSelectionChangedEvent__DelegateSignature_Params Params;

	Params.SelectedItem = SelectedItem;
	Params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
inline void UComboBoxString::OnOpeningEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature");

	struct OnOpeningEvent__DelegateSignature_Params {
		
	}; OnOpeningEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ComboBoxString.IsOpen
inline char UComboBoxString::IsOpen() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.IsOpen");

	struct IsOpen_Params {
		
		char ReturnValue;

	}; IsOpen_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ComboBoxString.GetSelectedOption
inline struct FString UComboBoxString::GetSelectedOption() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetSelectedOption");

	struct GetSelectedOption_Params {
		
		struct FString ReturnValue;

	}; GetSelectedOption_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ComboBoxString.GetSelectedIndex
inline int32_t UComboBoxString::GetSelectedIndex() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetSelectedIndex");

	struct GetSelectedIndex_Params {
		
		int32_t ReturnValue;

	}; GetSelectedIndex_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ComboBoxString.GetOptionCount
inline int32_t UComboBoxString::GetOptionCount() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetOptionCount");

	struct GetOptionCount_Params {
		
		int32_t ReturnValue;

	}; GetOptionCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ComboBoxString.GetOptionAtIndex
inline struct FString UComboBoxString::GetOptionAtIndex(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetOptionAtIndex");

	struct GetOptionAtIndex_Params {
		int32_t Index;
		struct FString ReturnValue;

	}; GetOptionAtIndex_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ComboBoxString.FindOptionIndex
inline int32_t UComboBoxString::FindOptionIndex(struct FString Option) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.FindOptionIndex");

	struct FindOptionIndex_Params {
		struct FString Option;
		int32_t ReturnValue;

	}; FindOptionIndex_Params Params;

	Params.Option = Option;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ComboBoxString.ClearSelection
inline void UComboBoxString::ClearSelection() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.ClearSelection");

	struct ClearSelection_Params {
		
	}; ClearSelection_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ComboBoxString.ClearOptions
inline void UComboBoxString::ClearOptions() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.ClearOptions");

	struct ClearOptions_Params {
		
	}; ClearOptions_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ComboBoxString.AddOption
inline void UComboBoxString::AddOption(struct FString Option) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.AddOption");

	struct AddOption_Params {
		struct FString Option;
	}; AddOption_Params Params;

	Params.Option = Option;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.DragDropOperation.Drop
inline void UDragDropOperation::Drop(struct FPointerEvent& PointerEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.Drop");

	struct Drop_Params {
		struct FPointerEvent& PointerEvent;
	}; Drop_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PointerEvent = Params.PointerEvent;

}

// Function UMG.DragDropOperation.Dragged
inline void UDragDropOperation::Dragged(struct FPointerEvent& PointerEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.Dragged");

	struct Dragged_Params {
		struct FPointerEvent& PointerEvent;
	}; Dragged_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PointerEvent = Params.PointerEvent;

}

// Function UMG.DragDropOperation.DragCancelled
inline void UDragDropOperation::DragCancelled(struct FPointerEvent& PointerEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.DragCancelled");

	struct DragCancelled_Params {
		struct FPointerEvent& PointerEvent;
	}; DragCancelled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PointerEvent = Params.PointerEvent;

}

// Function UMG.DynamicEntryBoxBase.SetEntrySpacing
inline void UDynamicEntryBoxBase::SetEntrySpacing(struct FVector2D& InEntrySpacing) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.SetEntrySpacing");

	struct SetEntrySpacing_Params {
		struct FVector2D& InEntrySpacing;
	}; SetEntrySpacing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InEntrySpacing = Params.InEntrySpacing;

}

// Function UMG.DynamicEntryBoxBase.GetNumEntries
inline int32_t UDynamicEntryBoxBase::GetNumEntries() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.GetNumEntries");

	struct GetNumEntries_Params {
		
		int32_t ReturnValue;

	}; GetNumEntries_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.DynamicEntryBoxBase.GetAllEntries
inline struct TArray<struct UUserWidget> UDynamicEntryBoxBase::GetAllEntries() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.GetAllEntries");

	struct GetAllEntries_Params {
		
		struct TArray<struct UUserWidget> ReturnValue;

	}; GetAllEntries_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.DynamicEntryBox.Reset
inline void UDynamicEntryBox::Reset(char bDeleteWidgets) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.Reset");

	struct Reset_Params {
		char bDeleteWidgets;
	}; Reset_Params Params;

	Params.bDeleteWidgets = bDeleteWidgets;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.DynamicEntryBox.RemoveEntry
inline void UDynamicEntryBox::RemoveEntry(struct UUserWidget EntryWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.RemoveEntry");

	struct RemoveEntry_Params {
		struct UUserWidget EntryWidget;
	}; RemoveEntry_Params Params;

	Params.EntryWidget = EntryWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
inline struct UUserWidget UDynamicEntryBox::BP_CreateEntryOfClass(struct UClass* EntryClass) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.BP_CreateEntryOfClass");

	struct BP_CreateEntryOfClass_Params {
		struct UClass* EntryClass;
		struct UUserWidget ReturnValue;

	}; BP_CreateEntryOfClass_Params Params;

	Params.EntryClass = EntryClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.DynamicEntryBox.BP_CreateEntry
inline struct UUserWidget UDynamicEntryBox::BP_CreateEntry() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.BP_CreateEntry");

	struct BP_CreateEntry_Params {
		
		struct UUserWidget ReturnValue;

	}; BP_CreateEntry_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.EditableText.SetText
inline void UEditableText::SetText(struct FText InText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetText");

	struct SetText_Params {
		struct FText InText;
	}; SetText_Params Params;

	Params.InText = InText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.EditableText.SetJustification
inline void UEditableText::SetJustification(char InJustification) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetJustification");

	struct SetJustification_Params {
		char InJustification;
	}; SetJustification_Params Params;

	Params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.EditableText.SetIsReadOnly
inline void UEditableText::SetIsReadOnly(char InbIsReadyOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetIsReadOnly");

	struct SetIsReadOnly_Params {
		char InbIsReadyOnly;
	}; SetIsReadOnly_Params Params;

	Params.InbIsReadyOnly = InbIsReadyOnly;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.EditableText.SetIsPassword
inline void UEditableText::SetIsPassword(char InbIsPassword) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetIsPassword");

	struct SetIsPassword_Params {
		char InbIsPassword;
	}; SetIsPassword_Params Params;

	Params.InbIsPassword = InbIsPassword;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.EditableText.SetHintText
inline void UEditableText::SetHintText(struct FText InHintText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetHintText");

	struct SetHintText_Params {
		struct FText InHintText;
	}; SetHintText_Params Params;

	Params.InHintText = InHintText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
inline void UEditableText::OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature");

	struct OnEditableTextCommittedEvent__DelegateSignature_Params {
		struct FText& Text;
		char CommitMethod;
	}; OnEditableTextCommittedEvent__DelegateSignature_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
inline void UEditableText::OnEditableTextChangedEvent__DelegateSignature(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature");

	struct OnEditableTextChangedEvent__DelegateSignature_Params {
		struct FText& Text;
	}; OnEditableTextChangedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function UMG.EditableText.GetText
inline struct FText UEditableText::GetText() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.GetText");

	struct GetText_Params {
		
		struct FText ReturnValue;

	}; GetText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.EditableTextBox.SetText
inline void UEditableTextBox::SetText(struct FText InText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetText");

	struct SetText_Params {
		struct FText InText;
	}; SetText_Params Params;

	Params.InText = InText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.EditableTextBox.SetJustification
inline void UEditableTextBox::SetJustification(char InJustification) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetJustification");

	struct SetJustification_Params {
		char InJustification;
	}; SetJustification_Params Params;

	Params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.EditableTextBox.SetIsReadOnly
inline void UEditableTextBox::SetIsReadOnly(char bReadOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetIsReadOnly");

	struct SetIsReadOnly_Params {
		char bReadOnly;
	}; SetIsReadOnly_Params Params;

	Params.bReadOnly = bReadOnly;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.EditableTextBox.SetIsPassword
inline void UEditableTextBox::SetIsPassword(char bIsPassword) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetIsPassword");

	struct SetIsPassword_Params {
		char bIsPassword;
	}; SetIsPassword_Params Params;

	Params.bIsPassword = bIsPassword;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.EditableTextBox.SetHintText
inline void UEditableTextBox::SetHintText(struct FText InText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetHintText");

	struct SetHintText_Params {
		struct FText InText;
	}; SetHintText_Params Params;

	Params.InText = InText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.EditableTextBox.SetError
inline void UEditableTextBox::SetError(struct FText InError) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetError");

	struct SetError_Params {
		struct FText InError;
	}; SetError_Params Params;

	Params.InError = InError;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.EditableTextBox.SelectWordAt
inline void UEditableTextBox::SelectWordAt() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SelectWordAt");

	struct SelectWordAt_Params {
		
	}; SelectWordAt_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
inline void UEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature");

	struct OnEditableTextBoxCommittedEvent__DelegateSignature_Params {
		struct FText& Text;
		char CommitMethod;
	}; OnEditableTextBoxCommittedEvent__DelegateSignature_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
inline void UEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature");

	struct OnEditableTextBoxChangedEvent__DelegateSignature_Params {
		struct FText& Text;
	}; OnEditableTextBoxChangedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function UMG.EditableTextBox.HasError
inline char UEditableTextBox::HasError() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.HasError");

	struct HasError_Params {
		
		char ReturnValue;

	}; HasError_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.EditableTextBox.GetText
inline struct FText UEditableTextBox::GetText() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.GetText");

	struct GetText_Params {
		
		struct FText ReturnValue;

	}; GetText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.EditableTextBox.ClearError
inline void UEditableTextBox::ClearError() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.ClearError");

	struct ClearError_Params {
		
	}; ClearError_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ExpandableArea.SetIsExpanded_Animated
inline void UExpandableArea::SetIsExpanded_Animated(char IsExpanded) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.SetIsExpanded_Animated");

	struct SetIsExpanded_Animated_Params {
		char IsExpanded;
	}; SetIsExpanded_Animated_Params Params;

	Params.IsExpanded = IsExpanded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ExpandableArea.SetIsExpanded
inline void UExpandableArea::SetIsExpanded(char IsExpanded) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.SetIsExpanded");

	struct SetIsExpanded_Params {
		char IsExpanded;
	}; SetIsExpanded_Params Params;

	Params.IsExpanded = IsExpanded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ExpandableArea.GetIsExpanded
inline char UExpandableArea::GetIsExpanded() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.GetIsExpanded");

	struct GetIsExpanded_Params {
		
		char ReturnValue;

	}; GetIsExpanded_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.GridPanel.SetRowFill
inline void UGridPanel::SetRowFill(int32_t columnIndex, float Coefficient) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.SetRowFill");

	struct SetRowFill_Params {
		int32_t columnIndex;
		float Coefficient;
	}; SetRowFill_Params Params;

	Params.columnIndex = columnIndex;
	Params.Coefficient = Coefficient;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.GridPanel.SetColumnFill
inline void UGridPanel::SetColumnFill(int32_t columnIndex, float Coefficient) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.SetColumnFill");

	struct SetColumnFill_Params {
		int32_t columnIndex;
		float Coefficient;
	}; SetColumnFill_Params Params;

	Params.columnIndex = columnIndex;
	Params.Coefficient = Coefficient;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.GridPanel.AddChildToGrid
inline struct UGridSlot UGridPanel::AddChildToGrid(struct UWidget Content, int32_t InRow, int32_t InColumn) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.AddChildToGrid");

	struct AddChildToGrid_Params {
		struct UWidget Content;
		int32_t InRow;
		int32_t InColumn;
		struct UGridSlot ReturnValue;

	}; AddChildToGrid_Params Params;

	Params.Content = Content;
	Params.InRow = InRow;
	Params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.GridSlot.SetVerticalAlignment
inline void UGridSlot::SetVerticalAlignment(char InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		char InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.GridSlot.SetRowSpan
inline void UGridSlot::SetRowSpan(int32_t InRowSpan) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetRowSpan");

	struct SetRowSpan_Params {
		int32_t InRowSpan;
	}; SetRowSpan_Params Params;

	Params.InRowSpan = InRowSpan;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.GridSlot.SetRow
inline void UGridSlot::SetRow(int32_t InRow) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetRow");

	struct SetRow_Params {
		int32_t InRow;
	}; SetRow_Params Params;

	Params.InRow = InRow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.GridSlot.SetPadding
inline void UGridSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.GridSlot.SetNudge
inline void UGridSlot::SetNudge(struct FVector2D InNudge) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetNudge");

	struct SetNudge_Params {
		struct FVector2D InNudge;
	}; SetNudge_Params Params;

	Params.InNudge = InNudge;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.GridSlot.SetLayer
inline void UGridSlot::SetLayer(int32_t InLayer) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetLayer");

	struct SetLayer_Params {
		int32_t InLayer;
	}; SetLayer_Params Params;

	Params.InLayer = InLayer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.GridSlot.SetHorizontalAlignment
inline void UGridSlot::SetHorizontalAlignment(char InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		char InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.GridSlot.SetColumnSpan
inline void UGridSlot::SetColumnSpan(int32_t InColumnSpan) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetColumnSpan");

	struct SetColumnSpan_Params {
		int32_t InColumnSpan;
	}; SetColumnSpan_Params Params;

	Params.InColumnSpan = InColumnSpan;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.GridSlot.SetColumn
inline void UGridSlot::SetColumn(int32_t InColumn) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetColumn");

	struct SetColumn_Params {
		int32_t InColumn;
	}; SetColumn_Params Params;

	Params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.HorizontalBoxSlot.SetVerticalAlignment
inline void UHorizontalBoxSlot::SetVerticalAlignment(char InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		char InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.HorizontalBoxSlot.SetSize
inline void UHorizontalBoxSlot::SetSize(struct FSlateChildSize InSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetSize");

	struct SetSize_Params {
		struct FSlateChildSize InSize;
	}; SetSize_Params Params;

	Params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.HorizontalBoxSlot.SetPadding
inline void UHorizontalBoxSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
inline void UHorizontalBoxSlot::SetHorizontalAlignment(char InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		char InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetOpacity
inline void UImage::SetOpacity(float InOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetOpacity");

	struct SetOpacity_Params {
		float InOpacity;
	}; SetOpacity_Params Params;

	Params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetGammaCorrect
inline void UImage::SetGammaCorrect() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetGammaCorrect");

	struct SetGammaCorrect_Params {
		
	}; SetGammaCorrect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetColorAndOpacity
inline void UImage::SetColorAndOpacity(struct FLinearColor InColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetColorAndOpacity");

	struct SetColorAndOpacity_Params {
		struct FLinearColor InColorAndOpacity;
	}; SetColorAndOpacity_Params Params;

	Params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetBrushTintColor
inline void UImage::SetBrushTintColor(struct FSlateColor TintColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushTintColor");

	struct SetBrushTintColor_Params {
		struct FSlateColor TintColor;
	}; SetBrushTintColor_Params Params;

	Params.TintColor = TintColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetBrushSize
inline void UImage::SetBrushSize(struct FVector2D DesiredSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushSize");

	struct SetBrushSize_Params {
		struct FVector2D DesiredSize;
	}; SetBrushSize_Params Params;

	Params.DesiredSize = DesiredSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetBrushResourceObject
inline void UImage::SetBrushResourceObject(struct Object ResourceObject) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushResourceObject");

	struct SetBrushResourceObject_Params {
		struct Object ResourceObject;
	}; SetBrushResourceObject_Params Params;

	Params.ResourceObject = ResourceObject;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetBrushFromTextureDynamic
inline void UImage::SetBrushFromTextureDynamic(struct UTexture2DDynamic Texture, char bMatchSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromTextureDynamic");

	struct SetBrushFromTextureDynamic_Params {
		struct UTexture2DDynamic Texture;
		char bMatchSize;
	}; SetBrushFromTextureDynamic_Params Params;

	Params.Texture = Texture;
	Params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetBrushFromTexture
inline void UImage::SetBrushFromTexture(struct UTexture2D Texture, char bMatchSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromTexture");

	struct SetBrushFromTexture_Params {
		struct UTexture2D Texture;
		char bMatchSize;
	}; SetBrushFromTexture_Params Params;

	Params.Texture = Texture;
	Params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetBrushFromSoftTexture
inline void UImage::SetBrushFromSoftTexture(struct TSoftObjectPtr<UTexture2D> SoftTexture, char bMatchSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromSoftTexture");

	struct SetBrushFromSoftTexture_Params {
		struct TSoftObjectPtr<UTexture2D> SoftTexture;
		char bMatchSize;
	}; SetBrushFromSoftTexture_Params Params;

	Params.SoftTexture = SoftTexture;
	Params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetBrushFromSoftMaterial
inline void UImage::SetBrushFromSoftMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromSoftMaterial");

	struct SetBrushFromSoftMaterial_Params {
		struct TSoftObjectPtr<UMaterialInterface> SoftMaterial;
	}; SetBrushFromSoftMaterial_Params Params;

	Params.SoftMaterial = SoftMaterial;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetBrushFromMaterial
inline void UImage::SetBrushFromMaterial(struct UMaterialInterface Material) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromMaterial");

	struct SetBrushFromMaterial_Params {
		struct UMaterialInterface Material;
	}; SetBrushFromMaterial_Params Params;

	Params.Material = Material;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetBrushFromAtlasInterface
inline void UImage::SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, char bMatchSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromAtlasInterface");

	struct SetBrushFromAtlasInterface_Params {
		struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion;
		char bMatchSize;
	}; SetBrushFromAtlasInterface_Params Params;

	Params.AtlasRegion = AtlasRegion;
	Params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetBrushFromAsset
inline void UImage::SetBrushFromAsset(struct USlateBrushAsset Asset) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromAsset");

	struct SetBrushFromAsset_Params {
		struct USlateBrushAsset Asset;
	}; SetBrushFromAsset_Params Params;

	Params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetBrush
inline void UImage::SetBrush(struct FSlateBrush& InBrush) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrush");

	struct SetBrush_Params {
		struct FSlateBrush& InBrush;
	}; SetBrush_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InBrush = Params.InBrush;

}

// Function UMG.Image.GetDynamicMaterial
inline struct UMaterialInstanceDynamic UImage::GetDynamicMaterial() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.GetDynamicMaterial");

	struct GetDynamicMaterial_Params {
		
		struct UMaterialInstanceDynamic ReturnValue;

	}; GetDynamicMaterial_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.InputKeySelector.SetTextBlockVisibility
inline void UInputKeySelector::SetTextBlockVisibility(enum class ESlateVisibility InVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetTextBlockVisibility");

	struct SetTextBlockVisibility_Params {
		enum class ESlateVisibility InVisibility;
	}; SetTextBlockVisibility_Params Params;

	Params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.InputKeySelector.SetSelectedKey
inline void UInputKeySelector::SetSelectedKey(struct FInputChord& InSelectedKey) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetSelectedKey");

	struct SetSelectedKey_Params {
		struct FInputChord& InSelectedKey;
	}; SetSelectedKey_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSelectedKey = Params.InSelectedKey;

}

// Function UMG.InputKeySelector.SetNoKeySpecifiedText
inline void UInputKeySelector::SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetNoKeySpecifiedText");

	struct SetNoKeySpecifiedText_Params {
		struct FText InNoKeySpecifiedText;
	}; SetNoKeySpecifiedText_Params Params;

	Params.InNoKeySpecifiedText = InNoKeySpecifiedText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.InputKeySelector.SetKeySelectionText
inline void UInputKeySelector::SetKeySelectionText(struct FText InKeySelectionText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetKeySelectionText");

	struct SetKeySelectionText_Params {
		struct FText InKeySelectionText;
	}; SetKeySelectionText_Params Params;

	Params.InKeySelectionText = InKeySelectionText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.InputKeySelector.SetEscapeKeys
inline void UInputKeySelector::SetEscapeKeys(struct TArray<struct FKey>& InKeys) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetEscapeKeys");

	struct SetEscapeKeys_Params {
		struct TArray<struct FKey>& InKeys;
	}; SetEscapeKeys_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InKeys = Params.InKeys;

}

// Function UMG.InputKeySelector.SetAllowModifierKeys
inline void UInputKeySelector::SetAllowModifierKeys(char bInAllowModifierKeys) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetAllowModifierKeys");

	struct SetAllowModifierKeys_Params {
		char bInAllowModifierKeys;
	}; SetAllowModifierKeys_Params Params;

	Params.bInAllowModifierKeys = bInAllowModifierKeys;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.InputKeySelector.SetAllowGamepadKeys
inline void UInputKeySelector::SetAllowGamepadKeys(char bInAllowGamepadKeys) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetAllowGamepadKeys");

	struct SetAllowGamepadKeys_Params {
		char bInAllowGamepadKeys;
	}; SetAllowGamepadKeys_Params Params;

	Params.bInAllowGamepadKeys = bInAllowGamepadKeys;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
inline void UInputKeySelector::OnKeySelected__DelegateSignature(struct FInputChord SelectedKey) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature");

	struct OnKeySelected__DelegateSignature_Params {
		struct FInputChord SelectedKey;
	}; OnKeySelected__DelegateSignature_Params Params;

	Params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
inline void UInputKeySelector::OnIsSelectingKeyChanged__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature");

	struct OnIsSelectingKeyChanged__DelegateSignature_Params {
		
	}; OnIsSelectingKeyChanged__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.InputKeySelector.GetIsSelectingKey
inline char UInputKeySelector::GetIsSelectingKey() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.GetIsSelectingKey");

	struct GetIsSelectingKey_Params {
		
		char ReturnValue;

	}; GetIsSelectingKey_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.InvalidationBox.SetCanCache
inline void UInvalidationBox::SetCanCache(char CanCache) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.SetCanCache");

	struct SetCanCache_Params {
		char CanCache;
	}; SetCanCache_Params Params;

	Params.CanCache = CanCache;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.InvalidationBox.InvalidateCache
inline void UInvalidationBox::InvalidateCache() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.InvalidateCache");

	struct InvalidateCache_Params {
		
	}; InvalidateCache_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.InvalidationBox.GetCanCache
inline char UInvalidationBox::GetCanCache() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.GetCanCache");

	struct GetCanCache_Params {
		
		char ReturnValue;

	}; GetCanCache_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ListViewBase.SetWheelScrollMultiplier
inline void UListViewBase::SetWheelScrollMultiplier(float NewWheelScrollMultiplier) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetWheelScrollMultiplier");

	struct SetWheelScrollMultiplier_Params {
		float NewWheelScrollMultiplier;
	}; SetWheelScrollMultiplier_Params Params;

	Params.NewWheelScrollMultiplier = NewWheelScrollMultiplier;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListViewBase.SetScrollOffset
inline void UListViewBase::SetScrollOffset(float InScrollOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetScrollOffset");

	struct SetScrollOffset_Params {
		float InScrollOffset;
	}; SetScrollOffset_Params Params;

	Params.InScrollOffset = InScrollOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListViewBase.SetScrollbarVisibility
inline void UListViewBase::SetScrollbarVisibility(enum class ESlateVisibility InVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetScrollbarVisibility");

	struct SetScrollbarVisibility_Params {
		enum class ESlateVisibility InVisibility;
	}; SetScrollbarVisibility_Params Params;

	Params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListViewBase.ScrollToTop
inline void UListViewBase::ScrollToTop() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.ScrollToTop");

	struct ScrollToTop_Params {
		
	}; ScrollToTop_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListViewBase.ScrollToBottom
inline void UListViewBase::ScrollToBottom() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.ScrollToBottom");

	struct ScrollToBottom_Params {
		
	}; ScrollToBottom_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListViewBase.RequestRefresh
inline void UListViewBase::RequestRefresh() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.RequestRefresh");

	struct RequestRefresh_Params {
		
	}; RequestRefresh_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListViewBase.RegenerateAllEntries
inline void UListViewBase::RegenerateAllEntries() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.RegenerateAllEntries");

	struct RegenerateAllEntries_Params {
		
	}; RegenerateAllEntries_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListViewBase.GetDisplayedEntryWidgets
inline struct TArray<struct UUserWidget> UListViewBase::GetDisplayedEntryWidgets() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.GetDisplayedEntryWidgets");

	struct GetDisplayedEntryWidgets_Params {
		
		struct TArray<struct UUserWidget> ReturnValue;

	}; GetDisplayedEntryWidgets_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ListView.SetSelectionMode
inline void UListView::SetSelectionMode(char SelectionMode) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.SetSelectionMode");

	struct SetSelectionMode_Params {
		char SelectionMode;
	}; SetSelectionMode_Params Params;

	Params.SelectionMode = SelectionMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.SetSelectedIndex
inline void UListView::SetSelectedIndex(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.SetSelectedIndex");

	struct SetSelectedIndex_Params {
		int32_t Index;
	}; SetSelectedIndex_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.ScrollIndexIntoView
inline void UListView::ScrollIndexIntoView(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.ScrollIndexIntoView");

	struct ScrollIndexIntoView_Params {
		int32_t Index;
	}; ScrollIndexIntoView_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.RemoveItem
inline void UListView::RemoveItem(struct Object Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.RemoveItem");

	struct RemoveItem_Params {
		struct Object Item;
	}; RemoveItem_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.NavigateToIndex
inline void UListView::NavigateToIndex(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.NavigateToIndex");

	struct NavigateToIndex_Params {
		int32_t Index;
	}; NavigateToIndex_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.IsRefreshPending
inline char UListView::IsRefreshPending() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.IsRefreshPending");

	struct IsRefreshPending_Params {
		
		char ReturnValue;

	}; IsRefreshPending_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ListView.GetNumItems
inline int32_t UListView::GetNumItems() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetNumItems");

	struct GetNumItems_Params {
		
		int32_t ReturnValue;

	}; GetNumItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ListView.GetListItems
inline struct TArray<struct Object> UListView::GetListItems() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetListItems");

	struct GetListItems_Params {
		
		struct TArray<struct Object> ReturnValue;

	}; GetListItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ListView.GetItemAt
inline struct Object UListView::GetItemAt(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetItemAt");

	struct GetItemAt_Params {
		int32_t Index;
		struct Object ReturnValue;

	}; GetItemAt_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ListView.GetIndexForItem
inline int32_t UListView::GetIndexForItem(struct Object Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetIndexForItem");

	struct GetIndexForItem_Params {
		struct Object Item;
		int32_t ReturnValue;

	}; GetIndexForItem_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ListView.ClearListItems
inline void UListView::ClearListItems() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.ClearListItems");

	struct ClearListItems_Params {
		
	}; ClearListItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.BP_SetSelectedItem
inline void UListView::BP_SetSelectedItem(struct Object Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetSelectedItem");

	struct BP_SetSelectedItem_Params {
		struct Object Item;
	}; BP_SetSelectedItem_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.BP_SetListItems
inline void UListView::BP_SetListItems(struct TArray<struct Object>& InListItems) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetListItems");

	struct BP_SetListItems_Params {
		struct TArray<struct Object>& InListItems;
	}; BP_SetListItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InListItems = Params.InListItems;

}

// Function UMG.ListView.BP_SetItemSelection
inline void UListView::BP_SetItemSelection(struct Object Item, char bSelected) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetItemSelection");

	struct BP_SetItemSelection_Params {
		struct Object Item;
		char bSelected;
	}; BP_SetItemSelection_Params Params;

	Params.Item = Item;
	Params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.BP_ScrollItemIntoView
inline void UListView::BP_ScrollItemIntoView(struct Object Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_ScrollItemIntoView");

	struct BP_ScrollItemIntoView_Params {
		struct Object Item;
	}; BP_ScrollItemIntoView_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.BP_NavigateToItem
inline void UListView::BP_NavigateToItem(struct Object Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_NavigateToItem");

	struct BP_NavigateToItem_Params {
		struct Object Item;
	}; BP_NavigateToItem_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.BP_IsItemVisible
inline char UListView::BP_IsItemVisible(struct Object Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_IsItemVisible");

	struct BP_IsItemVisible_Params {
		struct Object Item;
		char ReturnValue;

	}; BP_IsItemVisible_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ListView.BP_GetSelectedItems
inline char UListView::BP_GetSelectedItems(struct TArray<struct Object>& Items) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetSelectedItems");

	struct BP_GetSelectedItems_Params {
		struct TArray<struct Object>& Items;
		char ReturnValue;

	}; BP_GetSelectedItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Items = Params.Items;


	return params.ReturnValue;
}

// Function UMG.ListView.BP_GetSelectedItem
inline struct Object UListView::BP_GetSelectedItem() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetSelectedItem");

	struct BP_GetSelectedItem_Params {
		
		struct Object ReturnValue;

	}; BP_GetSelectedItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ListView.BP_GetNumItemsSelected
inline int32_t UListView::BP_GetNumItemsSelected() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetNumItemsSelected");

	struct BP_GetNumItemsSelected_Params {
		
		int32_t ReturnValue;

	}; BP_GetNumItemsSelected_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ListView.BP_ClearSelection
inline void UListView::BP_ClearSelection() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_ClearSelection");

	struct BP_ClearSelection_Params {
		
	}; BP_ClearSelection_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.BP_CancelScrollIntoView
inline void UListView::BP_CancelScrollIntoView() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_CancelScrollIntoView");

	struct BP_CancelScrollIntoView_Params {
		
	}; BP_CancelScrollIntoView_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.AddItem
inline void UListView::AddItem(struct Object Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.AddItem");

	struct AddItem_Params {
		struct Object Item;
	}; AddItem_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.MenuAnchor.ToggleOpen
inline void UMenuAnchor::ToggleOpen(char bFocusOnOpen) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.ToggleOpen");

	struct ToggleOpen_Params {
		char bFocusOnOpen;
	}; ToggleOpen_Params Params;

	Params.bFocusOnOpen = bFocusOnOpen;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.MenuAnchor.ShouldOpenDueToClick
inline char UMenuAnchor::ShouldOpenDueToClick() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.ShouldOpenDueToClick");

	struct ShouldOpenDueToClick_Params {
		
		char ReturnValue;

	}; ShouldOpenDueToClick_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.MenuAnchor.SetPlacement
inline void UMenuAnchor::SetPlacement(char InPlacement) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.SetPlacement");

	struct SetPlacement_Params {
		char InPlacement;
	}; SetPlacement_Params Params;

	Params.InPlacement = InPlacement;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.MenuAnchor.Open
inline void UMenuAnchor::Open(char bFocusMenu) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.Open");

	struct Open_Params {
		char bFocusMenu;
	}; Open_Params Params;

	Params.bFocusMenu = bFocusMenu;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.MenuAnchor.IsOpen
inline char UMenuAnchor::IsOpen() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.IsOpen");

	struct IsOpen_Params {
		
		char ReturnValue;

	}; IsOpen_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.MenuAnchor.HasOpenSubMenus
inline char UMenuAnchor::HasOpenSubMenus() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.HasOpenSubMenus");

	struct HasOpenSubMenus_Params {
		
		char ReturnValue;

	}; HasOpenSubMenus_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.MenuAnchor.GetMenuPosition
inline struct FVector2D UMenuAnchor::GetMenuPosition() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.GetMenuPosition");

	struct GetMenuPosition_Params {
		
		struct FVector2D ReturnValue;

	}; GetMenuPosition_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.MenuAnchor.FitInWindow
inline void UMenuAnchor::FitInWindow(char bFit) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.FitInWindow");

	struct FitInWindow_Params {
		char bFit;
	}; FitInWindow_Params Params;

	Params.bFit = bFit;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.MenuAnchor.Close
inline void UMenuAnchor::Close() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.Close");

	struct Close_Params {
		
	}; Close_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TextLayoutWidget.SetJustification
inline void UTextLayoutWidget::SetJustification(char InJustification) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextLayoutWidget.SetJustification");

	struct SetJustification_Params {
		char InJustification;
	}; SetJustification_Params Params;

	Params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.MultiLineEditableText.SetWidgetStyle
inline void UMultiLineEditableText::SetWidgetStyle(struct FTextBlockStyle& InWidgetStyle) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetWidgetStyle");

	struct SetWidgetStyle_Params {
		struct FTextBlockStyle& InWidgetStyle;
	}; SetWidgetStyle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InWidgetStyle = Params.InWidgetStyle;

}

// Function UMG.MultiLineEditableText.SetText
inline void UMultiLineEditableText::SetText(struct FText InText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetText");

	struct SetText_Params {
		struct FText InText;
	}; SetText_Params Params;

	Params.InText = InText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.MultiLineEditableText.SetIsReadOnly
inline void UMultiLineEditableText::SetIsReadOnly(char bReadOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetIsReadOnly");

	struct SetIsReadOnly_Params {
		char bReadOnly;
	}; SetIsReadOnly_Params Params;

	Params.bReadOnly = bReadOnly;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.MultiLineEditableText.SetHintText
inline void UMultiLineEditableText::SetHintText(struct FText InHintText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetHintText");

	struct SetHintText_Params {
		struct FText InHintText;
	}; SetHintText_Params Params;

	Params.InHintText = InHintText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
inline void UMultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature");

	struct OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params {
		struct FText& Text;
		char CommitMethod;
	}; OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
inline void UMultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature");

	struct OnMultiLineEditableTextChangedEvent__DelegateSignature_Params {
		struct FText& Text;
	}; OnMultiLineEditableTextChangedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function UMG.MultiLineEditableText.GetText
inline struct FText UMultiLineEditableText::GetText() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.GetText");

	struct GetText_Params {
		
		struct FText ReturnValue;

	}; GetText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.MultiLineEditableText.GetHintText
inline struct FText UMultiLineEditableText::GetHintText() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.GetHintText");

	struct GetHintText_Params {
		
		struct FText ReturnValue;

	}; GetHintText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.MultiLineEditableTextBox.SetTextStyle
inline void UMultiLineEditableTextBox::SetTextStyle(struct FTextBlockStyle& InTextStyle) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetTextStyle");

	struct SetTextStyle_Params {
		struct FTextBlockStyle& InTextStyle;
	}; SetTextStyle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InTextStyle = Params.InTextStyle;

}

// Function UMG.MultiLineEditableTextBox.SetText
inline void UMultiLineEditableTextBox::SetText(struct FText InText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetText");

	struct SetText_Params {
		struct FText InText;
	}; SetText_Params Params;

	Params.InText = InText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.MultiLineEditableTextBox.SetIsReadOnly
inline void UMultiLineEditableTextBox::SetIsReadOnly(char bReadOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetIsReadOnly");

	struct SetIsReadOnly_Params {
		char bReadOnly;
	}; SetIsReadOnly_Params Params;

	Params.bReadOnly = bReadOnly;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.MultiLineEditableTextBox.SetHintText
inline void UMultiLineEditableTextBox::SetHintText(struct FText InHintText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetHintText");

	struct SetHintText_Params {
		struct FText InHintText;
	}; SetHintText_Params Params;

	Params.InHintText = InHintText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.MultiLineEditableTextBox.SetError
inline void UMultiLineEditableTextBox::SetError(struct FText InError) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetError");

	struct SetError_Params {
		struct FText InError;
	}; SetError_Params Params;

	Params.InError = InError;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
inline void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	struct OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params {
		struct FText& Text;
		char CommitMethod;
	}; OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
inline void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	struct OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params {
		struct FText& Text;
	}; OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function UMG.MultiLineEditableTextBox.GetText
inline struct FText UMultiLineEditableTextBox::GetText() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.GetText");

	struct GetText_Params {
		
		struct FText ReturnValue;

	}; GetText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.MultiLineEditableTextBox.GetHintText
inline struct FText UMultiLineEditableTextBox::GetHintText() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.GetHintText");

	struct GetHintText_Params {
		
		struct FText ReturnValue;

	}; GetHintText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.OverlaySlot.SetVerticalAlignment
inline void UOverlaySlot::SetVerticalAlignment(char InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		char InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.OverlaySlot.SetPadding
inline void UOverlaySlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.OverlaySlot.SetHorizontalAlignment
inline void UOverlaySlot::SetHorizontalAlignment(char InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		char InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ProgressBar.SetPercent
inline void UProgressBar::SetPercent(float InPercent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetPercent");

	struct SetPercent_Params {
		float InPercent;
	}; SetPercent_Params Params;

	Params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ProgressBar.SetIsMarquee
inline void UProgressBar::SetIsMarquee(char InbIsMarquee) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetIsMarquee");

	struct SetIsMarquee_Params {
		char InbIsMarquee;
	}; SetIsMarquee_Params Params;

	Params.InbIsMarquee = InbIsMarquee;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ProgressBar.SetFillColorAndOpacity
inline void UProgressBar::SetFillColorAndOpacity(struct FLinearColor InColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetFillColorAndOpacity");

	struct SetFillColorAndOpacity_Params {
		struct FLinearColor InColor;
	}; SetFillColorAndOpacity_Params Params;

	Params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RetainerBox.SetTextureParameter
inline void URetainerBox::SetTextureParameter(struct FName TextureParameter) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetTextureParameter");

	struct SetTextureParameter_Params {
		struct FName TextureParameter;
	}; SetTextureParameter_Params Params;

	Params.TextureParameter = TextureParameter;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RetainerBox.SetRenderingPhase
inline void URetainerBox::SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetRenderingPhase");

	struct SetRenderingPhase_Params {
		int32_t RenderPhase;
		int32_t TotalPhases;
	}; SetRenderingPhase_Params Params;

	Params.RenderPhase = RenderPhase;
	Params.TotalPhases = TotalPhases;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RetainerBox.SetEffectMaterial
inline void URetainerBox::SetEffectMaterial(struct UMaterialInterface EffectMaterial) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetEffectMaterial");

	struct SetEffectMaterial_Params {
		struct UMaterialInterface EffectMaterial;
	}; SetEffectMaterial_Params Params;

	Params.EffectMaterial = EffectMaterial;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RetainerBox.RequestRender
inline void URetainerBox::RequestRender() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.RequestRender");

	struct RequestRender_Params {
		
	}; RequestRender_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RetainerBox.GetEffectMaterial
inline struct UMaterialInstanceDynamic URetainerBox::GetEffectMaterial() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.GetEffectMaterial");

	struct GetEffectMaterial_Params {
		
		struct UMaterialInstanceDynamic ReturnValue;

	}; GetEffectMaterial_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.RichTextBlock.SetTextStyleSet
inline void URichTextBlock::SetTextStyleSet(struct UDataTable NewTextStyleSet) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetTextStyleSet");

	struct SetTextStyleSet_Params {
		struct UDataTable NewTextStyleSet;
	}; SetTextStyleSet_Params Params;

	Params.NewTextStyleSet = NewTextStyleSet;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RichTextBlock.SetText
inline void URichTextBlock::SetText(struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetText");

	struct SetText_Params {
		struct FText& InText;
	}; SetText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InText = Params.InText;

}

// Function UMG.RichTextBlock.SetMinDesiredWidth
inline void URichTextBlock::SetMinDesiredWidth(float InMinDesiredWidth) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetMinDesiredWidth");

	struct SetMinDesiredWidth_Params {
		float InMinDesiredWidth;
	}; SetMinDesiredWidth_Params Params;

	Params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RichTextBlock.SetDefaultTextStyle
inline void URichTextBlock::SetDefaultTextStyle(struct FTextBlockStyle& InDefaultTextStyle) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultTextStyle");

	struct SetDefaultTextStyle_Params {
		struct FTextBlockStyle& InDefaultTextStyle;
	}; SetDefaultTextStyle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InDefaultTextStyle = Params.InDefaultTextStyle;

}

// Function UMG.RichTextBlock.SetDefaultStrikeBrush
inline void URichTextBlock::SetDefaultStrikeBrush(struct FSlateBrush& InStrikeBrush) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultStrikeBrush");

	struct SetDefaultStrikeBrush_Params {
		struct FSlateBrush& InStrikeBrush;
	}; SetDefaultStrikeBrush_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InStrikeBrush = Params.InStrikeBrush;

}

// Function UMG.RichTextBlock.SetDefaultShadowOffset
inline void URichTextBlock::SetDefaultShadowOffset(struct FVector2D InShadowOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultShadowOffset");

	struct SetDefaultShadowOffset_Params {
		struct FVector2D InShadowOffset;
	}; SetDefaultShadowOffset_Params Params;

	Params.InShadowOffset = InShadowOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
inline void URichTextBlock::SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity");

	struct SetDefaultShadowColorAndOpacity_Params {
		struct FLinearColor InShadowColorAndOpacity;
	}; SetDefaultShadowColorAndOpacity_Params Params;

	Params.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RichTextBlock.SetDefaultFont
inline void URichTextBlock::SetDefaultFont(struct FSlateFontInfo InFontInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultFont");

	struct SetDefaultFont_Params {
		struct FSlateFontInfo InFontInfo;
	}; SetDefaultFont_Params Params;

	Params.InFontInfo = InFontInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RichTextBlock.SetDefaultColorAndOpacity
inline void URichTextBlock::SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultColorAndOpacity");

	struct SetDefaultColorAndOpacity_Params {
		struct FSlateColor InColorAndOpacity;
	}; SetDefaultColorAndOpacity_Params Params;

	Params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RichTextBlock.SetAutoWrapText
inline void URichTextBlock::SetAutoWrapText(char InAutoTextWrap) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetAutoWrapText");

	struct SetAutoWrapText_Params {
		char InAutoTextWrap;
	}; SetAutoWrapText_Params Params;

	Params.InAutoTextWrap = InAutoTextWrap;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RichTextBlock.GetText
inline struct FText URichTextBlock::GetText() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.GetText");

	struct GetText_Params {
		
		struct FText ReturnValue;

	}; GetText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.RichTextBlock.GetDecoratorByClass
inline struct URichTextBlockDecorator URichTextBlock::GetDecoratorByClass(struct UClass* DecoratorClass) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.GetDecoratorByClass");

	struct GetDecoratorByClass_Params {
		struct UClass* DecoratorClass;
		struct URichTextBlockDecorator ReturnValue;

	}; GetDecoratorByClass_Params Params;

	Params.DecoratorClass = DecoratorClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides
inline void URichTextBlock::ClearAllDefaultStyleOverrides() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides");

	struct ClearAllDefaultStyleOverrides_Params {
		
	}; ClearAllDefaultStyleOverrides_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SafeZone.SetSidesToPad
inline void USafeZone::SetSidesToPad(char InPadLeft, char InPadRight, char InPadTop, char InPadBottom) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SafeZone.SetSidesToPad");

	struct SetSidesToPad_Params {
		char InPadLeft;
		char InPadRight;
		char InPadTop;
		char InPadBottom;
	}; SetSidesToPad_Params Params;

	Params.InPadLeft = InPadLeft;
	Params.InPadRight = InPadRight;
	Params.InPadTop = InPadTop;
	Params.InPadBottom = InPadBottom;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScaleBox.SetUserSpecifiedScale
inline void UScaleBox::SetUserSpecifiedScale(float InUserSpecifiedScale) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetUserSpecifiedScale");

	struct SetUserSpecifiedScale_Params {
		float InUserSpecifiedScale;
	}; SetUserSpecifiedScale_Params Params;

	Params.InUserSpecifiedScale = InUserSpecifiedScale;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScaleBox.SetStretchDirection
inline void UScaleBox::SetStretchDirection(char InStretchDirection) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetStretchDirection");

	struct SetStretchDirection_Params {
		char InStretchDirection;
	}; SetStretchDirection_Params Params;

	Params.InStretchDirection = InStretchDirection;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScaleBox.SetStretch
inline void UScaleBox::SetStretch(char InStretch) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetStretch");

	struct SetStretch_Params {
		char InStretch;
	}; SetStretch_Params Params;

	Params.InStretch = InStretch;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScaleBox.SetIgnoreInheritedScale
inline void UScaleBox::SetIgnoreInheritedScale(char bInIgnoreInheritedScale) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetIgnoreInheritedScale");

	struct SetIgnoreInheritedScale_Params {
		char bInIgnoreInheritedScale;
	}; SetIgnoreInheritedScale_Params Params;

	Params.bInIgnoreInheritedScale = bInIgnoreInheritedScale;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScaleBoxSlot.SetVerticalAlignment
inline void UScaleBoxSlot::SetVerticalAlignment(char InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		char InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScaleBoxSlot.SetPadding
inline void UScaleBoxSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScaleBoxSlot.SetHorizontalAlignment
inline void UScaleBoxSlot::SetHorizontalAlignment(char InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		char InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBar.SetState
inline void UScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBar.SetState");

	struct SetState_Params {
		float InOffsetFraction;
		float InThumbSizeFraction;
	}; SetState_Params Params;

	Params.InOffsetFraction = InOffsetFraction;
	Params.InThumbSizeFraction = InThumbSizeFraction;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.SetWheelScrollMultiplier
inline void UScrollBox::SetWheelScrollMultiplier(float NewWheelScrollMultiplier) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetWheelScrollMultiplier");

	struct SetWheelScrollMultiplier_Params {
		float NewWheelScrollMultiplier;
	}; SetWheelScrollMultiplier_Params Params;

	Params.NewWheelScrollMultiplier = NewWheelScrollMultiplier;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.SetScrollOffset
inline void UScrollBox::SetScrollOffset(float NewScrollOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollOffset");

	struct SetScrollOffset_Params {
		float NewScrollOffset;
	}; SetScrollOffset_Params Params;

	Params.NewScrollOffset = NewScrollOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.SetScrollbarVisibility
inline void UScrollBox::SetScrollbarVisibility(enum class ESlateVisibility NewScrollBarVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarVisibility");

	struct SetScrollbarVisibility_Params {
		enum class ESlateVisibility NewScrollBarVisibility;
	}; SetScrollbarVisibility_Params Params;

	Params.NewScrollBarVisibility = NewScrollBarVisibility;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.SetScrollbarThickness
inline void UScrollBox::SetScrollbarThickness(struct FVector2D& NewScrollbarThickness) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarThickness");

	struct SetScrollbarThickness_Params {
		struct FVector2D& NewScrollbarThickness;
	}; SetScrollbarThickness_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewScrollbarThickness = Params.NewScrollbarThickness;

}

// Function UMG.ScrollBox.SetScrollbarPadding
inline void UScrollBox::SetScrollbarPadding(struct FMargin& NewScrollbarPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarPadding");

	struct SetScrollbarPadding_Params {
		struct FMargin& NewScrollbarPadding;
	}; SetScrollbarPadding_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewScrollbarPadding = Params.NewScrollbarPadding;

}

// Function UMG.ScrollBox.SetOrientation
inline void UScrollBox::SetOrientation(char NewOrientation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetOrientation");

	struct SetOrientation_Params {
		char NewOrientation;
	}; SetOrientation_Params Params;

	Params.NewOrientation = NewOrientation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.SetConsumeMouseWheel
inline void UScrollBox::SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetConsumeMouseWheel");

	struct SetConsumeMouseWheel_Params {
		enum class EConsumeMouseWheel NewConsumeMouseWheel;
	}; SetConsumeMouseWheel_Params Params;

	Params.NewConsumeMouseWheel = NewConsumeMouseWheel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.SetAnimateWheelScrolling
inline void UScrollBox::SetAnimateWheelScrolling(char bShouldAnimateWheelScrolling) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAnimateWheelScrolling");

	struct SetAnimateWheelScrolling_Params {
		char bShouldAnimateWheelScrolling;
	}; SetAnimateWheelScrolling_Params Params;

	Params.bShouldAnimateWheelScrolling = bShouldAnimateWheelScrolling;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.SetAlwaysShowScrollbar
inline void UScrollBox::SetAlwaysShowScrollbar(char NewAlwaysShowScrollbar) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAlwaysShowScrollbar");

	struct SetAlwaysShowScrollbar_Params {
		char NewAlwaysShowScrollbar;
	}; SetAlwaysShowScrollbar_Params Params;

	Params.NewAlwaysShowScrollbar = NewAlwaysShowScrollbar;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.SetAllowOverscroll
inline void UScrollBox::SetAllowOverscroll(char NewAllowOverscroll) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAllowOverscroll");

	struct SetAllowOverscroll_Params {
		char NewAllowOverscroll;
	}; SetAllowOverscroll_Params Params;

	Params.NewAllowOverscroll = NewAllowOverscroll;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.ScrollWidgetIntoView
inline void UScrollBox::ScrollWidgetIntoView(struct UWidget WidgetToFind, char AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollWidgetIntoView");

	struct ScrollWidgetIntoView_Params {
		struct UWidget WidgetToFind;
		char AnimateScroll;
		enum class EDescendantScrollDestination ScrollDestination;
		float Padding;
	}; ScrollWidgetIntoView_Params Params;

	Params.WidgetToFind = WidgetToFind;
	Params.AnimateScroll = AnimateScroll;
	Params.ScrollDestination = ScrollDestination;
	Params.Padding = Padding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.ScrollToStart
inline void UScrollBox::ScrollToStart() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollToStart");

	struct ScrollToStart_Params {
		
	}; ScrollToStart_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.ScrollToEnd
inline void UScrollBox::ScrollToEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollToEnd");

	struct ScrollToEnd_Params {
		
	}; ScrollToEnd_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.GetViewOffsetFraction
inline float UScrollBox::GetViewOffsetFraction() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetViewOffsetFraction");

	struct GetViewOffsetFraction_Params {
		
		float ReturnValue;

	}; GetViewOffsetFraction_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ScrollBox.GetScrollOffsetOfEnd
inline float UScrollBox::GetScrollOffsetOfEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetScrollOffsetOfEnd");

	struct GetScrollOffsetOfEnd_Params {
		
		float ReturnValue;

	}; GetScrollOffsetOfEnd_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ScrollBox.GetScrollOffset
inline float UScrollBox::GetScrollOffset() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetScrollOffset");

	struct GetScrollOffset_Params {
		
		float ReturnValue;

	}; GetScrollOffset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ScrollBox.EndInertialScrolling
inline void UScrollBox::EndInertialScrolling() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.EndInertialScrolling");

	struct EndInertialScrolling_Params {
		
	}; EndInertialScrolling_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBoxSlot.SetVerticalAlignment
inline void UScrollBoxSlot::SetVerticalAlignment(char InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		char InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBoxSlot.SetPadding
inline void UScrollBoxSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBoxSlot.SetHorizontalAlignment
inline void UScrollBoxSlot::SetHorizontalAlignment(char InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		char InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.SetWidthOverride
inline void USizeBox::SetWidthOverride(float InWidthOverride) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetWidthOverride");

	struct SetWidthOverride_Params {
		float InWidthOverride;
	}; SetWidthOverride_Params Params;

	Params.InWidthOverride = InWidthOverride;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.SetMinDesiredWidth
inline void USizeBox::SetMinDesiredWidth(float InMinDesiredWidth) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinDesiredWidth");

	struct SetMinDesiredWidth_Params {
		float InMinDesiredWidth;
	}; SetMinDesiredWidth_Params Params;

	Params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.SetMinDesiredHeight
inline void USizeBox::SetMinDesiredHeight(float InMinDesiredHeight) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinDesiredHeight");

	struct SetMinDesiredHeight_Params {
		float InMinDesiredHeight;
	}; SetMinDesiredHeight_Params Params;

	Params.InMinDesiredHeight = InMinDesiredHeight;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.SetMinAspectRatio
inline void USizeBox::SetMinAspectRatio(float InMinAspectRatio) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinAspectRatio");

	struct SetMinAspectRatio_Params {
		float InMinAspectRatio;
	}; SetMinAspectRatio_Params Params;

	Params.InMinAspectRatio = InMinAspectRatio;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.SetMaxDesiredWidth
inline void USizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxDesiredWidth");

	struct SetMaxDesiredWidth_Params {
		float InMaxDesiredWidth;
	}; SetMaxDesiredWidth_Params Params;

	Params.InMaxDesiredWidth = InMaxDesiredWidth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.SetMaxDesiredHeight
inline void USizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxDesiredHeight");

	struct SetMaxDesiredHeight_Params {
		float InMaxDesiredHeight;
	}; SetMaxDesiredHeight_Params Params;

	Params.InMaxDesiredHeight = InMaxDesiredHeight;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.SetMaxAspectRatio
inline void USizeBox::SetMaxAspectRatio(float InMaxAspectRatio) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxAspectRatio");

	struct SetMaxAspectRatio_Params {
		float InMaxAspectRatio;
	}; SetMaxAspectRatio_Params Params;

	Params.InMaxAspectRatio = InMaxAspectRatio;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.SetHeightOverride
inline void USizeBox::SetHeightOverride(float InHeightOverride) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetHeightOverride");

	struct SetHeightOverride_Params {
		float InHeightOverride;
	}; SetHeightOverride_Params Params;

	Params.InHeightOverride = InHeightOverride;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.ClearWidthOverride
inline void USizeBox::ClearWidthOverride() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearWidthOverride");

	struct ClearWidthOverride_Params {
		
	}; ClearWidthOverride_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.ClearMinDesiredWidth
inline void USizeBox::ClearMinDesiredWidth() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinDesiredWidth");

	struct ClearMinDesiredWidth_Params {
		
	}; ClearMinDesiredWidth_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.ClearMinDesiredHeight
inline void USizeBox::ClearMinDesiredHeight() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinDesiredHeight");

	struct ClearMinDesiredHeight_Params {
		
	}; ClearMinDesiredHeight_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.ClearMinAspectRatio
inline void USizeBox::ClearMinAspectRatio() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinAspectRatio");

	struct ClearMinAspectRatio_Params {
		
	}; ClearMinAspectRatio_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.ClearMaxDesiredWidth
inline void USizeBox::ClearMaxDesiredWidth() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxDesiredWidth");

	struct ClearMaxDesiredWidth_Params {
		
	}; ClearMaxDesiredWidth_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.ClearMaxDesiredHeight
inline void USizeBox::ClearMaxDesiredHeight() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxDesiredHeight");

	struct ClearMaxDesiredHeight_Params {
		
	}; ClearMaxDesiredHeight_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.ClearMaxAspectRatio
inline void USizeBox::ClearMaxAspectRatio() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxAspectRatio");

	struct ClearMaxAspectRatio_Params {
		
	}; ClearMaxAspectRatio_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.ClearHeightOverride
inline void USizeBox::ClearHeightOverride() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearHeightOverride");

	struct ClearHeightOverride_Params {
		
	}; ClearHeightOverride_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBoxSlot.SetVerticalAlignment
inline void USizeBoxSlot::SetVerticalAlignment(char InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		char InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBoxSlot.SetPadding
inline void USizeBoxSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBoxSlot.SetHorizontalAlignment
inline void USizeBoxSlot::SetHorizontalAlignment(char InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		char InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Slider.SetValue
inline void USlider::SetValue(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetValue");

	struct SetValue_Params {
		float InValue;
	}; SetValue_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Slider.SetStepSize
inline void USlider::SetStepSize(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetStepSize");

	struct SetStepSize_Params {
		float InValue;
	}; SetStepSize_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Slider.SetSliderHandleColor
inline void USlider::SetSliderHandleColor(struct FLinearColor InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetSliderHandleColor");

	struct SetSliderHandleColor_Params {
		struct FLinearColor InValue;
	}; SetSliderHandleColor_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Slider.SetSliderBarColor
inline void USlider::SetSliderBarColor(struct FLinearColor InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetSliderBarColor");

	struct SetSliderBarColor_Params {
		struct FLinearColor InValue;
	}; SetSliderBarColor_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Slider.SetMinValue
inline void USlider::SetMinValue(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetMinValue");

	struct SetMinValue_Params {
		float InValue;
	}; SetMinValue_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Slider.SetMaxValue
inline void USlider::SetMaxValue(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetMaxValue");

	struct SetMaxValue_Params {
		float InValue;
	}; SetMaxValue_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Slider.SetLocked
inline void USlider::SetLocked(char InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetLocked");

	struct SetLocked_Params {
		char InValue;
	}; SetLocked_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Slider.SetIndentHandle
inline void USlider::SetIndentHandle(char InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetIndentHandle");

	struct SetIndentHandle_Params {
		char InValue;
	}; SetIndentHandle_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Slider.GetValue
inline float USlider::GetValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.GetValue");

	struct GetValue_Params {
		
		float ReturnValue;

	}; GetValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Slider.GetNormalizedValue
inline float USlider::GetNormalizedValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.GetNormalizedValue");

	struct GetNormalizedValue_Params {
		
		float ReturnValue;

	}; GetNormalizedValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Spacer.SetSize
inline void USpacer::SetSize(struct FVector2D InSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Spacer.SetSize");

	struct SetSize_Params {
		struct FVector2D InSize;
	}; SetSize_Params Params;

	Params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.SetValue
inline void USpinBox::SetValue(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetValue");

	struct SetValue_Params {
		float NewValue;
	}; SetValue_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.SetMinValue
inline void USpinBox::SetMinValue(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinValue");

	struct SetMinValue_Params {
		float NewValue;
	}; SetMinValue_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.SetMinSliderValue
inline void USpinBox::SetMinSliderValue(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinSliderValue");

	struct SetMinSliderValue_Params {
		float NewValue;
	}; SetMinSliderValue_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.SetMinFractionalDigits
inline void USpinBox::SetMinFractionalDigits(int32_t NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinFractionalDigits");

	struct SetMinFractionalDigits_Params {
		int32_t NewValue;
	}; SetMinFractionalDigits_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.SetMaxValue
inline void USpinBox::SetMaxValue(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxValue");

	struct SetMaxValue_Params {
		float NewValue;
	}; SetMaxValue_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.SetMaxSliderValue
inline void USpinBox::SetMaxSliderValue(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxSliderValue");

	struct SetMaxSliderValue_Params {
		float NewValue;
	}; SetMaxSliderValue_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.SetMaxFractionalDigits
inline void USpinBox::SetMaxFractionalDigits(int32_t NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxFractionalDigits");

	struct SetMaxFractionalDigits_Params {
		int32_t NewValue;
	}; SetMaxFractionalDigits_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.SetForegroundColor
inline void USpinBox::SetForegroundColor(struct FSlateColor InForegroundColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetForegroundColor");

	struct SetForegroundColor_Params {
		struct FSlateColor InForegroundColor;
	}; SetForegroundColor_Params Params;

	Params.InForegroundColor = InForegroundColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.SetDelta
inline void USpinBox::SetDelta(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetDelta");

	struct SetDelta_Params {
		float NewValue;
	}; SetDelta_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.SetAlwaysUsesDeltaSnap
inline void USpinBox::SetAlwaysUsesDeltaSnap(char bNewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetAlwaysUsesDeltaSnap");

	struct SetAlwaysUsesDeltaSnap_Params {
		char bNewValue;
	}; SetAlwaysUsesDeltaSnap_Params Params;

	Params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
inline void USpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature");

	struct OnSpinBoxValueCommittedEvent__DelegateSignature_Params {
		float InValue;
		char CommitMethod;
	}; OnSpinBoxValueCommittedEvent__DelegateSignature_Params Params;

	Params.InValue = InValue;
	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
inline void USpinBox::OnSpinBoxValueChangedEvent__DelegateSignature(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature");

	struct OnSpinBoxValueChangedEvent__DelegateSignature_Params {
		float InValue;
	}; OnSpinBoxValueChangedEvent__DelegateSignature_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
inline void USpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature");

	struct OnSpinBoxBeginSliderMovement__DelegateSignature_Params {
		
	}; OnSpinBoxBeginSliderMovement__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.GetValue
inline float USpinBox::GetValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetValue");

	struct GetValue_Params {
		
		float ReturnValue;

	}; GetValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.SpinBox.GetMinValue
inline float USpinBox::GetMinValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinValue");

	struct GetMinValue_Params {
		
		float ReturnValue;

	}; GetMinValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.SpinBox.GetMinSliderValue
inline float USpinBox::GetMinSliderValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinSliderValue");

	struct GetMinSliderValue_Params {
		
		float ReturnValue;

	}; GetMinSliderValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.SpinBox.GetMinFractionalDigits
inline int32_t USpinBox::GetMinFractionalDigits() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinFractionalDigits");

	struct GetMinFractionalDigits_Params {
		
		int32_t ReturnValue;

	}; GetMinFractionalDigits_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.SpinBox.GetMaxValue
inline float USpinBox::GetMaxValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxValue");

	struct GetMaxValue_Params {
		
		float ReturnValue;

	}; GetMaxValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.SpinBox.GetMaxSliderValue
inline float USpinBox::GetMaxSliderValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxSliderValue");

	struct GetMaxSliderValue_Params {
		
		float ReturnValue;

	}; GetMaxSliderValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.SpinBox.GetMaxFractionalDigits
inline int32_t USpinBox::GetMaxFractionalDigits() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxFractionalDigits");

	struct GetMaxFractionalDigits_Params {
		
		int32_t ReturnValue;

	}; GetMaxFractionalDigits_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.SpinBox.GetDelta
inline float USpinBox::GetDelta() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetDelta");

	struct GetDelta_Params {
		
		float ReturnValue;

	}; GetDelta_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.SpinBox.GetAlwaysUsesDeltaSnap
inline char USpinBox::GetAlwaysUsesDeltaSnap() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetAlwaysUsesDeltaSnap");

	struct GetAlwaysUsesDeltaSnap_Params {
		
		char ReturnValue;

	}; GetAlwaysUsesDeltaSnap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.SpinBox.ClearMinValue
inline void USpinBox::ClearMinValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMinValue");

	struct ClearMinValue_Params {
		
	}; ClearMinValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.ClearMinSliderValue
inline void USpinBox::ClearMinSliderValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMinSliderValue");

	struct ClearMinSliderValue_Params {
		
	}; ClearMinSliderValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.ClearMaxValue
inline void USpinBox::ClearMaxValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMaxValue");

	struct ClearMaxValue_Params {
		
	}; ClearMaxValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.ClearMaxSliderValue
inline void USpinBox::ClearMaxSliderValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMaxSliderValue");

	struct ClearMaxSliderValue_Params {
		
	}; ClearMaxSliderValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TextBlock.SetText
inline void UTextBlock::SetText(struct FText InText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetText");

	struct SetText_Params {
		struct FText InText;
	}; SetText_Params Params;

	Params.InText = InText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TextBlock.SetStrikeBrush
inline void UTextBlock::SetStrikeBrush(struct FSlateBrush InStrikeBrush) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetStrikeBrush");

	struct SetStrikeBrush_Params {
		struct FSlateBrush InStrikeBrush;
	}; SetStrikeBrush_Params Params;

	Params.InStrikeBrush = InStrikeBrush;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TextBlock.SetShadowOffset
inline void UTextBlock::SetShadowOffset(struct FVector2D InShadowOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetShadowOffset");

	struct SetShadowOffset_Params {
		struct FVector2D InShadowOffset;
	}; SetShadowOffset_Params Params;

	Params.InShadowOffset = InShadowOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TextBlock.SetShadowColorAndOpacity
inline void UTextBlock::SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetShadowColorAndOpacity");

	struct SetShadowColorAndOpacity_Params {
		struct FLinearColor InShadowColorAndOpacity;
	}; SetShadowColorAndOpacity_Params Params;

	Params.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TextBlock.SetOpacity
inline void UTextBlock::SetOpacity(float InOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetOpacity");

	struct SetOpacity_Params {
		float InOpacity;
	}; SetOpacity_Params Params;

	Params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TextBlock.SetMinDesiredWidth
inline void UTextBlock::SetMinDesiredWidth(float InMinDesiredWidth) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetMinDesiredWidth");

	struct SetMinDesiredWidth_Params {
		float InMinDesiredWidth;
	}; SetMinDesiredWidth_Params Params;

	Params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TextBlock.SetFont
inline void UTextBlock::SetFont(struct FSlateFontInfo InFontInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetFont");

	struct SetFont_Params {
		struct FSlateFontInfo InFontInfo;
	}; SetFont_Params Params;

	Params.InFontInfo = InFontInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TextBlock.SetColorAndOpacity
inline void UTextBlock::SetColorAndOpacity(struct FSlateColor InColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetColorAndOpacity");

	struct SetColorAndOpacity_Params {
		struct FSlateColor InColorAndOpacity;
	}; SetColorAndOpacity_Params Params;

	Params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TextBlock.SetAutoWrapText
inline void UTextBlock::SetAutoWrapText(char InAutoTextWrap) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetAutoWrapText");

	struct SetAutoWrapText_Params {
		char InAutoTextWrap;
	}; SetAutoWrapText_Params Params;

	Params.InAutoTextWrap = InAutoTextWrap;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TextBlock.GetText
inline struct FText UTextBlock::GetText() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetText");

	struct GetText_Params {
		
		struct FText ReturnValue;

	}; GetText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.TextBlock.GetDynamicOutlineMaterial
inline struct UMaterialInstanceDynamic UTextBlock::GetDynamicOutlineMaterial() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetDynamicOutlineMaterial");

	struct GetDynamicOutlineMaterial_Params {
		
		struct UMaterialInstanceDynamic ReturnValue;

	}; GetDynamicOutlineMaterial_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.TextBlock.GetDynamicFontMaterial
inline struct UMaterialInstanceDynamic UTextBlock::GetDynamicFontMaterial() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetDynamicFontMaterial");

	struct GetDynamicFontMaterial_Params {
		
		struct UMaterialInstanceDynamic ReturnValue;

	}; GetDynamicFontMaterial_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Throbber.SetNumberOfPieces
inline void UThrobber::SetNumberOfPieces(int32_t InNumberOfPieces) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetNumberOfPieces");

	struct SetNumberOfPieces_Params {
		int32_t InNumberOfPieces;
	}; SetNumberOfPieces_Params Params;

	Params.InNumberOfPieces = InNumberOfPieces;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Throbber.SetAnimateVertically
inline void UThrobber::SetAnimateVertically(char bInAnimateVertically) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateVertically");

	struct SetAnimateVertically_Params {
		char bInAnimateVertically;
	}; SetAnimateVertically_Params Params;

	Params.bInAnimateVertically = bInAnimateVertically;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Throbber.SetAnimateOpacity
inline void UThrobber::SetAnimateOpacity(char bInAnimateOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateOpacity");

	struct SetAnimateOpacity_Params {
		char bInAnimateOpacity;
	}; SetAnimateOpacity_Params Params;

	Params.bInAnimateOpacity = bInAnimateOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Throbber.SetAnimateHorizontally
inline void UThrobber::SetAnimateHorizontally(char bInAnimateHorizontally) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateHorizontally");

	struct SetAnimateHorizontally_Params {
		char bInAnimateHorizontally;
	}; SetAnimateHorizontally_Params Params;

	Params.bInAnimateHorizontally = bInAnimateHorizontally;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TileView.SetEntryWidth
inline void UTileView::SetEntryWidth(float NewWidth) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TileView.SetEntryWidth");

	struct SetEntryWidth_Params {
		float NewWidth;
	}; SetEntryWidth_Params Params;

	Params.NewWidth = NewWidth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TileView.SetEntryHeight
inline void UTileView::SetEntryHeight(float NewHeight) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TileView.SetEntryHeight");

	struct SetEntryHeight_Params {
		float NewHeight;
	}; SetEntryHeight_Params Params;

	Params.NewHeight = NewHeight;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TreeView.SetItemExpansion
inline void UTreeView::SetItemExpansion(struct Object Item, char bExpandItem) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TreeView.SetItemExpansion");

	struct SetItemExpansion_Params {
		struct Object Item;
		char bExpandItem;
	}; SetItemExpansion_Params Params;

	Params.Item = Item;
	Params.bExpandItem = bExpandItem;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TreeView.ExpandAll
inline void UTreeView::ExpandAll() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TreeView.ExpandAll");

	struct ExpandAll_Params {
		
	}; ExpandAll_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TreeView.CollapseAll
inline void UTreeView::CollapseAll() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TreeView.CollapseAll");

	struct CollapseAll_Params {
		
	}; CollapseAll_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UMGSequencePlayer.SetUserTag
inline void UUMGSequencePlayer::SetUserTag(struct FName InUserTag) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UMGSequencePlayer.SetUserTag");

	struct SetUserTag_Params {
		struct FName InUserTag;
	}; SetUserTag_Params Params;

	Params.InUserTag = InUserTag;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UMGSequencePlayer.GetUserTag
inline struct FName UUMGSequencePlayer::GetUserTag() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UMGSequencePlayer.GetUserTag");

	struct GetUserTag_Params {
		
		struct FName ReturnValue;

	}; GetUserTag_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UniformGridPanel.SetSlotPadding
inline void UUniformGridPanel::SetSlotPadding(struct FMargin InSlotPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetSlotPadding");

	struct SetSlotPadding_Params {
		struct FMargin InSlotPadding;
	}; SetSlotPadding_Params Params;

	Params.InSlotPadding = InSlotPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
inline void UUniformGridPanel::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetMinDesiredSlotWidth");

	struct SetMinDesiredSlotWidth_Params {
		float InMinDesiredSlotWidth;
	}; SetMinDesiredSlotWidth_Params Params;

	Params.InMinDesiredSlotWidth = InMinDesiredSlotWidth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
inline void UUniformGridPanel::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetMinDesiredSlotHeight");

	struct SetMinDesiredSlotHeight_Params {
		float InMinDesiredSlotHeight;
	}; SetMinDesiredSlotHeight_Params Params;

	Params.InMinDesiredSlotHeight = InMinDesiredSlotHeight;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UniformGridPanel.AddChildToUniformGrid
inline struct UUniformGridSlot UUniformGridPanel::AddChildToUniformGrid(struct UWidget Content, int32_t InRow, int32_t InColumn) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.AddChildToUniformGrid");

	struct AddChildToUniformGrid_Params {
		struct UWidget Content;
		int32_t InRow;
		int32_t InColumn;
		struct UUniformGridSlot ReturnValue;

	}; AddChildToUniformGrid_Params Params;

	Params.Content = Content;
	Params.InRow = InRow;
	Params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UniformGridSlot.SetVerticalAlignment
inline void UUniformGridSlot::SetVerticalAlignment(char InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		char InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UniformGridSlot.SetRow
inline void UUniformGridSlot::SetRow(int32_t InRow) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetRow");

	struct SetRow_Params {
		int32_t InRow;
	}; SetRow_Params Params;

	Params.InRow = InRow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UniformGridSlot.SetHorizontalAlignment
inline void UUniformGridSlot::SetHorizontalAlignment(char InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		char InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UniformGridSlot.SetColumn
inline void UUniformGridSlot::SetColumn(int32_t InColumn) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetColumn");

	struct SetColumn_Params {
		int32_t InColumn;
	}; SetColumn_Params Params;

	Params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.VerticalBoxSlot.SetVerticalAlignment
inline void UVerticalBoxSlot::SetVerticalAlignment(char InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		char InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.VerticalBoxSlot.SetSize
inline void UVerticalBoxSlot::SetSize(struct FSlateChildSize InSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetSize");

	struct SetSize_Params {
		struct FSlateChildSize InSize;
	}; SetSize_Params Params;

	Params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.VerticalBoxSlot.SetPadding
inline void UVerticalBoxSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.VerticalBoxSlot.SetHorizontalAlignment
inline void UVerticalBoxSlot::SetHorizontalAlignment(char InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		char InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Viewport.Spawn
inline struct UActor UViewport::Spawn(struct UClass* ActorClass) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.Spawn");

	struct Spawn_Params {
		struct UClass* ActorClass;
		struct UActor ReturnValue;

	}; Spawn_Params Params;

	Params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Viewport.SetViewRotation
inline void UViewport::SetViewRotation(struct FRotator Rotation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.SetViewRotation");

	struct SetViewRotation_Params {
		struct FRotator Rotation;
	}; SetViewRotation_Params Params;

	Params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Viewport.SetViewLocation
inline void UViewport::SetViewLocation(struct FVector Location) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.SetViewLocation");

	struct SetViewLocation_Params {
		struct FVector Location;
	}; SetViewLocation_Params Params;

	Params.Location = Location;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Viewport.GetViewRotation
inline struct FRotator UViewport::GetViewRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewRotation");

	struct GetViewRotation_Params {
		
		struct FRotator ReturnValue;

	}; GetViewRotation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Viewport.GetViewportWorld
inline struct UWorld UViewport::GetViewportWorld() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewportWorld");

	struct GetViewportWorld_Params {
		
		struct UWorld ReturnValue;

	}; GetViewportWorld_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Viewport.GetViewLocation
inline struct FVector UViewport::GetViewLocation() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewLocation");

	struct GetViewLocation_Params {
		
		struct FVector ReturnValue;

	}; GetViewLocation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetAnimation.UnbindFromAnimationStarted
inline void UWidgetAnimation::UnbindFromAnimationStarted(struct UUserWidget Widget, struct FDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindFromAnimationStarted");

	struct UnbindFromAnimationStarted_Params {
		struct UUserWidget Widget;
		struct FDelegate Delegate;
	}; UnbindFromAnimationStarted_Params Params;

	Params.Widget = Widget;
	Params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetAnimation.UnbindFromAnimationFinished
inline void UWidgetAnimation::UnbindFromAnimationFinished(struct UUserWidget Widget, struct FDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindFromAnimationFinished");

	struct UnbindFromAnimationFinished_Params {
		struct UUserWidget Widget;
		struct FDelegate Delegate;
	}; UnbindFromAnimationFinished_Params Params;

	Params.Widget = Widget;
	Params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
inline void UWidgetAnimation::UnbindAllFromAnimationStarted(struct UUserWidget Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted");

	struct UnbindAllFromAnimationStarted_Params {
		struct UUserWidget Widget;
	}; UnbindAllFromAnimationStarted_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
inline void UWidgetAnimation::UnbindAllFromAnimationFinished(struct UUserWidget Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished");

	struct UnbindAllFromAnimationFinished_Params {
		struct UUserWidget Widget;
	}; UnbindAllFromAnimationFinished_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetAnimation.GetStartTime
inline float UWidgetAnimation::GetStartTime() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.GetStartTime");

	struct GetStartTime_Params {
		
		float ReturnValue;

	}; GetStartTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetAnimation.GetEndTime
inline float UWidgetAnimation::GetEndTime() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.GetEndTime");

	struct GetEndTime_Params {
		
		float ReturnValue;

	}; GetEndTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetAnimation.BindToAnimationStarted
inline void UWidgetAnimation::BindToAnimationStarted(struct UUserWidget Widget, struct FDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.BindToAnimationStarted");

	struct BindToAnimationStarted_Params {
		struct UUserWidget Widget;
		struct FDelegate Delegate;
	}; BindToAnimationStarted_Params Params;

	Params.Widget = Widget;
	Params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetAnimation.BindToAnimationFinished
inline void UWidgetAnimation::BindToAnimationFinished(struct UUserWidget Widget, struct FDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.BindToAnimationFinished");

	struct BindToAnimationFinished_Params {
		struct UUserWidget Widget;
		struct FDelegate Delegate;
	}; BindToAnimationFinished_Params Params;

	Params.Widget = Widget;
	Params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
inline struct UWidgetAnimationPlayCallbackProxy UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer& Result, struct UUserWidget Widget, struct UWidgetAnimation InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, char PlayMode, float PlaybackSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject");

	struct CreatePlayAnimationTimeRangeProxyObject_Params {
		struct UUMGSequencePlayer& Result;
		struct UUserWidget Widget;
		struct UWidgetAnimation InAnimation;
		float StartAtTime;
		float EndAtTime;
		int32_t NumLoopsToPlay;
		char PlayMode;
		float PlaybackSpeed;
		struct UWidgetAnimationPlayCallbackProxy ReturnValue;

	}; CreatePlayAnimationTimeRangeProxyObject_Params Params;

	Params.Widget = Widget;
	Params.InAnimation = InAnimation;
	Params.StartAtTime = StartAtTime;
	Params.EndAtTime = EndAtTime;
	Params.NumLoopsToPlay = NumLoopsToPlay;
	Params.PlayMode = PlayMode;
	Params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;


	return params.ReturnValue;
}

// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
inline struct UWidgetAnimationPlayCallbackProxy UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationProxyObject(struct UUMGSequencePlayer& Result, struct UUserWidget Widget, struct UWidgetAnimation InAnimation, float StartAtTime, int32_t NumLoopsToPlay, char PlayMode, float PlaybackSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject");

	struct CreatePlayAnimationProxyObject_Params {
		struct UUMGSequencePlayer& Result;
		struct UUserWidget Widget;
		struct UWidgetAnimation InAnimation;
		float StartAtTime;
		int32_t NumLoopsToPlay;
		char PlayMode;
		float PlaybackSpeed;
		struct UWidgetAnimationPlayCallbackProxy ReturnValue;

	}; CreatePlayAnimationProxyObject_Params Params;

	Params.Widget = Widget;
	Params.InAnimation = InAnimation;
	Params.StartAtTime = StartAtTime;
	Params.NumLoopsToPlay = NumLoopsToPlay;
	Params.PlayMode = PlayMode;
	Params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;


	return params.ReturnValue;
}

// Function UMG.WidgetComponent.SetWindowVisibility
inline void UWidgetComponent::SetWindowVisibility(enum class EWindowVisibility InVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWindowVisibility");

	struct SetWindowVisibility_Params {
		enum class EWindowVisibility InVisibility;
	}; SetWindowVisibility_Params Params;

	Params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetWindowFocusable
inline void UWidgetComponent::SetWindowFocusable(char bInWindowFocusable) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWindowFocusable");

	struct SetWindowFocusable_Params {
		char bInWindowFocusable;
	}; SetWindowFocusable_Params Params;

	Params.bInWindowFocusable = bInWindowFocusable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetWidgetSpace
inline void UWidgetComponent::SetWidgetSpace(enum class EWidgetSpace NewSpace) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWidgetSpace");

	struct SetWidgetSpace_Params {
		enum class EWidgetSpace NewSpace;
	}; SetWidgetSpace_Params Params;

	Params.NewSpace = NewSpace;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetWidget
inline void UWidgetComponent::SetWidget(struct UUserWidget Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWidget");

	struct SetWidget_Params {
		struct UUserWidget Widget;
	}; SetWidget_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetTwoSided
inline void UWidgetComponent::SetTwoSided(char bWantTwoSided) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTwoSided");

	struct SetTwoSided_Params {
		char bWantTwoSided;
	}; SetTwoSided_Params Params;

	Params.bWantTwoSided = bWantTwoSided;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetTintColorAndOpacity
inline void UWidgetComponent::SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTintColorAndOpacity");

	struct SetTintColorAndOpacity_Params {
		struct FLinearColor NewTintColorAndOpacity;
	}; SetTintColorAndOpacity_Params Params;

	Params.NewTintColorAndOpacity = NewTintColorAndOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetTickWhenOffscreen
inline void UWidgetComponent::SetTickWhenOffscreen(char bWantTickWhenOffscreen) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTickWhenOffscreen");

	struct SetTickWhenOffscreen_Params {
		char bWantTickWhenOffscreen;
	}; SetTickWhenOffscreen_Params Params;

	Params.bWantTickWhenOffscreen = bWantTickWhenOffscreen;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetRedrawTime
inline void UWidgetComponent::SetRedrawTime(float InRedrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetRedrawTime");

	struct SetRedrawTime_Params {
		float InRedrawTime;
	}; SetRedrawTime_Params Params;

	Params.InRedrawTime = InRedrawTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetPivot
inline void UWidgetComponent::SetPivot(struct FVector2D& InPivot) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetPivot");

	struct SetPivot_Params {
		struct FVector2D& InPivot;
	}; SetPivot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InPivot = Params.InPivot;

}

// Function UMG.WidgetComponent.SetOwnerPlayer
inline void UWidgetComponent::SetOwnerPlayer(struct ULocalPlayer LocalPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetOwnerPlayer");

	struct SetOwnerPlayer_Params {
		struct ULocalPlayer LocalPlayer;
	}; SetOwnerPlayer_Params Params;

	Params.LocalPlayer = LocalPlayer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetManuallyRedraw
inline void UWidgetComponent::SetManuallyRedraw(char bUseManualRedraw) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetManuallyRedraw");

	struct SetManuallyRedraw_Params {
		char bUseManualRedraw;
	}; SetManuallyRedraw_Params Params;

	Params.bUseManualRedraw = bUseManualRedraw;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetGeometryMode
inline void UWidgetComponent::SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetGeometryMode");

	struct SetGeometryMode_Params {
		enum class EWidgetGeometryMode InGeometryMode;
	}; SetGeometryMode_Params Params;

	Params.InGeometryMode = InGeometryMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetDrawSize
inline void UWidgetComponent::SetDrawSize(struct FVector2D Size) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetDrawSize");

	struct SetDrawSize_Params {
		struct FVector2D Size;
	}; SetDrawSize_Params Params;

	Params.Size = Size;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetDrawAtDesiredSize
inline void UWidgetComponent::SetDrawAtDesiredSize(char bInDrawAtDesiredSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetDrawAtDesiredSize");

	struct SetDrawAtDesiredSize_Params {
		char bInDrawAtDesiredSize;
	}; SetDrawAtDesiredSize_Params Params;

	Params.bInDrawAtDesiredSize = bInDrawAtDesiredSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetCylinderArcAngle
inline void UWidgetComponent::SetCylinderArcAngle(float InCylinderArcAngle) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetCylinderArcAngle");

	struct SetCylinderArcAngle_Params {
		float InCylinderArcAngle;
	}; SetCylinderArcAngle_Params Params;

	Params.InCylinderArcAngle = InCylinderArcAngle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetBackgroundColor
inline void UWidgetComponent::SetBackgroundColor(struct FLinearColor NewBackgroundColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetBackgroundColor");

	struct SetBackgroundColor_Params {
		struct FLinearColor NewBackgroundColor;
	}; SetBackgroundColor_Params Params;

	Params.NewBackgroundColor = NewBackgroundColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.RequestRedraw
inline void UWidgetComponent::RequestRedraw() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.RequestRedraw");

	struct RequestRedraw_Params {
		
	}; RequestRedraw_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.GetWindowVisiblility
inline enum class EWindowVisibility UWidgetComponent::GetWindowVisiblility() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWindowVisiblility");

	struct GetWindowVisiblility_Params {
		
		enum class EWindowVisibility ReturnValue;

	}; GetWindowVisiblility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetWindowFocusable
inline char UWidgetComponent::GetWindowFocusable() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWindowFocusable");

	struct GetWindowFocusable_Params {
		
		char ReturnValue;

	}; GetWindowFocusable_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetWidgetSpace
inline enum class EWidgetSpace UWidgetComponent::GetWidgetSpace() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWidgetSpace");

	struct GetWidgetSpace_Params {
		
		enum class EWidgetSpace ReturnValue;

	}; GetWidgetSpace_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetUserWidgetObject
inline struct UUserWidget UWidgetComponent::GetUserWidgetObject() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetUserWidgetObject");

	struct GetUserWidgetObject_Params {
		
		struct UUserWidget ReturnValue;

	}; GetUserWidgetObject_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetTwoSided
inline char UWidgetComponent::GetTwoSided() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetTwoSided");

	struct GetTwoSided_Params {
		
		char ReturnValue;

	}; GetTwoSided_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetTickWhenOffscreen
inline char UWidgetComponent::GetTickWhenOffscreen() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetTickWhenOffscreen");

	struct GetTickWhenOffscreen_Params {
		
		char ReturnValue;

	}; GetTickWhenOffscreen_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetRenderTarget
inline struct UTextureRenderTarget2D UWidgetComponent::GetRenderTarget() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetRenderTarget");

	struct GetRenderTarget_Params {
		
		struct UTextureRenderTarget2D ReturnValue;

	}; GetRenderTarget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetRedrawTime
inline float UWidgetComponent::GetRedrawTime() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetRedrawTime");

	struct GetRedrawTime_Params {
		
		float ReturnValue;

	}; GetRedrawTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetPivot
inline struct FVector2D UWidgetComponent::GetPivot() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetPivot");

	struct GetPivot_Params {
		
		struct FVector2D ReturnValue;

	}; GetPivot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetOwnerPlayer
inline struct ULocalPlayer UWidgetComponent::GetOwnerPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetOwnerPlayer");

	struct GetOwnerPlayer_Params {
		
		struct ULocalPlayer ReturnValue;

	}; GetOwnerPlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetMaterialInstance
inline struct UMaterialInstanceDynamic UWidgetComponent::GetMaterialInstance() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetMaterialInstance");

	struct GetMaterialInstance_Params {
		
		struct UMaterialInstanceDynamic ReturnValue;

	}; GetMaterialInstance_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetManuallyRedraw
inline char UWidgetComponent::GetManuallyRedraw() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetManuallyRedraw");

	struct GetManuallyRedraw_Params {
		
		char ReturnValue;

	}; GetManuallyRedraw_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetGeometryMode
inline enum class EWidgetGeometryMode UWidgetComponent::GetGeometryMode() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetGeometryMode");

	struct GetGeometryMode_Params {
		
		enum class EWidgetGeometryMode ReturnValue;

	}; GetGeometryMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetDrawSize
inline struct FVector2D UWidgetComponent::GetDrawSize() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetDrawSize");

	struct GetDrawSize_Params {
		
		struct FVector2D ReturnValue;

	}; GetDrawSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetDrawAtDesiredSize
inline char UWidgetComponent::GetDrawAtDesiredSize() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetDrawAtDesiredSize");

	struct GetDrawAtDesiredSize_Params {
		
		char ReturnValue;

	}; GetDrawAtDesiredSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetCylinderArcAngle
inline float UWidgetComponent::GetCylinderArcAngle() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetCylinderArcAngle");

	struct GetCylinderArcAngle_Params {
		
		float ReturnValue;

	}; GetCylinderArcAngle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetCurrentDrawSize
inline struct FVector2D UWidgetComponent::GetCurrentDrawSize() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetCurrentDrawSize");

	struct GetCurrentDrawSize_Params {
		
		struct FVector2D ReturnValue;

	}; GetCurrentDrawSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetInteractionComponent.SetFocus
inline void UWidgetInteractionComponent::SetFocus(struct UWidget FocusWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SetFocus");

	struct SetFocus_Params {
		struct UWidget FocusWidget;
	}; SetFocus_Params Params;

	Params.FocusWidget = FocusWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetInteractionComponent.SetCustomHitResult
inline void UWidgetInteractionComponent::SetCustomHitResult(struct FHitResult& HitResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SetCustomHitResult");

	struct SetCustomHitResult_Params {
		struct FHitResult& HitResult;
	}; SetCustomHitResult_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	HitResult = Params.HitResult;

}

// Function UMG.WidgetInteractionComponent.SendKeyChar
inline char UWidgetInteractionComponent::SendKeyChar(struct FString Characters, char bRepeat) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SendKeyChar");

	struct SendKeyChar_Params {
		struct FString Characters;
		char bRepeat;
		char ReturnValue;

	}; SendKeyChar_Params Params;

	Params.Characters = Characters;
	Params.bRepeat = bRepeat;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetInteractionComponent.ScrollWheel
inline void UWidgetInteractionComponent::ScrollWheel(float ScrollDelta) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ScrollWheel");

	struct ScrollWheel_Params {
		float ScrollDelta;
	}; ScrollWheel_Params Params;

	Params.ScrollDelta = ScrollDelta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetInteractionComponent.ReleasePointerKey
inline void UWidgetInteractionComponent::ReleasePointerKey(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ReleasePointerKey");

	struct ReleasePointerKey_Params {
		struct FKey Key;
	}; ReleasePointerKey_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetInteractionComponent.ReleaseKey
inline char UWidgetInteractionComponent::ReleaseKey(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ReleaseKey");

	struct ReleaseKey_Params {
		struct FKey Key;
		char ReturnValue;

	}; ReleaseKey_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetInteractionComponent.PressPointerKey
inline void UWidgetInteractionComponent::PressPointerKey(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressPointerKey");

	struct PressPointerKey_Params {
		struct FKey Key;
	}; PressPointerKey_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetInteractionComponent.PressKey
inline char UWidgetInteractionComponent::PressKey(struct FKey Key, char bRepeat) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressKey");

	struct PressKey_Params {
		struct FKey Key;
		char bRepeat;
		char ReturnValue;

	}; PressKey_Params Params;

	Params.Key = Key;
	Params.bRepeat = bRepeat;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetInteractionComponent.PressAndReleaseKey
inline char UWidgetInteractionComponent::PressAndReleaseKey(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressAndReleaseKey");

	struct PressAndReleaseKey_Params {
		struct FKey Key;
		char ReturnValue;

	}; PressAndReleaseKey_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
inline char UWidgetInteractionComponent::IsOverInteractableWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverInteractableWidget");

	struct IsOverInteractableWidget_Params {
		
		char ReturnValue;

	}; IsOverInteractableWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
inline char UWidgetInteractionComponent::IsOverHitTestVisibleWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget");

	struct IsOverHitTestVisibleWidget_Params {
		
		char ReturnValue;

	}; IsOverHitTestVisibleWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
inline char UWidgetInteractionComponent::IsOverFocusableWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverFocusableWidget");

	struct IsOverFocusableWidget_Params {
		
		char ReturnValue;

	}; IsOverFocusableWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetInteractionComponent.GetLastHitResult
inline struct FHitResult UWidgetInteractionComponent::GetLastHitResult() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.GetLastHitResult");

	struct GetLastHitResult_Params {
		
		struct FHitResult ReturnValue;

	}; GetLastHitResult_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
inline struct UWidgetComponent UWidgetInteractionComponent::GetHoveredWidgetComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent");

	struct GetHoveredWidgetComponent_Params {
		
		struct UWidgetComponent ReturnValue;

	}; GetHoveredWidgetComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetInteractionComponent.Get2DHitLocation
inline struct FVector2D UWidgetInteractionComponent::Get2DHitLocation() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.Get2DHitLocation");

	struct Get2DHitLocation_Params {
		
		struct FVector2D ReturnValue;

	}; Get2DHitLocation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetSwitcher.SetActiveWidgetIndex
inline void UWidgetSwitcher::SetActiveWidgetIndex(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.SetActiveWidgetIndex");

	struct SetActiveWidgetIndex_Params {
		int32_t Index;
	}; SetActiveWidgetIndex_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetSwitcher.SetActiveWidget
inline void UWidgetSwitcher::SetActiveWidget(struct UWidget Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.SetActiveWidget");

	struct SetActiveWidget_Params {
		struct UWidget Widget;
	}; SetActiveWidget_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetSwitcher.GetWidgetAtIndex
inline struct UWidget UWidgetSwitcher::GetWidgetAtIndex(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetWidgetAtIndex");

	struct GetWidgetAtIndex_Params {
		int32_t Index;
		struct UWidget ReturnValue;

	}; GetWidgetAtIndex_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetSwitcher.GetNumWidgets
inline int32_t UWidgetSwitcher::GetNumWidgets() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetNumWidgets");

	struct GetNumWidgets_Params {
		
		int32_t ReturnValue;

	}; GetNumWidgets_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
inline int32_t UWidgetSwitcher::GetActiveWidgetIndex() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetActiveWidgetIndex");

	struct GetActiveWidgetIndex_Params {
		
		int32_t ReturnValue;

	}; GetActiveWidgetIndex_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetSwitcher.GetActiveWidget
inline struct UWidget UWidgetSwitcher::GetActiveWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetActiveWidget");

	struct GetActiveWidget_Params {
		
		struct UWidget ReturnValue;

	}; GetActiveWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
inline void UWidgetSwitcherSlot::SetVerticalAlignment(char InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		char InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetSwitcherSlot.SetPadding
inline void UWidgetSwitcherSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
inline void UWidgetSwitcherSlot::SetHorizontalAlignment(char InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		char InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WindowTitleBarArea.SetVerticalAlignment
inline void UWindowTitleBarArea::SetVerticalAlignment(char InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		char InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WindowTitleBarArea.SetPadding
inline void UWindowTitleBarArea::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WindowTitleBarArea.SetHorizontalAlignment
inline void UWindowTitleBarArea::SetHorizontalAlignment(char InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		char InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
inline void UWindowTitleBarAreaSlot::SetVerticalAlignment(char InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		char InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WindowTitleBarAreaSlot.SetPadding
inline void UWindowTitleBarAreaSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
inline void UWindowTitleBarAreaSlot::SetHorizontalAlignment(char InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		char InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WrapBox.SetInnerSlotPadding
inline void UWrapBox::SetInnerSlotPadding(struct FVector2D InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBox.SetInnerSlotPadding");

	struct SetInnerSlotPadding_Params {
		struct FVector2D InPadding;
	}; SetInnerSlotPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WrapBox.SetHorizontalAlignment
inline void UWrapBox::SetHorizontalAlignment(char InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBox.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		char InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WrapBox.AddChildToWrapBox
inline struct UWrapBoxSlot UWrapBox::AddChildToWrapBox(struct UWidget Content) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBox.AddChildToWrapBox");

	struct AddChildToWrapBox_Params {
		struct UWidget Content;
		struct UWrapBoxSlot ReturnValue;

	}; AddChildToWrapBox_Params Params;

	Params.Content = Content;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WrapBoxSlot.SetVerticalAlignment
inline void UWrapBoxSlot::SetVerticalAlignment(char InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		char InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WrapBoxSlot.SetPadding
inline void UWrapBoxSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WrapBoxSlot.SetHorizontalAlignment
inline void UWrapBoxSlot::SetHorizontalAlignment(char InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		char InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
inline void UWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan");

	struct SetFillSpanWhenLessThan_Params {
		float InFillSpanWhenLessThan;
	}; SetFillSpanWhenLessThan_Params Params;

	Params.InFillSpanWhenLessThan = InFillSpanWhenLessThan;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WrapBoxSlot.SetFillEmptySpace
inline void UWrapBoxSlot::SetFillEmptySpace(char InbFillEmptySpace) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetFillEmptySpace");

	struct SetFillEmptySpace_Params {
		char InbFillEmptySpace;
	}; SetFillEmptySpace_Params Params;

	Params.InbFillEmptySpace = InbFillEmptySpace;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

