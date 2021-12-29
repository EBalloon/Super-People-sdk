// Enum Slate.ETextJustify
enum class ETextJustify : uint8_t {
	Left = 0,
	Center = 1,
	Right = 2,
	ETextJustify_MAX = 3,
};

// Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8_t {
	Auto = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ETextFlowDirection_MAX = 3,
};

// Enum Slate.EVirtualKeyboardDismissAction
enum class EVirtualKeyboardDismissAction : uint8_t {
	TextChangeOnDismiss = 0,
	TextCommitOnAccept = 1,
	TextCommitOnDismiss = 2,
	EVirtualKeyboardDismissAction_MAX = 3,
};

// Enum Slate.EVirtualKeyboardTrigger
enum class EVirtualKeyboardTrigger : uint8_t {
	OnFocusByPointer = 0,
	OnAllFocusEvents = 1,
	EVirtualKeyboardTrigger_MAX = 2,
};

// Enum Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8_t {
	DefaultWrapping = 0,
	AllowPerCharacterWrapping = 1,
	AllowPerCharacterEllipsis = 2,
	ETextWrappingPolicy_MAX = 3,
};

// Enum Slate.ETableViewMode
enum class ETableViewMode : uint8_t {
	List = 0,
	Tile = 1,
	Tree = 2,
	ETableViewMode_MAX = 3,
};

// Enum Slate.ESelectionMode
enum class ESelectionMode : uint8_t {
	None = 0,
	Single = 1,
	SingleToggle = 2,
	Multi = 3,
	ESelectionMode_MAX = 4,
};

// Enum Slate.EMultiBlockType
enum class EMultiBlockType : uint8_t {
	None = 0,
	ButtonRow = 1,
	EditableText = 2,
	Heading = 3,
	MenuEntry = 4,
	MenuSeparator = 5,
	ToolBarButton = 6,
	ToolBarComboButton = 7,
	ToolBarSeparator = 8,
	Widget = 9,
	EMultiBlockType_MAX = 10,
};

// Enum Slate.EMultiBoxType
enum class EMultiBoxType : uint8_t {
	MenuBar = 0,
	ToolBar = 1,
	VerticalToolBar = 2,
	UniformToolBar = 3,
	Menu = 4,
	ButtonRow = 5,
	ToolMenuBar = 6,
	EMultiBoxType_MAX = 7,
};

// Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8_t {
	LeftToRight = 0,
	RightToLeft = 1,
	FillFromCenter = 2,
	TopToBottom = 3,
	BottomToTop = 4,
	EProgressBarFillType_MAX = 5,
};

// Enum Slate.EStretch
enum class EStretch : uint8_t {
	None = 0,
	Fill = 1,
	ScaleToFit = 2,
	ScaleToFitX = 3,
	ScaleToFitY = 4,
	ScaleToFill = 5,
	ScaleBySafeZone = 6,
	UserSpecified = 7,
	EStretch_MAX = 8,
};

// Enum Slate.EStretchDirection
enum class EStretchDirection : uint8_t {
	Both = 0,
	DownOnly = 1,
	UpOnly = 2,
	EStretchDirection_MAX = 3,
};

// Enum Slate.EScrollWhenFocusChanges
enum class EScrollWhenFocusChanges : uint8_t {
	NoScroll = 0,
	InstantScroll = 1,
	AnimatedScroll = 2,
	EScrollWhenFocusChanges_MAX = 3,
};

// Enum Slate.EDescendantScrollDestination
enum class EDescendantScrollDestination : uint8_t {
	IntoView = 0,
	TopOrLeft = 1,
	Center = 2,
	EDescendantScrollDestination_MAX = 3,
};

// Enum Slate.EListItemAlignment
enum class EListItemAlignment : uint8_t {
	EvenlyDistributed = 0,
	EvenlySize = 1,
	EvenlyWide = 2,
	LeftAligned = 3,
	RightAligned = 4,
	CenterAligned = 5,
	Fill = 6,
	EListItemAlignment_MAX = 7,
};

// Enum Slate.ECustomizedToolMenuVisibility
enum class ECustomizedToolMenuVisibility : uint8_t {
	None = 0,
	Visible = 1,
	Hidden = 2,
	ECustomizedToolMenuVisibility_MAX = 3,
};

// Enum Slate.EMultipleKeyBindingIndex
enum class EMultipleKeyBindingIndex : uint8_t {
	Primary = 0,
	Secondary = 1,
	NumChords = 2,
	EMultipleKeyBindingIndex_MAX = 3,
};

// Enum Slate.EUserInterfaceActionType
enum class EUserInterfaceActionType : uint8_t {
	None = 0,
	Button = 1,
	ToggleButton = 2,
	RadioButton = 3,
	Check = 4,
	CollapsedButton = 5,
	EUserInterfaceActionType_MAX = 6,
};

// Class Slate.ButtonWidgetStyle
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase {

public:

	struct Unknown ButtonStyle; // 0x30 (632)
};

// Class Slate.CheckBoxWidgetStyle
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase {

public:

	struct Unknown CheckBoxStyle; // 0x30 (1408)
};

// Class Slate.ComboBoxWidgetStyle
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase {

public:

	struct Unknown ComboBoxStyle; // 0x30 (1008)
};

// Class Slate.ComboButtonWidgetStyle
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase {

public:

	struct Unknown ComboButtonStyle; // 0x30 (952)
};

// Class Slate.EditableTextBoxWidgetStyle
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase {

public:

	struct Unknown EditableTextBoxStyle; // 0x30 (2032)
};

// Class Slate.EditableTextWidgetStyle
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase {

public:

	struct Unknown EditableTextStyle; // 0x30 (536)
};

// Class Slate.ProgressWidgetStyle
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase {

public:

	struct Unknown ProgressBarStyle; // 0x30 (416)
};

// Class Slate.ScrollBarWidgetStyle
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase {

public:

	struct Unknown ScrollBarStyle; // 0x30 (1232)
};

// Class Slate.ScrollBoxWidgetStyle
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase {

public:

	struct Unknown ScrollBoxStyle; // 0x30 (552)
};

// Class Slate.SlateSettings
class USlateSettings : public Object {

public:

	char bExplicitCanvasChildZOrder : 0; // 0x28 (1)
};

// Class Slate.SpinBoxWidgetStyle
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase {

public:

	struct Unknown SpinBoxStyle; // 0x30 (744)
};

// Class Slate.TextBlockWidgetStyle
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase {

public:

	struct Unknown TextBlockStyle; // 0x30 (616)
};

// ScriptStruct Slate.VirtualKeyboardOptions
struct FVirtualKeyboardOptions {
	char bEnableAutocorrect : 0; // 0x0 (1)
};

// ScriptStruct Slate.InputChord
struct FInputChord {
	struct Unknown Key; // 0x0 (24)
	char bShift : 0; // 0x18 (1)
	char bCtrl : 0; // 0x18 (1)
	char bAlt : 0; // 0x18 (1)
	char bCmd : 0; // 0x18 (1)
};

// ScriptStruct Slate.Anchors
struct FAnchors {
	struct Unknown Minimum; // 0x0 (8)
	struct Unknown Maximum; // 0x8 (8)
};

// ScriptStruct Slate.CustomizedToolMenu
struct FCustomizedToolMenu {
	struct FName Name; // 0x0 (8)
	struct TMap<Unknown, Unknown> Entries; // 0x8 (80)
	struct TMap<Unknown, Unknown> Sections; // 0x58 (80)
	struct TMap<Unknown, Unknown> EntryOrder; // 0xA8 (80)
	struct TArray<Unknown> SectionOrder; // 0xF8 (16)
};

// ScriptStruct Slate.CustomizedToolMenuNameArray
struct FCustomizedToolMenuNameArray {
	struct TArray<Unknown> Names; // 0x0 (16)
};

// ScriptStruct Slate.CustomizedToolMenuSection
struct FCustomizedToolMenuSection {
	enum class Unknow Visibility; // 0x0 (4)
};

// ScriptStruct Slate.CustomizedToolMenuEntry
struct FCustomizedToolMenuEntry {
	enum class Unknow Visibility; // 0x0 (4)
};

