// Enum SlateCore.EUINavigation
enum class EUINavigation : uint8_t {
	Left = 0,
	Right = 1,
	Up = 2,
	Down = 3,
	Next = 4,
	Previous = 5,
	Num = 6,
	Invalid = 7,
	EUINavigation_MAX = 8,
};

// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8_t {
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2,
	ECheckBoxState_MAX = 3,
};

// Enum SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8_t {
	Inherit = 0,
	ClipToBounds = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways = 3,
	OnDemand = 4,
	EWidgetClipping_MAX = 5,
};

// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t {
	NoImage = 0,
	FullColor = 1,
	Linear = 2,
	ESlateBrushImageType_MAX = 3,
};

// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t {
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushMirrorType_MAX = 4,
};

// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t {
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushTileType_MAX = 4,
};

// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t {
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3,
	ESlateBrushDrawType_MAX = 4,
};

// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t {
	UseColor_Specified = 0,
	UseColor_Specified_Link = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3,
	UseColor_MAX = 4,
};

// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8_t {
	Escape = 0,
	Explicit = 1,
	Wrap = 2,
	Stop = 3,
	Custom = 4,
	CustomBoundary = 5,
	Invalid = 6,
	EUINavigationRule_MAX = 7,
};

// Enum SlateCore.EFlowDirectionPreference
enum class EFlowDirectionPreference : uint8_t {
	Inherit = 0,
	Culture = 1,
	LeftToRight = 2,
	RightToLeft = 3,
	EFlowDirectionPreference_MAX = 4,
};

// Enum SlateCore.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8_t {
	NormalVision = 0,
	Deuteranope = 1,
	Protanope = 2,
	Tritanope = 3,
	EColorVisionDeficiency_MAX = 4,
};

// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t {
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3,
	ESelectInfo_MAX = 4,
};

// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8_t {
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3,
	ETextCommit_MAX = 4,
};

// Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8_t {
	Auto = 0,
	KerningOnly = 1,
	FullShaping = 2,
	ETextShapingMethod_MAX = 3,
};

// Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8_t {
	Metrics = 0,
	BoundingBox = 1,
	EFontLayoutMethod_MAX = 2,
};

// Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8_t {
	LazyLoad = 0,
	Stream = 1,
	Inline = 2,
	EFontLoadingPolicy_MAX = 3,
};

// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8_t {
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4,
	EFontHinting_MAX = 5,
};

// Enum SlateCore.EFocusCause
enum class EFocusCause : uint8_t {
	Mouse = 0,
	Navigation = 1,
	SetDirectly = 2,
	Cleared = 3,
	OtherWidgetLostFocus = 4,
	WindowActivate = 5,
	EFocusCause_MAX = 6,
};

// Enum SlateCore.ESlateDebuggingFocusEvent
enum class ESlateDebuggingFocusEvent : uint8_t {
	FocusChanging = 0,
	FocusLost = 1,
	FocusReceived = 2,
	ESlateDebuggingFocusEvent_MAX = 3,
};

// Enum SlateCore.ESlateDebuggingNavigationMethod
enum class ESlateDebuggingNavigationMethod : uint8_t {
	Unknown = 0,
	Explicit = 1,
	CustomDelegateBound = 2,
	CustomDelegateUnbound = 3,
	NextOrPrevious = 4,
	HitTestGrid = 5,
	ESlateDebuggingNavigationMethod_MAX = 6,
};

// Enum SlateCore.ESlateDebuggingStateChangeEvent
enum class ESlateDebuggingStateChangeEvent : uint8_t {
	MouseCaptureGained = 0,
	MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2,
};

// Enum SlateCore.ESlateDebuggingInputEvent
enum class ESlateDebuggingInputEvent : uint8_t {
	MouseMove = 0,
	MouseEnter = 1,
	MouseLeave = 2,
	MouseButtonDown = 3,
	MouseButtonUp = 4,
	MouseButtonDoubleClick = 5,
	MouseWheel = 6,
	TouchStart = 7,
	TouchEnd = 8,
	DragDetected = 9,
	DragEnter = 10,
	DragLeave = 11,
	DragOver = 12,
	DragDrop = 13,
	DropMessage = 14,
	KeyDown = 15,
	KeyUp = 16,
	KeyChar = 17,
	AnalogInput = 18,
	TouchGesture = 19,
	COUNT = 20,
	ESlateDebuggingInputEvent_MAX = 21,
};

// Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8_t {
	Scroll_Down = 0,
	Scroll_Up = 1,
	Scroll_MAX = 2,
};

// Enum SlateCore.EOrientation
enum class EOrientation : uint8_t {
	Orient_Horizontal = 0,
	Orient_Vertical = 1,
	Orient_MAX = 2,
};

// Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8_t {
	MenuPlacement_BelowAnchor = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox = 3,
	MenuPlacement_ComboBoxRight = 4,
	MenuPlacement_MenuRight = 5,
	MenuPlacement_AboveAnchor = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft = 9,
	MenuPlacement_Center = 10,
	MenuPlacement_RightLeftCenter = 11,
	MenuPlacement_MatchBottomLeft = 12,
	MenuPlacement_MAX = 13,
};

// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t {
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3,
	VAlign_MAX = 4,
};

// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t {
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3,
	HAlign_MAX = 4,
};

// Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8_t {
	Keyboard = 0,
	Controller = 1,
	User = 2,
	ENavigationGenesis_MAX = 3,
};

// Enum SlateCore.ENavigationSource
enum class ENavigationSource : uint8_t {
	FocusedWidget = 0,
	WidgetUnderCursor = 1,
	ENavigationSource_MAX = 2,
};

// Enum SlateCore.EUINavigationAction
enum class EUINavigationAction : uint8_t {
	Accept = 0,
	Back = 1,
	Num = 2,
	Invalid = 3,
	EUINavigationAction_MAX = 4,
};

// Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8_t {
	DownAndUp = 0,
	ButtonPress = 1,
	ButtonRelease = 2,
	EButtonPressMethod_MAX = 3,
};

// Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8_t {
	DownAndUp = 0,
	Down = 1,
	PreciseTap = 2,
	EButtonTouchMethod_MAX = 3,
};

// Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8_t {
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	PreciseClick = 3,
	EButtonClickMethod_MAX = 4,
};

// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t {
	CheckBox = 0,
	ToggleButton = 1,
	ESlateCheckBoxType_MAX = 2,
};

// Enum SlateCore.ESlateParentWindowSearchMethod
enum class ESlateParentWindowSearchMethod : uint8_t {
	ActiveWindow = 0,
	MainWindow = 1,
	ESlateParentWindowSearchMethod_MAX = 2,
};

// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8_t {
	WhenScrollingPossible = 0,
	Always = 1,
	Never = 2,
	EConsumeMouseWheel_MAX = 3,
};

// Class SlateCore.SlateWidgetStyleAsset
class USlateWidgetStyleAsset : public Object {

public:

	struct USlateWidgetStyleContainerBase CustomStyle; // 0x28 (8)
};

// ScriptStruct SlateCore.SlateBrush
struct FSlateBrush {
	struct FVector2D ImageSize; // 0x8 (8)
	struct FMargin Margin; // 0x10 (16)
	struct FSlateColor TintColor; // 0x20 (40)
	struct Object ResourceObject; // 0x48 (8)
	struct FName ResourceName; // 0x50 (8)
	struct FBox2D UVRegion; // 0x58 (20)
	char DrawAs; // 0x6C (1)
	enum class None tiling; // 0x6D (1)
	char Mirroring; // 0x6E (1)
	char ImageType; // 0x6F (1)
	char bIsDynamicallyLoaded : 0; // 0x80 (1)
	char bHasUObject : 0; // 0x80 (1)
};

// ScriptStruct SlateCore.SlateColor
struct FSlateColor {
	struct FLinearColor SpecifiedColor; // 0x0 (16)
	char ColorUseRule; // 0x10 (1)
};

// ScriptStruct SlateCore.Margin
struct FMargin {
	float Left; // 0x0 (4)
	float Top; // 0x4 (4)
	float Right; // 0x8 (4)
	float Bottom; // 0xC (4)
};

// ScriptStruct SlateCore.SlateFontInfo
struct FSlateFontInfo {
	struct Object FontObject; // 0x0 (8)
	struct Object FontMaterial; // 0x8 (8)
	struct FFontOutlineSettings OutlineSettings; // 0x10 (32)
	struct FName TypefaceFontName; // 0x40 (8)
	int32_t Size; // 0x48 (4)
};

// ScriptStruct SlateCore.FontOutlineSettings
struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x0 (4)
	char bSeparateFillAlpha : 0; // 0x4 (1)
	char bApplyOutlineToDropShadows : 0; // 0x5 (1)
	struct Object OutlineMaterial; // 0x8 (8)
	struct FLinearColor OutlineColor; // 0x10 (16)
};

// ScriptStruct SlateCore.TableRowStyle
struct FTableRowStyle : FSlateWidgetStyle {
	struct FSlateBrush SelectorFocusedBrush; // 0x8 (136)
	struct FSlateBrush ActiveHoveredBrush; // 0x90 (136)
	struct FSlateBrush ActiveBrush; // 0x118 (136)
	struct FSlateBrush InactiveHoveredBrush; // 0x1A0 (136)
	struct FSlateBrush InactiveBrush; // 0x228 (136)
	struct FSlateBrush EvenRowBackgroundHoveredBrush; // 0x2B0 (136)
	struct FSlateBrush EvenRowBackgroundBrush; // 0x338 (136)
	struct FSlateBrush OddRowBackgroundHoveredBrush; // 0x3C0 (136)
	struct FSlateBrush OddRowBackgroundBrush; // 0x448 (136)
	struct FSlateColor TextColor; // 0x4D0 (40)
	struct FSlateColor SelectedTextColor; // 0x4F8 (40)
	struct FSlateBrush DropIndicator_Above; // 0x520 (136)
	struct FSlateBrush DropIndicator_Onto; // 0x5A8 (136)
	struct FSlateBrush DropIndicator_Below; // 0x630 (136)
	struct FSlateBrush ActiveHighlightedBrush; // 0x6B8 (136)
	struct FSlateBrush InactiveHighlightedBrush; // 0x740 (136)
};

// ScriptStruct SlateCore.ComboBoxStyle
struct FComboBoxStyle : FSlateWidgetStyle {
	struct FComboButtonStyle ComboButtonStyle; // 0x8 (952)
	struct FSlateSound PressedSlateSound; // 0x3C0 (24)
	struct FSlateSound SelectionChangeSlateSound; // 0x3D8 (24)
};

// ScriptStruct SlateCore.SlateSound
struct FSlateSound {
	struct Object ResourceObject; // 0x0 (8)
};

// ScriptStruct SlateCore.ComboButtonStyle
struct FComboButtonStyle : FSlateWidgetStyle {
	struct FButtonStyle ButtonStyle; // 0x8 (632)
	struct FSlateBrush DownArrowImage; // 0x280 (136)
	struct FVector2D ShadowOffset; // 0x308 (8)
	struct FLinearColor ShadowColorAndOpacity; // 0x310 (16)
	struct FSlateBrush MenuBorderBrush; // 0x320 (136)
	struct FMargin MenuBorderPadding; // 0x3A8 (16)
};

// ScriptStruct SlateCore.ButtonStyle
struct FButtonStyle : FSlateWidgetStyle {
	struct FSlateBrush Normal; // 0x8 (136)
	struct FSlateBrush Hovered; // 0x90 (136)
	struct FSlateBrush Pressed; // 0x118 (136)
	struct FSlateBrush Disabled; // 0x1A0 (136)
	struct FMargin NormalPadding; // 0x228 (16)
	struct FMargin PressedPadding; // 0x238 (16)
	struct FSlateSound PressedSlateSound; // 0x248 (24)
	struct FSlateSound HoveredSlateSound; // 0x260 (24)
};

// ScriptStruct SlateCore.EditableTextStyle
struct FEditableTextStyle : FSlateWidgetStyle {
	struct FSlateFontInfo Font; // 0x8 (80)
	struct FSlateColor ColorAndOpacity; // 0x58 (40)
	struct FSlateBrush BackgroundImageSelected; // 0x80 (136)
	struct FSlateBrush BackgroundImageComposing; // 0x108 (136)
	struct FSlateBrush CaretImage; // 0x190 (136)
};

// ScriptStruct SlateCore.EditableTextBoxStyle
struct FEditableTextBoxStyle : FSlateWidgetStyle {
	struct FSlateBrush BackgroundImageNormal; // 0x8 (136)
	struct FSlateBrush BackgroundImageHovered; // 0x90 (136)
	struct FSlateBrush BackgroundImageFocused; // 0x118 (136)
	struct FSlateBrush BackgroundImageReadOnly; // 0x1A0 (136)
	struct FMargin Padding; // 0x228 (16)
	struct FSlateFontInfo Font; // 0x238 (80)
	struct FSlateColor ForegroundColor; // 0x288 (40)
	struct FSlateColor BackgroundColor; // 0x2B0 (40)
	struct FSlateColor ReadOnlyForegroundColor; // 0x2D8 (40)
	struct FMargin HScrollBarPadding; // 0x300 (16)
	struct FMargin VScrollBarPadding; // 0x310 (16)
	struct FScrollBarStyle ScrollBarStyle; // 0x320 (1232)
};

// ScriptStruct SlateCore.ScrollBarStyle
struct FScrollBarStyle : FSlateWidgetStyle {
	struct FSlateBrush HorizontalBackgroundImage; // 0x8 (136)
	struct FSlateBrush VerticalBackgroundImage; // 0x90 (136)
	struct FSlateBrush VerticalTopSlotImage; // 0x118 (136)
	struct FSlateBrush HorizontalTopSlotImage; // 0x1A0 (136)
	struct FSlateBrush VerticalBottomSlotImage; // 0x228 (136)
	struct FSlateBrush HorizontalBottomSlotImage; // 0x2B0 (136)
	struct FSlateBrush NormalThumbImage; // 0x338 (136)
	struct FSlateBrush HoveredThumbImage; // 0x3C0 (136)
	struct FSlateBrush DraggedThumbImage; // 0x448 (136)
};

// ScriptStruct SlateCore.TextBlockStyle
struct FTextBlockStyle : FSlateWidgetStyle {
	struct FSlateFontInfo Font; // 0x8 (80)
	struct FSlateColor ColorAndOpacity; // 0x58 (40)
	struct FVector2D ShadowOffset; // 0x80 (8)
	struct FLinearColor ShadowColorAndOpacity; // 0x88 (16)
	struct FSlateColor SelectedBackgroundColor; // 0x98 (40)
	struct FLinearColor HighlightColor; // 0xC0 (16)
	struct FSlateBrush HighlightShape; // 0xD0 (136)
	struct FSlateBrush StrikeBrush; // 0x158 (136)
	struct FSlateBrush UnderlineBrush; // 0x1E0 (136)
};

// ScriptStruct SlateCore.SpinBoxStyle
struct FSpinBoxStyle : FSlateWidgetStyle {
	struct FSlateBrush BackgroundBrush; // 0x8 (136)
	struct FSlateBrush HoveredBackgroundBrush; // 0x90 (136)
	struct FSlateBrush ActiveFillBrush; // 0x118 (136)
	struct FSlateBrush InactiveFillBrush; // 0x1A0 (136)
	struct FSlateBrush ArrowsImage; // 0x228 (136)
	struct FSlateColor ForegroundColor; // 0x2B0 (40)
	struct FMargin TextPadding; // 0x2D8 (16)
};

// ScriptStruct SlateCore.CompositeFont
struct FCompositeFont {
	struct FTypeface DefaultTypeface; // 0x0 (16)
	struct FCompositeFallbackFont FallbackTypeface; // 0x10 (24)
	struct TArray<struct FCompositeSubFont> SubTypefaces; // 0x28 (16)
};

// ScriptStruct SlateCore.CompositeFallbackFont
struct FCompositeFallbackFont {
	struct FTypeface Typeface; // 0x0 (16)
	float ScalingFactor; // 0x10 (4)
};

// ScriptStruct SlateCore.Typeface
struct FTypeface {
	struct TArray<struct FTypefaceEntry> Fonts; // 0x0 (16)
};

// ScriptStruct SlateCore.TypefaceEntry
struct FTypefaceEntry {
	struct FName Name; // 0x0 (8)
	struct FFontData Font; // 0x8 (32)
};

// ScriptStruct SlateCore.FontData
struct FFontData {
	struct FString FontFilename; // 0x0 (16)
	enum class EFontHinting Hinting; // 0x10 (1)
	enum class EFontLoadingPolicy LoadingPolicy; // 0x11 (1)
	int32_t SubFaceIndex; // 0x14 (4)
	struct Object FontFaceAsset; // 0x18 (8)
};

// ScriptStruct SlateCore.CompositeSubFont
struct FCompositeSubFont : FCompositeFallbackFont {
	struct TArray<struct FInt32Range> CharacterRanges; // 0x18 (16)
	struct FString Cultures; // 0x28 (16)
};

// ScriptStruct SlateCore.WindowStyle
struct FWindowStyle : FSlateWidgetStyle {
	struct FButtonStyle MinimizeButtonStyle; // 0x8 (632)
	struct FButtonStyle MaximizeButtonStyle; // 0x280 (632)
	struct FButtonStyle RestoreButtonStyle; // 0x4F8 (632)
	struct FButtonStyle CloseButtonStyle; // 0x770 (632)
	struct FTextBlockStyle TitleTextStyle; // 0x9E8 (616)
	struct FSlateBrush ActiveTitleBrush; // 0xC50 (136)
	struct FSlateBrush InactiveTitleBrush; // 0xCD8 (136)
	struct FSlateBrush FlashTitleBrush; // 0xD60 (136)
	struct FSlateColor BackgroundColor; // 0xDE8 (40)
	struct FSlateBrush OutlineBrush; // 0xE10 (136)
	struct FSlateColor OutlineColor; // 0xE98 (40)
	struct FSlateBrush BorderBrush; // 0xEC0 (136)
	struct FSlateBrush BackgroundBrush; // 0xF48 (136)
	struct FSlateBrush ChildBackgroundBrush; // 0xFD0 (136)
};

// ScriptStruct SlateCore.ScrollBorderStyle
struct FScrollBorderStyle : FSlateWidgetStyle {
	struct FSlateBrush TopShadowBrush; // 0x8 (136)
	struct FSlateBrush BottomShadowBrush; // 0x90 (136)
};

// ScriptStruct SlateCore.ScrollBoxStyle
struct FScrollBoxStyle : FSlateWidgetStyle {
	struct FSlateBrush TopShadowBrush; // 0x8 (136)
	struct FSlateBrush BottomShadowBrush; // 0x90 (136)
	struct FSlateBrush LeftShadowBrush; // 0x118 (136)
	struct FSlateBrush RightShadowBrush; // 0x1A0 (136)
};

// ScriptStruct SlateCore.DockTabStyle
struct FDockTabStyle : FSlateWidgetStyle {
	struct FButtonStyle CloseButtonStyle; // 0x8 (632)
	struct FSlateBrush NormalBrush; // 0x280 (136)
	struct FSlateBrush ActiveBrush; // 0x308 (136)
	struct FSlateBrush ColorOverlayTabBrush; // 0x390 (136)
	struct FSlateBrush ColorOverlayIconBrush; // 0x418 (136)
	struct FSlateBrush ForegroundBrush; // 0x4A0 (136)
	struct FSlateBrush HoveredBrush; // 0x528 (136)
	struct FSlateBrush ContentAreaBrush; // 0x5B0 (136)
	struct FSlateBrush TabWellBrush; // 0x638 (136)
	struct FMargin TabPadding; // 0x6C0 (16)
	float OverlapWidth; // 0x6D0 (4)
	struct FSlateColor FlashColor; // 0x6D8 (40)
};

// ScriptStruct SlateCore.HeaderRowStyle
struct FHeaderRowStyle : FSlateWidgetStyle {
	struct FTableColumnHeaderStyle ColumnStyle; // 0x8 (1232)
	struct FTableColumnHeaderStyle LastColumnStyle; // 0x4D8 (1232)
	struct FSplitterStyle ColumnSplitterStyle; // 0x9A8 (280)
	struct FSlateBrush BackgroundBrush; // 0xAC0 (136)
	struct FSlateColor ForegroundColor; // 0xB48 (40)
};

// ScriptStruct SlateCore.SplitterStyle
struct FSplitterStyle : FSlateWidgetStyle {
	struct FSlateBrush HandleNormalBrush; // 0x8 (136)
	struct FSlateBrush HandleHighlightBrush; // 0x90 (136)
};

// ScriptStruct SlateCore.TableColumnHeaderStyle
struct FTableColumnHeaderStyle : FSlateWidgetStyle {
	struct FSlateBrush SortPrimaryAscendingImage; // 0x8 (136)
	struct FSlateBrush SortPrimaryDescendingImage; // 0x90 (136)
	struct FSlateBrush SortSecondaryAscendingImage; // 0x118 (136)
	struct FSlateBrush SortSecondaryDescendingImage; // 0x1A0 (136)
	struct FSlateBrush NormalBrush; // 0x228 (136)
	struct FSlateBrush HoveredBrush; // 0x2B0 (136)
	struct FSlateBrush MenuDropdownImage; // 0x338 (136)
	struct FSlateBrush MenuDropdownNormalBorderBrush; // 0x3C0 (136)
	struct FSlateBrush MenuDropdownHoveredBorderBrush; // 0x448 (136)
};

// ScriptStruct SlateCore.InlineTextImageStyle
struct FInlineTextImageStyle : FSlateWidgetStyle {
	struct FSlateBrush Image; // 0x8 (136)
	int16_t Baseline; // 0x90 (2)
};

// ScriptStruct SlateCore.VolumeControlStyle
struct FVolumeControlStyle : FSlateWidgetStyle {
	struct FSliderStyle SliderStyle; // 0x8 (832)
	struct FSlateBrush HighVolumeImage; // 0x348 (136)
	struct FSlateBrush MidVolumeImage; // 0x3D0 (136)
	struct FSlateBrush LowVolumeImage; // 0x458 (136)
	struct FSlateBrush NoVolumeImage; // 0x4E0 (136)
	struct FSlateBrush MutedImage; // 0x568 (136)
};

// ScriptStruct SlateCore.SliderStyle
struct FSliderStyle : FSlateWidgetStyle {
	struct FSlateBrush NormalBarImage; // 0x8 (136)
	struct FSlateBrush HoveredBarImage; // 0x90 (136)
	struct FSlateBrush DisabledBarImage; // 0x118 (136)
	struct FSlateBrush NormalThumbImage; // 0x1A0 (136)
	struct FSlateBrush HoveredThumbImage; // 0x228 (136)
	struct FSlateBrush DisabledThumbImage; // 0x2B0 (136)
	float BarThickness; // 0x338 (4)
};

// ScriptStruct SlateCore.SearchBoxStyle
struct FSearchBoxStyle : FSlateWidgetStyle {
	struct FEditableTextBoxStyle TextBoxStyle; // 0x8 (2032)
	struct FSlateFontInfo ActiveFontInfo; // 0x7F8 (80)
	struct FSlateBrush UpArrowImage; // 0x848 (136)
	struct FSlateBrush DownArrowImage; // 0x8D0 (136)
	struct FSlateBrush GlassImage; // 0x958 (136)
	struct FSlateBrush ClearImage; // 0x9E0 (136)
	struct FMargin ImagePadding; // 0xA68 (16)
	char bLeftAlignButtons : 0; // 0xA78 (1)
};

// ScriptStruct SlateCore.ExpandableAreaStyle
struct FExpandableAreaStyle : FSlateWidgetStyle {
	struct FSlateBrush CollapsedImage; // 0x8 (136)
	struct FSlateBrush ExpandedImage; // 0x90 (136)
	float RolloutAnimationSeconds; // 0x118 (4)
};

// ScriptStruct SlateCore.ProgressBarStyle
struct FProgressBarStyle : FSlateWidgetStyle {
	struct FSlateBrush BackgroundImage; // 0x8 (136)
	struct FSlateBrush FillImage; // 0x90 (136)
	struct FSlateBrush MarqueeImage; // 0x118 (136)
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	struct FEditableTextBoxStyle EditableTextBoxStyle; // 0x8 (2032)
	struct FTextBlockStyle TextStyle; // 0x7F8 (616)
};

// ScriptStruct SlateCore.HyperlinkStyle
struct FHyperlinkStyle : FSlateWidgetStyle {
	struct FButtonStyle UnderlineStyle; // 0x8 (632)
	struct FTextBlockStyle TextStyle; // 0x280 (616)
	struct FMargin Padding; // 0x4E8 (16)
};

// ScriptStruct SlateCore.CheckBoxStyle
struct FCheckBoxStyle : FSlateWidgetStyle {
	char CheckBoxType; // 0x8 (1)
	struct FSlateBrush UncheckedImage; // 0x10 (136)
	struct FSlateBrush UncheckedHoveredImage; // 0x98 (136)
	struct FSlateBrush UncheckedPressedImage; // 0x120 (136)
	struct FSlateBrush CheckedImage; // 0x1A8 (136)
	struct FSlateBrush CheckedHoveredImage; // 0x230 (136)
	struct FSlateBrush CheckedPressedImage; // 0x2B8 (136)
	struct FSlateBrush UndeterminedImage; // 0x340 (136)
	struct FSlateBrush UndeterminedHoveredImage; // 0x3C8 (136)
	struct FSlateBrush UndeterminedPressedImage; // 0x450 (136)
	struct FMargin Padding; // 0x4D8 (16)
	struct FSlateColor ForegroundColor; // 0x4E8 (40)
	struct FSlateColor BorderBackgroundColor; // 0x510 (40)
	struct FSlateSound CheckedSlateSound; // 0x538 (24)
	struct FSlateSound UncheckedSlateSound; // 0x550 (24)
	struct FSlateSound HoveredSlateSound; // 0x568 (24)
};

