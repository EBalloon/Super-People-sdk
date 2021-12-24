// Enum UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8_t {
	ESlateAccessibleBehavior = 0,
	ESlateAccessibleBehavior = 1,
	ESlateAccessibleBehavior = 2,
	ESlateAccessibleBehavior = 3,
	ESlateAccessibleBehavior = 4,
	ESlateAccessibleBehavior = 5,
};

// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t {
	ESlateVisibility = 0,
	ESlateVisibility = 1,
	ESlateVisibility = 2,
	ESlateVisibility = 3,
	ESlateVisibility = 4,
	ESlateVisibility = 5,
};

// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8_t {
	EVirtualKeyboardType = 0,
	EVirtualKeyboardType = 1,
	EVirtualKeyboardType = 2,
	EVirtualKeyboardType = 3,
	EVirtualKeyboardType = 4,
	EVirtualKeyboardType = 5,
	EVirtualKeyboardType = 6,
};

// Enum UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8_t {
	EWidgetAnimationEvent = 0,
	EWidgetAnimationEvent = 1,
	EWidgetAnimationEvent = 2,
};

// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t {
	EUMGSequencePlayMode = 0,
	EUMGSequencePlayMode = 1,
	EUMGSequencePlayMode = 2,
	EUMGSequencePlayMode = 3,
};

// Enum UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8_t {
	EWidgetTickFrequency = 0,
	EWidgetTickFrequency = 1,
	EWidgetTickFrequency = 2,
};

// Enum UMG.EDragPivot
enum class EDragPivot : uint8_t {
	EDragPivot = 0,
	EDragPivot = 1,
	EDragPivot = 2,
	EDragPivot = 3,
	EDragPivot = 4,
	EDragPivot = 5,
	EDragPivot = 6,
	EDragPivot = 7,
	EDragPivot = 8,
	EDragPivot = 9,
	EDragPivot = 10,
};

// Enum UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8_t {
	EDynamicBoxType = 0,
	EDynamicBoxType = 1,
	EDynamicBoxType = 2,
	EDynamicBoxType = 3,
	EDynamicBoxType = 4,
};

// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t {
	ESlateSizeRule = 0,
	ESlateSizeRule = 1,
	ESlateSizeRule = 2,
};

// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t {
	EWidgetDesignFlags = 0,
	EWidgetDesignFlags = 1,
	EWidgetDesignFlags = 2,
	EWidgetDesignFlags = 4,
	EWidgetDesignFlags = 5,
};

// Enum UMG.EBindingKind
enum class EBindingKind : uint8_t {
	EBindingKind = 0,
	EBindingKind = 1,
	EBindingKind = 2,
};

// Enum UMG.EWindowVisibility
enum class EWindowVisibility : uint8_t {
	EWindowVisibility = 0,
	EWindowVisibility = 1,
	EWindowVisibility = 2,
};

// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8_t {
	EWidgetGeometryMode = 0,
	EWidgetGeometryMode = 1,
	EWidgetGeometryMode = 2,
};

// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t {
	EWidgetBlendMode = 0,
	EWidgetBlendMode = 1,
	EWidgetBlendMode = 2,
	EWidgetBlendMode = 3,
};

// Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8_t {
	EWidgetTimingPolicy = 0,
	EWidgetTimingPolicy = 1,
	EWidgetTimingPolicy = 2,
};

// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t {
	EWidgetSpace = 0,
	EWidgetSpace = 1,
	EWidgetSpace = 2,
};

// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8_t {
	EWidgetInteractionSource = 0,
	EWidgetInteractionSource = 1,
	EWidgetInteractionSource = 2,
	EWidgetInteractionSource = 3,
	EWidgetInteractionSource = 4,
};

// Class UMG.Widget
class UWidget : public UVisual {

public:

	struct Unknown Slot; // 0x28 (8)
	struct FDelegate bIsEnabledDelegate; // 0x30 (16)
	struct FText ToolTipText; // 0x40 (24)
	struct FDelegate ToolTipTextDelegate; // 0x58 (16)
	struct Unknown ToolTipWidget; // 0x68 (8)
	struct FDelegate ToolTipWidgetDelegate; // 0x70 (16)
	struct FDelegate VisibilityDelegate; // 0x80 (16)
	struct Unknown RenderTransform; // 0x90 (28)
	struct Unknown RenderTransformPivot; // 0xAC (8)
	char bIsVariable : 0; // 0xB4 (1)
	char bCreatedByConstructionScript : 0; // 0xB4 (1)
	char bIsEnabled : 0; // 0xB4 (1)
	char bOverride_Cursor : 0; // 0xB4 (1)
	struct Unknown AccessibleWidgetData; // 0xB8 (8)
	char bIsVolatile : 0; // 0xC0 (1)
	char Cursor; // 0xC1 (1)
	enum class Unknow Clipping; // 0xC2 (1)
	enum class Unknow Visibility; // 0xC3 (1)
	float RenderOpacity; // 0xC4 (4)
	struct Unknown Navigation; // 0xC8 (8)
	enum class Unknow FlowDirectionPreference; // 0xD0 (1)
	struct TArray<Unknown> NativeBindings; // 0xF8 (16)

	void SetVisibility(enum class Unknow InVisibility); // Function UMG.Widget.SetVisibility(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338C9F0>
	void SetUserFocus(struct Unknown PlayerController); // Function UMG.Widget.SetUserFocus(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338C7D0>
	void SetToolTipText(struct FText& InToolTipText); // Function UMG.Widget.SetToolTipText(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338C700>
	void SetToolTip(struct Unknown Widget); // Function UMG.Widget.SetToolTip(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338C680>
	void SetRenderTranslation(struct Unknown Translation); // Function UMG.Widget.SetRenderTranslation(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338C570>
	void SetRenderTransformPivot(struct Unknown Pivot); // Function UMG.Widget.SetRenderTransformPivot(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338C4F0>
	void SetRenderTransformAngle(float Angle); // Function UMG.Widget.SetRenderTransformAngle(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338C470>
	void SetRenderTransform(struct Unknown InTransform); // Function UMG.Widget.SetRenderTransform(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338C390>
	void SetRenderShear(struct Unknown Shear); // Function UMG.Widget.SetRenderShear(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338C310>
	void SetRenderScale(struct Unknown Scale); // Function UMG.Widget.SetRenderScale(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338C290>
	void SetRenderOpacity(float InOpacity); // Function UMG.Widget.SetRenderOpacity(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338C210>
	void SetNavigationRuleExplicit(enum class Unknow Direction, struct Unknown InWidget); // Function UMG.Widget.SetNavigationRuleExplicit(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338C0C0>
	void SetNavigationRuleCustomBoundary(enum class Unknow Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustomBoundary(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338BFE0>
	void SetNavigationRuleCustom(enum class Unknow Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustom(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338BF00>
	void SetNavigationRuleBase(enum class Unknow Direction, enum class Unknow Rule); // Function UMG.Widget.SetNavigationRuleBase(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338BE40>
	void SetNavigationRule(enum class Unknow Direction, enum class Unknow Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetNavigationRule(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338BD30>
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338BD10>
	void SetIsEnabled(char bInIsEnabled); // Function UMG.Widget.SetIsEnabled(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338BC80>
	void SetFocus(); // Function UMG.Widget.SetFocus(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338BBE0>
	void SetCursor(char InCursor); // Function UMG.Widget.SetCursor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338BB60>
	void SetClipping(enum class Unknow InClipping); // Function UMG.Widget.SetClipping(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338BAE0>
	void SetAllNavigationRules(enum class Unknow Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetAllNavigationRules(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338BA20>
	void ResetCursor(); // Function UMG.Widget.ResetCursor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338BA00>
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B9E0>
	struct Unknown OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnPointerEvent__DelegateSignature(struct Unknown MyGeometry, struct Unknown& MouseEvent); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature(Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char IsVisible(); // Function UMG.Widget.IsVisible(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B9B0>
	char IsHovered(); // Function UMG.Widget.IsHovered(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EE2E60>
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B990>
	char HasUserFocusedDescendants(struct Unknown PlayerController); // Function UMG.Widget.HasUserFocusedDescendants(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B900>
	char HasUserFocus(struct Unknown PlayerController); // Function UMG.Widget.HasUserFocus(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B870>
	char HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex); // Function UMG.Widget.HasMouseCaptureByUser(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B7B0>
	char HasMouseCapture(); // Function UMG.Widget.HasMouseCapture(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B780>
	char HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B750>
	char HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B720>
	char HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B6F0>
	struct Unknown GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow GetVisibility(); // Function UMG.Widget.GetVisibility(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B6C0>
	struct Unknown GetTickSpaceGeometry(); // Function UMG.Widget.GetTickSpaceGeometry(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B5A0>
	struct FText GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	enum class Unknow GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	float GetRenderTransformAngle(); // Function UMG.Widget.GetRenderTransformAngle(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B570>
	float GetRenderOpacity(); // Function UMG.Widget.GetRenderOpacity(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B540>
	struct Unknown GetParent(); // Function UMG.Widget.GetParent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B510>
	struct Unknown GetPaintSpaceGeometry(); // Function UMG.Widget.GetPaintSpaceGeometry(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B4D0>
	struct Unknown GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer(BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B4A0>
	struct Unknown GetOwningLocalPlayer(); // Function UMG.Widget.GetOwningLocalPlayer(BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B470>
	char GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature(Public|Delegate|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char GetIsEnabled(); // Function UMG.Widget.GetIsEnabled(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B440>
	int32_t GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GetGameInstance(); // Function UMG.Widget.GetGameInstance(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B410>
	float GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GetDesiredSize(); // Function UMG.Widget.GetDesiredSize(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B3D0>
	enum class Unknow GetClipping(); // Function UMG.Widget.GetClipping(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B3A0>
	enum class Unknow GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B360>
	char GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GenerateWidgetForString__DelegateSignature(struct FString Item); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown GenerateWidgetForObject__DelegateSignature(struct Unknown Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature(Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ForceVolatile(char bForce); // Function UMG.Widget.ForceVolatile(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B2D0>
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B2B0>
};

// Class UMG.UserWidget
class UUserWidget : public UWidget {

public:

	struct Unknown ColorAndOpacity; // 0x110 (16)
	struct FDelegate ColorAndOpacityDelegate; // 0x120 (16)
	struct Unknown ForegroundColor; // 0x130 (40)
	struct FDelegate ForegroundColorDelegate; // 0x158 (16)
	struct Unknown Padding; // 0x168 (16)
	struct TArray<Unknown> ActiveSequencePlayers; // 0x178 (16)
	struct TArray<Unknown> StoppedSequencePlayers; // 0x188 (16)
	char NoPixelSnapping : 0; // 0x198 (1)
	struct FDelegate NoPixelSnappingDelegate; // 0x19C (16)
	struct TArray<Unknown> NamedSlotBindings; // 0x1B0 (16)
	struct Unknown WidgetTree; // 0x1C0 (8)
	int32_t Priority; // 0x1C8 (4)
	char bSupportsKeyboardFocus : 0; // 0x1CC (1)
	char bIsFocusable : 0; // 0x1CC (1)
	char bStopAction : 0; // 0x1CC (1)
	char bHasScriptImplementedTick : 0; // 0x1CC (1)
	char bHasScriptImplementedPaint : 0; // 0x1CC (1)
	char bCookedWidgetTree : 0; // 0x1CC (1)
	enum class Unknow TickFrequency; // 0x1D8 (1)
	struct Unknown InputComponent; // 0x1E0 (8)
	struct TArray<Unknown> AnimationCallbacks; // 0x1E8 (16)

	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent(Final|Native|Protected|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3389700>
	void UnbindFromAnimationStarted(struct Unknown Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationStarted(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3389620>
	void UnbindFromAnimationFinished(struct Unknown Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationFinished(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3389540>
	void UnbindAllFromAnimationStarted(struct Unknown Animation); // Function UMG.UserWidget.UnbindAllFromAnimationStarted(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33894C0>
	void UnbindAllFromAnimationFinished(struct Unknown Animation); // Function UMG.UserWidget.UnbindAllFromAnimationFinished(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3389440>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function UMG.UserWidget.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void StopListeningForInputAction(struct FName ActionName, char EventType); // Function UMG.UserWidget.StopListeningForInputAction(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3389380>
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3389360>
	void StopAnimationsAndLatentActions(); // Function UMG.UserWidget.StopAnimationsAndLatentActions(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3389340>
	void StopAnimation(struct Unknown InAnimation); // Function UMG.UserWidget.StopAnimation(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33892C0>
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33892A0>
	void SetPositionInViewport(struct Unknown Position, char bRemoveDPIScale); // Function UMG.UserWidget.SetPositionInViewport(Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3388BC0>
	void SetPlaybackSpeed(struct Unknown InAnimation, float PlaybackSpeed); // Function UMG.UserWidget.SetPlaybackSpeed(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3388AF0>
	void SetPadding(struct Unknown InPadding); // Function UMG.UserWidget.SetPadding(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3388A60>
	void SetOwningPlayer(struct Unknown LocalPlayerController); // Function UMG.UserWidget.SetOwningPlayer(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33889E0>
	void SetNumLoopsToPlay(struct Unknown InAnimation, int32_t NumLoopsToPlay); // Function UMG.UserWidget.SetNumLoopsToPlay(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3388820>
	void SetNoPixelSnapping(char InNoSnapping); // Function UMG.UserWidget.SetNoPixelSnapping(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3388790>
	void SetInputActionPriority(int32_t NewPriority); // Function UMG.UserWidget.SetInputActionPriority(Final|Native|Protected|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3388440>
	void SetInputActionBlocking(char bShouldBlock); // Function UMG.UserWidget.SetInputActionBlocking(Final|Native|Protected|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33883B0>
	void SetForegroundColor(struct Unknown InForegroundColor); // Function UMG.UserWidget.SetForegroundColor(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3388240>
	void SetDesiredSizeInViewport(struct Unknown Size); // Function UMG.UserWidget.SetDesiredSizeInViewport(Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3387FB0>
	void SetColorAndOpacity(struct Unknown InColorAndOpacity); // Function UMG.UserWidget.SetColorAndOpacity(Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3387EB0>
	void SetAnchorsInViewport(struct Unknown Anchors); // Function UMG.UserWidget.SetAnchorsInViewport(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3387AF0>
	void SetAlignmentInViewport(struct Unknown Alignment); // Function UMG.UserWidget.SetAlignmentInViewport(Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3387A70>
	void ReverseAnimation(struct Unknown InAnimation); // Function UMG.UserWidget.ReverseAnimation(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33879F0>
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x20497C0>
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent(Final|Native|Protected|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33879D0>
	void PreConstruct(char IsDesignTime); // Function UMG.UserWidget.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PlaySound(struct Unknown SoundToPlay); // Function UMG.UserWidget.PlaySound(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3387950>
	struct Unknown PlayAnimationTimeRange(struct Unknown InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, char PlayMode, float PlaybackSpeed, char bRestoreState); // Function UMG.UserWidget.PlayAnimationTimeRange(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3387760>
	struct Unknown PlayAnimationReverse(struct Unknown InAnimation, float PlaybackSpeed, char bRestoreState); // Function UMG.UserWidget.PlayAnimationReverse(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3387650>
	struct Unknown PlayAnimationForward(struct Unknown InAnimation, float PlaybackSpeed, char bRestoreState); // Function UMG.UserWidget.PlayAnimationForward(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3387540>
	struct Unknown PlayAnimation(struct Unknown InAnimation, float StartAtTime, int32_t NumLoopsToPlay, char PlayMode, float PlaybackSpeed, char bRestoreState); // Function UMG.UserWidget.PlayAnimation(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3387380>
	float PauseAnimation(struct Unknown InAnimation); // Function UMG.UserWidget.PauseAnimation(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33872E0>
	struct Unknown OnTouchStarted(struct Unknown MyGeometry, struct Unknown& InTouchEvent); // Function UMG.UserWidget.OnTouchStarted(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnTouchMoved(struct Unknown MyGeometry, struct Unknown& InTouchEvent); // Function UMG.UserWidget.OnTouchMoved(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnTouchGesture(struct Unknown MyGeometry, struct Unknown& GestureEvent); // Function UMG.UserWidget.OnTouchGesture(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnTouchForceChanged(struct Unknown MyGeometry, struct Unknown& InTouchEvent); // Function UMG.UserWidget.OnTouchForceChanged(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnTouchEnded(struct Unknown MyGeometry, struct Unknown& InTouchEvent); // Function UMG.UserWidget.OnTouchEnded(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnRemovedFromFocusPath(struct Unknown InFocusEvent); // Function UMG.UserWidget.OnRemovedFromFocusPath(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnPreviewMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UMG.UserWidget.OnPreviewMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnPreviewKeyDown(struct Unknown MyGeometry, struct Unknown InKeyEvent); // Function UMG.UserWidget.OnPreviewKeyDown(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnPaint(struct Unknown& Context); // Function UMG.UserWidget.OnPaint(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseWheel(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UMG.UserWidget.OnMouseWheel(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseMove(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UMG.UserWidget.OnMouseMove(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseLeave(struct Unknown& MouseEvent); // Function UMG.UserWidget.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseEnter(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UMG.UserWidget.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMouseCaptureLost(); // Function UMG.UserWidget.OnMouseCaptureLost(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseButtonUp(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UMG.UserWidget.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseButtonDown(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function UMG.UserWidget.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMouseButtonDoubleClick(struct Unknown InMyGeometry, struct Unknown& InMouseEvent); // Function UMG.UserWidget.OnMouseButtonDoubleClick(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnMotionDetected(struct Unknown MyGeometry, struct Unknown InMotionEvent); // Function UMG.UserWidget.OnMotionDetected(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnKeyUp(struct Unknown MyGeometry, struct Unknown InKeyEvent); // Function UMG.UserWidget.OnKeyUp(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnKeyDown(struct Unknown MyGeometry, struct Unknown InKeyEvent); // Function UMG.UserWidget.OnKeyDown(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnKeyChar(struct Unknown MyGeometry, struct Unknown InCharacterEvent); // Function UMG.UserWidget.OnKeyChar(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnInitialized(); // Function UMG.UserWidget.OnInitialized(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct Unknown OnFocusReceived(struct Unknown MyGeometry, struct Unknown InFocusEvent); // Function UMG.UserWidget.OnFocusReceived(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnFocusLost(struct Unknown InFocusEvent); // Function UMG.UserWidget.OnFocusLost(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDrop(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UMG.UserWidget.OnDrop(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char OnDragOver(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UMG.UserWidget.OnDragOver(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragLeave(struct Unknown PointerEvent, struct Unknown Operation); // Function UMG.UserWidget.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragEnter(struct Unknown MyGeometry, struct Unknown PointerEvent, struct Unknown Operation); // Function UMG.UserWidget.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragDetected(struct Unknown MyGeometry, struct Unknown& PointerEvent, struct Unknown& Operation); // Function UMG.UserWidget.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnDragCancelled(struct Unknown& PointerEvent, struct Unknown Operation); // Function UMG.UserWidget.OnDragCancelled(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnAnimationStarted(struct Unknown Animation); // Function UMG.UserWidget.OnAnimationStarted(BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3387250>
	void OnAnimationFinished(struct Unknown Animation); // Function UMG.UserWidget.OnAnimationFinished(BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33871C0>
	struct Unknown OnAnalogValueChanged(struct Unknown MyGeometry, struct Unknown InAnalogInputEvent); // Function UMG.UserWidget.OnAnalogValueChanged(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnAddedToFocusPath(struct Unknown InFocusEvent); // Function UMG.UserWidget.OnAddedToFocusPath(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ListenForInputAction(struct FName ActionName, char EventType, char bConsume, struct FDelegate Callback); // Function UMG.UserWidget.ListenForInputAction(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3387040>
	char IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3387010>
	char IsListeningForInputAction(struct FName ActionName); // Function UMG.UserWidget.IsListeningForInputAction(Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3386F80>
	char IsInViewport(); // Function UMG.UserWidget.IsInViewport(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3386BF0>
	char IsInteractable(); // Function UMG.UserWidget.IsInteractable(BlueprintCosmetic|Event|Public|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3386F50>
	char IsAnimationPlayingForward(struct Unknown InAnimation); // Function UMG.UserWidget.IsAnimationPlayingForward(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3386EC0>
	char IsAnimationPlaying(struct Unknown InAnimation); // Function UMG.UserWidget.IsAnimationPlaying(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3386E30>
	struct Unknown GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3386C20>
	char GetIsVisible(); // Function UMG.UserWidget.GetIsVisible(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3386BF0>
	float GetAnimationCurrentTime(struct Unknown InAnimation); // Function UMG.UserWidget.GetAnimationCurrentTime(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3386AF0>
	struct Unknown GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3386AB0>
	struct Unknown GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport(Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3386A70>
	void Destruct(); // Function UMG.UserWidget.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function UMG.UserWidget.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void CancelLatentActions(); // Function UMG.UserWidget.CancelLatentActions(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3386A10>
	void BindToAnimationStarted(struct Unknown Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationStarted(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3386930>
	void BindToAnimationFinished(struct Unknown Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationFinished(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3386850>
	void BindToAnimationEvent(struct Unknown Animation, struct FDelegate Delegate, enum class Unknow AnimationEvent, struct FName UserTag); // Function UMG.UserWidget.BindToAnimationEvent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33866E0>
	void AddToViewport(int32_t ZOrder); // Function UMG.UserWidget.AddToViewport(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3386660>
	char AddToPlayerScreen(int32_t ZOrder); // Function UMG.UserWidget.AddToPlayerScreen(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33865D0>
};

// Class UMG.PanelWidget
class UPanelWidget : public UWidget {

public:

	struct TArray<Unknown> Slots; // 0x108 (16)

	char RemoveChildAt(int32_t Index); // Function UMG.PanelWidget.RemoveChildAt(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33770E0>
	char RemoveChild(struct Unknown Content); // Function UMG.PanelWidget.RemoveChild(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3377050>
	char HasChild(struct Unknown Content); // Function UMG.PanelWidget.HasChild(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3376EB0>
	char HasAnyChildren(); // Function UMG.PanelWidget.HasAnyChildren(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3376E80>
	int32_t GetChildrenCount(); // Function UMG.PanelWidget.GetChildrenCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3376AD0>
	int32_t GetChildIndex(struct Unknown Content); // Function UMG.PanelWidget.GetChildIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3376A40>
	struct Unknown GetChildAt(int32_t Index); // Function UMG.PanelWidget.GetChildAt(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33769B0>
	struct TArray<Unknown> GetAllChildren(); // Function UMG.PanelWidget.GetAllChildren(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3376930>
	void ClearChildren(); // Function UMG.PanelWidget.ClearChildren(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1EA8BB0>
	struct Unknown AddChild(struct Unknown Content); // Function UMG.PanelWidget.AddChild(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3376760>
};

// Class UMG.Border
class UBorder : public UContentWidget {

public:

	char HorizontalAlignment; // 0x120 (1)
	char VerticalAlignment; // 0x121 (1)
	char bShowEffectWhenDisabled : 0; // 0x122 (1)
	struct Unknown ContentColorAndOpacity; // 0x124 (16)
	struct FDelegate ContentColorAndOpacityDelegate; // 0x134 (16)
	struct Unknown Padding; // 0x144 (16)
	struct Unknown Background; // 0x158 (136)
	struct FDelegate BackgroundDelegate; // 0x1E0 (16)
	struct Unknown BrushColor; // 0x1F0 (16)
	struct FDelegate BrushColorDelegate; // 0x200 (16)
	struct Unknown DesiredSizeScale; // 0x210 (8)
	char bFlipForRightToLeftFlowDirection : 0; // 0x218 (1)
	struct FDelegate OnMouseButtonDownEv; // 0x21C (16)
	struct FDelegate OnMouseButtonUpEvent; // 0x22C (16)
	struct FDelegate OnMouseMoveEvent; // 0x23C (16)
	struct FDelegate OnMouseDoubleClickEvent; // 0x24C (16)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.Border.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336A570>
	void SetPadding(struct Unknown InPadding); // Function UMG.Border.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369FE0>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.Border.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369900>
	void SetDesiredSizeScale(struct Unknown InScale); // Function UMG.Border.SetDesiredSizeScale(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369780>
	void SetContentColorAndOpacity(struct Unknown InContentColorAndOpacity); // Function UMG.Border.SetContentColorAndOpacity(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369700>
	void SetBrushFromTexture(struct Unknown Texture); // Function UMG.Border.SetBrushFromTexture(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369500>
	void SetBrushFromMaterial(struct Unknown Material); // Function UMG.Border.SetBrushFromMaterial(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369500>
	void SetBrushFromAsset(struct Unknown Asset); // Function UMG.Border.SetBrushFromAsset(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369480>
	void SetBrushColor(struct Unknown InBrushColor); // Function UMG.Border.SetBrushColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369400>
	void SetBrush(struct Unknown& InBrush); // Function UMG.Border.SetBrush(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369280>
	struct Unknown GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3368BF0>
};

// Class UMG.AsyncTaskDownloadImage
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFail; // 0x40 (16)

	struct Unknown DownloadImage(struct FString URL); // Function UMG.AsyncTaskDownloadImage.DownloadImage(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3368A20>
};

// Class UMG.BackgroundBlur
class UBackgroundBlur : public UContentWidget {

public:

	struct Unknown Padding; // 0x120 (16)
	char HorizontalAlignment; // 0x130 (1)
	char VerticalAlignment; // 0x131 (1)
	char bApplyAlphaToBlur : 0; // 0x132 (1)
	float BlurStrength; // 0x134 (4)
	char bOverrideAutoRadiusCalculation : 0; // 0x138 (1)
	int32_t BlurRadius; // 0x13C (4)
	struct Unknown LowQualityFallbackBrush; // 0x140 (136)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.BackgroundBlur.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336A470>
	void SetPadding(struct Unknown InPadding); // Function UMG.BackgroundBlur.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369EC0>
	void SetLowQualityFallbackBrush(struct Unknown& InBrush); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369BB0>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.BackgroundBlur.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369800>
	void SetBlurStrength(float InStrength); // Function UMG.BackgroundBlur.SetBlurStrength(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369200>
	void SetBlurRadius(int32_t InBlurRadius); // Function UMG.BackgroundBlur.SetBlurRadius(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369180>
	void SetApplyAlphaToBlur(char bInApplyAlphaToBlur); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3368FE0>
};

// Class UMG.PanelSlot
class UPanelSlot : public UVisual {

public:

	struct Unknown Parent; // 0x28 (8)
	struct Unknown Content; // 0x30 (8)
};

// Class UMG.BackgroundBlurSlot
class UBackgroundBlurSlot : public UPanelSlot {

public:

	struct Unknown Padding; // 0x38 (16)
	char HorizontalAlignment; // 0x48 (1)
	char VerticalAlignment; // 0x49 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.BackgroundBlurSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336A4F0>
	void SetPadding(struct Unknown InPadding); // Function UMG.BackgroundBlurSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369F50>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.BackgroundBlurSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369880>
};

// Class UMG.PropertyBinding
class UPropertyBinding : public Object {

public:

	struct TWeakObjectPtr<struct Unknown> SourceObject; // 0x28 (8)
	struct Unknown SourcePath; // 0x30 (40)
	struct FName DestinationProperty; // 0x58 (8)
};

// Class UMG.BorderSlot
class UBorderSlot : public UPanelSlot {

public:

	struct Unknown Padding; // 0x38 (16)
	char HorizontalAlignment; // 0x48 (1)
	char VerticalAlignment; // 0x49 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.BorderSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336A5F0>
	void SetPadding(struct Unknown InPadding); // Function UMG.BorderSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336A070>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.BorderSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369980>
};

// Class UMG.Button
class UButton : public UContentWidget {

public:

	struct Unknown Style; // 0x160 (8)
	struct Unknown WidgetStyle; // 0x168 (632)
	struct Unknown ColorAndOpacity; // 0x3E0 (16)
	struct Unknown BackgroundColor; // 0x3F0 (16)
	char ClickMethod; // 0x400 (1)
	char TouchMethod; // 0x401 (1)
	char PressMethod; // 0x402 (1)
	char IsFocusable : 0; // 0x403 (1)
	struct FMulticastInlineDelegate OnClicked; // 0x408 (16)
	struct FMulticastInlineDelegate OnPressed; // 0x418 (16)
	struct FMulticastInlineDelegate OnReleased; // 0x428 (16)
	struct FMulticastInlineDelegate OnHovered; // 0x438 (16)
	struct FMulticastInlineDelegate OnUnhovered; // 0x448 (16)

	void SetTouchMethod(char InTouchMethod); // Function UMG.Button.SetTouchMethod(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336A3F0>
	void SetStyle(struct Unknown& InStyle); // Function UMG.Button.SetStyle(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336A310>
	void SetPressMethod(char InPressMethod); // Function UMG.Button.SetPressMethod(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336A210>
	void SetColorAndOpacity(struct Unknown InColorAndOpacity); // Function UMG.Button.SetColorAndOpacity(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369680>
	void SetClickMethod(char InClickMethod); // Function UMG.Button.SetClickMethod(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369600>
	void SetBackgroundColor(struct Unknown InBackgroundColor); // Function UMG.Button.SetBackgroundColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369100>
	char IsPressed(); // Function UMG.Button.IsPressed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3368E70>
};

// Class UMG.ButtonSlot
class UButtonSlot : public UPanelSlot {

public:

	struct Unknown Padding; // 0x38 (16)
	char HorizontalAlignment; // 0x48 (1)
	char VerticalAlignment; // 0x49 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.ButtonSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336A670>
	void SetPadding(struct Unknown InPadding); // Function UMG.ButtonSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336A100>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.ButtonSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369A00>
};

// Class UMG.CanvasPanelSlot
class UCanvasPanelSlot : public UPanelSlot {

public:

	struct Unknown LayoutData; // 0x38 (40)
	char bAutoSize : 0; // 0x60 (1)
	int32_t ZOrder; // 0x64 (4)

	void SetZOrder(int32_t InZOrder); // Function UMG.CanvasPanelSlot.SetZOrder(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336A6F0>
	void SetSize(struct Unknown InSize); // Function UMG.CanvasPanelSlot.SetSize(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336A290>
	void SetPosition(struct Unknown InPosition); // Function UMG.CanvasPanelSlot.SetPosition(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336A190>
	void SetOffsets(struct Unknown InOffset); // Function UMG.CanvasPanelSlot.SetOffsets(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369E30>
	void SetMinimum(struct Unknown InMinimumAnchors); // Function UMG.CanvasPanelSlot.SetMinimum(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369DB0>
	void SetMaximum(struct Unknown InMaximumAnchors); // Function UMG.CanvasPanelSlot.SetMaximum(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369D30>
	void SetLayout(struct Unknown& InLayoutData); // Function UMG.CanvasPanelSlot.SetLayout(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369B10>
	void SetAutoSize(char InbAutoSize); // Function UMG.CanvasPanelSlot.SetAutoSize(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369070>
	void SetAnchors(struct Unknown InAnchors); // Function UMG.CanvasPanelSlot.SetAnchors(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3368F50>
	void SetAlignment(struct Unknown InAlignment); // Function UMG.CanvasPanelSlot.SetAlignment(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3368ED0>
	int32_t GetZOrder(); // Function UMG.CanvasPanelSlot.GetZOrder(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3368E10>
	struct Unknown GetSize(); // Function UMG.CanvasPanelSlot.GetSize(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3368CF0>
	struct Unknown GetPosition(); // Function UMG.CanvasPanelSlot.GetPosition(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3368CB0>
	struct Unknown GetOffsets(); // Function UMG.CanvasPanelSlot.GetOffsets(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3368C70>
	struct Unknown GetLayout(); // Function UMG.CanvasPanelSlot.GetLayout(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3368C20>
	char GetAutoSize(); // Function UMG.CanvasPanelSlot.GetAutoSize(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3368B90>
	struct Unknown GetAnchors(); // Function UMG.CanvasPanelSlot.GetAnchors(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3368B50>
	struct Unknown GetAlignment(); // Function UMG.CanvasPanelSlot.GetAlignment(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3368B10>
};

// Class UMG.CheckBox
class UCheckBox : public UContentWidget {

public:

	enum class Unknow CheckedState; // 0x120 (1)
	struct FDelegate CheckedStateDelegate; // 0x124 (16)
	struct Unknown WidgetStyle; // 0x138 (1408)
	struct Unknown Style; // 0x6B8 (8)
	struct Unknown UncheckedImage; // 0x6C0 (8)
	struct Unknown UncheckedHoveredImage; // 0x6C8 (8)
	struct Unknown UncheckedPressedImage; // 0x6D0 (8)
	struct Unknown CheckedImage; // 0x6D8 (8)
	struct Unknown CheckedHoveredImage; // 0x6E0 (8)
	struct Unknown CheckedPressedImage; // 0x6E8 (8)
	struct Unknown UndeterminedImage; // 0x6F0 (8)
	struct Unknown UndeterminedHoveredImage; // 0x6F8 (8)
	struct Unknown UndeterminedPressedImage; // 0x700 (8)
	char HorizontalAlignment; // 0x708 (1)
	struct Unknown Padding; // 0x70C (16)
	struct Unknown BorderBackgroundColor; // 0x720 (40)
	char IsFocusable : 0; // 0x748 (1)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0x750 (16)

	void SetIsChecked(char InIsChecked); // Function UMG.CheckBox.SetIsChecked(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369A80>
	void SetCheckedState(enum class Unknow InCheckedState); // Function UMG.CheckBox.SetCheckedState(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369580>
	char IsPressed(); // Function UMG.CheckBox.IsPressed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3368EA0>
	char IsChecked(); // Function UMG.CheckBox.IsChecked(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3368E40>
	enum class Unknow GetCheckedState(); // Function UMG.CheckBox.GetCheckedState(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3368BC0>
};

// Class UMG.CircularThrobber
class UCircularThrobber : public UWidget {

public:

	int32_t NumberOfPieces; // 0x108 (4)
	float Period; // 0x10C (4)
	float Radius; // 0x110 (4)
	struct Unknown PieceImage; // 0x118 (8)
	struct Unknown Image; // 0x120 (136)
	char bEnableRadius : 0; // 0x1A8 (1)

	void SetRadius(float InRadius); // Function UMG.CircularThrobber.SetRadius(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336DE30>
	void SetPeriod(float InPeriod); // Function UMG.CircularThrobber.SetPeriod(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336DDB0>
	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.CircularThrobber.SetNumberOfPieces(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336DD30>
};

// Class UMG.ComboBox
class UComboBox : public UWidget {

public:

	struct TArray<Unknown> Items; // 0x108 (16)
	struct FDelegate OnGenerateWidgetEvent; // 0x118 (16)
	char bIsFocusable : 0; // 0x128 (1)
};

// Class UMG.ComboBoxString
class UComboBoxString : public UWidget {

public:

	struct TArray<Unknown> DefaultOptions; // 0x108 (16)
	struct FString SelectedOption; // 0x118 (16)
	struct Unknown WidgetStyle; // 0x128 (1008)
	struct Unknown ItemStyle; // 0x518 (1992)
	struct Unknown ContentPadding; // 0xCE0 (16)
	float MaxListHeight; // 0xCF0 (4)
	char HasDownArrow : 0; // 0xCF4 (1)
	char EnableGamepadNavigationMode : 0; // 0xCF5 (1)
	struct Unknown Font; // 0xCF8 (80)
	struct Unknown ForegroundColor; // 0xD48 (40)
	char bIsFocusable : 0; // 0xD70 (1)
	struct FDelegate OnGenerateWidgetEvent; // 0xD74 (16)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0xD88 (16)
	struct FMulticastInlineDelegate OnOpening; // 0xD98 (16)

	void SetSelectedOption(struct FString Option); // Function UMG.ComboBoxString.SetSelectedOption(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336DF30>
	void SetSelectedIndex(int32_t Index); // Function UMG.ComboBoxString.SetSelectedIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336DEB0>
	char RemoveOption(struct FString Option); // Function UMG.ComboBoxString.RemoveOption(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336D4D0>
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336D430>
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char IsOpen(); // Function UMG.ComboBoxString.IsOpen(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336D400>
	struct FString GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336D170>
	int32_t GetSelectedIndex(); // Function UMG.ComboBoxString.GetSelectedIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336D140>
	int32_t GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336D110>
	struct FString GetOptionAtIndex(int32_t Index); // Function UMG.ComboBoxString.GetOptionAtIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336D030>
	int32_t FindOptionIndex(struct FString Option); // Function UMG.ComboBoxString.FindOptionIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336CE20>
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336CA70>
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336CA50>
	void AddOption(struct FString Option); // Function UMG.ComboBoxString.AddOption(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336C8D0>
};

// Class UMG.DragDropOperation
class UDragDropOperation : public Object {

public:

	struct FString Tag; // 0x28 (16)
	struct Unknown payload; // 0x38 (8)
	struct Unknown DefaultDragVisual; // 0x40 (8)
	enum class Unknow Pivot; // 0x48 (1)
	struct Unknown Offset; // 0x4C (8)
	char bUseMoveAnimation : 0; // 0x54 (1)
	struct FMulticastInlineDelegate OnDrop; // 0x58 (16)
	struct FMulticastInlineDelegate OnDragCancelled; // 0x68 (16)
	struct FMulticastInlineDelegate OnDragged; // 0x78 (16)

	void Drop(struct Unknown& PointerEvent); // Function UMG.DragDropOperation.Drop(Native|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336CCF0>
	void Dragged(struct Unknown& PointerEvent); // Function UMG.DragDropOperation.Dragged(Native|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336CBC0>
	void DragCancelled(struct Unknown& PointerEvent); // Function UMG.DragDropOperation.DragCancelled(Native|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336CA90>
};

// Class UMG.DynamicEntryBoxBase
class UDynamicEntryBoxBase : public UWidget {

public:

	enum class Unknow EntryBoxType; // 0x108 (1)
	struct Unknown EntrySpacing; // 0x10C (8)
	struct TArray<Unknown> SpacingPattern; // 0x118 (16)
	struct Unknown EntrySizeRule; // 0x128 (8)
	char EntryHorizontalAlignment; // 0x130 (1)
	char EntryVerticalAlignment; // 0x131 (1)
	int32_t MaxElementSize; // 0x134 (4)
	struct Unknown EntryWidgetPool; // 0x148 (128)

	void SetEntrySpacing(struct Unknown& InEntrySpacing); // Function UMG.DynamicEntryBoxBase.SetEntrySpacing(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336D6C0>
	int32_t GetNumEntries(); // Function UMG.DynamicEntryBoxBase.GetNumEntries(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336D000>
	struct TArray<Unknown> GetAllEntries(); // Function UMG.DynamicEntryBoxBase.GetAllEntries(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336CED0>
};

// Class UMG.DynamicEntryBox
class UDynamicEntryBox : public UDynamicEntryBoxBase {

public:

	struct Unknown* EntryWidgetClass; // 0x1C8 (8)

	void Reset(char bDeleteWidgets); // Function UMG.DynamicEntryBox.Reset(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336D580>
	void RemoveEntry(struct Unknown EntryWidget); // Function UMG.DynamicEntryBox.RemoveEntry(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336D450>
	struct Unknown BP_CreateEntryOfClass(struct Unknown* EntryClass); // Function UMG.DynamicEntryBox.BP_CreateEntryOfClass(Final|Native|Private|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336C9A0>
	struct Unknown BP_CreateEntry(); // Function UMG.DynamicEntryBox.BP_CreateEntry(Final|Native|Private|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336C970>
};

// Class UMG.EditableText
class UEditableText : public UWidget {

public:

	struct FText Text; // 0x108 (24)
	struct FDelegate TextDelegate; // 0x120 (16)
	struct FText HintText; // 0x130 (24)
	struct FDelegate HintTextDelegate; // 0x148 (16)
	struct Unknown WidgetStyle; // 0x158 (536)
	struct Unknown Style; // 0x370 (8)
	struct Unknown BackgroundImageSelected; // 0x378 (8)
	struct Unknown BackgroundImageComposing; // 0x380 (8)
	struct Unknown CaretImage; // 0x388 (8)
	struct Unknown Font; // 0x390 (80)
	struct Unknown ColorAndOpacity; // 0x3E0 (40)
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
	struct Unknown VirtualKeyboardOptions; // 0x417 (1)
	enum class Unknow VirtualKeyboardTrigger; // 0x418 (1)
	enum class Unknow VirtualKeyboardDismissAction; // 0x419 (1)
	char Justification; // 0x41A (1)
	struct Unknown ShapedTextOptions; // 0x41B (3)
	struct FMulticastInlineDelegate OnTextChanged; // 0x420 (16)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x430 (16)

	void SetText(struct FText InText); // Function UMG.EditableText.SetText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336E020>
	void SetJustification(char InJustification); // Function UMG.EditableText.SetJustification(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336DC30>
	void SetIsReadOnly(char InbIsReadyOnly); // Function UMG.EditableText.SetIsReadOnly(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336DB10>
	void SetIsPassword(char InbIsPassword); // Function UMG.EditableText.SetIsPassword(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336D9F0>
	void SetHintText(struct FText InHintText); // Function UMG.EditableText.SetHintText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336D830>
	void OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText GetText(); // Function UMG.EditableText.GetText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336D260>
};

// Class UMG.EditableTextBox
class UEditableTextBox : public UWidget {

public:

	struct FText Text; // 0x108 (24)
	struct FDelegate TextDelegate; // 0x120 (16)
	struct Unknown WidgetStyle; // 0x130 (2032)
	struct Unknown Style; // 0x920 (8)
	struct FText HintText; // 0x928 (24)
	struct FDelegate HintTextDelegate; // 0x940 (16)
	struct Unknown Font; // 0x950 (80)
	struct Unknown ForegroundColor; // 0x9A0 (16)
	struct Unknown BackgroundColor; // 0x9B0 (16)
	struct Unknown ReadOnlyForegroundColor; // 0x9C0 (16)
	char IsReadOnly : 0; // 0x9D0 (1)
	char IsPassword : 0; // 0x9D1 (1)
	float MinimumDesiredWidth; // 0x9D4 (4)
	struct Unknown Padding; // 0x9D8 (16)
	char IsCaretMovedWhenGainFocus : 0; // 0x9E8 (1)
	char SelectAllTextWhenFocused : 0; // 0x9E9 (1)
	char RevertTextOnEscape : 0; // 0x9EA (1)
	char ClearKeyboardFocusOnCommit : 0; // 0x9EB (1)
	char SelectAllTextOnCommit : 0; // 0x9EC (1)
	char AllowContextMenu : 0; // 0x9ED (1)
	char KeyboardType; // 0x9EE (1)
	struct Unknown VirtualKeyboardOptions; // 0x9EF (1)
	enum class Unknow VirtualKeyboardTrigger; // 0x9F0 (1)
	enum class Unknow VirtualKeyboardDismissAction; // 0x9F1 (1)
	char Justification; // 0x9F2 (1)
	struct Unknown ShapedTextOptions; // 0x9F3 (3)
	struct FMulticastInlineDelegate OnTextChanged; // 0x9F8 (16)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xA08 (16)

	void SetText(struct FText InText); // Function UMG.EditableTextBox.SetText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336E100>
	void SetJustification(char InJustification); // Function UMG.EditableTextBox.SetJustification(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336DCB0>
	void SetIsReadOnly(char bReadOnly); // Function UMG.EditableTextBox.SetIsReadOnly(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336DBA0>
	void SetIsPassword(char bIsPassword); // Function UMG.EditableTextBox.SetIsPassword(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336DA80>
	void SetHintText(struct FText InText); // Function UMG.EditableTextBox.SetHintText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336D910>
	void SetError(struct FText InError); // Function UMG.EditableTextBox.SetError(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336D750>
	void SelectWordAt(); // Function UMG.EditableTextBox.SelectWordAt(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336D610>
	void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char HasError(); // Function UMG.EditableTextBox.HasError(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336D3D0>
	struct FText GetText(); // Function UMG.EditableTextBox.GetText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336D300>
	void ClearError(); // Function UMG.EditableTextBox.ClearError(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336CA30>
};

// Class UMG.ExpandableArea
class UExpandableArea : public UWidget {

public:

	struct Unknown Style; // 0x110 (288)
	struct Unknown BorderBrush; // 0x230 (136)
	struct Unknown BorderColor; // 0x2B8 (40)
	char bIsExpanded : 0; // 0x2E0 (1)
	float MaxHeight; // 0x2E4 (4)
	struct Unknown HeaderPadding; // 0x2E8 (16)
	struct Unknown AreaPadding; // 0x2F8 (16)
	struct FMulticastInlineDelegate OnExpansionChanged; // 0x308 (16)
	struct Unknown HeaderContent; // 0x318 (8)
	struct Unknown BodyContent; // 0x320 (8)

	void SetIsExpanded_Animated(char IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded_Animated(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3372470>
	void SetIsExpanded(char IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33723E0>
	char GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3370E50>
};

// Class UMG.GridPanel
class UGridPanel : public UPanelWidget {

public:

	struct TArray<Unknown> ColumnFill; // 0x120 (16)
	struct TArray<Unknown> RowFill; // 0x130 (16)

	void SetRowFill(int32_t columnIndex, float Coefficient); // Function UMG.GridPanel.SetRowFill(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33729E0>
	void SetColumnFill(int32_t columnIndex, float Coefficient); // Function UMG.GridPanel.SetColumnFill(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3372080>
	struct Unknown AddChildToGrid(struct Unknown Content, int32_t InRow, int32_t InColumn); // Function UMG.GridPanel.AddChildToGrid(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3370640>
};

// Class UMG.GridSlot
class UGridSlot : public UPanelSlot {

public:

	struct Unknown Padding; // 0x38 (16)
	char HorizontalAlignment; // 0x48 (1)
	char VerticalAlignment; // 0x49 (1)
	int32_t Row; // 0x4C (4)
	int32_t RowSpan; // 0x50 (4)
	int32_t Column; // 0x54 (4)
	int32_t ColumnSpan; // 0x58 (4)
	int32_t Layer; // 0x5C (4)
	struct Unknown Nudge; // 0x60 (8)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.GridSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3372E30>
	void SetRowSpan(int32_t InRowSpan); // Function UMG.GridSlot.SetRowSpan(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3372AB0>
	void SetRow(int32_t InRow); // Function UMG.GridSlot.SetRow(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3372960>
	void SetPadding(struct Unknown InPadding); // Function UMG.GridSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3372840>
	void SetNudge(struct Unknown InNudge); // Function UMG.GridSlot.SetNudge(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3372740>
	void SetLayer(int32_t InLayer); // Function UMG.GridSlot.SetLayer(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33725E0>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.GridSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33722E0>
	void SetColumnSpan(int32_t InColumnSpan); // Function UMG.GridSlot.SetColumnSpan(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3372150>
	void SetColumn(int32_t InColumn); // Function UMG.GridSlot.SetColumn(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3372000>
};

// Class UMG.HorizontalBoxSlot
class UHorizontalBoxSlot : public UPanelSlot {

public:

	struct Unknown Padding; // 0x40 (16)
	struct Unknown Size; // 0x50 (8)
	char HorizontalAlignment; // 0x58 (1)
	char VerticalAlignment; // 0x59 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.HorizontalBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3372EB0>
	void SetSize(struct Unknown InSize); // Function UMG.HorizontalBoxSlot.SetSize(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3372D20>
	void SetPadding(struct Unknown InPadding); // Function UMG.HorizontalBoxSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33728D0>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.HorizontalBoxSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3372360>
};

// Class UMG.Image
class UImage : public UWidget {

public:

	struct Unknown Brush; // 0x108 (136)
	struct FDelegate BrushDelegate; // 0x190 (16)
	struct Unknown ColorAndOpacity; // 0x1A0 (16)
	struct FDelegate ColorAndOpacityDelegate; // 0x1B0 (16)
	char bFlipForRightToLeftFlowDirection : 0; // 0x1C0 (1)
	struct FDelegate OnMouseButtonDownEv; // 0x1C4 (16)

	void SetOpacity(float InOpacity); // Function UMG.Image.SetOpacity(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33727C0>
	void SetGammaCorrect(); // Function UMG.Image.SetGammaCorrect(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33722C0>
	void SetColorAndOpacity(struct Unknown InColorAndOpacity); // Function UMG.Image.SetColorAndOpacity(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3371F80>
	void SetBrushTintColor(struct Unknown TintColor); // Function UMG.Image.SetBrushTintColor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3371E00>
	void SetBrushSize(struct Unknown DesiredSize); // Function UMG.Image.SetBrushSize(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3371D80>
	void SetBrushResourceObject(struct Unknown ResourceObject); // Function UMG.Image.SetBrushResourceObject(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3371D00>
	void SetBrushFromTextureDynamic(struct Unknown Texture, char bMatchSize); // Function UMG.Image.SetBrushFromTextureDynamic(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3371C30>
	void SetBrushFromTexture(struct Unknown Texture, char bMatchSize); // Function UMG.Image.SetBrushFromTexture(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3371B60>
	void SetBrushFromSoftTexture(struct Unknown SoftTexture, char bMatchSize); // Function UMG.Image.SetBrushFromSoftTexture(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3371A00>
	void SetBrushFromSoftMaterial(struct Unknown SoftMaterial); // Function UMG.Image.SetBrushFromSoftMaterial(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33718E0>
	void SetBrushFromMaterial(struct Unknown Material); // Function UMG.Image.SetBrushFromMaterial(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3371850>
	void SetBrushFromAtlasInterface(struct TScriptInterface<IUnknown> AtlasRegion, char bMatchSize); // Function UMG.Image.SetBrushFromAtlasInterface(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3371760>
	void SetBrushFromAsset(struct Unknown Asset); // Function UMG.Image.SetBrushFromAsset(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33716D0>
	void SetBrush(struct Unknown& InBrush); // Function UMG.Image.SetBrush(Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3371550>
	struct Unknown GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3370D90>
};

// Class UMG.InputKeySelector
class UInputKeySelector : public UWidget {

public:

	struct Unknown WidgetStyle; // 0x108 (632)
	struct Unknown TextStyle; // 0x380 (616)
	struct Unknown SelectedKey; // 0x5E8 (32)
	struct Unknown Font; // 0x608 (80)
	struct Unknown Margin; // 0x658 (16)
	struct Unknown ColorAndOpacity; // 0x668 (16)
	struct FText KeySelectionText; // 0x678 (24)
	struct FText NoKeySpecifiedText; // 0x690 (24)
	char bAllowModifierKeys : 0; // 0x6A8 (1)
	char bAllowGamepadKeys : 0; // 0x6A9 (1)
	struct TArray<Unknown> EscapeKeys; // 0x6B0 (16)
	struct FMulticastInlineDelegate OnKeySelected; // 0x6C0 (16)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x6D0 (16)

	void SetTextBlockVisibility(enum class Unknow InVisibility); // Function UMG.InputKeySelector.SetTextBlockVisibility(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3372DB0>
	void SetSelectedKey(struct Unknown& InSelectedKey); // Function UMG.InputKeySelector.SetSelectedKey(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3372BB0>
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText); // Function UMG.InputKeySelector.SetNoKeySpecifiedText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3372660>
	void SetKeySelectionText(struct FText InKeySelectionText); // Function UMG.InputKeySelector.SetKeySelectionText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3372500>
	void SetEscapeKeys(struct TArray<Unknown>& InKeys); // Function UMG.InputKeySelector.SetEscapeKeys(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33721D0>
	void SetAllowModifierKeys(char bInAllowModifierKeys); // Function UMG.InputKeySelector.SetAllowModifierKeys(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33714C0>
	void SetAllowGamepadKeys(char bInAllowGamepadKeys); // Function UMG.InputKeySelector.SetAllowGamepadKeys(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3371430>
	void OnKeySelected__DelegateSignature(struct Unknown SelectedKey); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	char GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3370E80>
};

// Class UMG.InvalidationBox
class UInvalidationBox : public UContentWidget {

public:

	char bCanCache : 0; // 0x120 (1)
	char CacheRelativeTransforms : 0; // 0x121 (1)

	void SetCanCache(char CanCache); // Function UMG.InvalidationBox.SetCanCache(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3371EF0>
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151C360>
	char GetCanCache(); // Function UMG.InvalidationBox.GetCanCache(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3370D60>
};

// Class UMG.ListViewBase
class UListViewBase : public UWidget {

public:

	struct Unknown* EntryWidgetClass; // 0x108 (8)
	float WheelScrollMultiplier; // 0x110 (4)
	char bEnableScrollAnimation : 0; // 0x114 (1)
	char bEnableFixedLineOffset : 0; // 0x115 (1)
	float FixedLineScrollOffset; // 0x118 (4)
	struct FMulticastInlineDelegate BP_OnEntryGenerated; // 0x120 (16)
	struct FMulticastInlineDelegate BP_OnEntryReleased; // 0x130 (16)
	struct Unknown EntryWidgetPool; // 0x140 (128)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ListViewBase.SetWheelScrollMultiplier(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3377B10>
	void SetScrollOffset(float InScrollOffset); // Function UMG.ListViewBase.SetScrollOffset(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3377720>
	void SetScrollbarVisibility(enum class Unknow InVisibility); // Function UMG.ListViewBase.SetScrollbarVisibility(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33777A0>
	void ScrollToTop(); // Function UMG.ListViewBase.ScrollToTop(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33771B0>
	void ScrollToBottom(); // Function UMG.ListViewBase.ScrollToBottom(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3377190>
	void RequestRefresh(); // Function UMG.ListViewBase.RequestRefresh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3377170>
	void RegenerateAllEntries(); // Function UMG.ListViewBase.RegenerateAllEntries(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3377030>
	struct TArray<Unknown> GetDisplayedEntryWidgets(); // Function UMG.ListViewBase.GetDisplayedEntryWidgets(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3376B00>
};

// Class UMG.ListView
class UListView : public UListViewBase {

public:

	char Orientation; // 0x2D8 (1)
	char SelectionMode; // 0x2D9 (1)
	enum class Unknow ConsumeMouseWheel; // 0x2DA (1)
	char bClearSelectionOnClick : 0; // 0x2DB (1)
	char bIsFocusable : 0; // 0x2DC (1)
	float EntrySpacing; // 0x2E0 (4)
	char bReturnFocusToSelection : 0; // 0x2E4 (1)
	struct TArray<Unknown> ListItems; // 0x2E8 (16)
	struct FMulticastInlineDelegate BP_OnEntryInitialized; // 0x308 (16)
	struct FMulticastInlineDelegate BP_OnItemClicked; // 0x318 (16)
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x328 (16)
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x338 (16)
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x348 (16)
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x358 (16)

	void SetSelectionMode(char SelectionMode); // Function UMG.ListView.SetSelectionMode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3372CA0>
	void SetSelectedIndex(int32_t Index); // Function UMG.ListView.SetSelectedIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3372B30>
	void ScrollIndexIntoView(int32_t Index); // Function UMG.ListView.ScrollIndexIntoView(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33713B0>
	void RemoveItem(struct Unknown Item); // Function UMG.ListView.RemoveItem(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3371330>
	void NavigateToIndex(int32_t Index); // Function UMG.ListView.NavigateToIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33712B0>
	char IsRefreshPending(); // Function UMG.ListView.IsRefreshPending(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3371280>
	int32_t GetNumItems(); // Function UMG.ListView.GetNumItems(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3371010>
	struct TArray<Unknown> GetListItems(); // Function UMG.ListView.GetListItems(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3370FE0>
	struct Unknown GetItemAt(int32_t Index); // Function UMG.ListView.GetItemAt(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3370EB0>
	int32_t GetIndexForItem(struct Unknown Item); // Function UMG.ListView.GetIndexForItem(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3370DC0>
	void ClearListItems(); // Function UMG.ListView.ClearListItems(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3370D40>
	void BP_SetSelectedItem(struct Unknown Item); // Function UMG.ListView.BP_SetSelectedItem(Final|Native|Private|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3370CC0>
	void BP_SetListItems(struct TArray<Unknown>& InListItems); // Function UMG.ListView.BP_SetListItems(Final|Native|Private|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3370C10>
	void BP_SetItemSelection(struct Unknown Item, char bSelected); // Function UMG.ListView.BP_SetItemSelection(Final|Native|Private|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3370B40>
	void BP_ScrollItemIntoView(struct Unknown Item); // Function UMG.ListView.BP_ScrollItemIntoView(Final|Native|Private|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3370AC0>
	void BP_NavigateToItem(struct Unknown Item); // Function UMG.ListView.BP_NavigateToItem(Final|Native|Private|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3370A40>
	char BP_IsItemVisible(struct Unknown Item); // Function UMG.ListView.BP_IsItemVisible(Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33709B0>
	char BP_GetSelectedItems(struct TArray<Unknown>& Items); // Function UMG.ListView.BP_GetSelectedItems(Final|Native|Private|HasOutParms|BlueprintCallable|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33708F0>
	struct Unknown BP_GetSelectedItem(); // Function UMG.ListView.BP_GetSelectedItem(Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33708C0>
	int32_t BP_GetNumItemsSelected(); // Function UMG.ListView.BP_GetNumItemsSelected(Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3370890>
	void BP_ClearSelection(); // Function UMG.ListView.BP_ClearSelection(Final|Native|Private|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3370870>
	void BP_CancelScrollIntoView(); // Function UMG.ListView.BP_CancelScrollIntoView(Final|Native|Private|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3370850>
	void AddItem(struct Unknown Item); // Function UMG.ListView.AddItem(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33707D0>
};

// Class UMG.MenuAnchor
class UMenuAnchor : public UContentWidget {

public:

	struct Unknown* MenuClass; // 0x120 (8)
	struct FDelegate OnGetMenuContentEvent; // 0x128 (16)
	char Placement; // 0x138 (1)
	char bFitInWindow : 0; // 0x139 (1)
	char ShouldDeferPaintingAfterWindowContent : 0; // 0x13A (1)
	char UseApplicationMenuStack : 0; // 0x13B (1)
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x140 (16)

	void ToggleOpen(char bFocusOnOpen); // Function UMG.MenuAnchor.ToggleOpen(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3377C70>
	char ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3377C40>
	void SetPlacement(char InPlacement); // Function UMG.MenuAnchor.SetPlacement(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33776A0>
	void Open(char bFocusMenu); // Function UMG.MenuAnchor.Open(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3376FA0>
	char IsOpen(); // Function UMG.MenuAnchor.IsOpen(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3376F70>
	char HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3376F40>
	struct Unknown GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3376CD0>
	void FitInWindow(char bFit); // Function UMG.MenuAnchor.FitInWindow(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33768A0>
	void Close(); // Function UMG.MenuAnchor.Close(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3376880>
};

// Class UMG.MovieScene2DTransformSection
class UMovieScene2DTransformSection : public UMovieSceneSection {

public:

	struct Unknown TransformMask; // 0xE0 (4)
	struct Unknown Translation[0x2]; // 0xE8 (320)
	struct Unknown Rotation; // 0x228 (160)
	struct Unknown Scale[0x2]; // 0x2C8 (320)
	struct Unknown Shear[0x2]; // 0x408 (320)
};

// Class UMG.MovieSceneMarginSection
class UMovieSceneMarginSection : public UMovieSceneSection {

public:

	struct Unknown TopCurve; // 0xE0 (160)
	struct Unknown LeftCurve; // 0x180 (160)
	struct Unknown RightCurve; // 0x220 (160)
	struct Unknown BottomCurve; // 0x2C0 (160)
};

// Class UMG.MovieSceneWidgetMaterialTrack
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack {

public:

	struct TArray<Unknown> BrushPropertyNamePath; // 0x68 (16)
	struct FName TrackName; // 0x78 (8)
};

// Class UMG.TextLayoutWidget
class UTextLayoutWidget : public UWidget {

public:

	struct Unknown ShapedTextOptions; // 0x108 (3)
	char Justification; // 0x10B (1)
	enum class Unknow WrappingPolicy; // 0x10C (1)
	char AutoWrapText : 0; // 0x10D (1)
	float WrapTextAt; // 0x110 (4)
	struct Unknown Margin; // 0x114 (16)
	float LineHeightPercentage; // 0x124 (4)

	void SetJustification(char InJustification); // Function UMG.TextLayoutWidget.SetJustification(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3388590>
};

// Class UMG.MultiLineEditableText
class UMultiLineEditableText : public UTextLayoutWidget {

public:

	struct FText Text; // 0x128 (24)
	struct FText HintText; // 0x140 (24)
	struct FDelegate HintTextDelegate; // 0x158 (16)
	struct Unknown WidgetStyle; // 0x168 (616)
	char bIsReadOnly : 0; // 0x3D0 (1)
	struct Unknown Font; // 0x3D8 (80)
	char SelectAllTextWhenFocused : 0; // 0x428 (1)
	char ClearTextSelectionOnFocusLoss : 0; // 0x429 (1)
	char RevertTextOnEscape : 0; // 0x42A (1)
	char ClearKeyboardFocusOnCommit : 0; // 0x42B (1)
	char AllowContextMenu : 0; // 0x42C (1)
	struct Unknown VirtualKeyboardOptions; // 0x42D (1)
	enum class Unknow VirtualKeyboardDismissAction; // 0x42E (1)
	struct FMulticastInlineDelegate OnTextChanged; // 0x430 (16)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x440 (16)

	void SetWidgetStyle(struct Unknown& InWidgetStyle); // Function UMG.MultiLineEditableText.SetWidgetStyle(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3377B90>
	void SetText(struct FText InText); // Function UMG.MultiLineEditableText.SetText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3377820>
	void SetIsReadOnly(char bReadOnly); // Function UMG.MultiLineEditableText.SetIsReadOnly(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33774F0>
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableText.SetHintText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33772B0>
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText GetText(); // Function UMG.MultiLineEditableText.GetText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3376D10>
	struct FText GetHintText(); // Function UMG.MultiLineEditableText.GetHintText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3376B90>
};

// Class UMG.MultiLineEditableTextBox
class UMultiLineEditableTextBox : public UTextLayoutWidget {

public:

	struct FText Text; // 0x128 (24)
	struct FText HintText; // 0x140 (24)
	struct FDelegate HintTextDelegate; // 0x158 (16)
	struct Unknown WidgetStyle; // 0x168 (2032)
	struct Unknown TextStyle; // 0x958 (616)
	char bIsReadOnly : 0; // 0xBC0 (1)
	char AllowContextMenu : 0; // 0xBC1 (1)
	struct Unknown VirtualKeyboardOptions; // 0xBC2 (1)
	enum class Unknow VirtualKeyboardDismissAction; // 0xBC3 (1)
	struct Unknown Style; // 0xBC8 (8)
	struct Unknown Font; // 0xBD0 (80)
	struct Unknown ForegroundColor; // 0xC20 (16)
	struct Unknown BackgroundColor; // 0xC30 (16)
	struct Unknown ReadOnlyForegroundColor; // 0xC40 (16)
	struct FMulticastInlineDelegate OnTextChanged; // 0xC50 (16)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xC60 (16)

	void SetTextStyle(struct Unknown& InTextStyle); // Function UMG.MultiLineEditableTextBox.SetTextStyle(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33779E0>
	void SetText(struct FText InText); // Function UMG.MultiLineEditableTextBox.SetText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3377900>
	void SetIsReadOnly(char bReadOnly); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3377580>
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableTextBox.SetHintText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3377390>
	void SetError(struct FText InError); // Function UMG.MultiLineEditableTextBox.SetError(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33771D0>
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, char CommitMethod); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	struct FText GetText(); // Function UMG.MultiLineEditableTextBox.GetText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3376DB0>
	struct FText GetHintText(); // Function UMG.MultiLineEditableTextBox.GetHintText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3376C30>
};

// Class UMG.OverlaySlot
class UOverlaySlot : public UPanelSlot {

public:

	struct Unknown Padding; // 0x40 (16)
	char HorizontalAlignment; // 0x50 (1)
	char VerticalAlignment; // 0x51 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.OverlaySlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3377A90>
	void SetPadding(struct Unknown InPadding); // Function UMG.OverlaySlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3377610>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.OverlaySlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3377470>
};

// Class UMG.ProgressBar
class UProgressBar : public UWidget {

public:

	struct Unknown WidgetStyle; // 0x108 (416)
	struct Unknown Style; // 0x2A8 (8)
	struct Unknown BackgroundImage; // 0x2B0 (8)
	struct Unknown FillImage; // 0x2B8 (8)
	struct Unknown MarqueeImage; // 0x2C0 (8)
	float Percent; // 0x2C8 (4)
	char BarFillType; // 0x2CC (1)
	char bIsMarquee : 0; // 0x2CD (1)
	struct Unknown BorderPadding; // 0x2D0 (8)
	struct FDelegate PercentDelegate; // 0x2D8 (16)
	struct Unknown FillColorAndOpacity; // 0x2E8 (16)
	struct FDelegate FillColorAndOpacityDelegate; // 0x2F8 (16)

	void SetPercent(float InPercent); // Function UMG.ProgressBar.SetPercent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337B930>
	void SetIsMarquee(char InbIsMarquee); // Function UMG.ProgressBar.SetIsMarquee(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337B380>
	void SetFillColorAndOpacity(struct Unknown InColor); // Function UMG.ProgressBar.SetFillColorAndOpacity(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337B170>
};

// Class UMG.RetainerBox
class URetainerBox : public UContentWidget {

public:

	char RenderOnInvalidation : 0; // 0x120 (1)
	char RenderOnPhase : 0; // 0x121 (1)
	int32_t Phase; // 0x124 (4)
	int32_t PhaseCount; // 0x128 (4)
	struct Unknown EffectMaterial; // 0x130 (8)
	struct FName TextureParameter; // 0x138 (8)

	void SetTextureParameter(struct FName TextureParameter); // Function UMG.RetainerBox.SetTextureParameter(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337C130>
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases); // Function UMG.RetainerBox.SetRenderingPhase(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337B9B0>
	void SetEffectMaterial(struct Unknown EffectMaterial); // Function UMG.RetainerBox.SetEffectMaterial(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337B0F0>
	void RequestRender(); // Function UMG.RetainerBox.RequestRender(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337A750>
	struct Unknown GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337A5F0>
};

// Class UMG.RichTextBlock
class URichTextBlock : public UTextLayoutWidget {

public:

	struct FText Text; // 0x128 (24)
	struct Unknown TextStyleSet; // 0x140 (8)
	struct TArray<Unknown> DecoratorClasses; // 0x148 (16)
	char bOverrideDefaultStyle : 0; // 0x158 (1)
	struct Unknown DefaultTextStyleOverride; // 0x160 (616)
	float MinDesiredWidth; // 0x3C8 (4)
	struct TArray<Unknown> InstanceDecorators; // 0x638 (16)

	void SetTextStyleSet(struct Unknown NewTextStyleSet); // Function UMG.RichTextBlock.SetTextStyleSet(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337C0B0>
	void SetText(struct FText& InText); // Function UMG.RichTextBlock.SetText(Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337BFD0>
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.RichTextBlock.SetMinDesiredWidth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337B690>
	void SetDefaultTextStyle(struct Unknown& InDefaultTextStyle); // Function UMG.RichTextBlock.SetDefaultTextStyle(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337B040>
	void SetDefaultStrikeBrush(struct Unknown& InStrikeBrush); // Function UMG.RichTextBlock.SetDefaultStrikeBrush(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337AEC0>
	void SetDefaultShadowOffset(struct Unknown InShadowOffset); // Function UMG.RichTextBlock.SetDefaultShadowOffset(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337AE40>
	void SetDefaultShadowColorAndOpacity(struct Unknown InShadowColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337ADC0>
	void SetDefaultFont(struct Unknown InFontInfo); // Function UMG.RichTextBlock.SetDefaultFont(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337ACB0>
	void SetDefaultColorAndOpacity(struct Unknown InColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultColorAndOpacity(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337ABC0>
	void SetAutoWrapText(char InAutoTextWrap); // Function UMG.RichTextBlock.SetAutoWrapText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337AAB0>
	struct FText GetText(); // Function UMG.RichTextBlock.GetText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337A680>
	struct Unknown GetDecoratorByClass(struct Unknown* DecoratorClass); // Function UMG.RichTextBlock.GetDecoratorByClass(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337A560>
	void ClearAllDefaultStyleOverrides(); // Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337A420>
};

// Class UMG.RichTextBlockImageDecorator
class URichTextBlockImageDecorator : public URichTextBlockDecorator {

public:

	struct Unknown ImageSet; // 0x28 (8)
};

// Class UMG.SafeZone
class USafeZone : public UContentWidget {

public:

	char PadLeft : 0; // 0x120 (1)
	char PadRight : 0; // 0x121 (1)
	char PadTop : 0; // 0x122 (1)
	char PadBottom : 0; // 0x123 (1)

	void SetSidesToPad(char InPadLeft, char InPadRight, char InPadTop, char InPadBottom); // Function UMG.SafeZone.SetSidesToPad(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337BCA0>
};

// Class UMG.SafeZoneSlot
class USafeZoneSlot : public UPanelSlot {

public:

	char bIsTitleSafe : 0; // 0x38 (1)
	struct Unknown SafeAreaScale; // 0x3C (16)
	char HAlign; // 0x4C (1)
	char VAlign; // 0x4D (1)
	struct Unknown Padding; // 0x50 (16)
};

// Class UMG.ScaleBox
class UScaleBox : public UContentWidget {

public:

	char Stretch; // 0x120 (1)
	char StretchDirection; // 0x121 (1)
	float UserSpecifiedScale; // 0x124 (4)
	char IgnoreInheritedScale : 0; // 0x128 (1)

	void SetUserSpecifiedScale(float InUserSpecifiedScale); // Function UMG.ScaleBox.SetUserSpecifiedScale(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337C1B0>
	void SetStretchDirection(char InStretchDirection); // Function UMG.ScaleBox.SetStretchDirection(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337BF50>
	void SetStretch(char InStretch); // Function UMG.ScaleBox.SetStretch(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337BED0>
	void SetIgnoreInheritedScale(char bInIgnoreInheritedScale); // Function UMG.ScaleBox.SetIgnoreInheritedScale(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337B2F0>
};

// Class UMG.ScaleBoxSlot
class UScaleBoxSlot : public UPanelSlot {

public:

	struct Unknown Padding; // 0x38 (16)
	char HorizontalAlignment; // 0x48 (1)
	char VerticalAlignment; // 0x49 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.ScaleBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x336A670>
	void SetPadding(struct Unknown InPadding); // Function UMG.ScaleBoxSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337B810>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.ScaleBoxSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3369A00>
};

// Class UMG.ScrollBar
class UScrollBar : public UWidget {

public:

	struct Unknown WidgetStyle; // 0x108 (1232)
	struct Unknown Style; // 0x5D8 (8)
	char bAlwaysShowScrollbar : 0; // 0x5E0 (1)
	char bAlwaysShowScrollbarTrack : 0; // 0x5E1 (1)
	char Orientation; // 0x5E2 (1)
	struct Unknown Thickness; // 0x5E4 (8)
	struct Unknown Padding; // 0x5EC (16)

	void SetState(float InOffsetFraction, float InThumbSizeFraction); // Function UMG.ScrollBar.SetState(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337BE10>
};

// Class UMG.ScrollBox
class UScrollBox : public UPanelWidget {

public:

	struct Unknown WidgetStyle; // 0x120 (552)
	struct Unknown WidgetBarStyle; // 0x348 (1232)
	struct Unknown Style; // 0x818 (8)
	struct Unknown BarStyle; // 0x820 (8)
	char Orientation; // 0x828 (1)
	enum class Unknow ScrollBarVisibility; // 0x829 (1)
	enum class Unknow ConsumeMouseWheel; // 0x82A (1)
	struct Unknown ScrollbarThickness; // 0x82C (8)
	struct Unknown ScrollbarPadding; // 0x834 (16)
	char AlwaysShowScrollbar : 0; // 0x844 (1)
	char AlwaysShowScrollbarTrack : 0; // 0x845 (1)
	char AllowOverscroll : 0; // 0x846 (1)
	char bAnimateWheelScrolling : 0; // 0x847 (1)
	enum class Unknow NavigationDestination; // 0x848 (1)
	float NavigationScrollPadding; // 0x84C (4)
	enum class Unknow ScrollWhenFocusChanges; // 0x850 (1)
	char bAllowRightClickDragScrolling : 0; // 0x851 (1)
	float WheelScrollMultiplier; // 0x854 (4)
	struct FMulticastInlineDelegate OnUserScrolled; // 0x858 (16)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ScrollBox.SetWheelScrollMultiplier(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337C2B0>
	void SetScrollOffset(float NewScrollOffset); // Function UMG.ScrollBox.SetScrollOffset(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337BAF0>
	void SetScrollbarVisibility(enum class Unknow NewScrollBarVisibility); // Function UMG.ScrollBox.SetScrollbarVisibility(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337BA70>
	void SetScrollbarThickness(struct Unknown& NewScrollbarThickness); // Function UMG.ScrollBox.SetScrollbarThickness(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337BC10>
	void SetScrollbarPadding(struct Unknown& NewScrollbarPadding); // Function UMG.ScrollBox.SetScrollbarPadding(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337BB70>
	void SetOrientation(char NewOrientation); // Function UMG.ScrollBox.SetOrientation(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337B790>
	void SetConsumeMouseWheel(enum class Unknow NewConsumeMouseWheel); // Function UMG.ScrollBox.SetConsumeMouseWheel(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337AB40>
	void SetAnimateWheelScrolling(char bShouldAnimateWheelScrolling); // Function UMG.ScrollBox.SetAnimateWheelScrolling(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337AA20>
	void SetAlwaysShowScrollbar(char NewAlwaysShowScrollbar); // Function UMG.ScrollBox.SetAlwaysShowScrollbar(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337A990>
	void SetAllowOverscroll(char NewAllowOverscroll); // Function UMG.ScrollBox.SetAllowOverscroll(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337A900>
	void ScrollWidgetIntoView(struct Unknown WidgetToFind, char AnimateScroll, enum class Unknow ScrollDestination, float Padding); // Function UMG.ScrollBox.ScrollWidgetIntoView(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337A7B0>
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337A790>
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337A770>
	float GetViewOffsetFraction(); // Function UMG.ScrollBox.GetViewOffsetFraction(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337A720>
	float GetScrollOffsetOfEnd(); // Function UMG.ScrollBox.GetScrollOffsetOfEnd(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337A650>
	float GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337A620>
	void EndInertialScrolling(); // Function UMG.ScrollBox.EndInertialScrolling(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337A540>
};

// Class UMG.ScrollBoxSlot
class UScrollBoxSlot : public UPanelSlot {

public:

	struct Unknown Padding; // 0x38 (16)
	char HorizontalAlignment; // 0x48 (1)
	char VerticalAlignment; // 0x49 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.ScrollBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337C230>
	void SetPadding(struct Unknown InPadding); // Function UMG.ScrollBoxSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337B8A0>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.ScrollBoxSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337B270>
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

	void SetWidthOverride(float InWidthOverride); // Function UMG.SizeBox.SetWidthOverride(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337C330>
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.SizeBox.SetMinDesiredWidth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337B710>
	void SetMinDesiredHeight(float InMinDesiredHeight); // Function UMG.SizeBox.SetMinDesiredHeight(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337B610>
	void SetMinAspectRatio(float InMinAspectRatio); // Function UMG.SizeBox.SetMinAspectRatio(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337B590>
	void SetMaxDesiredWidth(float InMaxDesiredWidth); // Function UMG.SizeBox.SetMaxDesiredWidth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337B510>
	void SetMaxDesiredHeight(float InMaxDesiredHeight); // Function UMG.SizeBox.SetMaxDesiredHeight(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337B490>
	void SetMaxAspectRatio(float InMaxAspectRatio); // Function UMG.SizeBox.SetMaxAspectRatio(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337B410>
	void SetHeightOverride(float InHeightOverride); // Function UMG.SizeBox.SetHeightOverride(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337B1F0>
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337A520>
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337A500>
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337A4E0>
	void ClearMinAspectRatio(); // Function UMG.SizeBox.ClearMinAspectRatio(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337A4C0>
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337A4A0>
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337A480>
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337A460>
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337A440>
};

// Class UMG.SizeBoxSlot
class USizeBoxSlot : public UPanelSlot {

public:

	struct Unknown Padding; // 0x38 (16)
	char HorizontalAlignment; // 0x58 (1)
	char VerticalAlignment; // 0x59 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.SizeBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3380330>
	void SetPadding(struct Unknown InPadding); // Function UMG.SizeBoxSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337FFA0>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.SizeBoxSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337FA00>
};

// Class UMG.SlateVectorArtData
class USlateVectorArtData : public Object {

public:

	struct TArray<Unknown> VertexData; // 0x28 (16)
	struct TArray<Unknown> IndexData; // 0x38 (16)
	struct Unknown Material; // 0x48 (8)
	struct Unknown ExtentMin; // 0x50 (8)
	struct Unknown ExtentMax; // 0x58 (8)
};

// Class UMG.SlateAccessibleWidgetData
class USlateAccessibleWidgetData : public Object {

public:

	char bCanChildrenBeAccessible : 0; // 0x28 (1)
	enum class Unknow AccessibleBehavior; // 0x29 (1)
	enum class Unknow AccessibleSummaryBehavior; // 0x2A (1)
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
	struct Unknown WidgetStyle; // 0x128 (832)
	char Orientation; // 0x468 (1)
	struct Unknown SliderBarColor; // 0x46C (16)
	struct Unknown SliderHandleColor; // 0x47C (16)
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

	void SetValue(float InValue); // Function UMG.Slider.SetValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3380230>
	void SetStepSize(float InValue); // Function UMG.Slider.SetStepSize(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33801B0>
	void SetSliderHandleColor(struct Unknown InValue); // Function UMG.Slider.SetSliderHandleColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3380130>
	void SetSliderBarColor(struct Unknown InValue); // Function UMG.Slider.SetSliderBarColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33800B0>
	void SetMinValue(float InValue); // Function UMG.Slider.SetMinValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337FEA0>
	void SetMaxValue(float InValue); // Function UMG.Slider.SetMaxValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337FCA0>
	void SetLocked(char InValue); // Function UMG.Slider.SetLocked(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337FB10>
	void SetIndentHandle(char InValue); // Function UMG.Slider.SetIndentHandle(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337FA80>
	float GetValue(); // Function UMG.Slider.GetValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337EFA0>
	float GetNormalizedValue(); // Function UMG.Slider.GetNormalizedValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337EF70>
};

// Class UMG.Spacer
class USpacer : public UWidget {

public:

	struct Unknown Size; // 0x108 (8)

	void SetSize(struct Unknown InSize); // Function UMG.Spacer.SetSize(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3380030>
};

// Class UMG.SpinBox
class USpinBox : public UWidget {

public:

	float Value; // 0x108 (4)
	struct FDelegate ValueDelegate; // 0x10C (16)
	struct Unknown WidgetStyle; // 0x120 (744)
	struct Unknown Style; // 0x408 (8)
	int32_t MinFractionalDigits; // 0x410 (4)
	int32_t MaxFractionalDigits; // 0x414 (4)
	char bAlwaysUsesDeltaSnap : 0; // 0x418 (1)
	float Delta; // 0x41C (4)
	float SliderExponent; // 0x420 (4)
	struct Unknown Font; // 0x428 (80)
	char Justification; // 0x478 (1)
	float MinDesiredWidth; // 0x47C (4)
	char ClearKeyboardFocusOnCommit : 0; // 0x480 (1)
	char SelectAllTextOnCommit : 0; // 0x481 (1)
	struct Unknown ForegroundColor; // 0x488 (40)
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

	void SetValue(float NewValue); // Function UMG.SpinBox.SetValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33802B0>
	void SetMinValue(float NewValue); // Function UMG.SpinBox.SetMinValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337FF20>
	void SetMinSliderValue(float NewValue); // Function UMG.SpinBox.SetMinSliderValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337FE20>
	void SetMinFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMinFractionalDigits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337FDA0>
	void SetMaxValue(float NewValue); // Function UMG.SpinBox.SetMaxValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337FD20>
	void SetMaxSliderValue(float NewValue); // Function UMG.SpinBox.SetMaxSliderValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337FC20>
	void SetMaxFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMaxFractionalDigits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337FBA0>
	void SetForegroundColor(struct Unknown InForegroundColor); // Function UMG.SpinBox.SetForegroundColor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337F910>
	void SetDelta(float NewValue); // Function UMG.SpinBox.SetDelta(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337F890>
	void SetAlwaysUsesDeltaSnap(char bNewValue); // Function UMG.SpinBox.SetAlwaysUsesDeltaSnap(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337F800>
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, char CommitMethod); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	float GetValue(); // Function UMG.SpinBox.GetValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337EFD0>
	float GetMinValue(); // Function UMG.SpinBox.GetMinValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337EF40>
	float GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337EF10>
	int32_t GetMinFractionalDigits(); // Function UMG.SpinBox.GetMinFractionalDigits(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337EEE0>
	float GetMaxValue(); // Function UMG.SpinBox.GetMaxValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337EEB0>
	float GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337EE80>
	int32_t GetMaxFractionalDigits(); // Function UMG.SpinBox.GetMaxFractionalDigits(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337EE50>
	float GetDelta(); // Function UMG.SpinBox.GetDelta(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337ECA0>
	char GetAlwaysUsesDeltaSnap(); // Function UMG.SpinBox.GetAlwaysUsesDeltaSnap(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337EC70>
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337E8E0>
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337E8C0>
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337E8A0>
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x337E880>
};

// Class UMG.TextBlock
class UTextBlock : public UTextLayoutWidget {

public:

	struct FText Text; // 0x128 (24)
	struct FDelegate TextDelegate; // 0x140 (16)
	struct Unknown ColorAndOpacity; // 0x150 (40)
	struct FDelegate ColorAndOpacityDelegate; // 0x178 (16)
	struct Unknown Font; // 0x188 (80)
	struct Unknown StrikeBrush; // 0x1D8 (136)
	struct Unknown ShadowOffset; // 0x260 (8)
	struct Unknown ShadowColorAndOpacity; // 0x268 (16)
	struct FDelegate ShadowColorAndOpacityDelegate; // 0x278 (16)
	float MinDesiredWidth; // 0x288 (4)
	char bWrapWithInvalidationPanel : 0; // 0x28C (1)
	char bAutoWrapText : 0; // 0x28D (1)
	char bSimpleTextMode : 0; // 0x28E (1)

	void SetText(struct FText InText); // Function UMG.TextBlock.SetText(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33890C0>
	void SetStrikeBrush(struct Unknown InStrikeBrush); // Function UMG.TextBlock.SetStrikeBrush(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3388E90>
	void SetShadowOffset(struct Unknown InShadowOffset); // Function UMG.TextBlock.SetShadowOffset(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3388D80>
	void SetShadowColorAndOpacity(struct Unknown InShadowColorAndOpacity); // Function UMG.TextBlock.SetShadowColorAndOpacity(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3388D00>
	void SetOpacity(float InOpacity); // Function UMG.TextBlock.SetOpacity(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3388960>
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.TextBlock.SetMinDesiredWidth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3388710>
	void SetFont(struct Unknown InFontInfo); // Function UMG.TextBlock.SetFont(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3388130>
	void SetColorAndOpacity(struct Unknown InColorAndOpacity); // Function UMG.TextBlock.SetColorAndOpacity(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3387DC0>
	void SetAutoWrapText(char InAutoTextWrap); // Function UMG.TextBlock.SetAutoWrapText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3387D30>
	struct FText GetText(); // Function UMG.TextBlock.GetText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3386CD0>
	struct Unknown GetDynamicOutlineMaterial(); // Function UMG.TextBlock.GetDynamicOutlineMaterial(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3386BC0>
	struct Unknown GetDynamicFontMaterial(); // Function UMG.TextBlock.GetDynamicFontMaterial(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3386B90>
};

// Class UMG.Throbber
class UThrobber : public UWidget {

public:

	int32_t NumberOfPieces; // 0x108 (4)
	char bAnimateHorizontally : 0; // 0x10C (1)
	char bAnimateVertically : 0; // 0x10D (1)
	char bAnimateOpacity : 0; // 0x10E (1)
	struct Unknown PieceImage; // 0x110 (8)
	struct Unknown Image; // 0x118 (136)

	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.Throbber.SetNumberOfPieces(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33888E0>
	void SetAnimateVertically(char bInAnimateVertically); // Function UMG.Throbber.SetAnimateVertically(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3387CA0>
	void SetAnimateOpacity(char bInAnimateOpacity); // Function UMG.Throbber.SetAnimateOpacity(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3387C10>
	void SetAnimateHorizontally(char bInAnimateHorizontally); // Function UMG.Throbber.SetAnimateHorizontally(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3387B80>
};

// Class UMG.TileView
class UTileView : public UListView {

public:

	float EntryHeight; // 0x368 (4)
	float EntryWidth; // 0x36C (4)
	enum class Unknow TileAlignment; // 0x370 (1)
	char bWrapHorizontalNavigation : 0; // 0x371 (1)

	void SetEntryWidth(float NewWidth); // Function UMG.TileView.SetEntryWidth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33880B0>
	void SetEntryHeight(float NewHeight); // Function UMG.TileView.SetEntryHeight(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3388030>
};

// Class UMG.TreeView
class UTreeView : public UListView {

public:

	struct FDelegate BP_OnGetItemChildren; // 0x378 (16)
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x388 (16)

	void SetItemExpansion(struct Unknown Item, char bExpandItem); // Function UMG.TreeView.SetItemExpansion(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33884C0>
	void ExpandAll(); // Function UMG.TreeView.ExpandAll(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3386A50>
	void CollapseAll(); // Function UMG.TreeView.CollapseAll(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3386A30>
};

// Class UMG.UMGSequencePlayer
class UUMGSequencePlayer : public Object {

public:

	struct Unknown Animation; // 0x408 (8)

	void SetUserTag(struct FName InUserTag); // Function UMG.UMGSequencePlayer.SetUserTag(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33891A0>
	struct FName GetUserTag(); // Function UMG.UMGSequencePlayer.GetUserTag(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3386E10>
};

// Class UMG.UniformGridPanel
class UUniformGridPanel : public UPanelWidget {

public:

	struct Unknown SlotPadding; // 0x120 (16)
	float MinDesiredSlotWidth; // 0x130 (4)
	float MinDesiredSlotHeight; // 0x134 (4)

	void SetSlotPadding(struct Unknown InSlotPadding); // Function UMG.UniformGridPanel.SetSlotPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3388E00>
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3388690>
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3388610>
	struct Unknown AddChildToUniformGrid(struct Unknown Content, int32_t InRow, int32_t InColumn); // Function UMG.UniformGridPanel.AddChildToUniformGrid(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33864D0>
};

// Class UMG.UniformGridSlot
class UUniformGridSlot : public UPanelSlot {

public:

	char HorizontalAlignment; // 0x38 (1)
	char VerticalAlignment; // 0x39 (1)
	int32_t Row; // 0x3C (4)
	int32_t Column; // 0x40 (4)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.UniformGridSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3389220>
	void SetRow(int32_t InRow); // Function UMG.UniformGridSlot.SetRow(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3388C80>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.UniformGridSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3388330>
	void SetColumn(int32_t InColumn); // Function UMG.UniformGridSlot.SetColumn(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3387F30>
};

// Class UMG.VerticalBoxSlot
class UVerticalBoxSlot : public UPanelSlot {

public:

	struct Unknown Size; // 0x38 (8)
	struct Unknown Padding; // 0x40 (16)
	char HorizontalAlignment; // 0x58 (1)
	char VerticalAlignment; // 0x59 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.VerticalBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338C850>
	void SetSize(struct Unknown InSize); // Function UMG.VerticalBoxSlot.SetSize(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338C5F0>
	void SetPadding(struct Unknown InPadding); // Function UMG.VerticalBoxSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338C180>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.VerticalBoxSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338BC00>
};

// Class UMG.Viewport
class UViewport : public UContentWidget {

public:

	struct Unknown BackgroundColor; // 0x120 (16)

	struct Unknown Spawn(struct Unknown* ActorClass); // Function UMG.Viewport.Spawn(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338CA70>
	void SetViewRotation(struct Unknown Rotation); // Function UMG.Viewport.SetViewRotation(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338C960>
	void SetViewLocation(struct Unknown Location); // Function UMG.Viewport.SetViewLocation(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338C8D0>
	struct Unknown GetViewRotation(); // Function UMG.Viewport.GetViewRotation(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B650>
	struct Unknown GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B690>
	struct Unknown GetViewLocation(); // Function UMG.Viewport.GetViewLocation(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338B610>
};

// Class UMG.WidgetAnimation
class UWidgetAnimation : public UMovieSceneSequence {

public:

	struct Unknown MovieScene; // 0x348 (8)
	struct TArray<Unknown> AnimationBindings; // 0x350 (16)
	char bLegacyFinishOnStop : 0; // 0x360 (1)
	struct FString DisplayLabel; // 0x368 (16)

	void UnbindFromAnimationStarted(struct Unknown Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationStarted(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3393000>
	void UnbindFromAnimationFinished(struct Unknown Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationFinished(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3392F20>
	void UnbindAllFromAnimationStarted(struct Unknown Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3392EA0>
	void UnbindAllFromAnimationFinished(struct Unknown Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3392E20>
	float GetStartTime(); // Function UMG.WidgetAnimation.GetStartTime(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33918E0>
	float GetEndTime(); // Function UMG.WidgetAnimation.GetEndTime(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3391090>
	void BindToAnimationStarted(struct Unknown Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationStarted(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338EE50>
	void BindToAnimationFinished(struct Unknown Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationFinished(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338ED70>
};

// Class UMG.WidgetAnimationDelegateBinding
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding {

public:

	struct TArray<Unknown> WidgetAnimationDelegateBindings; // 0x28 (16)
};

// Class UMG.WidgetAnimationPlayCallback
class UWidgetAnimationPlayCallback : public Object {

public:

	struct FMulticastInlineDelegate Finished; // 0x28 (16)

	struct Unknown CreatePlayAnimationTimeRangeProxyObject(struct Unknown& Result, struct Unknown Widget, struct Unknown InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, char PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallback.CreatePlayAnimationTimeRangeProxyObject(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338F690>
	struct Unknown CreatePlayAnimationProxyObject(struct Unknown& Result, struct Unknown Widget, struct Unknown InAnimation, float StartAtTime, int32_t NumLoopsToPlay, char PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallback.CreatePlayAnimationProxyObject(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338F490>
};

// Class UMG.WidgetBlueprintGeneratedClass
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass {

public:

	struct Unknown WidgetTree; // 0x3C8 (8)
	char bAllowTemplate : 0; // 0x3D0 (1)
	char bAllowDynamicCreation : 0; // 0x3D0 (1)
	char bValidTemplate : 0; // 0x3D0 (1)
	char bTemplateInitialized : 0; // 0x3D0 (1)
	char bCookedTemplate : 0; // 0x3D0 (1)
	char bClassRequiresNativ : 0; // 0x3D0 (1)
	struct TArray<Unknown> Bindings; // 0x3D8 (16)
	struct TArray<Unknown> Animations; // 0x3E8 (16)
	struct TArray<Unknown> NamedSlots; // 0x3F8 (16)
	struct Unknown TemplateAsset; // 0x408 (40)
	struct Unknown Template; // 0x430 (8)
};

// Class UMG.WidgetComponent
class UWidgetComponent : public UMeshComponent {

public:

	enum class Unknow Space; // 0x4E8 (1)
	enum class Unknow TimingPolicy; // 0x4E9 (1)
	struct Unknown* WidgetClass; // 0x4F0 (8)
	struct Unknown DrawSize; // 0x4F8 (8)
	char bManuallyRedraw : 0; // 0x500 (1)
	char bRedrawRequested : 0; // 0x501 (1)
	float RedrawTime; // 0x504 (4)
	struct Unknown CurrentDrawSize; // 0x510 (8)
	char bDrawAtDesiredSize : 0; // 0x518 (1)
	struct Unknown Pivot; // 0x51C (8)
	char bReceiveHardwareInput : 0; // 0x524 (1)
	char bWindowFocusable : 0; // 0x525 (1)
	enum class Unknow WindowVisibility; // 0x526 (1)
	char bApplyGammaCorrection : 0; // 0x527 (1)
	struct Unknown OwnerPlayer; // 0x528 (8)
	struct Unknown BackgroundColor; // 0x530 (16)
	struct Unknown TintColorAndOpacity; // 0x540 (16)
	float OpacityFromTexture; // 0x550 (4)
	enum class Unknow BlendMode; // 0x554 (1)
	char bIsTwoSided : 0; // 0x555 (1)
	char TickWhenOffscreen : 0; // 0x556 (1)
	struct Unknown Widget; // 0x558 (8)
	struct Unknown BodySetup; // 0x580 (8)
	struct Unknown TranslucentMaterial; // 0x588 (8)
	struct Unknown TranslucentMaterial_OneSided; // 0x590 (8)
	struct Unknown OpaqueMaterial; // 0x598 (8)
	struct Unknown OpaqueMaterial_OneSided; // 0x5A0 (8)
	struct Unknown MaskedMaterial; // 0x5A8 (8)
	struct Unknown MaskedMaterial_OneSided; // 0x5B0 (8)
	struct Unknown RenderTarget; // 0x5B8 (8)
	struct Unknown MaterialInstance; // 0x5C0 (8)
	char bAddedToScreen : 0; // 0x5C8 (1)
	char bEditTimeUsable : 0; // 0x5C9 (1)
	struct FName SharedLayerName; // 0x5CC (8)
	int32_t LayerZOrder; // 0x5D4 (4)
	enum class Unknow GeometryMode; // 0x5D8 (1)
	float CylinderArcAngle; // 0x5DC (4)

	void SetWindowVisibility(enum class Unknow InVisibility); // Function UMG.WidgetComponent.SetWindowVisibility(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3396CB0>
	void SetWindowFocusable(char bInWindowFocusable); // Function UMG.WidgetComponent.SetWindowFocusable(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3396C20>
	void SetWidgetSpace(enum class Unknow NewSpace); // Function UMG.WidgetComponent.SetWidgetSpace(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3396BA0>
	void SetWidget(struct Unknown Widget); // Function UMG.WidgetComponent.SetWidget(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3396B10>
	void SetTwoSided(char bWantTwoSided); // Function UMG.WidgetComponent.SetTwoSided(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3396A80>
	void SetTintColorAndOpacity(struct Unknown NewTintColorAndOpacity); // Function UMG.WidgetComponent.SetTintColorAndOpacity(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3396A00>
	void SetTickWhenOffscreen(char bWantTickWhenOffscreen); // Function UMG.WidgetComponent.SetTickWhenOffscreen(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3396980>
	void SetRedrawTime(float InRedrawTime); // Function UMG.WidgetComponent.SetRedrawTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3396900>
	void SetPivot(struct Unknown& InPivot); // Function UMG.WidgetComponent.SetPivot(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3396870>
	void SetOwnerPlayer(struct Unknown LocalPlayer); // Function UMG.WidgetComponent.SetOwnerPlayer(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33967F0>
	void SetManuallyRedraw(char bUseManualRedraw); // Function UMG.WidgetComponent.SetManuallyRedraw(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3396760>
	void SetGeometryMode(enum class Unknow InGeometryMode); // Function UMG.WidgetComponent.SetGeometryMode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33966E0>
	void SetDrawSize(struct Unknown Size); // Function UMG.WidgetComponent.SetDrawSize(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33965E0>
	void SetDrawAtDesiredSize(char bInDrawAtDesiredSize); // Function UMG.WidgetComponent.SetDrawAtDesiredSize(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3396560>
	void SetCylinderArcAngle(float InCylinderArcAngle); // Function UMG.WidgetComponent.SetCylinderArcAngle(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33964E0>
	void SetBackgroundColor(struct Unknown NewBackgroundColor); // Function UMG.WidgetComponent.SetBackgroundColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3396380>
	void RequestRedraw(); // Function UMG.WidgetComponent.RequestRedraw(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3396190>
	enum class Unknow GetWindowVisiblility(); // Function UMG.WidgetComponent.GetWindowVisiblility(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33958A0>
	char GetWindowFocusable(); // Function UMG.WidgetComponent.GetWindowFocusable(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3395880>
	enum class Unknow GetWidgetSpace(); // Function UMG.WidgetComponent.GetWidgetSpace(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3395860>
	struct Unknown GetUserWidgetObject(); // Function UMG.WidgetComponent.GetUserWidgetObject(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3395660>
	char GetTwoSided(); // Function UMG.WidgetComponent.GetTwoSided(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3395640>
	char GetTickWhenOffscreen(); // Function UMG.WidgetComponent.GetTickWhenOffscreen(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3395620>
	struct Unknown GetRenderTarget(); // Function UMG.WidgetComponent.GetRenderTarget(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33955F0>
	float GetRedrawTime(); // Function UMG.WidgetComponent.GetRedrawTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33955D0>
	struct Unknown GetPivot(); // Function UMG.WidgetComponent.GetPivot(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33954F0>
	struct Unknown GetOwnerPlayer(); // Function UMG.WidgetComponent.GetOwnerPlayer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33954C0>
	struct Unknown GetMaterialInstance(); // Function UMG.WidgetComponent.GetMaterialInstance(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33952A0>
	char GetManuallyRedraw(); // Function UMG.WidgetComponent.GetManuallyRedraw(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3395280>
	enum class Unknow GetGeometryMode(); // Function UMG.WidgetComponent.GetGeometryMode(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33951B0>
	struct Unknown GetDrawSize(); // Function UMG.WidgetComponent.GetDrawSize(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3395170>
	char GetDrawAtDesiredSize(); // Function UMG.WidgetComponent.GetDrawAtDesiredSize(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3395150>
	float GetCylinderArcAngle(); // Function UMG.WidgetComponent.GetCylinderArcAngle(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3395130>
	struct Unknown GetCurrentDrawSize(); // Function UMG.WidgetComponent.GetCurrentDrawSize(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33950F0>
};

// Class UMG.WidgetInteractionComponent
class UWidgetInteractionComponent : public USceneComponent {

public:

	struct FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x238 (16)
	int32_t VirtualUserIndex; // 0x258 (4)
	float PointerIndex; // 0x25C (4)
	char TraceChannel; // 0x260 (1)
	float InteractionDistance; // 0x264 (4)
	enum class Unknow InteractionSource; // 0x268 (1)
	char bEnableHitTesting : 0; // 0x269 (1)
	char bShowDebug : 0; // 0x26A (1)
	struct Unknown DebugColor; // 0x26C (16)
	struct Unknown CustomHitResult; // 0x2F8 (136)
	struct Unknown LocalHitLocation; // 0x380 (8)
	struct Unknown LastLocalHitLocation; // 0x388 (8)
	struct Unknown HoveredWidgetComponent; // 0x390 (8)
	struct Unknown LastHitResult; // 0x398 (136)
	char bIsHoveredWidgetInteractable : 0; // 0x420 (1)
	char bIsHoveredWidgetFocusable : 0; // 0x421 (1)
	char bIsHoveredWidgetHitTestVisible : 0; // 0x422 (1)

	void SetFocus(struct Unknown FocusWidget); // Function UMG.WidgetInteractionComponent.SetFocus(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3396660>
	void SetCustomHitResult(struct Unknown& HitResult); // Function UMG.WidgetInteractionComponent.SetCustomHitResult(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3396400>
	char SendKeyChar(struct FString Characters, char bRepeat); // Function UMG.WidgetInteractionComponent.SendKeyChar(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3396230>
	void ScrollWheel(float ScrollDelta); // Function UMG.WidgetInteractionComponent.ScrollWheel(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33961B0>
	void ReleasePointerKey(struct Unknown Key); // Function UMG.WidgetInteractionComponent.ReleasePointerKey(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3396030>
	char ReleaseKey(struct Unknown Key); // Function UMG.WidgetInteractionComponent.ReleaseKey(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3395F30>
	void PressPointerKey(struct Unknown Key); // Function UMG.WidgetInteractionComponent.PressPointerKey(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3395B80>
	char PressKey(struct Unknown Key, char bRepeat); // Function UMG.WidgetInteractionComponent.PressKey(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3395A50>
	char PressAndReleaseKey(struct Unknown Key); // Function UMG.WidgetInteractionComponent.PressAndReleaseKey(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3395950>
	char IsOverInteractableWidget(); // Function UMG.WidgetInteractionComponent.IsOverInteractableWidget(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3395920>
	char IsOverHitTestVisibleWidget(); // Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33958F0>
	char IsOverFocusableWidget(); // Function UMG.WidgetInteractionComponent.IsOverFocusableWidget(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33958C0>
	struct Unknown GetLastHitResult(); // Function UMG.WidgetInteractionComponent.GetLastHitResult(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3395200>
	struct Unknown GetHoveredWidgetComponent(); // Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33951D0>
	struct Unknown Get2DHitLocation(); // Function UMG.WidgetInteractionComponent.Get2DHitLocation(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33950B0>
};

// Class UMG.WidgetNavigation
class UWidgetNavigation : public Object {

public:

	struct Unknown Up; // 0x28 (36)
	struct Unknown Down; // 0x4C (36)
	struct Unknown Left; // 0x70 (36)
	struct Unknown Right; // 0x94 (36)
	struct Unknown Next; // 0xB8 (36)
	struct Unknown Previous; // 0xDC (36)
};

// Class UMG.WidgetSwitcher
class UWidgetSwitcher : public UPanelWidget {

public:

	int32_t ActiveWidgetIndex; // 0x120 (4)

	void SetActiveWidgetIndex(int32_t Index); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33989C0>
	void SetActiveWidget(struct Unknown Widget); // Function UMG.WidgetSwitcher.SetActiveWidget(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3371850>
	struct Unknown GetWidgetAtIndex(int32_t Index); // Function UMG.WidgetSwitcher.GetWidgetAtIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3398930>
	int32_t GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3398900>
	int32_t GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33988D0>
	struct Unknown GetActiveWidget(); // Function UMG.WidgetSwitcher.GetActiveWidget(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x33988A0>
};

// Class UMG.WidgetSwitcherSlot
class UWidgetSwitcherSlot : public UPanelSlot {

public:

	struct Unknown Padding; // 0x40 (16)
	char HorizontalAlignment; // 0x50 (1)
	char VerticalAlignment; // 0x51 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.WidgetSwitcherSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3399010>
	void SetPadding(struct Unknown InPadding); // Function UMG.WidgetSwitcherSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3377610>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3398B60>
};

// Class UMG.WidgetTree
class UWidgetTree : public Object {

public:

	struct Unknown RootWidget; // 0x28 (8)
};

// Class UMG.WindowTitleBarArea
class UWindowTitleBarArea : public UContentWidget {

public:

	char bWindowButtonsEnabled : 0; // 0x120 (1)
	char bDoubleClickTogglesFullscreen : 0; // 0x121 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.WindowTitleBarArea.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3399090>
	void SetPadding(struct Unknown InPadding); // Function UMG.WindowTitleBarArea.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3398E60>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.WindowTitleBarArea.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3398BE0>
};

// Class UMG.WindowTitleBarAreaSlot
class UWindowTitleBarAreaSlot : public UPanelSlot {

public:

	struct Unknown Padding; // 0x38 (16)
	char HorizontalAlignment; // 0x48 (1)
	char VerticalAlignment; // 0x49 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3399110>
	void SetPadding(struct Unknown InPadding); // Function UMG.WindowTitleBarAreaSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3398EF0>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3398C60>
};

// Class UMG.WrapBox
class UWrapBox : public UPanelWidget {

public:

	struct Unknown InnerSlotPadding; // 0x120 (8)
	float WrapWidth; // 0x128 (4)
	char bExplicitWrapWidth : 0; // 0x12C (1)
	char HorizontalAlignment; // 0x12D (1)

	void SetInnerSlotPadding(struct Unknown InPadding); // Function UMG.WrapBox.SetInnerSlotPadding(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3398DE0>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.WrapBox.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3398CE0>
	struct Unknown AddChildToWrapBox(struct Unknown Content); // Function UMG.WrapBox.AddChildToWrapBox(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3398810>
};

// Class UMG.WrapBoxSlot
class UWrapBoxSlot : public UPanelSlot {

public:

	struct Unknown Padding; // 0x38 (16)
	char bFillEmptySpace : 0; // 0x48 (1)
	float FillSpanWhenLessThan; // 0x4C (4)
	char HorizontalAlignment; // 0x50 (1)
	char VerticalAlignment; // 0x51 (1)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.WrapBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3399190>
	void SetPadding(struct Unknown InPadding); // Function UMG.WrapBoxSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3398F80>
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.WrapBoxSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3398D60>
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3398AE0>
	void SetFillEmptySpace(char InbFillEmptySpace); // Function UMG.WrapBoxSlot.SetFillEmptySpace(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3398A50>
};

// ScriptStruct UMG.WidgetTransform
struct FWidgetTransform {
	struct Unknown Translation; // 0x0 (8)
	struct Unknown Scale; // 0x8 (8)
	struct Unknown Shear; // 0x10 (8)
	float Angle; // 0x18 (4)
};

// ScriptStruct UMG.ShapedTextOptions
struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 0; // 0x0 (1)
	char bOverride_TextFlowDirection : 0; // 0x0 (1)
	enum class Unknow TextShapingMethod; // 0x1 (1)
	enum class Unknow TextFlowDirection; // 0x2 (1)
};

// ScriptStruct UMG.AnimationEventBinding
struct FAnimationEventBinding {
	struct Unknown Animation; // 0x0 (8)
	struct FDelegate Delegate; // 0x8 (16)
	enum class Unknow AnimationEvent; // 0x18 (1)
	struct FName UserTag; // 0x1C (8)
};

// ScriptStruct UMG.NamedSlotBinding
struct FNamedSlotBinding {
	struct FName Name; // 0x0 (8)
	struct Unknown Content; // 0x8 (8)
};

// ScriptStruct UMG.AnchorData
struct FAnchorData {
	struct Unknown Offsets; // 0x0 (16)
	struct Unknown Anchors; // 0x10 (16)
	struct Unknown Alignment; // 0x20 (8)
};

// ScriptStruct UMG.MovieScene2DTransformMask
struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x0 (4)
};

// ScriptStruct UMG.MovieScene2DTransformSectionTem
struct FMovieScene2DTransformSectionTem : FMovieScenePropertySectionTemplate {
	struct Unknown Translation[0x2]; // 0x48 (320)
	struct Unknown Rotation; // 0x188 (160)
	struct Unknown Scale[0x2]; // 0x228 (320)
	struct Unknown Shear[0x2]; // 0x368 (320)
	enum class Unknow BlendType; // 0x4A8 (1)
	struct Unknown Mask; // 0x4AC (4)
};

// ScriptStruct UMG.MovieSceneMarginSectionTemplate
struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate {
	struct Unknown TopCurve; // 0x48 (160)
	struct Unknown LeftCurve; // 0xE8 (160)
	struct Unknown RightCurve; // 0x188 (160)
	struct Unknown BottomCurve; // 0x228 (160)
	enum class Unknow BlendType; // 0x2C8 (1)
};

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	struct TArray<Unknown> BrushPropertyNamePath; // 0x80 (16)
};

// ScriptStruct UMG.RichTextStyleRow
struct FRichTextStyleRow : FTableRowBase {
	struct Unknown TextStyle; // 0x8 (616)
};

// ScriptStruct UMG.RichImageRow
struct FRichImageRow : FTableRowBase {
	struct Unknown Brush; // 0x8 (136)
};

// ScriptStruct UMG.SlateMeshVertex
struct FSlateMeshVertex {
	struct Unknown Position; // 0x0 (8)
	struct Unknown Color; // 0x8 (4)
	struct Unknown UV0; // 0xC (8)
	struct Unknown UV1; // 0x14 (8)
	struct Unknown UV2; // 0x1C (8)
	struct Unknown UV3; // 0x24 (8)
	struct Unknown UV4; // 0x2C (8)
	struct Unknown UV5; // 0x34 (8)
};

// ScriptStruct UMG.SlateChildSize
struct FSlateChildSize {
	float Value; // 0x0 (4)
	char SizeRule; // 0x4 (1)
};

// ScriptStruct UMG.UserWidgetPool
struct FUserWidgetPool {
	struct TArray<Unknown> ActiveWidgets; // 0x0 (16)
	struct TArray<Unknown> InactiveWidgets; // 0x10 (16)
};

// ScriptStruct UMG.WidgetAnimationBinding
struct FWidgetAnimationBinding {
	struct FName WidgetName; // 0x0 (8)
	struct FName SlotWidgetName; // 0x8 (8)
	struct Unknown AnimationGuid; // 0x10 (16)
	char bIsRootWidget : 0; // 0x20 (1)
};

// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
struct FBlueprintWidgetAnimationDelegateBinding {
	enum class Unknow Action; // 0x0 (1)
	struct FName AnimationToBind; // 0x4 (8)
	struct FName FunctionNameToBind; // 0xC (8)
	struct FName UserTag; // 0x14 (8)
};

// ScriptStruct UMG.DelegateRuntimeBinding
struct FDelegateRuntimeBinding {
	struct FString ObjectName; // 0x0 (16)
	struct FName PropertyName; // 0x10 (8)
	struct FName FunctionName; // 0x18 (8)
	struct Unknown SourcePath; // 0x20 (40)
	enum class Unknow Kind; // 0x48 (1)
};

// ScriptStruct UMG.WidgetNavigationData
struct FWidgetNavigationData {
	enum class Unknow Rule; // 0x0 (1)
	struct FName WidgetToFocus; // 0x4 (8)
	struct TWeakObjectPtr<struct Unknown> Widget; // 0xC (8)
	struct FDelegate CustomDelegate; // 0x14 (16)
};

