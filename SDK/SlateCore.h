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

	struct Unknown CustomStyle; // 0x28 (8)
};

// ScriptStruct SlateCore.SlateBrush
struct FSlateBrush {
	struct Unknown ImageSize; // 0x8 (8)
	struct Unknown Margin; // 0x10 (16)
	struct Unknown TintColor; // 0x20 (40)
	struct Unknown ResourceObject; // 0x48 (8)
	struct FName ResourceName; // 0x50 (8)
	struct Unknown UVRegion; // 0x58 (20)
	char DrawAs; // 0x6C (1)
	enum class None tiling; // 0x6D (1)
	char Mirroring; // 0x6E (1)
	char ImageType; // 0x6F (1)
	char bIsDynamicallyLoaded : 0; // 0x80 (1)
	char bHasUObject : 0; // 0x80 (1)
};

// ScriptStruct SlateCore.SlateColor
struct FSlateColor {
	struct Unknown SpecifiedColor; // 0x0 (16)
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
	struct Unknown FontObject; // 0x0 (8)
	struct Unknown FontMaterial; // 0x8 (8)
	struct Unknown OutlineSettings; // 0x10 (32)
	struct FName TypefaceFontName; // 0x40 (8)
	int32_t Size; // 0x48 (4)
};

// ScriptStruct SlateCore.FontOutlineSettings
struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x0 (4)
	char bSeparateFillAlpha : 0; // 0x4 (1)
	char bApplyOutlineToDropShadows : 0; // 0x5 (1)
	struct Unknown OutlineMaterial; // 0x8 (8)
	struct Unknown OutlineColor; // 0x10 (16)
};

// ScriptStruct SlateCore.TableRowStyle
struct FTableRowStyle : FSlateWidgetStyle {
	struct Unknown SelectorFocusedBrush; // 0x8 (136)
	struct Unknown ActiveHoveredBrush; // 0x90 (136)
	struct Unknown ActiveBrush; // 0x118 (136)
	struct Unknown InactiveHoveredBrush; // 0x1A0 (136)
	struct Unknown InactiveBrush; // 0x228 (136)
	struct Unknown EvenRowBackgroundHoveredBrush; // 0x2B0 (136)
	struct Unknown EvenRowBackgroundBrush; // 0x338 (136)
	struct Unknown OddRowBackgroundHoveredBrush; // 0x3C0 (136)
	struct Unknown OddRowBackgroundBrush; // 0x448 (136)
	struct Unknown TextColor; // 0x4D0 (40)
	struct Unknown SelectedTextColor; // 0x4F8 (40)
	struct Unknown DropIndicator_Above; // 0x520 (136)
	struct Unknown DropIndicator_Onto; // 0x5A8 (136)
	struct Unknown DropIndicator_Below; // 0x630 (136)
	struct Unknown ActiveHighlightedBrush; // 0x6B8 (136)
	struct Unknown InactiveHighlightedBrush; // 0x740 (136)
};

// ScriptStruct SlateCore.ComboBoxStyle
struct FComboBoxStyle : FSlateWidgetStyle {
	struct Unknown ComboButtonStyle; // 0x8 (952)
	struct Unknown PressedSlateSound; // 0x3C0 (24)
	struct Unknown SelectionChangeSlateSound; // 0x3D8 (24)
};

// ScriptStruct SlateCore.SlateSound
struct FSlateSound {
	struct Unknown ResourceObject; // 0x0 (8)
};

// ScriptStruct SlateCore.ComboButtonStyle
struct FComboButtonStyle : FSlateWidgetStyle {
	struct Unknown ButtonStyle; // 0x8 (632)
	struct Unknown DownArrowImage; // 0x280 (136)
	struct Unknown ShadowOffset; // 0x308 (8)
	struct Unknown ShadowColorAndOpacity; // 0x310 (16)
	struct Unknown MenuBorderBrush; // 0x320 (136)
	struct Unknown MenuBorderPadding; // 0x3A8 (16)
};

// ScriptStruct SlateCore.ButtonStyle
struct FButtonStyle : FSlateWidgetStyle {
	struct Unknown Normal; // 0x8 (136)
	struct Unknown Hovered; // 0x90 (136)
	struct Unknown Pressed; // 0x118 (136)
	struct Unknown Disabled; // 0x1A0 (136)
	struct Unknown NormalPadding; // 0x228 (16)
	struct Unknown PressedPadding; // 0x238 (16)
	struct Unknown PressedSlateSound; // 0x248 (24)
	struct Unknown HoveredSlateSound; // 0x260 (24)
};

// ScriptStruct SlateCore.EditableTextStyle
struct FEditableTextStyle : FSlateWidgetStyle {
	struct Unknown Font; // 0x8 (80)
	struct Unknown ColorAndOpacity; // 0x58 (40)
	struct Unknown BackgroundImageSelected; // 0x80 (136)
	struct Unknown BackgroundImageComposing; // 0x108 (136)
	struct Unknown CaretImage; // 0x190 (136)
};

// ScriptStruct SlateCore.EditableTextBoxStyle
struct FEditableTextBoxStyle : FSlateWidgetStyle {
	struct Unknown BackgroundImageNormal; // 0x8 (136)
	struct Unknown BackgroundImageHovered; // 0x90 (136)
	struct Unknown BackgroundImageFocused; // 0x118 (136)
	struct Unknown BackgroundImageReadOnly; // 0x1A0 (136)
	struct Unknown Padding; // 0x228 (16)
	struct Unknown Font; // 0x238 (80)
	struct Unknown ForegroundColor; // 0x288 (40)
	struct Unknown BackgroundColor; // 0x2B0 (40)
	struct Unknown ReadOnlyForegroundColor; // 0x2D8 (40)
	struct Unknown HScrollBarPadding; // 0x300 (16)
	struct Unknown VScrollBarPadding; // 0x310 (16)
	struct Unknown ScrollBarStyle; // 0x320 (1232)
};

// ScriptStruct SlateCore.ScrollBarStyle
struct FScrollBarStyle : FSlateWidgetStyle {
	struct Unknown HorizontalBackgroundImage; // 0x8 (136)
	struct Unknown VerticalBackgroundImage; // 0x90 (136)
	struct Unknown VerticalTopSlotImage; // 0x118 (136)
	struct Unknown HorizontalTopSlotImage; // 0x1A0 (136)
	struct Unknown VerticalBottomSlotImage; // 0x228 (136)
	struct Unknown HorizontalBottomSlotImage; // 0x2B0 (136)
	struct Unknown NormalThumbImage; // 0x338 (136)
	struct Unknown HoveredThumbImage; // 0x3C0 (136)
	struct Unknown DraggedThumbImage; // 0x448 (136)
};

// ScriptStruct SlateCore.TextBlockStyle
struct FTextBlockStyle : FSlateWidgetStyle {
	struct Unknown Font; // 0x8 (80)
	struct Unknown ColorAndOpacity; // 0x58 (40)
	struct Unknown ShadowOffset; // 0x80 (8)
	struct Unknown ShadowColorAndOpacity; // 0x88 (16)
	struct Unknown SelectedBackgroundColor; // 0x98 (40)
	struct Unknown HighlightColor; // 0xC0 (16)
	struct Unknown HighlightShape; // 0xD0 (136)
	struct Unknown StrikeBrush; // 0x158 (136)
	struct Unknown UnderlineBrush; // 0x1E0 (136)
};

// ScriptStruct SlateCore.SpinBoxStyle
struct FSpinBoxStyle : FSlateWidgetStyle {
	struct Unknown BackgroundBrush; // 0x8 (136)
	struct Unknown HoveredBackgroundBrush; // 0x90 (136)
	struct Unknown ActiveFillBrush; // 0x118 (136)
	struct Unknown InactiveFillBrush; // 0x1A0 (136)
	struct Unknown ArrowsImage; // 0x228 (136)
	struct Unknown ForegroundColor; // 0x2B0 (40)
	struct Unknown TextPadding; // 0x2D8 (16)
};

// ScriptStruct SlateCore.CompositeFont
struct FCompositeFont {
	struct Unknown DefaultTypeface; // 0x0 (16)
	struct Unknown FallbackTypeface; // 0x10 (24)
	struct TArray<Unknown> SubTypefaces; // 0x28 (16)
};

// ScriptStruct SlateCore.CompositeFallbackFont
struct FCompositeFallbackFont {
	struct Unknown Typeface; // 0x0 (16)
	float ScalingFactor; // 0x10 (4)
};

// ScriptStruct SlateCore.Typeface
struct FTypeface {
	struct TArray<Unknown> Fonts; // 0x0 (16)
};

// ScriptStruct SlateCore.TypefaceEntry
struct FTypefaceEntry {
	struct FName Name; // 0x0 (8)
	struct Unknown Font; // 0x8 (32)
};

// ScriptStruct SlateCore.FontData
struct FFontData {
	struct FString FontFilename; // 0x0 (16)
	enum class Unknow Hinting; // 0x10 (1)
	enum class Unknow LoadingPolicy; // 0x11 (1)
	int32_t SubFaceIndex; // 0x14 (4)
	struct Unknown FontFaceAsset; // 0x18 (8)
};

// ScriptStruct SlateCore.CompositeSubFont
struct FCompositeSubFont : FCompositeFallbackFont {
	struct TArray<Unknown> CharacterRanges; // 0x18 (16)
	struct FString Cultures; // 0x28 (16)
};

// ScriptStruct SlateCore.WindowStyle
struct FWindowStyle : FSlateWidgetStyle {
	struct Unknown MinimizeButtonStyle; // 0x8 (632)
	struct Unknown MaximizeButtonStyle; // 0x280 (632)
	struct Unknown RestoreButtonStyle; // 0x4F8 (632)
	struct Unknown CloseButtonStyle; // 0x770 (632)
	struct Unknown TitleTextStyle; // 0x9E8 (616)
	struct Unknown ActiveTitleBrush; // 0xC50 (136)
	struct Unknown InactiveTitleBrush; // 0xCD8 (136)
	struct Unknown FlashTitleBrush; // 0xD60 (136)
	struct Unknown BackgroundColor; // 0xDE8 (40)
	struct Unknown OutlineBrush; // 0xE10 (136)
	struct Unknown OutlineColor; // 0xE98 (40)
	struct Unknown BorderBrush; // 0xEC0 (136)
	struct Unknown BackgroundBrush; // 0xF48 (136)
	struct Unknown ChildBackgroundBrush; // 0xFD0 (136)
};

// ScriptStruct SlateCore.ScrollBorderStyle
struct FScrollBorderStyle : FSlateWidgetStyle {
	struct Unknown TopShadowBrush; // 0x8 (136)
	struct Unknown BottomShadowBrush; // 0x90 (136)
};

// ScriptStruct SlateCore.ScrollBoxStyle
struct FScrollBoxStyle : FSlateWidgetStyle {
	struct Unknown TopShadowBrush; // 0x8 (136)
	struct Unknown BottomShadowBrush; // 0x90 (136)
	struct Unknown LeftShadowBrush; // 0x118 (136)
	struct Unknown RightShadowBrush; // 0x1A0 (136)
};

// ScriptStruct SlateCore.DockTabStyle
struct FDockTabStyle : FSlateWidgetStyle {
	struct Unknown CloseButtonStyle; // 0x8 (632)
	struct Unknown NormalBrush; // 0x280 (136)
	struct Unknown ActiveBrush; // 0x308 (136)
	struct Unknown ColorOverlayTabBrush; // 0x390 (136)
	struct Unknown ColorOverlayIconBrush; // 0x418 (136)
	struct Unknown ForegroundBrush; // 0x4A0 (136)
	struct Unknown HoveredBrush; // 0x528 (136)
	struct Unknown ContentAreaBrush; // 0x5B0 (136)
	struct Unknown TabWellBrush; // 0x638 (136)
	struct Unknown TabPadding; // 0x6C0 (16)
	float OverlapWidth; // 0x6D0 (4)
	struct Unknown FlashColor; // 0x6D8 (40)
};

// ScriptStruct SlateCore.HeaderRowStyle
struct FHeaderRowStyle : FSlateWidgetStyle {
	struct Unknown ColumnStyle; // 0x8 (1232)
	struct Unknown LastColumnStyle; // 0x4D8 (1232)
	struct Unknown ColumnSplitterStyle; // 0x9A8 (280)
	struct Unknown BackgroundBrush; // 0xAC0 (136)
	struct Unknown ForegroundColor; // 0xB48 (40)
};

// ScriptStruct SlateCore.SplitterStyle
struct FSplitterStyle : FSlateWidgetStyle {
	struct Unknown HandleNormalBrush; // 0x8 (136)
	struct Unknown HandleHighlightBrush; // 0x90 (136)
};

// ScriptStruct SlateCore.TableColumnHeaderStyle
struct FTableColumnHeaderStyle : FSlateWidgetStyle {
	struct Unknown SortPrimaryAscendingImage; // 0x8 (136)
	struct Unknown SortPrimaryDescendingImage; // 0x90 (136)
	struct Unknown SortSecondaryAscendingImage; // 0x118 (136)
	struct Unknown SortSecondaryDescendingImage; // 0x1A0 (136)
	struct Unknown NormalBrush; // 0x228 (136)
	struct Unknown HoveredBrush; // 0x2B0 (136)
	struct Unknown MenuDropdownImage; // 0x338 (136)
	struct Unknown MenuDropdownNormalBorderBrush; // 0x3C0 (136)
	struct Unknown MenuDropdownHoveredBorderBrush; // 0x448 (136)
};

// ScriptStruct SlateCore.InlineTextImageStyle
struct FInlineTextImageStyle : FSlateWidgetStyle {
	struct Unknown Image; // 0x8 (136)
	int16_t Baseline; // 0x90 (2)
};

// ScriptStruct SlateCore.VolumeControlStyle
struct FVolumeControlStyle : FSlateWidgetStyle {
	struct Unknown SliderStyle; // 0x8 (832)
	struct Unknown HighVolumeImage; // 0x348 (136)
	struct Unknown MidVolumeImage; // 0x3D0 (136)
	struct Unknown LowVolumeImage; // 0x458 (136)
	struct Unknown NoVolumeImage; // 0x4E0 (136)
	struct Unknown MutedImage; // 0x568 (136)
};

// ScriptStruct SlateCore.SliderStyle
struct FSliderStyle : FSlateWidgetStyle {
	struct Unknown NormalBarImage; // 0x8 (136)
	struct Unknown HoveredBarImage; // 0x90 (136)
	struct Unknown DisabledBarImage; // 0x118 (136)
	struct Unknown NormalThumbImage; // 0x1A0 (136)
	struct Unknown HoveredThumbImage; // 0x228 (136)
	struct Unknown DisabledThumbImage; // 0x2B0 (136)
	float BarThickness; // 0x338 (4)
};

// ScriptStruct SlateCore.SearchBoxStyle
struct FSearchBoxStyle : FSlateWidgetStyle {
	struct Unknown TextBoxStyle; // 0x8 (2032)
	struct Unknown ActiveFontInfo; // 0x7F8 (80)
	struct Unknown UpArrowImage; // 0x848 (136)
	struct Unknown DownArrowImage; // 0x8D0 (136)
	struct Unknown GlassImage; // 0x958 (136)
	struct Unknown ClearImage; // 0x9E0 (136)
	struct Unknown ImagePadding; // 0xA68 (16)
	char bLeftAlignButtons : 0; // 0xA78 (1)
};

// ScriptStruct SlateCore.ExpandableAreaStyle
struct FExpandableAreaStyle : FSlateWidgetStyle {
	struct Unknown CollapsedImage; // 0x8 (136)
	struct Unknown ExpandedImage; // 0x90 (136)
	float RolloutAnimationSeconds; // 0x118 (4)
};

// ScriptStruct SlateCore.ProgressBarStyle
struct FProgressBarStyle : FSlateWidgetStyle {
	struct Unknown BackgroundImage; // 0x8 (136)
	struct Unknown FillImage; // 0x90 (136)
	struct Unknown MarqueeImage; // 0x118 (136)
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	struct Unknown EditableTextBoxStyle; // 0x8 (2032)
	struct Unknown TextStyle; // 0x7F8 (616)
};

// ScriptStruct SlateCore.HyperlinkStyle
struct FHyperlinkStyle : FSlateWidgetStyle {
	struct Unknown UnderlineStyle; // 0x8 (632)
	struct Unknown TextStyle; // 0x280 (616)
	struct Unknown Padding; // 0x4E8 (16)
};

// ScriptStruct SlateCore.CheckBoxStyle
struct FCheckBoxStyle : FSlateWidgetStyle {
	char CheckBoxType; // 0x8 (1)
	struct Unknown UncheckedImage; // 0x10 (136)
	struct Unknown UncheckedHoveredImage; // 0x98 (136)
	struct Unknown UncheckedPressedImage; // 0x120 (136)
	struct Unknown CheckedImage; // 0x1A8 (136)
	struct Unknown CheckedHoveredImage; // 0x230 (136)
	struct Unknown CheckedPressedImage; // 0x2B8 (136)
	struct Unknown UndeterminedImage; // 0x340 (136)
	struct Unknown UndeterminedHoveredImage; // 0x3C8 (136)
	struct Unknown UndeterminedPressedImage; // 0x450 (136)
	struct Unknown Padding; // 0x4D8 (16)
	struct Unknown ForegroundColor; // 0x4E8 (40)
	struct Unknown BorderBackgroundColor; // 0x510 (40)
	struct Unknown CheckedSlateSound; // 0x538 (24)
	struct Unknown UncheckedSlateSound; // 0x550 (24)
	struct Unknown HoveredSlateSound; // 0x568 (24)
};

