// Enum Slate.ETextJustify
enum class ETextJustify : uint8 {
	ETextJustify = 0
	ETextJustify = 1
	ETextJustify = 2
	ETextJustify = 3
};

// Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8 {
	ETextFlowDirection = 0
	ETextFlowDirection = 1
	ETextFlowDirection = 2
	ETextFlowDirection = 3
};

// Enum Slate.EVirtualKeyboardDismissAction
enum class EVirtualKeyboardDismissAction : uint8 {
	EVirtualKeyboardDismissAction = 0
	EVirtualKeyboardDismissAction = 1
	EVirtualKeyboardDismissAction = 2
	EVirtualKeyboardDismissAction = 3
};

// Enum Slate.EVirtualKeyboardTrigger
enum class EVirtualKeyboardTrigger : uint8 {
	EVirtualKeyboardTrigger = 0
	EVirtualKeyboardTrigger = 1
	EVirtualKeyboardTrigger = 2
};

// Enum Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8 {
	ETextWrappingPolicy = 0
	ETextWrappingPolicy = 1
	ETextWrappingPolicy = 2
	ETextWrappingPolicy = 3
};

// Enum Slate.ETableViewMode
enum class ETableViewMode : uint8 {
	ETableViewMode = 0
	ETableViewMode = 1
	ETableViewMode = 2
	ETableViewMode = 3
};

// Enum Slate.ESelectionMode
enum class ESelectionMode : uint8 {
	ESelectionMode = 0
	ESelectionMode = 1
	ESelectionMode = 2
	ESelectionMode = 3
	ESelectionMode = 4
};

// Enum Slate.EMultiBlockType
enum class EMultiBlockType : uint8 {
	EMultiBlockType = 0
	EMultiBlockType = 1
	EMultiBlockType = 2
	EMultiBlockType = 3
	EMultiBlockType = 4
	EMultiBlockType = 5
	EMultiBlockType = 6
	EMultiBlockType = 7
	EMultiBlockType = 8
	EMultiBlockType = 9
	EMultiBlockType = 10
};

// Enum Slate.EMultiBoxType
enum class EMultiBoxType : uint8 {
	EMultiBoxType = 0
	EMultiBoxType = 1
	EMultiBoxType = 2
	EMultiBoxType = 3
	EMultiBoxType = 4
	EMultiBoxType = 5
	EMultiBoxType = 6
	EMultiBoxType = 7
};

// Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8 {
	EProgressBarFillType = 0
	EProgressBarFillType = 1
	EProgressBarFillType = 2
	EProgressBarFillType = 3
	EProgressBarFillType = 4
	EProgressBarFillType = 5
};

// Enum Slate.EStretch
enum class EStretch : uint8 {
	EStretch = 0
	EStretch = 1
	EStretch = 2
	EStretch = 3
	EStretch = 4
	EStretch = 5
	EStretch = 6
	EStretch = 7
	EStretch = 8
};

// Enum Slate.EStretchDirection
enum class EStretchDirection : uint8 {
	EStretchDirection = 0
	EStretchDirection = 1
	EStretchDirection = 2
	EStretchDirection = 3
};

// Enum Slate.EScrollWhenFocusChanges
enum class EScrollWhenFocusChanges : uint8 {
	EScrollWhenFocusChanges = 0
	EScrollWhenFocusChanges = 1
	EScrollWhenFocusChanges = 2
	EScrollWhenFocusChanges = 3
};

// Enum Slate.EDescendantScrollDestination
enum class EDescendantScrollDestination : uint8 {
	EDescendantScrollDestination = 0
	EDescendantScrollDestination = 1
	EDescendantScrollDestination = 2
	EDescendantScrollDestination = 3
};

// Enum Slate.EListItemAlignment
enum class EListItemAlignment : uint8 {
	EListItemAlignment = 0
	EListItemAlignment = 1
	EListItemAlignment = 2
	EListItemAlignment = 3
	EListItemAlignment = 4
	EListItemAlignment = 5
	EListItemAlignment = 6
	EListItemAlignment = 7
};

// Enum Slate.ECustomizedToolMenuVisibility
enum class ECustomizedToolMenuVisibility : uint8 {
	ECustomizedToolMenuVisibility = 0
	ECustomizedToolMenuVisibility = 1
	ECustomizedToolMenuVisibility = 2
	ECustomizedToolMenuVisibility = 3
};

// Enum Slate.EMultipleKeyBindingIndex
enum class EMultipleKeyBindingIndex : uint8 {
	EMultipleKeyBindingIndex = 0
	EMultipleKeyBindingIndex = 1
	EMultipleKeyBindingIndex = 2
	EMultipleKeyBindingIndex = 3
};

// Enum Slate.EUserInterfaceActionType
enum class EUserInterfaceActionType : uint8 {
	EUserInterfaceActionType = 0
	EUserInterfaceActionType = 1
	EUserInterfaceActionType = 2
	EUserInterfaceActionType = 3
	EUserInterfaceActionType = 4
	EUserInterfaceActionType = 5
	EUserInterfaceActionType = 6
};

// Class Slate.ButtonWidgetStyle
class UButtonWidgetStyle : USlateWidgetStyleContainerBase {
	struct Unknown ButtonStyle; // 0x30 (632)
};

// Class Slate.CheckBoxWidgetStyle
class UCheckBoxWidgetStyle : USlateWidgetStyleContainerBase {
	struct Unknown CheckBoxStyle; // 0x30 (1408)
};

// Class Slate.ComboBoxWidgetStyle
class UComboBoxWidgetStyle : USlateWidgetStyleContainerBase {
	struct Unknown ComboBoxStyle; // 0x30 (1008)
};

// Class Slate.ComboButtonWidgetStyle
class UComboButtonWidgetStyle : USlateWidgetStyleContainerBase {
	struct Unknown ComboButtonStyle; // 0x30 (952)
};

// Class Slate.EditableTextBoxWidgetStyle
class UEditableTextBoxWidgetStyle : USlateWidgetStyleContainerBase {
	struct Unknown EditableTextBoxStyle; // 0x30 (2032)
};

// Class Slate.EditableTextWidgetStyle
class UEditableTextWidgetStyle : USlateWidgetStyleContainerBase {
	struct Unknown EditableTextStyle; // 0x30 (536)
};

// Class Slate.ProgressWidgetStyle
class UProgressWidgetStyle : USlateWidgetStyleContainerBase {
	struct Unknown ProgressBarStyle; // 0x30 (416)
};

// Class Slate.ScrollBarWidgetStyle
class UScrollBarWidgetStyle : USlateWidgetStyleContainerBase {
	struct Unknown ScrollBarStyle; // 0x30 (1232)
};

// Class Slate.ScrollBoxWidgetStyle
class UScrollBoxWidgetStyle : USlateWidgetStyleContainerBase {
	struct Unknown ScrollBoxStyle; // 0x30 (552)
};

// Class Slate.SlateSettings
class USlateSettings : Object {
	char bExplicitCanvasChildZOrder : 0; // 0x28 (1)
};

// Class Slate.SpinBoxWidgetStyle
class USpinBoxWidgetStyle : USlateWidgetStyleContainerBase {
	struct Unknown SpinBoxStyle; // 0x30 (744)
};

// Class Slate.TextBlockWidgetStyle
class UTextBlockWidgetStyle : USlateWidgetStyleContainerBase {
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
	struct TMap<Unknown, Unknown>Unknown Entries; // 0x8 (80)
	struct TMap<Unknown, Unknown>Unknown Sections; // 0x58 (80)
	struct TMap<Unknown, Unknown>Unknown EntryOrder; // 0xA8 (80)
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

