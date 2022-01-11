// Enum CoherentUIGTPlugin.ECoherentUIGTKeys
enum class ECoherentUIGTKeys : uint8_t {
	LeftMouseButton = 0,
	RightMouseButton = 1,
	MiddleMouseButton = 2,
	ThumbMouseButton = 3,
	ThumbMouseButton2 = 4,
	BackSpace = 5,
	Tab = 6,
	Enter = 7,
	Pause = 8,
	CapsLock = 9,
	Escape = 10,
	SpaceBar = 11,
	PageUp = 12,
	PageDown = 13,
	End = 14,
	Home = 15,
	Left = 16,
	Up = 17,
	Right = 18,
	Down = 19,
	Insert = 20,
	Delete = 21,
	Zero = 22,
	One = 23,
	Two = 24,
	Three = 25,
	Four = 26,
	Five = 27,
	Six = 28,
	Seven = 29,
	Eight = 30,
	Nine = 31,
	A = 32,
	B = 33,
	C = 34,
	D = 35,
	E = 36,
	F = 37,
	G = 38,
	H = 39,
	I = 40,
	J = 41,
	K = 42,
	L = 43,
	M = 44,
	N = 45,
	O = 46,
	P = 47,
	Q = 48,
	R = 49,
	S = 50,
	T = 51,
	U = 52,
	V = 53,
	W = 54,
	X = 55,
	Y = 56,
	Z = 57,
	NumPadZero = 58,
	NumPadOne = 59,
	NumPadTwo = 60,
	NumPadThree = 61,
	NumPadFour = 62,
	NumPadFive = 63,
	NumPadSix = 64,
	NumPadSeven = 65,
	NumPadEight = 66,
	NumPadNine = 67,
	Multiply = 68,
	Add = 69,
	Subtract = 70,
	Decimal = 71,
	Divide = 72,
	F1 = 73,
	F2 = 74,
	F3 = 75,
	F4 = 76,
	F5 = 77,
	F6 = 78,
	F7 = 79,
	F8 = 80,
	F9 = 81,
	F10 = 82,
	F11 = 83,
	F12 = 84,
	NumLock = 85,
	ScrollLock = 86,
	LeftShift = 87,
	RightShift = 88,
	LeftControl = 89,
	RightControl = 90,
	LeftAlt = 91,
	RightAlt = 92,
	LeftCommand = 93,
	RightCommand = 94,
	Semicolon = 95,
	Equals = 96,
	Comma = 97,
	Underscore = 98,
	Period = 99,
	Slash = 100,
	Tilde = 101,
	LeftBracket = 102,
	Backslash = 103,
	RightBracket = 104,
	Quote = 105,
	Unknown = 106,
	ECoherentUIGTKeys_MAX = 107,
};

// Enum CoherentUIGTPlugin.ECoherentUIGTInputPropagationBehaviour
enum class ECoherentUIGTInputPropagationBehaviour : uint8_t {
	None = 0,
	Keyboard = 1,
	Joystick = 2,
	KeyboardAndJoystick = 3,
	ECoherentUIGTInputPropagationBehaviour_MAX = 4,
};

// Enum CoherentUIGTPlugin.ECoh_MouseButton
enum class ECoh_MouseButton : uint8_t {
	ButtonNone = 0,
	ButtonLeft = 1,
	ButtonMiddle = 2,
	ButtonRight = 3,
	ECoh_MAX = 4,
};

// Enum CoherentUIGTPlugin.ECoh_EventType
enum class ECoh_EventType : uint8_t {
	MouseMove = 0,
	MouseDown = 1,
	MouseUp = 2,
	MouseWheel = 3,
	ECoh_MAX = 4,
};

// Enum CoherentUIGTPlugin.ECoherentUIGTMSAA
enum class ECoherentUIGTMSAA : uint8_t {
	MSAA_1x = 0,
	MSAA_2x = 1,
	MSAA_4x = 2,
	MSAA_MAX = 3,
};

// Enum CoherentUIGTPlugin.ECoherentUIGTSettingsSeverity
enum class ECoherentUIGTSettingsSeverity : uint8_t {
	Trace = 0,
	Debug = 1,
	Info = 2,
	Warning = 3,
	AssertFailure = 4,
	Error = 5,
	ECoherentUIGTSettingsSeverity_MAX = 6,
};

// Enum CoherentUIGTPlugin.EGamepadBehaviourOnFocusLost
enum class EGamepadBehaviourOnFocusLost : uint8_t {
	ResetState = 0,
	UseCurrentState = 1,
	UseStateBeforeReset = 2,
	EGamepadBehaviourOnFocusLost_MAX = 3,
};

// Enum CoherentUIGTPlugin.EGTInputWidgetLineTraceMode
enum class EGTInputWidgetLineTraceMode : uint8_t {
	GTInputLineTrace_Single = 0,
	GTInputLineTrace_Multi = 1,
	GTInputLineTrace_MAX = 2,
};

// Enum CoherentUIGTPlugin.EGTInputWidgetRaycastQuality
enum class EGTInputWidgetRaycastQuality : uint8_t {
	RaycastQuality_Fast = 0,
	RaycastQuality_Balanced = 1,
	RaycastQuality_Accurate = 2,
	RaycastQuality_MAX = 3,
};

// Class CoherentUIGTPlugin.CoherentUIGTAudioWrapper
class UCoherentUIGTAudioWrapper : public Object {

public:

	struct Unknown Owner; // 0x28 (8)
	struct TMap<Unknown, Unknown> Sounds; // 0x30 (80)
};

// Class CoherentUIGTPlugin.CoherentUIGTBaseComponent
class UCoherentUIGTBaseComponent : public UActorComponent {

public:

	struct FMulticastInlineDelegate ReadyForBindings; // 0xB0 (16)
	struct FMulticastInlineDelegate BindingsReleased; // 0xC0 (16)
	struct FMulticastInlineDelegate FinishLoad; // 0xD0 (16)
	struct FMulticastInlineDelegate FailLoad; // 0xE0 (16)
	struct FMulticastInlineDelegate StartLoading; // 0xF0 (16)
	struct FMulticastInlineDelegate NavigateTo; // 0x100 (16)
	struct FMulticastInlineDelegate JavaScriptEvent; // 0x110 (16)
	struct FMulticastInlineDelegate UIGTScriptingReady; // 0x120 (16)
	struct FDelegate LiveViewSizeRequested; // 0x130 (16)
	struct Unknown Texture; // 0x158 (8)
	char Filter; // 0x160 (1)
	char bReceiveInput : 0; // 0x161 (1)
	char bReceiveInputWhenTransparent : 0; // 0x162 (1)
	char AllowPerformanceWarnings : 0; // 0x163 (1)
	float ExecuteJSTimersThresholdMs; // 0x164 (4)
	float UpdateStylesAndLayoutThresholdMs; // 0x168 (4)
	float RecordRenderingCommandsThresholdMs; // 0x16C (4)
	float PaintWarningThresholdMs; // 0x170 (4)
	int32_t LayersCountThreshold; // 0x174 (4)
	int32_t LayerWidthThreshold; // 0x178 (4)
	int32_t LayerHeightThreshold; // 0x17C (4)
	char bEnableAdditionalDefaultStyles : 0; // 0x180 (1)
	char bDelayedUpdate : 0; // 0x181 (1)
	struct Unknown AudioWrapper; // 0x1F8 (8)

	void UpdateWholeDataModelFromStruct(struct TFieldPath<FUnknown> Arg); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromStruct(Final|Native|Public|BlueprintCallable|Const) // <Game_BE.exe+0x1116250>
	void UpdateWholeDataModelFromObject(struct Unknown Model); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromObject(Final|Native|Public|BlueprintCallable|Const) // <Game_BE.exe+0x11195C0>
	void TriggerJSEvent(struct FString Name, struct Unknown eventData); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent(Final|Native|Public|BlueprintCallable|Const) // <Game_BE.exe+0x11192C0>
	void SynchronizeModels(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SynchronizeModels(Final|Native|Public|BlueprintCallable|Const) // <Game_BE.exe+0x1119280>
	void ShowPaintRects(char Show); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x11191F0>
	void SetOffscreenCanvasRendering(char State); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetOffscreenCanvasRendering(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1118ED0>
	void SetClickThroughAlphaThreshold(float threshold); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1118C40>
	void Resize(int32_t Width, int32_t Height); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize(Native|Public|BlueprintCallable) // <Game_BE.exe+0x1118B80>
	void Reload(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1118B60>
	void Redraw(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw(Final|Native|Public|BlueprintCallable|Const) // <Game_BE.exe+0x1118B40>
	void Load(struct FString Path); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1118AA0>
	char IsTransparent(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x1118A70>
	char IsReadyToCreateView(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x1118A40>
	char IsReadyForBindings(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x1118A10>
	char IsDocumentReady(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x11189B0>
	char HasRequestedView(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x11187D0>
	float GetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x1118770>
	void EndDebugFrameSave(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EndDebugFrameSave(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1118750>
	void EnableDelayedUpdate(char bEnabled); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x11186C0>
	void DebugSaveNextFrame(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.DebugSaveNextFrame(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x11186A0>
	struct Unknown CreateJSEvent(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x11185F0>
	void CreateDataModelFromStruct(struct FString Name, struct TFieldPath<FUnknown> Arg); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromStruct(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1115FE0>
	void CreateDataModelFromObject(struct FString Name, struct Unknown Model); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromObject(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1118510>
	void BeginDebugFrameSave(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.BeginDebugFrameSave(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x11184F0>
};

// Class CoherentUIGTPlugin.CoherentUIGTComponent
class UCoherentUIGTComponent : public UCoherentUIGTBaseComponent {

public:

	struct FString URL; // 0x230 (16)
	int32_t Width; // 0x240 (4)
	int32_t Height; // 0x244 (4)
	char ManualTexture : 0; // 0x248 (1)
	float ClickThroughAlphaThreshold; // 0x24C (4)
	char Transparent : 0; // 0x250 (1)
};

// Class CoherentUIGTPlugin.CoherentUIGTGameHUD
class ACoherentUIGTGameHUD : public AHUD {

public:

	struct Unknown CoherentUIGTHUD; // 0x408 (8)

	void SetupUIGTView(struct FString PageUrl, char bIsTransparent, float ClickThroughAlphaThreshold, float AnimationFrameDefer, char bDelayedUpdate); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView(Final|RequiredAPI|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1119040>
	char HasSetupUIGTView(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.HasSetupUIGTView(Final|RequiredAPI|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1118800>
};

// Class CoherentUIGTPlugin.CoherentUIGTHUD
class UCoherentUIGTHUD : public UCoherentUIGTBaseComponent {

public:

	struct Unknown HUDMaterialName; // 0x230 (24)
	struct Unknown HUDMaterial; // 0x248 (8)
	struct Unknown HUDMaterialInstance; // 0x250 (8)
};

// Class CoherentUIGTPlugin.CoherentUIGTInputActor
class ACoherentUIGTInputActor : public UActor {

public:

	struct FMulticastInlineDelegate OnCoherentUIGTInputActorMouseButtonDown; // 0x318 (16)
	struct FMulticastInlineDelegate OnCoherentUIGTInputActorMouseButtonUp; // 0x328 (16)
	struct FMulticastInlineDelegate OnCoherentUIGTInputActorKeyDown; // 0x338 (16)
	struct FMulticastInlineDelegate OnCoherentUIGTInputActorKeyUp; // 0x348 (16)

	void ToggleCoherentUIGTInputFocus(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x11192A0>
	void SetLineTraceMode(char Mode); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1118E50>
	void SetInputPropagationBehaviour(char Propagation); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1118DD0>
	void SetCoherentUIGTViewFocus(struct Unknown NewFocusedView); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1118D50>
	void SetCoherentUIGTInputFocus(char FocusUI); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1118CC0>
	char IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x11189E0>
	char IsCoherentUIGTFocused(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x1118980>
	void Initialize(char CollisionChannel, char AddressMode, char RaycastQuality, int32_t UVChannel); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1118830>
	char GetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x11187A0>
	void AlwaysAcceptMouseInput(char bAccept); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1118460>
	void AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(char bAllow); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x11183D0>
};

// Class CoherentUIGTPlugin.CoherentUIGTJSEvent
class UCoherentUIGTJSEvent : public Object {

public:

	struct TArray<Unknown> StructTypes; // 0xA8 (16)

	void AddText(struct FText& Text); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddText(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game_BE.exe+0x111C070>
	void AddStructArg(struct TFieldPath<FUnknown> Arg); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddStructArg(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1115F30>
	void AddString(struct FString Str); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddString(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111BFD0>
	void AddObject(struct Unknown Object); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddObject(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111BF50>
	void AddName(struct FName& Name); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddName(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game_BE.exe+0x111BEC0>
	void AddInt32(int32_t integer); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddInt32(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111BE40>
	void AddFloat(float fl); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddFloat(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111BDC0>
	void AddByte(enum class None Byte); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddByte(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111BD40>
	void AddBool(char B); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddBool(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111BCB0>
	void AddArray(struct TArray<Unknown>& Array); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddArray(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game_BE.exe+0x1115B80>
};

// Class CoherentUIGTPlugin.CoherentUIGTJSPayload
class UCoherentUIGTJSPayload : public Object {

public:

	struct FString EventName; // 0x28 (16)

	void ReadObject(int32_t Index, struct Unknown Object); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111C9C0>
	struct FString GetString(int32_t Index); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111C5C0>
	float GetNumber(int32_t Index); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111C500>
	int32_t GetInt32(int32_t Index); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111C470>
	char GetBool(int32_t Index); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111C310>
};

// Class CoherentUIGTPlugin.CoherentUIGTLiveView
class UCoherentUIGTLiveView : public UActorComponent {

public:

	struct FString LinkName; // 0xB0 (16)
	struct Unknown Texture; // 0xC0 (8)

	void OnLiveViewSizeRequest(struct Unknown baseComponent, struct FString Name, int32_t& Width, int32_t& Height); // Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game_BE.exe+0x111C830>
};

// Class CoherentUIGTPlugin.CoherentUIGTSettings
class UCoherentUIGTSettings : public Object {

public:

	char EnableLiveReload : 0; // 0x28 (1)
	int32_t InspectorPort; // 0x2C (4)
	int32_t WebdriverPort; // 0x30 (4)
	char EnableWebSecurity : 0; // 0x34 (1)
	char EnableLocalization : 0; // 0x35 (1)
	char RunAsynchronous : 0; // 0x36 (1)
	char AllowPerformanceWarningsInEditor : 0; // 0x37 (1)
	char ShowWarningsOnScreen : 0; // 0x38 (1)
	enum class Unknow LogSeverity; // 0x39 (1)
	char bPaintToBackBuffer : 0; // 0x3A (1)
	char bRespectTitleSafeZone : 0; // 0x3B (1)
	char bRespectLetterboxing : 0; // 0x3C (1)
	struct FString HUDMaterialName; // 0x40 (16)
	struct FString CoUIResourcesRoot; // 0x50 (16)
	char TickWhileGameIsPaused : 0; // 0x60 (1)
	char bUseLowerCaseNamesForAutoExposedProperties : 0; // 0x61 (1)
	enum class Unknow MSAA; // 0x62 (1)
	struct FString CookiesResource; // 0x68 (16)
	struct FString LocalStorageFolder; // 0x78 (16)
	char UseCacheFile : 0; // 0x88 (1)
	char UseReceivedFromServerUrl : 0; // 0x89 (1)
};

// Class CoherentUIGTPlugin.CoherentUIGTWidget
class UCoherentUIGTWidget : public UWidget {

public:

	struct Unknown Owner; // 0x120 (8)
	struct FMulticastInlineDelegate ReadyForBindings; // 0x128 (16)
	struct FMulticastInlineDelegate BindingsReleased; // 0x138 (16)
	struct FMulticastInlineDelegate FinishLoad; // 0x148 (16)
	struct FMulticastInlineDelegate FailLoad; // 0x158 (16)
	struct FMulticastInlineDelegate StartLoading; // 0x168 (16)
	struct FMulticastInlineDelegate NavigateTo; // 0x178 (16)
	struct FMulticastInlineDelegate JavaScriptEvent; // 0x188 (16)
	struct FMulticastInlineDelegate UIGTScriptingReady; // 0x198 (16)
	struct FMulticastInlineDelegate AkAudioEvent; // 0x1C0 (16)
	struct FMulticastInlineDelegate KeyUpDelegate; // 0x1D0 (16)
	struct FMulticastInlineDelegate KeyDownDelegate; // 0x1E0 (16)
	struct FMulticastInlineDelegate MouseEventDelegate; // 0x1F0 (16)
	char Filter; // 0x200 (1)
	char bReceiveInput : 0; // 0x201 (1)
	char InputPropagationBehaviour; // 0x202 (1)
	char bReceiveInputWhenTransparent : 0; // 0x203 (1)
	char bGammaCorrectedMaterial : 0; // 0x204 (1)
	float TickPeriodInMinimizedGame; // 0x208 (4)
	char AllowPerformanceWarnings : 0; // 0x20C (1)
	float ExecuteJSTimersThresholdMs; // 0x210 (4)
	float UpdateStylesAndLayoutThresholdMs; // 0x214 (4)
	float RecordRenderingCommandsThresholdMs; // 0x218 (4)
	float PaintWarningThresholdMs; // 0x21C (4)
	int32_t LayersCountThreshold; // 0x220 (4)
	int32_t LayerWidthThreshold; // 0x224 (4)
	int32_t LayerHeightThreshold; // 0x228 (4)
	char bEnableAdditionalDefaultStyles : 0; // 0x22C (1)
	struct Unknown AudioWrapper; // 0x2C0 (8)
	struct FString URL; // 0x348 (16)
	float ClickThroughAlphaThreshold; // 0x358 (4)
	char OffscreenCanvasRendering : 0; // 0x35C (1)
	char Transparent : 0; // 0x35D (1)

	void UpdateWholeDataModelFromStruct(struct TFieldPath<FUnknown> Arg); // Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromStruct(Final|Native|Public|BlueprintCallable|Const) // <Game_BE.exe+0x1116320>
	void UpdateWholeDataModelFromObject(struct Unknown Model); // Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromObject(Final|Native|Public|BlueprintCallable|Const) // <Game_BE.exe+0x111D130>
	void TriggerJSEvent(struct FString Name, struct Unknown eventData); // Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent(Final|Native|Public|BlueprintCallable|Const) // <Game_BE.exe+0x111D050>
	void SynchronizeModels(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SynchronizeModels(Final|Native|Public|BlueprintCallable|Const) // <Game_BE.exe+0x111D030>
	void ShowPaintRects(char Show); // Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111CFA0>
	void SetSkipHittestInputGroupEmpty(char bState); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetSkipHittestInputGroupEmpty(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111CF10>
	void SetRender(char bState); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetRender(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111CE80>
	void SetRefreshTime(float Time); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetRefreshTime(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111CE00>
	void SetReceiveInput(char Input); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetReceiveInput(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111CD70>
	void SetPreviewKeyEventInherit(char bState); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetPreviewKeyEventInherit(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111CCE0>
	void SetOffscreenCanvasRendering(char State); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetOffscreenCanvasRendering(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111CC50>
	void SetInputPropagationBehaviour(char Propagation); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetInputPropagationBehaviour(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111CBD0>
	void SetHideCursorDuringCapture(char bState); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetHideCursorDuringCapture(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111CB40>
	void SetClickThroughAlphaThreshold(float threshold); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111CAC0>
	void Reload(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111CAA0>
	void Redraw(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw(Final|Native|Public|BlueprintCallable|Const) // <Game_BE.exe+0x111CA80>
	void MouseEventDelegate__DelegateSignature(struct Unknown& MouseEvent); // DelegateFunction CoherentUIGTPlugin.CoherentUIGTWidget.MouseEventDelegate__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <Game_BE.exe+0x2B80160>
	void Load(struct FString Path); // Function CoherentUIGTPlugin.CoherentUIGTWidget.Load(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111C790>
	void KeyUpDelegate__DelegateSignature(struct Unknown& Key); // DelegateFunction CoherentUIGTPlugin.CoherentUIGTWidget.KeyUpDelegate__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <Game_BE.exe+0x2B80160>
	void KeyDownDelegate__DelegateSignature(struct Unknown& Key); // DelegateFunction CoherentUIGTPlugin.CoherentUIGTWidget.KeyDownDelegate__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <Game_BE.exe+0x2B80160>
	char IsTransparent(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x111C760>
	char IsReadyToCreateView(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x1118A40>
	char IsReadyForBindings(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x111C730>
	char IsErrorPage(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsErrorPage(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111C700>
	char IsDocumentReady(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x111C6D0>
	char HasRequestedView(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x111C6A0>
	struct Unknown GetRenderTexture(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.GetRenderTexture(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x111C590>
	char GetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.GetInputPropagationBehaviour(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x111C440>
	struct Unknown GetDPIScaleSize(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.GetDPIScaleSize(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x111C400>
	float GetDPIScaleBasedOnSize(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.GetDPIScaleBasedOnSize(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x111C3D0>
	float GetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x111C3A0>
	void FinishLoadSkip(char bState); // Function CoherentUIGTPlugin.CoherentUIGTWidget.FinishLoadSkip(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111C280>
	void EndDebugFrameSave(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.EndDebugFrameSave(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111C260>
	void DebugSaveNextFrame(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.DebugSaveNextFrame(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111C240>
	struct Unknown CreateJSEvent(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x11185F0>
	void CreateDataModelFromStruct(struct FString Name, struct TFieldPath<FUnknown> Arg); // Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromStruct(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x1116100>
	void CreateDataModelFromObject(struct FString Name, struct Unknown Model); // Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromObject(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111C160>
	void BeginDebugFrameSave(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.BeginDebugFrameSave(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x111C140>
	void AKAudioEventDelegate__DelegateSignature(struct FString EventName); // DelegateFunction CoherentUIGTPlugin.CoherentUIGTWidget.AKAudioEventDelegate__DelegateSignature(MulticastDelegate|Public|Delegate) // <Game_BE.exe+0x2B80160>
};

// ScriptStruct CoherentUIGTPlugin.Coh_MouseEventData
struct FCoh_MouseEventData {
	enum class Unknow Type; // 0x0 (1)
	enum class Unknow Button; // 0x1 (1)
	int32_t X; // 0x4 (4)
	int32_t Y; // 0x8 (4)
	float WheelX; // 0xC (4)
	float WheelY; // 0x10 (4)
	struct FString InputGroupName; // 0x18 (16)
	char bDoubleClick : 0; // 0x28 (1)
};

// ScriptStruct CoherentUIGTPlugin.CoherentSound
struct FCoherentSound {
	struct Unknown Component; // 0x0 (8)
	struct Unknown Stream; // 0x8 (8)
};

// ScriptStruct CoherentUIGTPlugin.CoherentUIGTLoadingScreenSettings
struct FCoherentUIGTLoadingScreenSettings {
	float MinimumLoadingScreenDisplayTime; // 0x0 (4)
	char bAutoCompleteWhenLoadingCompletes : 0; // 0x4 (1)
	char bWaitForManualStop : 0; // 0x5 (1)
	struct FString URL; // 0x8 (16)
};

// ScriptStruct CoherentUIGTPlugin.CoherentUIGTViewInfo
struct FCoherentUIGTViewInfo {
	int32_t Width; // 0x0 (4)
	int32_t Height; // 0x4 (4)
	char IsTransparent : 0; // 0x8 (1)
	float ClickThroughAlphaThreshold; // 0xC (4)
	float AnimationFrameDefer; // 0x10 (4)
};

// ScriptStruct CoherentUIGTPlugin.Coh_PrivateInfo
struct FCoh_PrivateInfo {
	struct FString SessionID; // 0x0 (16)
	struct FString AuthToken; // 0x10 (16)
	struct FString ApiGameUrl; // 0x20 (16)
	struct FString CoherentUrl; // 0x30 (16)
	struct FString ApiPhase; // 0x40 (16)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromStruct
inline void UCoherentUIGTBaseComponent::UpdateWholeDataModelFromStruct(struct TFieldPath<FUnknown> Arg) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromStruct");

	struct UpdateWholeDataModelFromStruct_Params {
		struct TFieldPath<FUnknown> Arg;
	}; UpdateWholeDataModelFromStruct_Params Params;

	Params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromObject
inline void UCoherentUIGTBaseComponent::UpdateWholeDataModelFromObject(struct Unknown Model) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromObject");

	struct UpdateWholeDataModelFromObject_Params {
		struct Unknown Model;
	}; UpdateWholeDataModelFromObject_Params Params;

	Params.Model = Model;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent
inline void UCoherentUIGTBaseComponent::TriggerJSEvent(struct FString Name, struct Unknown eventData) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent");

	struct TriggerJSEvent_Params {
		struct FString Name;
		struct Unknown eventData;
	}; TriggerJSEvent_Params Params;

	Params.Name = Name;
	Params.eventData = eventData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SynchronizeModels
inline void UCoherentUIGTBaseComponent::SynchronizeModels() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SynchronizeModels");

	struct SynchronizeModels_Params {
		
	}; SynchronizeModels_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects
inline void UCoherentUIGTBaseComponent::ShowPaintRects(char Show) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects");

	struct ShowPaintRects_Params {
		char Show;
	}; ShowPaintRects_Params Params;

	Params.Show = Show;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetOffscreenCanvasRendering
inline void UCoherentUIGTBaseComponent::SetOffscreenCanvasRendering(char State) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetOffscreenCanvasRendering");

	struct SetOffscreenCanvasRendering_Params {
		char State;
	}; SetOffscreenCanvasRendering_Params Params;

	Params.State = State;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold
inline void UCoherentUIGTBaseComponent::SetClickThroughAlphaThreshold(float threshold) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold");

	struct SetClickThroughAlphaThreshold_Params {
		float threshold;
	}; SetClickThroughAlphaThreshold_Params Params;

	Params.threshold = threshold;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize
inline void UCoherentUIGTBaseComponent::Resize(int32_t Width, int32_t Height) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize");

	struct Resize_Params {
		int32_t Width;
		int32_t Height;
	}; Resize_Params Params;

	Params.Width = Width;
	Params.Height = Height;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload
inline void UCoherentUIGTBaseComponent::Reload() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload");

	struct Reload_Params {
		
	}; Reload_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw
inline void UCoherentUIGTBaseComponent::Redraw() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw");

	struct Redraw_Params {
		
	}; Redraw_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load
inline void UCoherentUIGTBaseComponent::Load(struct FString Path) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load");

	struct Load_Params {
		struct FString Path;
	}; Load_Params Params;

	Params.Path = Path;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent
inline char UCoherentUIGTBaseComponent::IsTransparent() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent");

	struct IsTransparent_Params {
		
		char ReturnValue;

	}; IsTransparent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView
inline char UCoherentUIGTBaseComponent::IsReadyToCreateView() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView");

	struct IsReadyToCreateView_Params {
		
		char ReturnValue;

	}; IsReadyToCreateView_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings
inline char UCoherentUIGTBaseComponent::IsReadyForBindings() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings");

	struct IsReadyForBindings_Params {
		
		char ReturnValue;

	}; IsReadyForBindings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady
inline char UCoherentUIGTBaseComponent::IsDocumentReady() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady");

	struct IsDocumentReady_Params {
		
		char ReturnValue;

	}; IsDocumentReady_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView
inline char UCoherentUIGTBaseComponent::HasRequestedView() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView");

	struct HasRequestedView_Params {
		
		char ReturnValue;

	}; HasRequestedView_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold
inline float UCoherentUIGTBaseComponent::GetClickThroughAlphaThreshold() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold");

	struct GetClickThroughAlphaThreshold_Params {
		
		float ReturnValue;

	}; GetClickThroughAlphaThreshold_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EndDebugFrameSave
inline void UCoherentUIGTBaseComponent::EndDebugFrameSave() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EndDebugFrameSave");

	struct EndDebugFrameSave_Params {
		
	}; EndDebugFrameSave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate
inline void UCoherentUIGTBaseComponent::EnableDelayedUpdate(char bEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate");

	struct EnableDelayedUpdate_Params {
		char bEnabled;
	}; EnableDelayedUpdate_Params Params;

	Params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.DebugSaveNextFrame
inline void UCoherentUIGTBaseComponent::DebugSaveNextFrame() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.DebugSaveNextFrame");

	struct DebugSaveNextFrame_Params {
		
	}; DebugSaveNextFrame_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent
inline struct Unknown UCoherentUIGTBaseComponent::CreateJSEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent");

	struct CreateJSEvent_Params {
		
		struct Unknown ReturnValue;

	}; CreateJSEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromStruct
inline void UCoherentUIGTBaseComponent::CreateDataModelFromStruct(struct FString Name, struct TFieldPath<FUnknown> Arg) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromStruct");

	struct CreateDataModelFromStruct_Params {
		struct FString Name;
		struct TFieldPath<FUnknown> Arg;
	}; CreateDataModelFromStruct_Params Params;

	Params.Name = Name;
	Params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromObject
inline void UCoherentUIGTBaseComponent::CreateDataModelFromObject(struct FString Name, struct Unknown Model) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromObject");

	struct CreateDataModelFromObject_Params {
		struct FString Name;
		struct Unknown Model;
	}; CreateDataModelFromObject_Params Params;

	Params.Name = Name;
	Params.Model = Model;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.BeginDebugFrameSave
inline void UCoherentUIGTBaseComponent::BeginDebugFrameSave() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.BeginDebugFrameSave");

	struct BeginDebugFrameSave_Params {
		
	}; BeginDebugFrameSave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView
inline void ACoherentUIGTGameHUD::SetupUIGTView(struct FString PageUrl, char bIsTransparent, float ClickThroughAlphaThreshold, float AnimationFrameDefer, char bDelayedUpdate) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView");

	struct SetupUIGTView_Params {
		struct FString PageUrl;
		char bIsTransparent;
		float ClickThroughAlphaThreshold;
		float AnimationFrameDefer;
		char bDelayedUpdate;
	}; SetupUIGTView_Params Params;

	Params.PageUrl = PageUrl;
	Params.bIsTransparent = bIsTransparent;
	Params.ClickThroughAlphaThreshold = ClickThroughAlphaThreshold;
	Params.AnimationFrameDefer = AnimationFrameDefer;
	Params.bDelayedUpdate = bDelayedUpdate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTGameHUD.HasSetupUIGTView
inline char ACoherentUIGTGameHUD::HasSetupUIGTView() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTGameHUD.HasSetupUIGTView");

	struct HasSetupUIGTView_Params {
		
		char ReturnValue;

	}; HasSetupUIGTView_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus
inline void ACoherentUIGTInputActor::ToggleCoherentUIGTInputFocus() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus");

	struct ToggleCoherentUIGTInputFocus_Params {
		
	}; ToggleCoherentUIGTInputFocus_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode
inline void ACoherentUIGTInputActor::SetLineTraceMode(char Mode) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode");

	struct SetLineTraceMode_Params {
		char Mode;
	}; SetLineTraceMode_Params Params;

	Params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour
inline void ACoherentUIGTInputActor::SetInputPropagationBehaviour(char Propagation) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour");

	struct SetInputPropagationBehaviour_Params {
		char Propagation;
	}; SetInputPropagationBehaviour_Params Params;

	Params.Propagation = Propagation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus
inline void ACoherentUIGTInputActor::SetCoherentUIGTViewFocus(struct Unknown NewFocusedView) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus");

	struct SetCoherentUIGTViewFocus_Params {
		struct Unknown NewFocusedView;
	}; SetCoherentUIGTViewFocus_Params Params;

	Params.NewFocusedView = NewFocusedView;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus
inline void ACoherentUIGTInputActor::SetCoherentUIGTInputFocus(char FocusUI) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus");

	struct SetCoherentUIGTInputFocus_Params {
		char FocusUI;
	}; SetCoherentUIGTInputFocus_Params Params;

	Params.FocusUI = FocusUI;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED
inline char ACoherentUIGTInputActor::IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED");

	struct IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED_Params {
		
		char ReturnValue;

	}; IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused
inline char ACoherentUIGTInputActor::IsCoherentUIGTFocused() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused");

	struct IsCoherentUIGTFocused_Params {
		
		char ReturnValue;

	}; IsCoherentUIGTFocused_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize
inline void ACoherentUIGTInputActor::Initialize(char CollisionChannel, char AddressMode, char RaycastQuality, int32_t UVChannel) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize");

	struct Initialize_Params {
		char CollisionChannel;
		char AddressMode;
		char RaycastQuality;
		int32_t UVChannel;
	}; Initialize_Params Params;

	Params.CollisionChannel = CollisionChannel;
	Params.AddressMode = AddressMode;
	Params.RaycastQuality = RaycastQuality;
	Params.UVChannel = UVChannel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour
inline char ACoherentUIGTInputActor::GetInputPropagationBehaviour() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour");

	struct GetInputPropagationBehaviour_Params {
		
		char ReturnValue;

	}; GetInputPropagationBehaviour_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput
inline void ACoherentUIGTInputActor::AlwaysAcceptMouseInput(char bAccept) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput");

	struct AlwaysAcceptMouseInput_Params {
		char bAccept;
	}; AlwaysAcceptMouseInput_Params Params;

	Params.bAccept = bAccept;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED
inline void ACoherentUIGTInputActor::AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(char bAllow) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED");

	struct AllowJoystickInputWhileUIGTIsFocused_DEPRECATED_Params {
		char bAllow;
	}; AllowJoystickInputWhileUIGTIsFocused_DEPRECATED_Params Params;

	Params.bAllow = bAllow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddText
inline void UCoherentUIGTJSEvent::AddText(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddText");

	struct AddText_Params {
		struct FText& Text;
	}; AddText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddStructArg
inline void UCoherentUIGTJSEvent::AddStructArg(struct TFieldPath<FUnknown> Arg) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddStructArg");

	struct AddStructArg_Params {
		struct TFieldPath<FUnknown> Arg;
	}; AddStructArg_Params Params;

	Params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddString
inline void UCoherentUIGTJSEvent::AddString(struct FString Str) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddString");

	struct AddString_Params {
		struct FString Str;
	}; AddString_Params Params;

	Params.Str = Str;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddObject
inline void UCoherentUIGTJSEvent::AddObject(struct Unknown Object) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddObject");

	struct AddObject_Params {
		struct Unknown Object;
	}; AddObject_Params Params;

	Params.Object = Object;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddName
inline void UCoherentUIGTJSEvent::AddName(struct FName& Name) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddName");

	struct AddName_Params {
		struct FName& Name;
	}; AddName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Name = Params.Name;

}

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddInt32
inline void UCoherentUIGTJSEvent::AddInt32(int32_t integer) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddInt32");

	struct AddInt32_Params {
		int32_t integer;
	}; AddInt32_Params Params;

	Params.integer = integer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddFloat
inline void UCoherentUIGTJSEvent::AddFloat(float fl) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddFloat");

	struct AddFloat_Params {
		float fl;
	}; AddFloat_Params Params;

	Params.fl = fl;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddByte
inline void UCoherentUIGTJSEvent::AddByte(enum class None Byte) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddByte");

	struct AddByte_Params {
		enum class None Byte;
	}; AddByte_Params Params;

	Params.Byte = Byte;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddBool
inline void UCoherentUIGTJSEvent::AddBool(char B) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddBool");

	struct AddBool_Params {
		char B;
	}; AddBool_Params Params;

	Params.B = B;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddArray
inline void UCoherentUIGTJSEvent::AddArray(struct TArray<Unknown>& Array) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddArray");

	struct AddArray_Params {
		struct TArray<Unknown>& Array;
	}; AddArray_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Array = Params.Array;

}

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject
inline void UCoherentUIGTJSPayload::ReadObject(int32_t Index, struct Unknown Object) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject");

	struct ReadObject_Params {
		int32_t Index;
		struct Unknown Object;
	}; ReadObject_Params Params;

	Params.Index = Index;
	Params.Object = Object;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString
inline struct FString UCoherentUIGTJSPayload::GetString(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString");

	struct GetString_Params {
		int32_t Index;
		struct FString ReturnValue;

	}; GetString_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber
inline float UCoherentUIGTJSPayload::GetNumber(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber");

	struct GetNumber_Params {
		int32_t Index;
		float ReturnValue;

	}; GetNumber_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32
inline int32_t UCoherentUIGTJSPayload::GetInt32(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32");

	struct GetInt32_Params {
		int32_t Index;
		int32_t ReturnValue;

	}; GetInt32_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool
inline char UCoherentUIGTJSPayload::GetBool(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool");

	struct GetBool_Params {
		int32_t Index;
		char ReturnValue;

	}; GetBool_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest
inline void UCoherentUIGTLiveView::OnLiveViewSizeRequest(struct Unknown baseComponent, struct FString Name, int32_t& Width, int32_t& Height) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest");

	struct OnLiveViewSizeRequest_Params {
		struct Unknown baseComponent;
		struct FString Name;
		int32_t& Width;
		int32_t& Height;
	}; OnLiveViewSizeRequest_Params Params;

	Params.baseComponent = baseComponent;
	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Width = Params.Width;
	Height = Params.Height;

}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromStruct
inline void UCoherentUIGTWidget::UpdateWholeDataModelFromStruct(struct TFieldPath<FUnknown> Arg) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromStruct");

	struct UpdateWholeDataModelFromStruct_Params {
		struct TFieldPath<FUnknown> Arg;
	}; UpdateWholeDataModelFromStruct_Params Params;

	Params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromObject
inline void UCoherentUIGTWidget::UpdateWholeDataModelFromObject(struct Unknown Model) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromObject");

	struct UpdateWholeDataModelFromObject_Params {
		struct Unknown Model;
	}; UpdateWholeDataModelFromObject_Params Params;

	Params.Model = Model;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent
inline void UCoherentUIGTWidget::TriggerJSEvent(struct FString Name, struct Unknown eventData) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent");

	struct TriggerJSEvent_Params {
		struct FString Name;
		struct Unknown eventData;
	}; TriggerJSEvent_Params Params;

	Params.Name = Name;
	Params.eventData = eventData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.SynchronizeModels
inline void UCoherentUIGTWidget::SynchronizeModels() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.SynchronizeModels");

	struct SynchronizeModels_Params {
		
	}; SynchronizeModels_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects
inline void UCoherentUIGTWidget::ShowPaintRects(char Show) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects");

	struct ShowPaintRects_Params {
		char Show;
	}; ShowPaintRects_Params Params;

	Params.Show = Show;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.SetSkipHittestInputGroupEmpty
inline void UCoherentUIGTWidget::SetSkipHittestInputGroupEmpty(char bState) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.SetSkipHittestInputGroupEmpty");

	struct SetSkipHittestInputGroupEmpty_Params {
		char bState;
	}; SetSkipHittestInputGroupEmpty_Params Params;

	Params.bState = bState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.SetRender
inline void UCoherentUIGTWidget::SetRender(char bState) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.SetRender");

	struct SetRender_Params {
		char bState;
	}; SetRender_Params Params;

	Params.bState = bState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.SetRefreshTime
inline void UCoherentUIGTWidget::SetRefreshTime(float Time) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.SetRefreshTime");

	struct SetRefreshTime_Params {
		float Time;
	}; SetRefreshTime_Params Params;

	Params.Time = Time;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.SetReceiveInput
inline void UCoherentUIGTWidget::SetReceiveInput(char Input) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.SetReceiveInput");

	struct SetReceiveInput_Params {
		char Input;
	}; SetReceiveInput_Params Params;

	Params.Input = Input;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.SetPreviewKeyEventInherit
inline void UCoherentUIGTWidget::SetPreviewKeyEventInherit(char bState) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.SetPreviewKeyEventInherit");

	struct SetPreviewKeyEventInherit_Params {
		char bState;
	}; SetPreviewKeyEventInherit_Params Params;

	Params.bState = bState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.SetOffscreenCanvasRendering
inline void UCoherentUIGTWidget::SetOffscreenCanvasRendering(char State) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.SetOffscreenCanvasRendering");

	struct SetOffscreenCanvasRendering_Params {
		char State;
	}; SetOffscreenCanvasRendering_Params Params;

	Params.State = State;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.SetInputPropagationBehaviour
inline void UCoherentUIGTWidget::SetInputPropagationBehaviour(char Propagation) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.SetInputPropagationBehaviour");

	struct SetInputPropagationBehaviour_Params {
		char Propagation;
	}; SetInputPropagationBehaviour_Params Params;

	Params.Propagation = Propagation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.SetHideCursorDuringCapture
inline void UCoherentUIGTWidget::SetHideCursorDuringCapture(char bState) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.SetHideCursorDuringCapture");

	struct SetHideCursorDuringCapture_Params {
		char bState;
	}; SetHideCursorDuringCapture_Params Params;

	Params.bState = bState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold
inline void UCoherentUIGTWidget::SetClickThroughAlphaThreshold(float threshold) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold");

	struct SetClickThroughAlphaThreshold_Params {
		float threshold;
	}; SetClickThroughAlphaThreshold_Params Params;

	Params.threshold = threshold;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload
inline void UCoherentUIGTWidget::Reload() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload");

	struct Reload_Params {
		
	}; Reload_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw
inline void UCoherentUIGTWidget::Redraw() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw");

	struct Redraw_Params {
		
	}; Redraw_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction CoherentUIGTPlugin.CoherentUIGTWidget.MouseEventDelegate__DelegateSignature
inline void UCoherentUIGTWidget::MouseEventDelegate__DelegateSignature(struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CoherentUIGTPlugin.CoherentUIGTWidget.MouseEventDelegate__DelegateSignature");

	struct MouseEventDelegate__DelegateSignature_Params {
		struct Unknown& MouseEvent;
	}; MouseEventDelegate__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.Load
inline void UCoherentUIGTWidget::Load(struct FString Path) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.Load");

	struct Load_Params {
		struct FString Path;
	}; Load_Params Params;

	Params.Path = Path;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction CoherentUIGTPlugin.CoherentUIGTWidget.KeyUpDelegate__DelegateSignature
inline void UCoherentUIGTWidget::KeyUpDelegate__DelegateSignature(struct Unknown& Key) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CoherentUIGTPlugin.CoherentUIGTWidget.KeyUpDelegate__DelegateSignature");

	struct KeyUpDelegate__DelegateSignature_Params {
		struct Unknown& Key;
	}; KeyUpDelegate__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Key = Params.Key;

}

// DelegateFunction CoherentUIGTPlugin.CoherentUIGTWidget.KeyDownDelegate__DelegateSignature
inline void UCoherentUIGTWidget::KeyDownDelegate__DelegateSignature(struct Unknown& Key) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CoherentUIGTPlugin.CoherentUIGTWidget.KeyDownDelegate__DelegateSignature");

	struct KeyDownDelegate__DelegateSignature_Params {
		struct Unknown& Key;
	}; KeyDownDelegate__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Key = Params.Key;

}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent
inline char UCoherentUIGTWidget::IsTransparent() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent");

	struct IsTransparent_Params {
		
		char ReturnValue;

	}; IsTransparent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView
inline char UCoherentUIGTWidget::IsReadyToCreateView() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView");

	struct IsReadyToCreateView_Params {
		
		char ReturnValue;

	}; IsReadyToCreateView_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings
inline char UCoherentUIGTWidget::IsReadyForBindings() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings");

	struct IsReadyForBindings_Params {
		
		char ReturnValue;

	}; IsReadyForBindings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsErrorPage
inline char UCoherentUIGTWidget::IsErrorPage() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.IsErrorPage");

	struct IsErrorPage_Params {
		
		char ReturnValue;

	}; IsErrorPage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady
inline char UCoherentUIGTWidget::IsDocumentReady() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady");

	struct IsDocumentReady_Params {
		
		char ReturnValue;

	}; IsDocumentReady_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView
inline char UCoherentUIGTWidget::HasRequestedView() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView");

	struct HasRequestedView_Params {
		
		char ReturnValue;

	}; HasRequestedView_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.GetRenderTexture
inline struct Unknown UCoherentUIGTWidget::GetRenderTexture() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.GetRenderTexture");

	struct GetRenderTexture_Params {
		
		struct Unknown ReturnValue;

	}; GetRenderTexture_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.GetInputPropagationBehaviour
inline char UCoherentUIGTWidget::GetInputPropagationBehaviour() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.GetInputPropagationBehaviour");

	struct GetInputPropagationBehaviour_Params {
		
		char ReturnValue;

	}; GetInputPropagationBehaviour_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.GetDPIScaleSize
inline struct Unknown UCoherentUIGTWidget::GetDPIScaleSize() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.GetDPIScaleSize");

	struct GetDPIScaleSize_Params {
		
		struct Unknown ReturnValue;

	}; GetDPIScaleSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.GetDPIScaleBasedOnSize
inline float UCoherentUIGTWidget::GetDPIScaleBasedOnSize() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.GetDPIScaleBasedOnSize");

	struct GetDPIScaleBasedOnSize_Params {
		
		float ReturnValue;

	}; GetDPIScaleBasedOnSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold
inline float UCoherentUIGTWidget::GetClickThroughAlphaThreshold() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold");

	struct GetClickThroughAlphaThreshold_Params {
		
		float ReturnValue;

	}; GetClickThroughAlphaThreshold_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.FinishLoadSkip
inline void UCoherentUIGTWidget::FinishLoadSkip(char bState) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.FinishLoadSkip");

	struct FinishLoadSkip_Params {
		char bState;
	}; FinishLoadSkip_Params Params;

	Params.bState = bState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.EndDebugFrameSave
inline void UCoherentUIGTWidget::EndDebugFrameSave() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.EndDebugFrameSave");

	struct EndDebugFrameSave_Params {
		
	}; EndDebugFrameSave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.DebugSaveNextFrame
inline void UCoherentUIGTWidget::DebugSaveNextFrame() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.DebugSaveNextFrame");

	struct DebugSaveNextFrame_Params {
		
	}; DebugSaveNextFrame_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent
inline struct Unknown UCoherentUIGTWidget::CreateJSEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent");

	struct CreateJSEvent_Params {
		
		struct Unknown ReturnValue;

	}; CreateJSEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromStruct
inline void UCoherentUIGTWidget::CreateDataModelFromStruct(struct FString Name, struct TFieldPath<FUnknown> Arg) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromStruct");

	struct CreateDataModelFromStruct_Params {
		struct FString Name;
		struct TFieldPath<FUnknown> Arg;
	}; CreateDataModelFromStruct_Params Params;

	Params.Name = Name;
	Params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromObject
inline void UCoherentUIGTWidget::CreateDataModelFromObject(struct FString Name, struct Unknown Model) {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromObject");

	struct CreateDataModelFromObject_Params {
		struct FString Name;
		struct Unknown Model;
	}; CreateDataModelFromObject_Params Params;

	Params.Name = Name;
	Params.Model = Model;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CoherentUIGTPlugin.CoherentUIGTWidget.BeginDebugFrameSave
inline void UCoherentUIGTWidget::BeginDebugFrameSave() {
	static auto fn = UObject::FindObject<UFunction>("Function CoherentUIGTPlugin.CoherentUIGTWidget.BeginDebugFrameSave");

	struct BeginDebugFrameSave_Params {
		
	}; BeginDebugFrameSave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction CoherentUIGTPlugin.CoherentUIGTWidget.AKAudioEventDelegate__DelegateSignature
inline void UCoherentUIGTWidget::AKAudioEventDelegate__DelegateSignature(struct FString EventName) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CoherentUIGTPlugin.CoherentUIGTWidget.AKAudioEventDelegate__DelegateSignature");

	struct AKAudioEventDelegate__DelegateSignature_Params {
		struct FString EventName;
	}; AKAudioEventDelegate__DelegateSignature_Params Params;

	Params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

