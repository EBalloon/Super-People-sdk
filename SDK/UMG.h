// Enum UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8 {
	ESlateAccessibleBehavior = 0,
	ESlateAccessibleBehavior = 1,
	ESlateAccessibleBehavior = 2,
	ESlateAccessibleBehavior = 3,
	ESlateAccessibleBehavior = 4,
	ESlateAccessibleBehavior = 5
};

// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8 {
	ESlateVisibility = 0,
	ESlateVisibility = 1,
	ESlateVisibility = 2,
	ESlateVisibility = 3,
	ESlateVisibility = 4,
	ESlateVisibility = 5
};

// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8 {
	EVirtualKeyboardType = 0,
	EVirtualKeyboardType = 1,
	EVirtualKeyboardType = 2,
	EVirtualKeyboardType = 3,
	EVirtualKeyboardType = 4,
	EVirtualKeyboardType = 5,
	EVirtualKeyboardType = 6
};

// Enum UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8 {
	EWidgetAnimationEvent = 0,
	EWidgetAnimationEvent = 1,
	EWidgetAnimationEvent = 2
};

// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8 {
	EUMGSequencePlayMode = 0,
	EUMGSequencePlayMode = 1,
	EUMGSequencePlayMode = 2,
	EUMGSequencePlayMode = 3
};

// Enum UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8 {
	EWidgetTickFrequency = 0,
	EWidgetTickFrequency = 1,
	EWidgetTickFrequency = 2
};

// Enum UMG.EDragPivot
enum class EDragPivot : uint8 {
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
	EDragPivot = 10
};

// Enum UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8 {
	EDynamicBoxType = 0,
	EDynamicBoxType = 1,
	EDynamicBoxType = 2,
	EDynamicBoxType = 3,
	EDynamicBoxType = 4
};

// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8 {
	ESlateSizeRule = 0,
	ESlateSizeRule = 1,
	ESlateSizeRule = 2
};

// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8 {
	EWidgetDesignFlags = 0,
	EWidgetDesignFlags = 1,
	EWidgetDesignFlags = 2,
	EWidgetDesignFlags = 4,
	EWidgetDesignFlags = 5
};

// Enum UMG.EBindingKind
enum class EBindingKind : uint8 {
	EBindingKind = 0,
	EBindingKind = 1,
	EBindingKind = 2
};

// Enum UMG.EWindowVisibility
enum class EWindowVisibility : uint8 {
	EWindowVisibility = 0,
	EWindowVisibility = 1,
	EWindowVisibility = 2
};

// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8 {
	EWidgetGeometryMode = 0,
	EWidgetGeometryMode = 1,
	EWidgetGeometryMode = 2
};

// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8 {
	EWidgetBlendMode = 0,
	EWidgetBlendMode = 1,
	EWidgetBlendMode = 2,
	EWidgetBlendMode = 3
};

// Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8 {
	EWidgetTimingPolicy = 0,
	EWidgetTimingPolicy = 1,
	EWidgetTimingPolicy = 2
};

// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8 {
	EWidgetSpace = 0,
	EWidgetSpace = 1,
	EWidgetSpace = 2
};

// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8 {
	EWidgetInteractionSource = 0,
	EWidgetInteractionSource = 1,
	EWidgetInteractionSource = 2,
	EWidgetInteractionSource = 3,
	EWidgetInteractionSource = 4
};

// Class UMG.Widget
struct UWidget : UVisual {
	Unknown Slot; //  0x28 Size(8)
	struct FDelegate bIsEnabledDelegate; //  0x30 Size(10)
	struct FText ToolTipText; //  0x40 Size(18)
	struct FDelegate ToolTipTextDelegate; //  0x58 Size(10)
	Unknown ToolTipWidget; //  0x68 Size(8)
	struct FDelegate ToolTipWidgetDelegate; //  0x70 Size(10)
	struct FDelegate VisibilityDelegate; //  0x80 Size(10)
	Unknown RenderTransform; //  0x90 Size(1c)
	Unknown RenderTransformPivot; //  0xac Size(8)
	char bIsVariable; //  0xb4 Size(1)
	char bCreatedByConstructionScript; //  0xb4 Size(1)
	char bIsEnabled; //  0xb4 Size(1)
	char bOverride_Cursor; //  0xb4 Size(1)
	Unknown AccessibleWidgetData; //  0xb8 Size(8)
	char bIsVolatile; //  0xc0 Size(1)
	Unknown Cursor; //  0xc1 Size(1)
	Unknown Clipping; //  0xc2 Size(1)
	Unknown Visibility; //  0xc3 Size(1)
	float RenderOpacity; //  0xc4 Size(4)
	Unknown Navigation; //  0xc8 Size(8)
	Unknown FlowDirectionPreference; //  0xd0 Size(1)
	Unknown NativeBindings; //  0xf8 Size(10)

	void SetVisibility(Unknown InVisibility); // Function UMG.Widget.SetVisibility(Native|Public|BlueprintCallable) // <Game+0x3380180>
};

// Class UMG.UserWidget
struct UUserWidget : UWidget {
	Unknown ColorAndOpacity; //  0x110 Size(10)
	struct FDelegate ColorAndOpacityDelegate; //  0x120 Size(10)
	Unknown ForegroundColor; //  0x130 Size(28)
	struct FDelegate ForegroundColorDelegate; //  0x158 Size(10)
	Unknown Padding; //  0x168 Size(10)
	Unknown ActiveSequencePlayers; //  0x178 Size(10)
	Unknown StoppedSequencePlayers; //  0x188 Size(10)
	char NoPixelSnapping; //  0x198 Size(1)
	struct FDelegate NoPixelSnappingDelegate; //  0x19c Size(10)
	Unknown NamedSlotBindings; //  0x1b0 Size(10)
	Unknown WidgetTree; //  0x1c0 Size(8)
	int32_t Priority; //  0x1c8 Size(4)
	char bSupportsKeyboardFocus; //  0x1cc Size(1)
	char bIsFocusable; //  0x1cc Size(1)
	char bStopAction; //  0x1cc Size(1)
	char bHasScriptImplementedTick; //  0x1cc Size(1)
	char bHasScriptImplementedPaint; //  0x1cc Size(1)
	char bCookedWidgetTree; //  0x1cc Size(1)
	Unknown TickFrequency; //  0x1d8 Size(1)
	Unknown InputComponent; //  0x1e0 Size(8)
	Unknown AnimationCallbacks; //  0x1e8 Size(10)

	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent(Final|Native|Protected|BlueprintCallable) // <Game+0x337cea0>
};

// Class UMG.PanelWidget
struct UPanelWidget : UWidget {
	Unknown Slots; //  0x108 Size(10)

	char RemoveChildAt(int32_t Index); // Function UMG.PanelWidget.RemoveChildAt(Final|Native|Public|BlueprintCallable) // <Game+0x336a8d0>
};

// Class UMG.Border
struct UBorder : UContentWidget {
	Unknown HorizontalAlignment; //  0x120 Size(1)
	Unknown VerticalAlignment; //  0x121 Size(1)
	char bShowEffectWhenDisabled; //  0x122 Size(1)
	Unknown ContentColorAndOpacity; //  0x124 Size(10)
	struct FDelegate ContentColorAndOpacityDelegate; //  0x134 Size(10)
	Unknown Padding; //  0x144 Size(10)
	Unknown Background; //  0x158 Size(88)
	struct FDelegate BackgroundDelegate; //  0x1e0 Size(10)
	Unknown BrushColor; //  0x1f0 Size(10)
	struct FDelegate BrushColorDelegate; //  0x200 Size(10)
	Unknown DesiredSizeScale; //  0x210 Size(8)
	char bFlipForRightToLeftFlowDirection; //  0x218 Size(1)
	struct FDelegate OnMouseButtonDownEv; //  0x21c Size(10)
	struct FDelegate OnMouseButtonUpEvent; //  0x22c Size(10)
	struct FDelegate OnMouseMoveEvent; //  0x23c Size(10)
	struct FDelegate OnMouseDoubleClickEvent; //  0x24c Size(10)

	void SetVerticalAlignment(Unknown InVerticalAlignment); // Function UMG.Border.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <Game+0x335dd80>
};

// Class UMG.AsyncTaskDownloadImage
struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; //  0x30 Size(10)
	struct FMulticastInlineDelegate OnFail; //  0x40 Size(10)

	Unknown DownloadImage(struct FString URL); // Function UMG.AsyncTaskDownloadImage.DownloadImage(Final|Native|Static|Public|BlueprintCallable) // <Game+0x335c230>
};

// Class UMG.BackgroundBlur
struct UBackgroundBlur : UContentWidget {
	Unknown Padding; //  0x120 Size(10)
	Unknown HorizontalAlignment; //  0x130 Size(1)
	Unknown VerticalAlignment; //  0x131 Size(1)
	char bApplyAlphaToBlur; //  0x132 Size(1)
	float BlurStrength; //  0x134 Size(4)
	char bOverrideAutoRadiusCalculation; //  0x138 Size(1)
	int32_t BlurRadius; //  0x13c Size(4)
	Unknown LowQualityFallbackBrush; //  0x140 Size(88)

	void SetVerticalAlignment(Unknown InVerticalAlignment); // Function UMG.BackgroundBlur.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <Game+0x335dc80>
};

// Class UMG.PanelSlot
struct UPanelSlot : UVisual {
	Unknown Parent; //  0x28 Size(8)
	Unknown Content; //  0x30 Size(8)
};

// Class UMG.BackgroundBlurSlot
struct UBackgroundBlurSlot : UPanelSlot {
	Unknown Padding; //  0x38 Size(10)
	Unknown HorizontalAlignment; //  0x48 Size(1)
	Unknown VerticalAlignment; //  0x49 Size(1)

	void SetVerticalAlignment(Unknown InVerticalAlignment); // Function UMG.BackgroundBlurSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <Game+0x335dd00>
};

// Class UMG.PropertyBinding
struct UPropertyBinding : Object {
	Unknown SourceObject; //  0x28 Size(8)
	Unknown SourcePath; //  0x30 Size(28)
	struct FName DestinationProperty; //  0x58 Size(8)
};

// Class UMG.BorderSlot
struct UBorderSlot : UPanelSlot {
	Unknown Padding; //  0x38 Size(10)
	Unknown HorizontalAlignment; //  0x48 Size(1)
	Unknown VerticalAlignment; //  0x49 Size(1)

	void SetVerticalAlignment(Unknown InVerticalAlignment); // Function UMG.BorderSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <Game+0x335de00>
};

// Class UMG.Button
struct UButton : UContentWidget {
	Unknown Style; //  0x160 Size(8)
	Unknown WidgetStyle; //  0x168 Size(278)
	Unknown ColorAndOpacity; //  0x3e0 Size(10)
	Unknown BackgroundColor; //  0x3f0 Size(10)
	Unknown ClickMethod; //  0x400 Size(1)
	Unknown TouchMethod; //  0x401 Size(1)
	Unknown PressMethod; //  0x402 Size(1)
	char IsFocusable; //  0x403 Size(1)
	struct FMulticastInlineDelegate OnClicked; //  0x408 Size(10)
	struct FMulticastInlineDelegate OnPressed; //  0x418 Size(10)
	struct FMulticastInlineDelegate OnReleased; //  0x428 Size(10)
	struct FMulticastInlineDelegate OnHovered; //  0x438 Size(10)
	struct FMulticastInlineDelegate OnUnhovered; //  0x448 Size(10)

	void SetTouchMethod(Unknown InTouchMethod); // Function UMG.Button.SetTouchMethod(Final|Native|Public|BlueprintCallable) // <Game+0x335dc00>
};

// Class UMG.ButtonSlot
struct UButtonSlot : UPanelSlot {
	Unknown Padding; //  0x38 Size(10)
	Unknown HorizontalAlignment; //  0x48 Size(1)
	Unknown VerticalAlignment; //  0x49 Size(1)

	void SetVerticalAlignment(Unknown InVerticalAlignment); // Function UMG.ButtonSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <Game+0x335de80>
};

// Class UMG.CanvasPanelSlot
struct UCanvasPanelSlot : UPanelSlot {
	Unknown LayoutData; //  0x38 Size(28)
	char bAutoSize; //  0x60 Size(1)
	int32_t ZOrder; //  0x64 Size(4)

	void SetZOrder(int32_t InZOrder); // Function UMG.CanvasPanelSlot.SetZOrder(Final|Native|Public|BlueprintCallable) // <Game+0x335df00>
};

// Class UMG.CheckBox
struct UCheckBox : UContentWidget {
	Unknown CheckedState; //  0x120 Size(1)
	struct FDelegate CheckedStateDelegate; //  0x124 Size(10)
	Unknown WidgetStyle; //  0x138 Size(580)
	Unknown Style; //  0x6b8 Size(8)
	Unknown UncheckedImage; //  0x6c0 Size(8)
	Unknown UncheckedHoveredImage; //  0x6c8 Size(8)
	Unknown UncheckedPressedImage; //  0x6d0 Size(8)
	Unknown CheckedImage; //  0x6d8 Size(8)
	Unknown CheckedHoveredImage; //  0x6e0 Size(8)
	Unknown CheckedPressedImage; //  0x6e8 Size(8)
	Unknown UndeterminedImage; //  0x6f0 Size(8)
	Unknown UndeterminedHoveredImage; //  0x6f8 Size(8)
	Unknown UndeterminedPressedImage; //  0x700 Size(8)
	Unknown HorizontalAlignment; //  0x708 Size(1)
	Unknown Padding; //  0x70c Size(10)
	Unknown BorderBackgroundColor; //  0x720 Size(28)
	char IsFocusable; //  0x748 Size(1)
	struct FMulticastInlineDelegate OnCheckStateChanged; //  0x750 Size(10)

	void SetIsChecked(char InIsChecked); // Function UMG.CheckBox.SetIsChecked(Final|Native|Public|BlueprintCallable) // <Game+0x335d290>
};

// Class UMG.CircularThrobber
struct UCircularThrobber : UWidget {
	int32_t Numb; //  0x108 Size(4)
	float Period; //  0x10c Size(4)
	float Radius; //  0x110 Size(4)
	Unknown PieceImage; //  0x118 Size(8)
	Unknown Image; //  0x120 Size(88)
	char bEnableRadius; //  0x1a8 Size(1)

	void SetRadius(float InRadius); // Function UMG.CircularThrobber.SetRadius(Final|Native|Public|BlueprintCallable) // <Game+0x3361630>
};

// Class UMG.Comb
struct UComb : UWidget {
	Unknown Items; //  0x108 Size(10)
	struct FDelegate OnGenerateWidgetEvent; //  0x118 Size(10)
	char bIsFocusable; //  0x128 Size(1)
};

// Class UMG.Comb
struct UComb : UWidget {
	Unknown DefaultOptions; //  0x108 Size(10)
	struct FString SelectedOption; //  0x118 Size(10)
	Unknown WidgetStyle; //  0x128 Size(3f0)
	Unknown ItemStyle; //  0x518 Size(7c8)
	Unknown ContentPadding; //  0xce0 Size(10)
	float MaxListHeight; //  0xcf0 Size(4)
	char HasDownArrow; //  0xcf4 Size(1)
	char Enab; //  0xcf5 Size(1)
	Unknown Font; //  0xcf8 Size(50)
	Unknown ForegroundColor; //  0xd48 Size(28)
	char bIsFocusable; //  0xd70 Size(1)
	struct FDelegate OnGenerateWidgetEvent; //  0xd74 Size(10)
	struct FMulticastInlineDelegate OnSelectionChanged; //  0xd88 Size(10)
	struct FMulticastInlineDelegate OnOpening; //  0xd98 Size(10)

	void SetSelectedOption(struct FString Option); // Function UMG.Comb.SetSelectedOption(Final|Native|Public|BlueprintCallable) // <Game+0x3361730>
};

// Class UMG.DragDropOperation
struct UDragDropOperation : Object {
	struct FString Tag; //  0x28 Size(10)
	Unknown payload; //  0x38 Size(8)
	Unknown DefaultDragVisual; //  0x40 Size(8)
	Unknown Pivot; //  0x48 Size(1)
	Unknown Offset; //  0x4c Size(8)
	char bUseMoveAnimation; //  0x54 Size(1)
	struct FMulticastInlineDelegate OnDrop; //  0x58 Size(10)
	struct FMulticastInlineDelegate OnDragCancelled; //  0x68 Size(10)
	struct FMulticastInlineDelegate OnDragged; //  0x78 Size(10)

	void Drop(Unknown& PointerEvent); // Function UMG.DragDropOperation.Drop(Native|Event|Public|HasOutParms|BlueprintEvent) // <Game+0x33604f0>
};

// Class UMG.DynamicEntryBoxBase
struct UDynamicEntryBoxBase : UWidget {
	Unknown EntryBoxType; //  0x108 Size(1)
	Unknown EntrySpacing; //  0x10c Size(8)
	Unknown SpacingPattern; //  0x118 Size(10)
	Unknown EntrySizeRule; //  0x128 Size(8)
	Unknown EntryHorizontalAlignment; //  0x130 Size(1)
	Unknown EntryVerticalAlignment; //  0x131 Size(1)
	int32_t MaxElementSize; //  0x134 Size(4)
	Unknown EntryWidgetPool; //  0x148 Size(80)

	void SetEntrySpacing(Unknown& InEntrySpacing); // Function UMG.DynamicEntryBoxBase.SetEntrySpacing(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <Game+0x3360ec0>
};

// Class UMG.DynamicEntryBox
struct UDynamicEntryBox : UDynamicEntryBoxBase {
	Unknown EntryWidgetClass; //  0x1c8 Size(8)

	void Reset(char bDeleteWidgets); // Function UMG.DynamicEntryBox.Reset(Final|Native|Public|BlueprintCallable) // <Game+0x3360d80>
};

// Class UMG.EditableText
struct UEditableText : UWidget {
	struct FText Text; //  0x108 Size(18)
	struct FDelegate TextDelegate; //  0x120 Size(10)
	struct FText HintText; //  0x130 Size(18)
	struct FDelegate HintTextDelegate; //  0x148 Size(10)
	Unknown WidgetStyle; //  0x158 Size(218)
	Unknown Style; //  0x370 Size(8)
	Unknown BackgroundImageSelected; //  0x378 Size(8)
	Unknown BackgroundImageComposing; //  0x380 Size(8)
	Unknown CaretImage; //  0x388 Size(8)
	Unknown Font; //  0x390 Size(50)
	Unknown ColorAndOpacity; //  0x3e0 Size(28)
	char IsReadOnly; //  0x408 Size(1)
	char IsPassword; //  0x409 Size(1)
	float MinimumDesiredWidth; //  0x40c Size(4)
	char IsCaretMovedWhenGainFocus; //  0x410 Size(1)
	char SelectAllTextWhenFocused; //  0x411 Size(1)
	char RevertTextOnEscape; //  0x412 Size(1)
	char ClearKeyboardFocusOnCommit; //  0x413 Size(1)
	char SelectAllTextOnCommit; //  0x414 Size(1)
	char AllowContextMenu; //  0x415 Size(1)
	Unknown Keyb; //  0x416 Size(1)
	Unknown VirtualKeyboardOptions; //  0x417 Size(1)
	Unknown VirtualKeyboardTrigger; //  0x418 Size(1)
	Unknown VirtualKeyboardDismissActio; //  0x419 Size(1)
	Unknown Justification; //  0x41a Size(1)
	Unknown ShapedTextOptions; //  0x41b Size(3)
	struct FMulticastInlineDelegate OnTextChanged; //  0x420 Size(10)
	struct FMulticastInlineDelegate OnTextCommitted; //  0x430 Size(10)

	void SetText(struct FText InText); // Function UMG.EditableText.SetText(Final|Native|Public|BlueprintCallable) // <Game+0x3361820>
};

// Class UMG.EditableTextBox
struct UEditableTextBox : UWidget {
	struct FText Text; //  0x108 Size(18)
	struct FDelegate TextDelegate; //  0x120 Size(10)
	Unknown WidgetStyle; //  0x130 Size(7f0)
	Unknown Style; //  0x920 Size(8)
	struct FText HintText; //  0x928 Size(18)
	struct FDelegate HintTextDelegate; //  0x940 Size(10)
	Unknown Font; //  0x950 Size(50)
	Unknown ForegroundColor; //  0x9a0 Size(10)
	Unknown BackgroundColor; //  0x9b0 Size(10)
	Unknown ReadOnlyForegroundColor; //  0x9c0 Size(10)
	char IsReadOnly; //  0x9d0 Size(1)
	char IsPassword; //  0x9d1 Size(1)
	float MinimumDesiredWidth; //  0x9d4 Size(4)
	Unknown Padding; //  0x9d8 Size(10)
	char IsCaretMovedWhenGainFocus; //  0x9e8 Size(1)
	char SelectAllTextWhenFocused; //  0x9e9 Size(1)
	char RevertTextOnEscape; //  0x9ea Size(1)
	char ClearKeyboardFocusOnCommit; //  0x9eb Size(1)
	char SelectAllTextOnCommit; //  0x9ec Size(1)
	char AllowContextMenu; //  0x9ed Size(1)
	Unknown Keyb; //  0x9ee Size(1)
	Unknown VirtualKeyboardOptions; //  0x9ef Size(1)
	Unknown VirtualKeyboardTrigger; //  0x9f0 Size(1)
	Unknown VirtualKeyboardDismissActio; //  0x9f1 Size(1)
	Unknown Justification; //  0x9f2 Size(1)
	Unknown ShapedTextOptions; //  0x9f3 Size(3)
	struct FMulticastInlineDelegate OnTextChanged; //  0x9f8 Size(10)
	struct FMulticastInlineDelegate OnTextCommitted; //  0xa08 Size(10)

	void SetText(struct FText InText); // Function UMG.EditableTextBox.SetText(Final|Native|Public|BlueprintCallable) // <Game+0x3361900>
};

// Class UMG.ExpandableArea
struct UExpandableArea : UWidget {
	Unknown Style; //  0x110 Size(120)
	Unknown BorderBrush; //  0x230 Size(88)
	Unknown BorderColor; //  0x2b8 Size(28)
	char bIsExpanded; //  0x2e0 Size(1)
	float MaxHeight; //  0x2e4 Size(4)
	Unknown HeaderPadding; //  0x2e8 Size(10)
	Unknown AreaPadding; //  0x2f8 Size(10)
	struct FMulticastInlineDelegate OnExpansionChanged; //  0x308 Size(10)
	Unknown HeaderContent; //  0x318 Size(8)
	Unknown BodyContent; //  0x320 Size(8)

	void SetIsExpanded_Animated(char IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded_Animated(Final|Native|Public|BlueprintCallable) // <Game+0x3365c70>
};

// Class UMG.GridPanel
struct UGridPanel : UPanelWidget {
	Unknown ColumnFill; //  0x120 Size(10)
	Unknown RowFill; //  0x130 Size(10)

	void SetRowFill(int32_t columnIndex, float Coefficient); // Function UMG.GridPanel.SetRowFill(Final|Native|Public|BlueprintCallable) // <Game+0x33661e0>
};

// Class UMG.GridSlot
struct UGridSlot : UPanelSlot {
	Unknown Padding; //  0x38 Size(10)
	Unknown HorizontalAlignment; //  0x48 Size(1)
	Unknown VerticalAlignment; //  0x49 Size(1)
	int32_t Row; //  0x4c Size(4)
	int32_t RowSpan; //  0x50 Size(4)
	int32_t Column; //  0x54 Size(4)
	int32_t ColumnSpan; //  0x58 Size(4)
	int32_t Layer; //  0x5c Size(4)
	Unknown Nudge; //  0x60 Size(8)

	void SetVerticalAlignment(Unknown InVerticalAlignment); // Function UMG.GridSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <Game+0x3366630>
};

// Class UMG.HorizontalBoxSlot
struct UHorizontalBoxSlot : UPanelSlot {
	Unknown Padding; //  0x40 Size(10)
	Unknown Size; //  0x50 Size(8)
	Unknown HorizontalAlignment; //  0x58 Size(1)
	Unknown VerticalAlignment; //  0x59 Size(1)

	void SetVerticalAlignment(Unknown InVerticalAlignment); // Function UMG.HorizontalBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <Game+0x33666b0>
};

// Class UMG.Image
struct UImage : UWidget {
	Unknown Brush; //  0x108 Size(88)
	struct FDelegate BrushDelegate; //  0x190 Size(10)
	Unknown ColorAndOpacity; //  0x1a0 Size(10)
	struct FDelegate ColorAndOpacityDelegate; //  0x1b0 Size(10)
	char bFlipForRightToLeftFlowDirection; //  0x1c0 Size(1)
	struct FDelegate OnMouseButtonDownEv; //  0x1c4 Size(10)

	void SetOpacity(float InOpacity); // Function UMG.Image.SetOpacity(Final|Native|Public|BlueprintCallable) // <Game+0x3365fc0>
};

// Class UMG.InputKeySelector
struct UInputKeySelector : UWidget {
	Unknown WidgetStyle; //  0x108 Size(278)
	Unknown TextStyle; //  0x380 Size(268)
	Unknown SelectedKey; //  0x5e8 Size(20)
	Unknown Font; //  0x608 Size(50)
	Unknown Margin; //  0x658 Size(10)
	Unknown ColorAndOpacity; //  0x668 Size(10)
	struct FText KeySelectionText; //  0x678 Size(18)
	struct FText NoKeySpecifiedText; //  0x690 Size(18)
	char bAllowModifierKeys; //  0x6a8 Size(1)
	char bAllowGamepadKeys; //  0x6a9 Size(1)
	Unknown EscapeKeys; //  0x6b0 Size(10)
	struct FMulticastInlineDelegate OnKeySelected; //  0x6c0 Size(10)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; //  0x6d0 Size(10)

	void SetTextBlockVisibility(Unknown InVisibility); // Function UMG.InputKeySelector.SetTextBlockVisibility(Final|Native|Public|BlueprintCallable) // <Game+0x33665b0>
};

// Class UMG.InvalidationBox
struct UInvalidationBox : UContentWidget {
	char bCanCache; //  0x120 Size(1)
	char CacheRelativeTransforms; //  0x121 Size(1)

	void SetCanCache(char CanCache); // Function UMG.InvalidationBox.SetCanCache(Final|Native|Public|BlueprintCallable) // <Game+0x33656f0>
};

// Class UMG.ListViewBase
struct UListViewBase : UWidget {
	Unknown EntryWidgetClass; //  0x108 Size(8)
	float WheelScrollMultiplier; //  0x110 Size(4)
	char bEnableScrollAnimation; //  0x114 Size(1)
	char bEnableFixedLineOffset; //  0x115 Size(1)
	float FixedLineScrollOffset; //  0x118 Size(4)
	struct FMulticastInlineDelegate BP_OnEntryGenerated; //  0x120 Size(10)
	struct FMulticastInlineDelegate BP_OnEntryReleased; //  0x130 Size(10)
	Unknown EntryWidgetPool; //  0x140 Size(80)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ListViewBase.SetWheelScrollMultiplier(Final|Native|Public|BlueprintCallable) // <Game+0x336b300>
};

// Class UMG.ListView
struct UListView : UListViewBase {
	Unknown Orientation; //  0x2d8 Size(1)
	Unknown SelectionMode; //  0x2d9 Size(1)
	Unknown ConsumeMouseWheel; //  0x2da Size(1)
	char bClearSelectionOnClick; //  0x2db Size(1)
	char bIsFocusable; //  0x2dc Size(1)
	float EntrySpacing; //  0x2e0 Size(4)
	char bReturnFocusToSelection; //  0x2e4 Size(1)
	Unknown ListItems; //  0x2e8 Size(10)
	struct FMulticastInlineDelegate BP_OnEntryInitialized; //  0x308 Size(10)
	struct FMulticastInlineDelegate BP_OnItemClicked; //  0x318 Size(10)
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked; //  0x328 Size(10)
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged; //  0x338 Size(10)
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged; //  0x348 Size(10)
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView; //  0x358 Size(10)

	void SetSelectionMode(Unknown SelectionMode); // Function UMG.ListView.SetSelectionMode(Final|Native|Public|BlueprintCallable) // <Game+0x33664a0>
};

// Class UMG.MenuAnchor
struct UMenuAnchor : UContentWidget {
	Unknown MenuClass; //  0x120 Size(8)
	struct FDelegate OnGetMenuContentEvent; //  0x128 Size(10)
	Unknown Placement; //  0x138 Size(1)
	char bFitInWindow; //  0x139 Size(1)
	char ShouldDeferPaintingAfterWindowContent; //  0x13a Size(1)
	char UseApplicationMenuStack; //  0x13b Size(1)
	struct FMulticastInlineDelegate OnMenuOpenChanged; //  0x140 Size(10)

	void ToggleOpen(char bFocusOnOpen); // Function UMG.MenuAnchor.ToggleOpen(Final|Native|Public|BlueprintCallable) // <Game+0x336b460>
};

// Class UMG.MovieScene2DTransformSectio
struct UMovieScene2DTransformSectiot : UMovieSceneSection {
	Unknown TransformMask; //  0xe0 Size(4)
	Unknown Translation; //  0xe8 Size(140)
	Unknown Rotation; //  0x228 Size(a0)
	Unknown Scale; //  0x2c8 Size(140)
	Unknown Shear; //  0x408 Size(140)
};

// Class UMG.MovieSceneMarginSection
struct UMovieSceneMarginSection : UMovieSceneSection {
	Unknown TopCurve; //  0xe0 Size(a0)
	Unknown LeftCurve; //  0x180 Size(a0)
	Unknown RightCurve; //  0x220 Size(a0)
	Unknown BottomCurve; //  0x2c0 Size(a0)
};

// Class UMG.MovieSceneWidgetMaterialTrack
struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	Unknown BrushPropertyNamePath; //  0x68 Size(10)
	struct FName TrackName; //  0x78 Size(8)
};

// Class UMG.TextLayoutWidget
struct UTextLayoutWidget : UWidget {
	Unknown ShapedTextOptions; //  0x108 Size(3)
	Unknown Justification; //  0x10b Size(1)
	Unknown WrappingPolicy; //  0x10c Size(1)
	char AutoWrapText; //  0x10d Size(1)
	float WrapTextAt; //  0x110 Size(4)
	Unknown Margin; //  0x114 Size(10)
	float LineHeightPercentage; //  0x124 Size(4)

	void SetJustification(Unknown InJustification); // Function UMG.TextLayoutWidget.SetJustification(Native|Public|BlueprintCallable) // <Game+0x337bd30>
};

// Class UMG.MultiLineEditableText
struct UMultiLineEditableText : UTextLayoutWidget {
	struct FText Text; //  0x128 Size(18)
	struct FText HintText; //  0x140 Size(18)
	struct FDelegate HintTextDelegate; //  0x158 Size(10)
	Unknown WidgetStyle; //  0x168 Size(268)
	char bIsReadOnly; //  0x3d0 Size(1)
	Unknown Font; //  0x3d8 Size(50)
	char SelectAllTextWhenFocused; //  0x428 Size(1)
	char ClearTextSelectionOnFocusLo; //  0x429 Size(1)
	char RevertTextOnEscape; //  0x42a Size(1)
	char ClearKeyboardFocusOnCommit; //  0x42b Size(1)
	char AllowContextMenu; //  0x42c Size(1)
	Unknown VirtualKeyboardOptions; //  0x42d Size(1)
	Unknown VirtualKeyboardDismissActio; //  0x42e Size(1)
	struct FMulticastInlineDelegate OnTextChanged; //  0x430 Size(10)
	struct FMulticastInlineDelegate OnTextCommitted; //  0x440 Size(10)

	void SetWidgetStyle(Unknown& InWidgetStyle); // Function UMG.MultiLineEditableText.SetWidgetStyle(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x336b380>
};

// Class UMG.MultiLineEditableTextBox
struct UMultiLineEditableTextBox : UTextLayoutWidget {
	struct FText Text; //  0x128 Size(18)
	struct FText HintText; //  0x140 Size(18)
	struct FDelegate HintTextDelegate; //  0x158 Size(10)
	Unknown WidgetStyle; //  0x168 Size(7f0)
	Unknown TextStyle; //  0x958 Size(268)
	char bIsReadOnly; //  0xbc0 Size(1)
	char AllowContextMenu; //  0xbc1 Size(1)
	Unknown VirtualKeyboardOptions; //  0xbc2 Size(1)
	Unknown VirtualKeyboardDismissActio; //  0xbc3 Size(1)
	Unknown Style; //  0xbc8 Size(8)
	Unknown Font; //  0xbd0 Size(50)
	Unknown ForegroundColor; //  0xc20 Size(10)
	Unknown BackgroundColor; //  0xc30 Size(10)
	Unknown ReadOnlyForegroundColor; //  0xc40 Size(10)
	struct FMulticastInlineDelegate OnTextChanged; //  0xc50 Size(10)
	struct FMulticastInlineDelegate OnTextCommitted; //  0xc60 Size(10)

	void SetTextStyle(Unknown& InTextStyle); // Function UMG.MultiLineEditableTextBox.SetTextStyle(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x336b1d0>
};

// Class UMG.OverlaySlot
struct UOverlaySlot : UPanelSlot {
	Unknown Padding; //  0x40 Size(10)
	Unknown HorizontalAlignment; //  0x50 Size(1)
	Unknown VerticalAlignment; //  0x51 Size(1)

	void SetVerticalAlignment(Unknown InVerticalAlignment); // Function UMG.OverlaySlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <Game+0x336b280>
};

// Class UMG.ProgressBar
struct UProgressBar : UWidget {
	Unknown WidgetStyle; //  0x108 Size(1a0)
	Unknown Style; //  0x2a8 Size(8)
	Unknown BackgroundImage; //  0x2b0 Size(8)
	Unknown FillImage; //  0x2b8 Size(8)
	Unknown MarqueeImage; //  0x2c0 Size(8)
	float Percent; //  0x2c8 Size(4)
	Unknown BarFillType; //  0x2cc Size(1)
	char bIsMarquee; //  0x2cd Size(1)
	Unknown BorderPadding; //  0x2d0 Size(8)
	struct FDelegate PercentDelegate; //  0x2d8 Size(10)
	Unknown FillColorAndOpacity; //  0x2e8 Size(10)
	struct FDelegate FillColorAndOpacityDelegate; //  0x2f8 Size(10)

	void SetPercent(float InPercent); // Function UMG.ProgressBar.SetPercent(Final|Native|Public|BlueprintCallable) // <Game+0x336f100>
};

// Class UMG.RetainerBox
struct URetainerBox : UContentWidget {
	char RenderOnInvalidation; //  0x120 Size(1)
	char RenderOnPhase; //  0x121 Size(1)
	int32_t Phase; //  0x124 Size(4)
	int32_t PhaseCount; //  0x128 Size(4)
	Unknown EffectMaterial; //  0x130 Size(8)
	struct FName TextureParameter; //  0x138 Size(8)

	void SetTextureParameter(struct FName TextureParameter); // Function UMG.RetainerBox.SetTextureParameter(Final|Native|Public|BlueprintCallable) // <Game+0x336f900>
};

// Class UMG.RichTextBlock
struct URichTextBlock : UTextLayoutWidget {
	struct FText Text; //  0x128 Size(18)
	Unknown TextStyleSet; //  0x140 Size(8)
	Unknown DecoratorClasses; //  0x148 Size(10)
	char bOverrideDefaultStyle; //  0x158 Size(1)
	Unknown DefaultTextStyleOverride; //  0x160 Size(268)
	float MinDesiredWidth; //  0x3c8 Size(4)
	Unknown InstanceDecorators; //  0x638 Size(10)

	void SetTextStyleSet(Unknown NewTextStyleSet); // Function UMG.RichTextBlock.SetTextStyleSet(Final|Native|Public|BlueprintCallable) // <Game+0x336f880>
};

// Class UMG.RichTextBlockImageDecorator
struct URichTextBlockImageDecorator : URichTextBlockDecorator {
	Unknown ImageSet; //  0x28 Size(8)
};

// Class UMG.SafeZone
struct USafeZone : UContentWidget {
	char PadLeft; //  0x120 Size(1)
	char PadRight; //  0x121 Size(1)
	char PadTop; //  0x122 Size(1)
	char PadBottom; //  0x123 Size(1)

	void SetSidesToPad(char InPadLeft, char InPadRight, char InPadTop, char InPadBottom); // Function UMG.SafeZone.SetSidesToPad(Final|Native|Public|BlueprintCallable) // <Game+0x336f470>
};

// Class UMG.SafeZoneSlot
struct USafeZoneSlot : UPanelSlot {
	char bIsTitleSafe; //  0x38 Size(1)
	Unknown SafeAreaScale; //  0x3c Size(10)
	Unknown HAlign; //  0x4c Size(1)
	Unknown VAlign; //  0x4d Size(1)
	Unknown Padding; //  0x50 Size(10)
};

// Class UMG.ScaleBox
struct UScaleBox : UContentWidget {
	Unknown Stretch; //  0x120 Size(1)
	Unknown StretchDirection; //  0x121 Size(1)
	float UserSpecifiedScale; //  0x124 Size(4)
	char IgnoreInheritedScale; //  0x128 Size(1)

	void SetUserSpecifiedScale(float InUserSpecifiedScale); // Function UMG.ScaleBox.SetUserSpecifiedScale(Final|Native|Public|BlueprintCallable) // <Game+0x336f980>
};

// Class UMG.ScaleBoxSlot
struct UScaleBoxSlot : UPanelSlot {
	Unknown Padding; //  0x38 Size(10)
	Unknown HorizontalAlignment; //  0x48 Size(1)
	Unknown VerticalAlignment; //  0x49 Size(1)

	void SetVerticalAlignment(Unknown InVerticalAlignment); // Function UMG.ScaleBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <Game+0x335de80>
};

// Class UMG.ScrollBar
struct UScrollBar : UWidget {
	Unknown WidgetStyle; //  0x108 Size(4d0)
	Unknown Style; //  0x5d8 Size(8)
	char bAlwaysShowScrollbar; //  0x5e0 Size(1)
	char bAlwaysShowScrollbarTrack; //  0x5e1 Size(1)
	Unknown Orientation; //  0x5e2 Size(1)
	Unknown Thickness; //  0x5e4 Size(8)
	Unknown Padding; //  0x5ec Size(10)

	void SetState(float InOffsetFraction, float InThumbSizeFraction); // Function UMG.ScrollBar.SetState(Final|Native|Public|BlueprintCallable) // <Game+0x336f5e0>
};

// Class UMG.ScrollBox
struct UScrollBox : UPanelWidget {
	Unknown WidgetStyle; //  0x120 Size(228)
	Unknown WidgetBarStyle; //  0x348 Size(4d0)
	Unknown Style; //  0x818 Size(8)
	Unknown BarStyle; //  0x820 Size(8)
	Unknown Orientation; //  0x828 Size(1)
	Unknown ScrollBarVisibility; //  0x829 Size(1)
	Unknown ConsumeMouseWheel; //  0x82a Size(1)
	Unknown ScrollbarThickness; //  0x82c Size(8)
	Unknown ScrollbarPadding; //  0x834 Size(10)
	char AlwaysShowScrollbar; //  0x844 Size(1)
	char AlwaysShowScrollbarTrack; //  0x845 Size(1)
	char AllowOverscroll; //  0x846 Size(1)
	char bAnimateWheelScrolling; //  0x847 Size(1)
	Unknown NavigationDestination; //  0x848 Size(1)
	float NavigationScrollPadding; //  0x84c Size(4)
	Unknown ScrollWhenFocusChanges; //  0x850 Size(1)
	char bAllowRightClickDragScrolling; //  0x851 Size(1)
	float WheelScrollMultiplier; //  0x854 Size(4)
	struct FMulticastInlineDelegate OnUserScrolled; //  0x858 Size(10)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ScrollBox.SetWheelScrollMultiplier(Final|Native|Public|BlueprintCallable) // <Game+0x336fa80>
};

// Class UMG.ScrollBoxSlot
struct UScrollBoxSlot : UPanelSlot {
	Unknown Padding; //  0x38 Size(10)
	Unknown HorizontalAlignment; //  0x48 Size(1)
	Unknown VerticalAlignment; //  0x49 Size(1)

	void SetVerticalAlignment(Unknown InVerticalAlignment); // Function UMG.ScrollBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <Game+0x336fa00>
};

// Class UMG.SizeBox
struct USizeBox : UContentWidget {
	float WidthOverride; //  0x130 Size(4)
	float HeightOverride; //  0x134 Size(4)
	float MinDesiredWidth; //  0x138 Size(4)
	float MinDesiredHeight; //  0x13c Size(4)
	float MaxDesiredWidth; //  0x140 Size(4)
	float MaxDesiredHeight; //  0x144 Size(4)
	float MinAspectRatio; //  0x148 Size(4)
	float MaxAspectRatio; //  0x14c Size(4)
	char bOverride_WidthOverride; //  0x150 Size(1)
	char bOverride_HeightOverride; //  0x150 Size(1)
	char bOverride_MinDesiredWidth; //  0x150 Size(1)
	char bOverride_MinDesiredHeight; //  0x150 Size(1)
	char bOverride_MaxDesiredWidth; //  0x150 Size(1)
	char bOverride_MaxDesiredHeight; //  0x150 Size(1)
	char bOverride_MinAspectRatio; //  0x150 Size(1)
	char bOverride_MaxAspectRatio; //  0x150 Size(1)

	void SetWidthOverride(float InWidthOverride); // Function UMG.SizeBox.SetWidthOverride(Final|Native|Public|BlueprintCallable) // <Game+0x336fb00>
};

// Class UMG.SizeBoxSlot
struct USizeBoxSlot : UPanelSlot {
	Unknown Padding; //  0x38 Size(10)
	Unknown HorizontalAlignment; //  0x58 Size(1)
	Unknown VerticalAlignment; //  0x59 Size(1)

	void SetVerticalAlignment(Unknown InVerticalAlignment); // Function UMG.SizeBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <Game+0x3373ae0>
};

// Class UMG.SlateVectorArtData
struct USlateVectorArtData : Object {
	Unknown VertexData; //  0x28 Size(10)
	Unknown IndexData; //  0x38 Size(10)
	Unknown Material; //  0x48 Size(8)
	Unknown ExtentMin; //  0x50 Size(8)
	Unknown ExtentMax; //  0x58 Size(8)
};

// Class UMG.SlateAccessibleWidgetData
struct USlateAccessibleWidgetData : Object {
	char bCanChildrenBeAccessible; //  0x28 Size(1)
	Unknown AccessibleBehavior; //  0x29 Size(1)
	Unknown AccessibleSummaryBehavior; //  0x2a Size(1)
	struct FText AccessibleText; //  0x30 Size(18)
	struct FDelegate AccessibleTextDelegate; //  0x48 Size(10)
	struct FText AccessibleSummaryText; //  0x58 Size(18)
	struct FDelegate AccessibleSummaryTextDelegate; //  0x70 Size(10)
};

// Class UMG.Slider
struct USlider : UWidget {
	float Value; //  0x108 Size(4)
	struct FDelegate ValueDelegate; //  0x10c Size(10)
	float MinValue; //  0x11c Size(4)
	float MaxValue; //  0x120 Size(4)
	Unknown WidgetStyle; //  0x128 Size(340)
	Unknown Orientation; //  0x468 Size(1)
	Unknown SliderBarColor; //  0x46c Size(10)
	Unknown SliderHandleColor; //  0x47c Size(10)
	char IndentHandle; //  0x48c Size(1)
	char Locked; //  0x48d Size(1)
	char MouseUsesStep; //  0x48e Size(1)
	char RequiresControllerLock; //  0x48f Size(1)
	float StepSize; //  0x490 Size(4)
	char IsFocusable; //  0x494 Size(1)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; //  0x498 Size(10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; //  0x4a8 Size(10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; //  0x4b8 Size(10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; //  0x4c8 Size(10)
	struct FMulticastInlineDelegate OnValueChanged; //  0x4d8 Size(10)

	void SetValue(float InValue); // Function UMG.Slider.SetValue(Final|Native|Public|BlueprintCallable) // <Game+0x33739e0>
};

// Class UMG.Spacer
struct USpacer : UWidget {
	Unknown Size; //  0x108 Size(8)

	void SetSize(Unknown InSize); // Function UMG.Spacer.SetSize(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game+0x33737e0>
};

// Class UMG.SpinBox
struct USpinBox : UWidget {
	float Value; //  0x108 Size(4)
	struct FDelegate ValueDelegate; //  0x10c Size(10)
	Unknown WidgetStyle; //  0x120 Size(2e8)
	Unknown Style; //  0x408 Size(8)
	int32_t MinFractionalDigits; //  0x410 Size(4)
	int32_t MaxFractionalDigits; //  0x414 Size(4)
	char bAlwaysUsesDeltaSnap; //  0x418 Size(1)
	float Delta; //  0x41c Size(4)
	float SliderExponent; //  0x420 Size(4)
	Unknown Font; //  0x428 Size(50)
	Unknown Justification; //  0x478 Size(1)
	float MinDesiredWidth; //  0x47c Size(4)
	char ClearKeyboardFocusOnCommit; //  0x480 Size(1)
	char SelectAllTextOnCommit; //  0x481 Size(1)
	Unknown ForegroundColor; //  0x488 Size(28)
	struct FMulticastInlineDelegate OnValueChanged; //  0x4b0 Size(10)
	struct FMulticastInlineDelegate OnValueCommitted; //  0x4c0 Size(10)
	struct FMulticastInlineDelegate OnBeginSliderMovement; //  0x4d0 Size(10)
	struct FMulticastInlineDelegate OnEndSliderMovement; //  0x4e0 Size(10)
	char bOverride_MinValue; //  0x4f0 Size(1)
	char bOverride_MaxValue; //  0x4f0 Size(1)
	char bOverride_MinSliderValue; //  0x4f0 Size(1)
	char bOverride_MaxSliderValue; //  0x4f0 Size(1)
	float MinValue; //  0x4f4 Size(4)
	float MaxValue; //  0x4f8 Size(4)
	float MinSliderValue; //  0x4fc Size(4)
	float MaxSliderValue; //  0x500 Size(4)

	void SetValue(float NewValue); // Function UMG.SpinBox.SetValue(Final|Native|Public|BlueprintCallable) // <Game+0x3373a60>
};

// Class UMG.TextBlock
struct UTextBlock : UTextLayoutWidget {
	struct FText Text; //  0x128 Size(18)
	struct FDelegate TextDelegate; //  0x140 Size(10)
	Unknown ColorAndOpacity; //  0x150 Size(28)
	struct FDelegate ColorAndOpacityDelegate; //  0x178 Size(10)
	Unknown Font; //  0x188 Size(50)
	Unknown StrikeBrush; //  0x1d8 Size(88)
	Unknown ShadowOffset; //  0x260 Size(8)
	Unknown ShadowColorAndOpacity; //  0x268 Size(10)
	struct FDelegate ShadowColorAndOpacityDelegate; //  0x278 Size(10)
	float MinDesiredWidth; //  0x288 Size(4)
	char bWrapWithInvalidationPanel; //  0x28c Size(1)
	char bAutoWrapText; //  0x28d Size(1)
	char bSimpleTextMode; //  0x28e Size(1)

	void SetText(struct FText InText); // Function UMG.TextBlock.SetText(Native|Public|BlueprintCallable) // <Game+0x337c860>
};

// Class UMG.Throbber
struct UThrobber : UWidget {
	int32_t Numb; //  0x108 Size(4)
	char bAnimateHorizontally; //  0x10c Size(1)
	char bAnimateVertically; //  0x10d Size(1)
	char bAnimateOpacity; //  0x10e Size(1)
	Unknown PieceImage; //  0x110 Size(8)
	Unknown Image; //  0x118 Size(88)

	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.Throbber.SetNumberOfPieces(Final|Native|Public|BlueprintCallable) // <Game+0x337c080>
};

// Class UMG.TileView
struct UTileView : UListView {
	float EntryHeight; //  0x368 Size(4)
	float EntryWidth; //  0x36c Size(4)
	Unknown TileAlignment; //  0x370 Size(1)
	char bWrapHorizontalNavigation; //  0x371 Size(1)

	void SetEntryWidth(float NewWidth); // Function UMG.TileView.SetEntryWidth(Final|Native|Public|BlueprintCallable) // <Game+0x337b850>
};

// Class UMG.TreeView
struct UTreeView : UListView {
	struct FDelegate BP_OnGetItemChildren; //  0x378 Size(10)
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged; //  0x388 Size(10)

	void SetItemExpansion(Unknown Item, char bExpandItem); // Function UMG.TreeView.SetItemExpansion(Final|Native|Public|BlueprintCallable) // <Game+0x337bc60>
};

// Class UMG.UMGSequencePlayer
struct UUMGSequencePlayer : Object {
	Unknown Animation; //  0x408 Size(8)

	void SetUserTag(struct FName InUserTag); // Function UMG.UMGSequencePlayer.SetUserTag(Final|Native|Public|BlueprintCallable) // <Game+0x337c940>
};

// Class UMG.UniformGridPanel
struct UUniformGridPanel : UPanelWidget {
	Unknown SlotPadding; //  0x120 Size(10)
	float MinDesiredSlotWidth; //  0x130 Size(4)
	float MinDesiredSlotHeight; //  0x134 Size(4)

	void SetSlotPadding(Unknown InSlotPadding); // Function UMG.UniformGridPanel.SetSlotPadding(Final|Native|Public|BlueprintCallable) // <Game+0x337c5a0>
};

// Class UMG.UniformGridSlot
struct UUniformGridSlot : UPanelSlot {
	Unknown HorizontalAlignment; //  0x38 Size(1)
	Unknown VerticalAlignment; //  0x39 Size(1)
	int32_t Row; //  0x3c Size(4)
	int32_t Column; //  0x40 Size(4)

	void SetVerticalAlignment(Unknown InVerticalAlignment); // Function UMG.UniformGridSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <Game+0x337c9c0>
};

// Class UMG.VerticalBoxSlot
struct UVerticalBoxSlot : UPanelSlot {
	Unknown Size; //  0x38 Size(8)
	Unknown Padding; //  0x40 Size(10)
	Unknown HorizontalAlignment; //  0x58 Size(1)
	Unknown VerticalAlignment; //  0x59 Size(1)

	void SetVerticalAlignment(Unknown InVerticalAlignment); // Function UMG.VerticalBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <Game+0x337ffe0>
};

// Class UMG.Viewport
struct UViewport : UContentWidget {
	Unknown BackgroundColor; //  0x120 Size(10)

	Unknown Spawn(Unknown ActorClass); // Function UMG.Viewport.Spawn(Final|Native|Public|BlueprintCallable) // <Game+0x3380200>
};

// Class UMG.WidgetAnimation
struct UWidgetAnimation : UMovieSceneSequence {
	Unknown MovieScene; //  0x348 Size(8)
	Unknown AnimationBindings; //  0x350 Size(10)
	char bLegacyFinishOnStop; //  0x360 Size(1)
	struct FString DisplayLabel; //  0x368 Size(10)

	void UnbindFromAnimationStarted(Unknown Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationStarted(Final|Native|Public|BlueprintCallable) // <Game+0x3386770>
};

// Class UMG.WidgetAnimationDelegateBinding
struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding {
	Unknown WidgetAnimationDelegateBindings; //  0x28 Size(10)
};

// Class UMG.WidgetAnimationPlayCallbackProxy
struct UWidgetAnimationPlayCallbackProxy : Object {
	struct FMulticastInlineDelegate Finished; //  0x28 Size(10)

	Unknown CreatePlayAnimationTimeRangeProxyObject(Unknown& Result, Unknown Widget, Unknown InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, Unknown PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x3382e00>
};

// Class UMG.WidgetBlueprintGeneratedClass
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	Unknown WidgetTree; //  0x3c8 Size(8)
	char bAllowTemplate; //  0x3d0 Size(1)
	char bAllowDynamicCreation; //  0x3d0 Size(1)
	char bValidTemplate; //  0x3d0 Size(1)
	char bTemplateInitialized; //  0x3d0 Size(1)
	char bCookedTemplate; //  0x3d0 Size(1)
	char bClassRequiresNativ; //  0x3d0 Size(1)
	Unknown Bindings; //  0x3d8 Size(10)
	Unknown Animations; //  0x3e8 Size(10)
	Unknown NamedSlots; //  0x3f8 Size(10)
	Unknown TemplateAsset; //  0x408 Size(28)
	Unknown Template; //  0x430 Size(8)
};

// Class UMG.WidgetComponent
struct UWidgetComponent : UMeshComponent {
	Unknown Space; //  0x4e8 Size(1)
	Unknown TimingPolicy; //  0x4e9 Size(1)
	Unknown WidgetClass; //  0x4f0 Size(8)
	Unknown DrawSize; //  0x4f8 Size(8)
	char bManuallyRedraw; //  0x500 Size(1)
	char bRedrawRequested; //  0x501 Size(1)
	float RedrawTime; //  0x504 Size(4)
	Unknown CurrentDrawSize; //  0x510 Size(8)
	char bDrawAtDesiredSize; //  0x518 Size(1)
	Unknown Pivot; //  0x51c Size(8)
	char bReceiveHardwareInput; //  0x524 Size(1)
	char bWindowFocusable; //  0x525 Size(1)
	Unknown WindowVisibility; //  0x526 Size(1)
	char bApplyGammaCorrection; //  0x527 Size(1)
	Unknown OwnerPlayer; //  0x528 Size(8)
	Unknown BackgroundColor; //  0x530 Size(10)
	Unknown TintColorAndOpacity; //  0x540 Size(10)
	float OpacityFromTexture; //  0x550 Size(4)
	Unknown BlendMode; //  0x554 Size(1)
	char bIsTwoSided; //  0x555 Size(1)
	char TickWhenOffscreen; //  0x556 Size(1)
	Unknown Widget; //  0x558 Size(8)
	Unknown BodySetup; //  0x580 Size(8)
	Unknown TranslucentMaterial; //  0x588 Size(8)
	Unknown TranslucentMaterial_OneSided; //  0x590 Size(8)
	Unknown OpaqueMaterial; //  0x598 Size(8)
	Unknown OpaqueMaterial_OneSided; //  0x5a0 Size(8)
	Unknown MaskedMaterial; //  0x5a8 Size(8)
	Unknown MaskedMaterial_OneSided; //  0x5b0 Size(8)
	Unknown RenderTarget; //  0x5b8 Size(8)
	Unknown MaterialInstance; //  0x5c0 Size(8)
	char bAddedToScreen; //  0x5c8 Size(1)
	char bEditTimeUsable; //  0x5c9 Size(1)
	struct FName SharedLayerName; //  0x5cc Size(8)
	int32_t LayerZOrder; //  0x5d4 Size(4)
	Unknown GeometryMode; //  0x5d8 Size(1)
	float CylinderArcAngle; //  0x5dc Size(4)

	void SetWindowVisibility(Unknown InVisibility); // Function UMG.WidgetComponent.SetWindowVisibility(Final|Native|Public|BlueprintCallable) // <Game+0x338a420>
};

// Class UMG.WidgetInteractionComponent
struct UWidgetInteractionComponent : USceneComponent {
	struct FMulticastInlineDelegate OnHoveredWidgetChanged; //  0x238 Size(10)
	int32_t VirtualUserIndex; //  0x258 Size(4)
	float PointerIndex; //  0x25c Size(4)
	Unknown TraceChannel; //  0x260 Size(1)
	float InteractionDistance; //  0x264 Size(4)
	Unknown InteractionSource; //  0x268 Size(1)
	char bEnableHitTesting; //  0x269 Size(1)
	char bShowDebug; //  0x26a Size(1)
	Unknown DebugColor; //  0x26c Size(10)
	Unknown CustomHitResult; //  0x2f8 Size(88)
	Unknown LocalHitLocation; //  0x380 Size(8)
	Unknown LastLocalHitLocation; //  0x388 Size(8)
	Unknown HoveredWidgetComponent; //  0x390 Size(8)
	Unknown LastHitResult; //  0x398 Size(88)
	char bIsHoveredWidgetInteractable; //  0x420 Size(1)
	char bIsHoveredWidgetFocusable; //  0x421 Size(1)
	char bIsHoveredWidgetHitTestVisible; //  0x422 Size(1)

	void SetFocus(Unknown FocusWidget); // Function UMG.WidgetInteractionComponent.SetFocus(Final|Native|Public|BlueprintCallable) // <Game+0x3389dd0>
};

// Class UMG.WidgetNavigation
struct UWidgetNavigation : Object {
	Unknown Up; //  0x28 Size(24)
	Unknown Down; //  0x4c Size(24)
	Unknown Left; //  0x70 Size(24)
	Unknown Right; //  0x94 Size(24)
	Unknown Next; //  0xb8 Size(24)
	Unknown Previous; //  0xdc Size(24)
};

// Class UMG.WidgetSwitcher
struct UWidgetSwitcher : UPanelWidget {
	int32_t ActiveWidgetIndex; //  0x120 Size(4)

	void SetActiveWidgetIndex(int32_t Index); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex(Native|Public|BlueprintCallable) // <Game+0x338c130>
};

// Class UMG.WidgetSwitcherSlot
struct UWidgetSwitcherSlot : UPanelSlot {
	Unknown Padding; //  0x40 Size(10)
	Unknown HorizontalAlignment; //  0x50 Size(1)
	Unknown VerticalAlignment; //  0x51 Size(1)

	void SetVerticalAlignment(Unknown InVerticalAlignment); // Function UMG.WidgetSwitcherSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <Game+0x338c780>
};

// Class UMG.WidgetTree
struct UWidgetTree : Object {
	Unknown RootWidget; //  0x28 Size(8)
};

// Class UMG.WindowTitleBarArea
struct UWindowTitleBarArea : UContentWidget {
	char bWindowButtonsEnabled; //  0x120 Size(1)
	char bDoubleClickTogglesFullscreen; //  0x121 Size(1)

	void SetVerticalAlignment(Unknown InVerticalAlignment); // Function UMG.WindowTitleBarArea.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <Game+0x338c800>
};

// Class UMG.WindowTitleBarAreaSlot
struct UWindowTitleBarAreaSlot : UPanelSlot {
	Unknown Padding; //  0x38 Size(10)
	Unknown HorizontalAlignment; //  0x48 Size(1)
	Unknown VerticalAlignment; //  0x49 Size(1)

	void SetVerticalAlignment(Unknown InVerticalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <Game+0x338c880>
};

// Class UMG.WrapBox
struct UWrapBox : UPanelWidget {
	Unknown InnerSlotPadding; //  0x120 Size(8)
	float WrapWidth; //  0x128 Size(4)
	char bExplicitWrapWidth; //  0x12c Size(1)
	Unknown HorizontalAlignment; //  0x12d Size(1)

	void SetInnerSlotPadding(Unknown InPadding); // Function UMG.WrapBox.SetInnerSlotPadding(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game+0x338c550>
};

// Class UMG.WrapBoxSlot
struct UWrapBoxSlot : UPanelSlot {
	Unknown Padding; //  0x38 Size(10)
	char bFillEmptySpace; //  0x48 Size(1)
	float FillSpanWhenLessThan; //  0x4c Size(4)
	Unknown HorizontalAlignment; //  0x50 Size(1)
	Unknown VerticalAlignment; //  0x51 Size(1)

	void SetVerticalAlignment(Unknown InVerticalAlignment); // Function UMG.WrapBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <Game+0x338c900>
};

