// BlueprintGeneratedClass BP_GameSettings.BP_GameSettings_C
class UBP_GameSettings_C : public UBravoHotelLocalSavedSettings {

public:

	float Look Horizontal Sensitivity; // 0x120 (4)
	float Look Vertical Sensitivity; // 0x124 (4)
	char Look Horizontal Invert : 0; // 0x128 (1)
	char Look Vertical Invert : 0; // 0x129 (1)
	struct TScriptInterface<IUnknown> Game Settings Interface; // 0x130 (16)
	struct FString Save File Name; // 0x140 (16)
	int32_t Save File User Index; // 0x150 (4)
	struct TArray<Unknown> AudioEmittors; // 0x158 (16)
	float Audio Multiplier Master; // 0x168 (4)
	float Audio Multiplier Music; // 0x16C (4)
	float Audio Multiplier Voice; // 0x170 (4)
	float Audio Multiplier Effect; // 0x174 (4)
	float Audio Multiplier Ambient; // 0x178 (4)
	float Audio Multiplier UI; // 0x17C (4)
	float Volume Master; // 0x180 (4)
	float Volume Music; // 0x184 (4)
	float Volume Voice; // 0x188 (4)
	float Volume Effect; // 0x18C (4)
	float Volume Ambient; // 0x190 (4)
	int32_t Video X Resolution; // 0x194 (4)
	int32_t Video Y Resolution; // 0x198 (4)
	struct TArray<Unknown> Camera List; // 0x1A0 (16)
	char Screen Mode; // 0x1B0 (1)
	int32_t Resolution Scale Quality; // 0x1B4 (4)
	float View Distance Scale; // 0x1B8 (4)
	int32_t Anti Aliasing Quality; // 0x1BC (4)
	int32_t Post Processing Quality; // 0x1C0 (4)
	int32_t Shadow Quality; // 0x1C4 (4)
	int32_t Texture Quality; // 0x1C8 (4)
	int32_t Effect Quality; // 0x1CC (4)
	int32_t Foliage Quality; // 0x1D0 (4)
	float Field Of View FOV; // 0x1D4 (4)
	float Motion Blur Strength; // 0x1D8 (4)
	char VSync Enabled : 0; // 0x1DC (1)
	char My Custom Checkbox : 0; // 0x1DD (1)
	int32_t My Custom RadioBox; // 0x1E0 (4)
	float My Custom Slider; // 0x1E4 (4)
	float Bloom Intensity; // 0x1E8 (4)
	float Gamma Intensity; // 0x1EC (4)
	float Gain Intensity; // 0x1F0 (4)
	struct Unknown Previous Setting State; // 0x1F8 (8)
	struct FString My Custom Combobox; // 0x200 (16)
	float Current Frame Time; // 0x210 (4)
	struct TArray<Unknown> Key Actions; // 0x218 (16)
	struct TArray<Unknown> Input Float Axis List; // 0x228 (16)
	struct TArray<Unknown> Saved Key Inputs; // 0x238 (16)
	float Volume UI; // 0x248 (4)
	char Old ScreenMode State; // 0x24C (1)
	float TemporalAAFilterSize; // 0x250 (4)
	char TemporalAACatmullRom : 0; // 0x254 (1)
	char TemporalAAPauseCorrect : 0; // 0x255 (1)
	float TemporalAACurrentFrameWeight; // 0x258 (4)
	int32_t TemporalAASamples; // 0x25C (4)
	float TonemapperSharpen; // 0x260 (4)
	float MinBrightness; // 0x264 (4)
	float MaxBrightness; // 0x268 (4)
	float Contrast; // 0x26C (4)
	char PostProcessVolume : 0; // 0x270 (1)
	char ScreenModeChange : 0; // 0x271 (1)
	char FilmToe : 0; // 0x272 (1)
	float ColorGrading Global Gamma; // 0x274 (4)
	char ClearFog : 0; // 0x278 (1)
	int32_t ViewDistanceQuality; // 0x27C (4)
	int32_t ScalabilityQuality; // 0x280 (4)
	int32_t CurrentFileVersion; // 0x284 (4)
	int32_t UpdateFileVersion; // 0x288 (4)
	char Smooth Frame Enabled : 0; // 0x28C (1)

	void SetAutoReloadSetting(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.SetAutoReloadSetting(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetAutoReloadSetting(char& autoReload); // Function BP_GameSettings.BP_GameSettings_C.GetAutoReloadSetting(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ModifyAutoReloadSetting(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyAutoReloadSetting(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Smooth Frame Rate(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Smooth Frame Rate(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Smooth Frame Rate(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Smooth Frame Rate(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Smooth Frame Rate(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Smooth Frame Rate(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ModifyScalabilityQuality(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyScalabilityQuality(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetScalabilityQuality(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.GetScalabilityQuality(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetScalabilityQuality(int32_t Value, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.SetScalabilityQuality(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetViewDistanceQuality(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.GetViewDistanceQuality(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetViewDistanceQuality(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.SetViewDistanceQuality(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ModifyViewDistanceQuality(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyViewDistanceQuality(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Clear Fog(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Clear Fog(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Clear Fog(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Clear Fog(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Clear Fog(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Clear Fog(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get ColorGrading Global Gamma(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get ColorGrading Global Gamma(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set ColorGrading Global Gamma(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set ColorGrading Global Gamma(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify ColorGrading Global Gamma(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify ColorGrading Global Gamma(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Film Toe Intensity(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Film Toe Intensity(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Film Toe(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Film Toe(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Film Toe(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Film Toe(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Film Toe(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Film Toe(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify All Game Settings(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify All Game Settings(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetFireModeSetting(enum class Unknow WeaponType, enum class Unknow NewWeaponFireMode, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.SetFireModeSetting(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetFireModeSetting(struct TMap<Unknown, Unknown>& FireModeSettings); // Function BP_GameSettings.BP_GameSettings_C.GetFireModeSetting(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ModifyFireModeSetting(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyFireModeSetting(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Post Process Volume(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Post Process Volume(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Post Process Volume(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Post Process Volume(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Post Process Volume(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Post Process Volume(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetContrast(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetContrast(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetContrast(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetContrast(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ModifyContrast(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyContrast(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetMaxBrightness(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetMaxBrightness(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetMaxBrightness(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetMaxBrightness(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ModifyMaxBrightness(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyMaxBrightness(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetMinBrightness(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetMinBrightness(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetMinBrightness(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetMinBrightness(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ModifyMinBrightness(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyMinBrightness(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ModifyTemporalAACurrentFrameWeight(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAACurrentFrameWeight(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetTemporalAACurrentFrameWeight(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTemporalAACurrentFrameWeight(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetTemporalAACurrentFrameWeight(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTemporalAACurrentFrameWeight(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetTonemapperSharpen(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTonemapperSharpen(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetTemporalAASamples(int32_t& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTemporalAASamples(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetTemporalAAPauseCorrect(char& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTemporalAAPauseCorrect(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetTemporalAACatmullRom(char& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTemporalAACatmullRom(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetTonemapperSharpen(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTonemapperSharpen(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetTemporalAASamples(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTemporalAASamples(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetTemporalAAPauseCorrect(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTemporalAAPauseCorrect(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetTemporalAACatmullRom(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTemporalAACatmullRom(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ModifyTonemapperSharpen(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTonemapperSharpen(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ModifyTemporalAASamples(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAASamples(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ModifyTemporalAAPauseCorrect(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAAPauseCorrect(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ModifyTemporalAACatmullRom(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAACatmullRom(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ModifyTemporalAAFilterSize(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAAFilterSize(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetTemporalAAFilterSize(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTemporalAAFilterSize(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetTemporalAAFilterSize(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTemporalAAFilterSize(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void GetSensitivityValue(enum class Unknow MouseSensitivityType, int32_t& Sensitivity); // Function BP_GameSettings.BP_GameSettings_C.GetSensitivityValue(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetSensitivityValue(enum class Unknow MouseSensitivityType, int32_t Sensitivity); // Function BP_GameSettings.BP_GameSettings_C.SetSensitivityValue(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Foliage Quality(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get Foliage Quality(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Foliage Quality(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Foliage Quality(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Foliage Quality(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Foliage Quality(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Volume UI(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Volume UI(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Audio Multiplier UI(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier UI(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Audio Multiplier UI(float Set Value, char Apply); // Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier UI(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Audio Multiplier UI(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier UI(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Save Ini Settings(); // Function BP_GameSettings.BP_GameSettings_C.Save Ini Settings(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Load ini Settings(); // Function BP_GameSettings.BP_GameSettings_C.Load ini Settings(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Init Save Game Settings(struct TScriptInterface<IUnknown> Game Settings Interface); // Function BP_GameSettings.BP_GameSettings_C.Init Save Game Settings(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Saved Key Inputs(struct TArray<Unknown>& Saved Key Inputs); // Function BP_GameSettings.BP_GameSettings_C.Get Saved Key Inputs(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get All Key Actions(struct TArray<Unknown>& Key Actions); // Function BP_GameSettings.BP_GameSettings_C.Get All Key Actions(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Save File User Index(int32_t Save File User Index); // Function BP_GameSettings.BP_GameSettings_C.Set Save File User Index(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Save File Name(struct FString Save File Name); // Function BP_GameSettings.BP_GameSettings_C.Set Save File Name(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Game Settings Interface(struct TScriptInterface<IUnknown> Game Settings Interface); // Function BP_GameSettings.BP_GameSettings_C.Set Game Settings Interface(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get All Combinations(struct TArray<Unknown>& Combinations); // Function BP_GameSettings.BP_GameSettings_C.Get All Combinations(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Generate Keybinding Conflicts(); // Function BP_GameSettings.BP_GameSettings_C.Generate Keybinding Conflicts(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Keybindings(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Keybindings(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Load Key Actions(); // Function BP_GameSettings.BP_GameSettings_C.Load Key Actions(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Save Key Actions(); // Function BP_GameSettings.BP_GameSettings_C.Save Key Actions(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Store Key Input(struct Unknown& KeySave); // Function BP_GameSettings.BP_GameSettings_C.Store Key Input(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Key Action(struct FString Input Action Name, struct Unknown& Input Action, char& SUCCESS); // Function BP_GameSettings.BP_GameSettings_C.Get Key Action(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Fill Float Axis Inputs List(); // Function BP_GameSettings.BP_GameSettings_C.Fill Float Axis Inputs List(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Init Key Bindings(); // Function BP_GameSettings.BP_GameSettings_C.Init Key Bindings(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Update Actions Input State(float Real Time Seconds, float World Delta Seconds, struct Unknown PlayerController); // Function BP_GameSettings.BP_GameSettings_C.Update Actions Input State(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Delete Settings Save File(); // Function BP_GameSettings.BP_GameSettings_C.Delete Settings Save File(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Look Sensitivity Combined X(float Input Axis X, float World Delta, float& Horizontal X); // Function BP_GameSettings.BP_GameSettings_C.Get Look Sensitivity Combined X(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get My Custom Combobox(struct FString& Value); // Function BP_GameSettings.BP_GameSettings_C.Get My Custom Combobox(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set My Custom Combobox(struct FString Value, char Apply, struct FString& Result); // Function BP_GameSettings.BP_GameSettings_C.Set My Custom Combobox(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify My Custom Combobox(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify My Custom Combobox(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get My Custom Radiobox(int32_t& Value); // Function BP_GameSettings.BP_GameSettings_C.Get My Custom Radiobox(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set My Custom Radiobox(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set My Custom Radiobox(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify My Custom Radiobox(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify My Custom Radiobox(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get My Custom Slider(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get My Custom Slider(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set My Custom Slider(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set My Custom Slider(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify My Custom Slider(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify My Custom Slider(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get My Custom Checkbox(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get My Custom Checkbox(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set My Custom Checkbox(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.Set My Custom Checkbox(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify My Custom Checkbox(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify My Custom Checkbox(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify All MyCustom Settings(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify All MyCustom Settings(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Resolution Scale(int32_t& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Resolution Scale(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Resolution Scale(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Resolution Scale(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Resolution Scale(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Resolution Scale(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Prepeare Previus Settings State(); // Function BP_GameSettings.BP_GameSettings_C.Prepeare Previus Settings State(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Save All Settings(); // Function BP_GameSettings.BP_GameSettings_C.Save All Settings(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify All Settings(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify All Settings(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify All Audio Settings(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify All Audio Settings(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify All Look Settings(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify All Look Settings(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Look Sensitivity Combined Y(float Input Axis Y, float World Delta, float& Vertical Y); // Function BP_GameSettings.BP_GameSettings_C.Get Look Sensitivity Combined Y(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Volume Ambient(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Volume Ambient(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Audio Multiplier Ambient(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier Ambient(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Audio Multiplier Ambient(float Set Value, char Apply); // Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier Ambient(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Audio Multiplier Ambient(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier Ambient(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Volume Effect(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Volume Effect(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Audio Multiplier Effect(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier Effect(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Audio Multiplier Effect(float Set Value, char Apply); // Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier Effect(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Audio Multiplier Effect(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier Effect(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Volume Voice(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Volume Voice(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Audio Multiplier Voice(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier Voice(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Audio Multiplier Voice(float Set Value, char Apply); // Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier Voice(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Audio Multiplier Voice(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier Voice(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Volume Music(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Volume Music(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Audio Multiplier Music(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier Music(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Audio Multiplier Music(float Set Value, char Apply); // Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier Music(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Audio Multiplier Music(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier Music(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Volume Master(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Volume Master(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Add Volume Control(struct Unknown Audio Emittor, char Audio Channel); // Function BP_GameSettings.BP_GameSettings_C.Add Volume Control(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Apply Audio Settings(char Audio Channel, enum class Unknow Type); // Function BP_GameSettings.BP_GameSettings_C.Apply Audio Settings(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Audio Multiplier Master(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier Master(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Audio Multiplier Master(float Set Value, char Apply); // Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier Master(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Audio Multiplier Master(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier Master(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Look Vertical Invert(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Look Vertical Invert(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Look Vertical Invert(char Set Value); // Function BP_GameSettings.BP_GameSettings_C.Set Look Vertical Invert(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Look Vertical Invert(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Look Vertical Invert(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Look Horizontal Invert(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Look Horizontal Invert(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Look Horizontal Invert(char Set Value); // Function BP_GameSettings.BP_GameSettings_C.Set Look Horizontal Invert(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Look Horizontal Invert(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Look Horizontal Invert(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Look Vertical Sensitivity(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Look Vertical Sensitivity(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Look Vertical Sensitivity(float Set Value); // Function BP_GameSettings.BP_GameSettings_C.Set Look Vertical Sensitivity(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Look Vertical Sensitivity(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Look Vertical Sensitivity(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Look Horizontal Sensitivity(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Look Horizontal Sensitivity(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Look Horizontal Sensitivity(float Set Value); // Function BP_GameSettings.BP_GameSettings_C.Set Look Horizontal Sensitivity(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Look Horizontal Sensitivity(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Look Horizontal Sensitivity(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Apply Screen Settings(); // Function BP_GameSettings.BP_GameSettings_C.Apply Screen Settings(Private|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Screen Mode(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Screen Mode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Screen Mode(char& Screen Mode, struct FString& Command); // Function BP_GameSettings.BP_GameSettings_C.Get Screen Mode(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Screen Resolution(struct Unknown& Resolution); // Function BP_GameSettings.BP_GameSettings_C.Get Screen Resolution(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Screen Mode(char Screen Mode, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Screen Mode(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Screen Resolution(struct Unknown Resolution, char Apply, struct Unknown& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Screen Resolution(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Screen Resolution(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Screen Resolution(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Motion Blur Strength(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Motion Blur Strength(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Motion Blur Strength(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Motion Blur Strength(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Motion Blur Strength(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Motion Blur Strength(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Gain Intensity(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Gain Intensity(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Gain Intensity(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Gain Intensity(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Gain Intensity(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Gain Intensity(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Gamma Intensity(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Gamma Intensity(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Gamma Intensity(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Gamma Intensity(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Gamma Intensity(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Gamma Intensity(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Bloom Intensity(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Bloom Intensity(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Bloom Intensity(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Bloom Intensity(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Bloom Intensity(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Bloom Intensity(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Vsync(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Vsync(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Vsync(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Vsync(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Vsync(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Vsync(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Remove Field Of View Control From Camera(struct Unknown Camera); // Function BP_GameSettings.BP_GameSettings_C.Remove Field Of View Control From Camera(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Add Field Of View Control To Camera(struct Unknown Camera); // Function BP_GameSettings.BP_GameSettings_C.Add Field Of View Control To Camera(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Field Of View(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Field Of View(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Field Of View(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Field Of View(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Field Of View(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Field Of View(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get View Distance(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get View Distance(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set View Distance(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set View Distance(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify View Distance(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify View Distance(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Effect Quality(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get Effect Quality(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Effect Quality(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Effect Quality(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Effect Quality(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Effect Quality(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Texture Quality(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get Texture Quality(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Texture Quality(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Texture Quality(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Texture Quality(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Texture Quality(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Shadow Quality(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get Shadow Quality(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Shadow Quality(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Shadow Quality(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Shadow Quality(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Shadow Quality(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify All Video Settings(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify All Video Settings(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Anti Aliasing Quality(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get Anti Aliasing Quality(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Anti Aliasing Quality(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Anti Aliasing Quality(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Anti Aliasing Quality(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Anti Aliasing Quality(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Text Format Quality Level(int32_t Quality Level, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get Text Format Quality Level(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Get Post Process Quality(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get Post Process Quality(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Post Process Quality(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Post Process Quality(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Modify Post Process Quality(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Post Process Quality(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Update Audio Emittor(struct Unknown Emittor, char& Is Valid); // Function BP_GameSettings.BP_GameSettings_C.Update Audio Emittor(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Create Clone(struct Unknown& Cloned Game Settings); // Function BP_GameSettings.BP_GameSettings_C.Create Clone(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function BP_GameSettings.BP_GameSettings_C.SetAutoReloadSetting
inline void UBP_GameSettings_C::SetAutoReloadSetting(char Value, char Apply, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.SetAutoReloadSetting");

	struct SetAutoReloadSetting_Params {
		char Value;
		char Apply;
		char& Result;
	}; SetAutoReloadSetting_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.GetAutoReloadSetting
inline void UBP_GameSettings_C::GetAutoReloadSetting(char& autoReload) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.GetAutoReloadSetting");

	struct GetAutoReloadSetting_Params {
		char& autoReload;
	}; GetAutoReloadSetting_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	autoReload = Params.autoReload;

}

// Function BP_GameSettings.BP_GameSettings_C.ModifyAutoReloadSetting
inline void UBP_GameSettings_C::ModifyAutoReloadSetting(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.ModifyAutoReloadSetting");

	struct ModifyAutoReloadSetting_Params {
		char Modify;
	}; ModifyAutoReloadSetting_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Smooth Frame Rate
inline void UBP_GameSettings_C::Get Smooth Frame Rate(char& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Smooth Frame Rate");

	struct Get Smooth Frame Rate_Params {
		char& Value;
	}; Get Smooth Frame Rate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Smooth Frame Rate
inline void UBP_GameSettings_C::Set Smooth Frame Rate(char Value, char Apply, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Smooth Frame Rate");

	struct Set Smooth Frame Rate_Params {
		char Value;
		char Apply;
		char& Result;
	}; Set Smooth Frame Rate_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify Smooth Frame Rate
inline void UBP_GameSettings_C::Modify Smooth Frame Rate(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Smooth Frame Rate");

	struct Modify Smooth Frame Rate_Params {
		char Modify;
	}; Modify Smooth Frame Rate_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.ModifyScalabilityQuality
inline void UBP_GameSettings_C::ModifyScalabilityQuality(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.ModifyScalabilityQuality");

	struct ModifyScalabilityQuality_Params {
		char Modify;
	}; ModifyScalabilityQuality_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.GetScalabilityQuality
inline void UBP_GameSettings_C::GetScalabilityQuality(int32_t& Value, struct FString& Formatted) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.GetScalabilityQuality");

	struct GetScalabilityQuality_Params {
		int32_t& Value;
		struct FString& Formatted;
	}; GetScalabilityQuality_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	Formatted = Params.Formatted;

}

// Function BP_GameSettings.BP_GameSettings_C.SetScalabilityQuality
inline void UBP_GameSettings_C::SetScalabilityQuality(int32_t Value, int32_t& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.SetScalabilityQuality");

	struct SetScalabilityQuality_Params {
		int32_t Value;
		int32_t& Result;
	}; SetScalabilityQuality_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.GetViewDistanceQuality
inline void UBP_GameSettings_C::GetViewDistanceQuality(int32_t& Value, struct FString& Formatted) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.GetViewDistanceQuality");

	struct GetViewDistanceQuality_Params {
		int32_t& Value;
		struct FString& Formatted;
	}; GetViewDistanceQuality_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	Formatted = Params.Formatted;

}

// Function BP_GameSettings.BP_GameSettings_C.SetViewDistanceQuality
inline void UBP_GameSettings_C::SetViewDistanceQuality(int32_t Value, char Apply, int32_t& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.SetViewDistanceQuality");

	struct SetViewDistanceQuality_Params {
		int32_t Value;
		char Apply;
		int32_t& Result;
	}; SetViewDistanceQuality_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.ModifyViewDistanceQuality
inline void UBP_GameSettings_C::ModifyViewDistanceQuality(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.ModifyViewDistanceQuality");

	struct ModifyViewDistanceQuality_Params {
		char Modify;
	}; ModifyViewDistanceQuality_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Clear Fog
inline void UBP_GameSettings_C::Get Clear Fog(char& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Clear Fog");

	struct Get Clear Fog_Params {
		char& Value;
	}; Get Clear Fog_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Clear Fog
inline void UBP_GameSettings_C::Set Clear Fog(char Value, char Apply, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Clear Fog");

	struct Set Clear Fog_Params {
		char Value;
		char Apply;
		char& Result;
	}; Set Clear Fog_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify Clear Fog
inline void UBP_GameSettings_C::Modify Clear Fog(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Clear Fog");

	struct Modify Clear Fog_Params {
		char Modify;
	}; Modify Clear Fog_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get ColorGrading Global Gamma
inline void UBP_GameSettings_C::Get ColorGrading Global Gamma(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get ColorGrading Global Gamma");

	struct Get ColorGrading Global Gamma_Params {
		float& Value;
	}; Get ColorGrading Global Gamma_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set ColorGrading Global Gamma
inline void UBP_GameSettings_C::Set ColorGrading Global Gamma(float Value, char Apply, float& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set ColorGrading Global Gamma");

	struct Set ColorGrading Global Gamma_Params {
		float Value;
		char Apply;
		float& Result;
	}; Set ColorGrading Global Gamma_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify ColorGrading Global Gamma
inline void UBP_GameSettings_C::Modify ColorGrading Global Gamma(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify ColorGrading Global Gamma");

	struct Modify ColorGrading Global Gamma_Params {
		char Modify;
	}; Modify ColorGrading Global Gamma_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Film Toe Intensity
inline void UBP_GameSettings_C::Get Film Toe Intensity(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Film Toe Intensity");

	struct Get Film Toe Intensity_Params {
		float& Value;
	}; Get Film Toe Intensity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Get Film Toe
inline void UBP_GameSettings_C::Get Film Toe(char& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Film Toe");

	struct Get Film Toe_Params {
		char& Value;
	}; Get Film Toe_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Film Toe
inline void UBP_GameSettings_C::Set Film Toe(char Value, char Apply, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Film Toe");

	struct Set Film Toe_Params {
		char Value;
		char Apply;
		char& Result;
	}; Set Film Toe_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify Film Toe
inline void UBP_GameSettings_C::Modify Film Toe(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Film Toe");

	struct Modify Film Toe_Params {
		char Modify;
	}; Modify Film Toe_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify All Game Settings
inline void UBP_GameSettings_C::Modify All Game Settings(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify All Game Settings");

	struct Modify All Game Settings_Params {
		char Modify;
	}; Modify All Game Settings_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.SetFireModeSetting
inline void UBP_GameSettings_C::SetFireModeSetting(enum class Unknow WeaponType, enum class Unknow NewWeaponFireMode, char Apply, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.SetFireModeSetting");

	struct SetFireModeSetting_Params {
		enum class Unknow WeaponType;
		enum class Unknow NewWeaponFireMode;
		char Apply;
		char& Result;
	}; SetFireModeSetting_Params Params;

	Params.WeaponType = WeaponType;
	Params.NewWeaponFireMode = NewWeaponFireMode;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.GetFireModeSetting
inline void UBP_GameSettings_C::GetFireModeSetting(struct TMap<Unknown, Unknown>& FireModeSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.GetFireModeSetting");

	struct GetFireModeSetting_Params {
		struct TMap<Unknown;
		Unknown>& FireModeSettings;
	}; GetFireModeSetting_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	FireModeSettings = Params.FireModeSettings;

}

// Function BP_GameSettings.BP_GameSettings_C.ModifyFireModeSetting
inline void UBP_GameSettings_C::ModifyFireModeSetting(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.ModifyFireModeSetting");

	struct ModifyFireModeSetting_Params {
		char Modify;
	}; ModifyFireModeSetting_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Post Process Volume
inline void UBP_GameSettings_C::Get Post Process Volume(char& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Post Process Volume");

	struct Get Post Process Volume_Params {
		char& Value;
	}; Get Post Process Volume_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Post Process Volume
inline void UBP_GameSettings_C::Set Post Process Volume(char Value, char Apply, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Post Process Volume");

	struct Set Post Process Volume_Params {
		char Value;
		char Apply;
		char& Result;
	}; Set Post Process Volume_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify Post Process Volume
inline void UBP_GameSettings_C::Modify Post Process Volume(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Post Process Volume");

	struct Modify Post Process Volume_Params {
		char Modify;
	}; Modify Post Process Volume_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.GetContrast
inline void UBP_GameSettings_C::GetContrast(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.GetContrast");

	struct GetContrast_Params {
		float& Value;
	}; GetContrast_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.SetContrast
inline void UBP_GameSettings_C::SetContrast(float Value, char Apply, float& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.SetContrast");

	struct SetContrast_Params {
		float Value;
		char Apply;
		float& Result;
	}; SetContrast_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.ModifyContrast
inline void UBP_GameSettings_C::ModifyContrast(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.ModifyContrast");

	struct ModifyContrast_Params {
		char Modify;
	}; ModifyContrast_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.GetMaxBrightness
inline void UBP_GameSettings_C::GetMaxBrightness(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.GetMaxBrightness");

	struct GetMaxBrightness_Params {
		float& Value;
	}; GetMaxBrightness_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.SetMaxBrightness
inline void UBP_GameSettings_C::SetMaxBrightness(float Value, char Apply, float& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.SetMaxBrightness");

	struct SetMaxBrightness_Params {
		float Value;
		char Apply;
		float& Result;
	}; SetMaxBrightness_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.ModifyMaxBrightness
inline void UBP_GameSettings_C::ModifyMaxBrightness(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.ModifyMaxBrightness");

	struct ModifyMaxBrightness_Params {
		char Modify;
	}; ModifyMaxBrightness_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.GetMinBrightness
inline void UBP_GameSettings_C::GetMinBrightness(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.GetMinBrightness");

	struct GetMinBrightness_Params {
		float& Value;
	}; GetMinBrightness_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.SetMinBrightness
inline void UBP_GameSettings_C::SetMinBrightness(float Value, char Apply, float& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.SetMinBrightness");

	struct SetMinBrightness_Params {
		float Value;
		char Apply;
		float& Result;
	}; SetMinBrightness_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.ModifyMinBrightness
inline void UBP_GameSettings_C::ModifyMinBrightness(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.ModifyMinBrightness");

	struct ModifyMinBrightness_Params {
		char Modify;
	}; ModifyMinBrightness_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAACurrentFrameWeight
inline void UBP_GameSettings_C::ModifyTemporalAACurrentFrameWeight(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAACurrentFrameWeight");

	struct ModifyTemporalAACurrentFrameWeight_Params {
		char Modify;
	}; ModifyTemporalAACurrentFrameWeight_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.GetTemporalAACurrentFrameWeight
inline void UBP_GameSettings_C::GetTemporalAACurrentFrameWeight(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.GetTemporalAACurrentFrameWeight");

	struct GetTemporalAACurrentFrameWeight_Params {
		float& Value;
	}; GetTemporalAACurrentFrameWeight_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.SetTemporalAACurrentFrameWeight
inline void UBP_GameSettings_C::SetTemporalAACurrentFrameWeight(float Value, char Apply, float& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.SetTemporalAACurrentFrameWeight");

	struct SetTemporalAACurrentFrameWeight_Params {
		float Value;
		char Apply;
		float& Result;
	}; SetTemporalAACurrentFrameWeight_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.GetTonemapperSharpen
inline void UBP_GameSettings_C::GetTonemapperSharpen(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.GetTonemapperSharpen");

	struct GetTonemapperSharpen_Params {
		float& Value;
	}; GetTonemapperSharpen_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.GetTemporalAASamples
inline void UBP_GameSettings_C::GetTemporalAASamples(int32_t& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.GetTemporalAASamples");

	struct GetTemporalAASamples_Params {
		int32_t& Value;
	}; GetTemporalAASamples_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.GetTemporalAAPauseCorrect
inline void UBP_GameSettings_C::GetTemporalAAPauseCorrect(char& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.GetTemporalAAPauseCorrect");

	struct GetTemporalAAPauseCorrect_Params {
		char& Value;
	}; GetTemporalAAPauseCorrect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.GetTemporalAACatmullRom
inline void UBP_GameSettings_C::GetTemporalAACatmullRom(char& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.GetTemporalAACatmullRom");

	struct GetTemporalAACatmullRom_Params {
		char& Value;
	}; GetTemporalAACatmullRom_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.SetTonemapperSharpen
inline void UBP_GameSettings_C::SetTonemapperSharpen(float Value, char Apply, float& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.SetTonemapperSharpen");

	struct SetTonemapperSharpen_Params {
		float Value;
		char Apply;
		float& Result;
	}; SetTonemapperSharpen_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.SetTemporalAASamples
inline void UBP_GameSettings_C::SetTemporalAASamples(int32_t Value, char Apply, int32_t& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.SetTemporalAASamples");

	struct SetTemporalAASamples_Params {
		int32_t Value;
		char Apply;
		int32_t& Result;
	}; SetTemporalAASamples_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.SetTemporalAAPauseCorrect
inline void UBP_GameSettings_C::SetTemporalAAPauseCorrect(char Value, char Apply, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.SetTemporalAAPauseCorrect");

	struct SetTemporalAAPauseCorrect_Params {
		char Value;
		char Apply;
		char& Result;
	}; SetTemporalAAPauseCorrect_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.SetTemporalAACatmullRom
inline void UBP_GameSettings_C::SetTemporalAACatmullRom(char Value, char Apply, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.SetTemporalAACatmullRom");

	struct SetTemporalAACatmullRom_Params {
		char Value;
		char Apply;
		char& Result;
	}; SetTemporalAACatmullRom_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.ModifyTonemapperSharpen
inline void UBP_GameSettings_C::ModifyTonemapperSharpen(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.ModifyTonemapperSharpen");

	struct ModifyTonemapperSharpen_Params {
		char Modify;
	}; ModifyTonemapperSharpen_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAASamples
inline void UBP_GameSettings_C::ModifyTemporalAASamples(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAASamples");

	struct ModifyTemporalAASamples_Params {
		char Modify;
	}; ModifyTemporalAASamples_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAAPauseCorrect
inline void UBP_GameSettings_C::ModifyTemporalAAPauseCorrect(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAAPauseCorrect");

	struct ModifyTemporalAAPauseCorrect_Params {
		char Modify;
	}; ModifyTemporalAAPauseCorrect_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAACatmullRom
inline void UBP_GameSettings_C::ModifyTemporalAACatmullRom(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAACatmullRom");

	struct ModifyTemporalAACatmullRom_Params {
		char Modify;
	}; ModifyTemporalAACatmullRom_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAAFilterSize
inline void UBP_GameSettings_C::ModifyTemporalAAFilterSize(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAAFilterSize");

	struct ModifyTemporalAAFilterSize_Params {
		char Modify;
	}; ModifyTemporalAAFilterSize_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.GetTemporalAAFilterSize
inline void UBP_GameSettings_C::GetTemporalAAFilterSize(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.GetTemporalAAFilterSize");

	struct GetTemporalAAFilterSize_Params {
		float& Value;
	}; GetTemporalAAFilterSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.SetTemporalAAFilterSize
inline void UBP_GameSettings_C::SetTemporalAAFilterSize(float Value, char Apply, float& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.SetTemporalAAFilterSize");

	struct SetTemporalAAFilterSize_Params {
		float Value;
		char Apply;
		float& Result;
	}; SetTemporalAAFilterSize_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.GetSensitivityValue
inline void UBP_GameSettings_C::GetSensitivityValue(enum class Unknow MouseSensitivityType, int32_t& Sensitivity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.GetSensitivityValue");

	struct GetSensitivityValue_Params {
		enum class Unknow MouseSensitivityType;
		int32_t& Sensitivity;
	}; GetSensitivityValue_Params Params;

	Params.MouseSensitivityType = MouseSensitivityType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Sensitivity = Params.Sensitivity;

}

// Function BP_GameSettings.BP_GameSettings_C.SetSensitivityValue
inline void UBP_GameSettings_C::SetSensitivityValue(enum class Unknow MouseSensitivityType, int32_t Sensitivity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.SetSensitivityValue");

	struct SetSensitivityValue_Params {
		enum class Unknow MouseSensitivityType;
		int32_t Sensitivity;
	}; SetSensitivityValue_Params Params;

	Params.MouseSensitivityType = MouseSensitivityType;
	Params.Sensitivity = Sensitivity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Foliage Quality
inline void UBP_GameSettings_C::Get Foliage Quality(int32_t& Value, struct FString& Formatted) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Foliage Quality");

	struct Get Foliage Quality_Params {
		int32_t& Value;
		struct FString& Formatted;
	}; Get Foliage Quality_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	Formatted = Params.Formatted;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Foliage Quality
inline void UBP_GameSettings_C::Set Foliage Quality(int32_t Value, char Apply, int32_t& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Foliage Quality");

	struct Set Foliage Quality_Params {
		int32_t Value;
		char Apply;
		int32_t& Result;
	}; Set Foliage Quality_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify Foliage Quality
inline void UBP_GameSettings_C::Modify Foliage Quality(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Foliage Quality");

	struct Modify Foliage Quality_Params {
		char Modify;
	}; Modify Foliage Quality_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Volume UI
inline void UBP_GameSettings_C::Get Volume UI(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Volume UI");

	struct Get Volume UI_Params {
		float& Value;
	}; Get Volume UI_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier UI
inline void UBP_GameSettings_C::Get Audio Multiplier UI(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier UI");

	struct Get Audio Multiplier UI_Params {
		float& Value;
	}; Get Audio Multiplier UI_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier UI
inline void UBP_GameSettings_C::Set Audio Multiplier UI(float Set Value, char Apply) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier UI");

	struct Set Audio Multiplier UI_Params {
		float Set Value;
		char Apply;
	}; Set Audio Multiplier UI_Params Params;

	Params.Set Value = Set Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier UI
inline void UBP_GameSettings_C::Modify Audio Multiplier UI(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier UI");

	struct Modify Audio Multiplier UI_Params {
		char Modify;
	}; Modify Audio Multiplier UI_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Save Ini Settings
inline void UBP_GameSettings_C::Save Ini Settings() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Save Ini Settings");

	struct Save Ini Settings_Params {
		
	}; Save Ini Settings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Load ini Settings
inline void UBP_GameSettings_C::Load ini Settings() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Load ini Settings");

	struct Load ini Settings_Params {
		
	}; Load ini Settings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Init Save Game Settings
inline void UBP_GameSettings_C::Init Save Game Settings(struct TScriptInterface<IUnknown> Game Settings Interface) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Init Save Game Settings");

	struct Init Save Game Settings_Params {
		struct TScriptInterface<IUnknown> Game Settings Interface;
	}; Init Save Game Settings_Params Params;

	Params.Game Settings Interface = Game Settings Interface;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Saved Key Inputs
inline void UBP_GameSettings_C::Get Saved Key Inputs(struct TArray<Unknown>& Saved Key Inputs) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Saved Key Inputs");

	struct Get Saved Key Inputs_Params {
		struct TArray<Unknown>& Saved Key Inputs;
	}; Get Saved Key Inputs_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Saved Key Inputs = Params.Saved Key Inputs;

}

// Function BP_GameSettings.BP_GameSettings_C.Get All Key Actions
inline void UBP_GameSettings_C::Get All Key Actions(struct TArray<Unknown>& Key Actions) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get All Key Actions");

	struct Get All Key Actions_Params {
		struct TArray<Unknown>& Key Actions;
	}; Get All Key Actions_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Key Actions = Params.Key Actions;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Save File User Index
inline void UBP_GameSettings_C::Set Save File User Index(int32_t Save File User Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Save File User Index");

	struct Set Save File User Index_Params {
		int32_t Save File User Index;
	}; Set Save File User Index_Params Params;

	Params.Save File User Index = Save File User Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Set Save File Name
inline void UBP_GameSettings_C::Set Save File Name(struct FString Save File Name) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Save File Name");

	struct Set Save File Name_Params {
		struct FString Save File Name;
	}; Set Save File Name_Params Params;

	Params.Save File Name = Save File Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Set Game Settings Interface
inline void UBP_GameSettings_C::Set Game Settings Interface(struct TScriptInterface<IUnknown> Game Settings Interface) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Game Settings Interface");

	struct Set Game Settings Interface_Params {
		struct TScriptInterface<IUnknown> Game Settings Interface;
	}; Set Game Settings Interface_Params Params;

	Params.Game Settings Interface = Game Settings Interface;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get All Combinations
inline void UBP_GameSettings_C::Get All Combinations(struct TArray<Unknown>& Combinations) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get All Combinations");

	struct Get All Combinations_Params {
		struct TArray<Unknown>& Combinations;
	}; Get All Combinations_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Combinations = Params.Combinations;

}

// Function BP_GameSettings.BP_GameSettings_C.Generate Keybinding Conflicts
inline void UBP_GameSettings_C::Generate Keybinding Conflicts() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Generate Keybinding Conflicts");

	struct Generate Keybinding Conflicts_Params {
		
	}; Generate Keybinding Conflicts_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify Keybindings
inline void UBP_GameSettings_C::Modify Keybindings(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Keybindings");

	struct Modify Keybindings_Params {
		char Modify;
	}; Modify Keybindings_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Load Key Actions
inline void UBP_GameSettings_C::Load Key Actions() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Load Key Actions");

	struct Load Key Actions_Params {
		
	}; Load Key Actions_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Save Key Actions
inline void UBP_GameSettings_C::Save Key Actions() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Save Key Actions");

	struct Save Key Actions_Params {
		
	}; Save Key Actions_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Store Key Input
inline void UBP_GameSettings_C::Store Key Input(struct Unknown& KeySave) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Store Key Input");

	struct Store Key Input_Params {
		struct Unknown& KeySave;
	}; Store Key Input_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeySave = Params.KeySave;

}

// Function BP_GameSettings.BP_GameSettings_C.Get Key Action
inline void UBP_GameSettings_C::Get Key Action(struct FString Input Action Name, struct Unknown& Input Action, char& SUCCESS) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Key Action");

	struct Get Key Action_Params {
		struct FString Input Action Name;
		struct Unknown& Input Action;
		char& SUCCESS;
	}; Get Key Action_Params Params;

	Params.Input Action Name = Input Action Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Input Action = Params.Input Action;
	SUCCESS = Params.SUCCESS;

}

// Function BP_GameSettings.BP_GameSettings_C.Fill Float Axis Inputs List
inline void UBP_GameSettings_C::Fill Float Axis Inputs List() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Fill Float Axis Inputs List");

	struct Fill Float Axis Inputs List_Params {
		
	}; Fill Float Axis Inputs List_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Init Key Bindings
inline void UBP_GameSettings_C::Init Key Bindings() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Init Key Bindings");

	struct Init Key Bindings_Params {
		
	}; Init Key Bindings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Update Actions Input State
inline void UBP_GameSettings_C::Update Actions Input State(float Real Time Seconds, float World Delta Seconds, struct Unknown PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Update Actions Input State");

	struct Update Actions Input State_Params {
		float Real Time Seconds;
		float World Delta Seconds;
		struct Unknown PlayerController;
	}; Update Actions Input State_Params Params;

	Params.Real Time Seconds = Real Time Seconds;
	Params.World Delta Seconds = World Delta Seconds;
	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Delete Settings Save File
inline void UBP_GameSettings_C::Delete Settings Save File() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Delete Settings Save File");

	struct Delete Settings Save File_Params {
		
	}; Delete Settings Save File_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Look Sensitivity Combined X
inline void UBP_GameSettings_C::Get Look Sensitivity Combined X(float Input Axis X, float World Delta, float& Horizontal X) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Look Sensitivity Combined X");

	struct Get Look Sensitivity Combined X_Params {
		float Input Axis X;
		float World Delta;
		float& Horizontal X;
	}; Get Look Sensitivity Combined X_Params Params;

	Params.Input Axis X = Input Axis X;
	Params.World Delta = World Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Horizontal X = Params.Horizontal X;

}

// Function BP_GameSettings.BP_GameSettings_C.Get My Custom Combobox
inline void UBP_GameSettings_C::Get My Custom Combobox(struct FString& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get My Custom Combobox");

	struct Get My Custom Combobox_Params {
		struct FString& Value;
	}; Get My Custom Combobox_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set My Custom Combobox
inline void UBP_GameSettings_C::Set My Custom Combobox(struct FString Value, char Apply, struct FString& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set My Custom Combobox");

	struct Set My Custom Combobox_Params {
		struct FString Value;
		char Apply;
		struct FString& Result;
	}; Set My Custom Combobox_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify My Custom Combobox
inline void UBP_GameSettings_C::Modify My Custom Combobox(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify My Custom Combobox");

	struct Modify My Custom Combobox_Params {
		char Modify;
	}; Modify My Custom Combobox_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get My Custom Radiobox
inline void UBP_GameSettings_C::Get My Custom Radiobox(int32_t& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get My Custom Radiobox");

	struct Get My Custom Radiobox_Params {
		int32_t& Value;
	}; Get My Custom Radiobox_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set My Custom Radiobox
inline void UBP_GameSettings_C::Set My Custom Radiobox(int32_t Value, char Apply, int32_t& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set My Custom Radiobox");

	struct Set My Custom Radiobox_Params {
		int32_t Value;
		char Apply;
		int32_t& Result;
	}; Set My Custom Radiobox_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify My Custom Radiobox
inline void UBP_GameSettings_C::Modify My Custom Radiobox(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify My Custom Radiobox");

	struct Modify My Custom Radiobox_Params {
		char Modify;
	}; Modify My Custom Radiobox_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get My Custom Slider
inline void UBP_GameSettings_C::Get My Custom Slider(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get My Custom Slider");

	struct Get My Custom Slider_Params {
		float& Value;
	}; Get My Custom Slider_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set My Custom Slider
inline void UBP_GameSettings_C::Set My Custom Slider(float Value, char Apply, float& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set My Custom Slider");

	struct Set My Custom Slider_Params {
		float Value;
		char Apply;
		float& Result;
	}; Set My Custom Slider_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify My Custom Slider
inline void UBP_GameSettings_C::Modify My Custom Slider(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify My Custom Slider");

	struct Modify My Custom Slider_Params {
		char Modify;
	}; Modify My Custom Slider_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get My Custom Checkbox
inline void UBP_GameSettings_C::Get My Custom Checkbox(char& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get My Custom Checkbox");

	struct Get My Custom Checkbox_Params {
		char& Value;
	}; Get My Custom Checkbox_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set My Custom Checkbox
inline void UBP_GameSettings_C::Set My Custom Checkbox(char Value, char Apply, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set My Custom Checkbox");

	struct Set My Custom Checkbox_Params {
		char Value;
		char Apply;
		char& Result;
	}; Set My Custom Checkbox_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify My Custom Checkbox
inline void UBP_GameSettings_C::Modify My Custom Checkbox(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify My Custom Checkbox");

	struct Modify My Custom Checkbox_Params {
		char Modify;
	}; Modify My Custom Checkbox_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify All MyCustom Settings
inline void UBP_GameSettings_C::Modify All MyCustom Settings(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify All MyCustom Settings");

	struct Modify All MyCustom Settings_Params {
		char Modify;
	}; Modify All MyCustom Settings_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Resolution Scale
inline void UBP_GameSettings_C::Get Resolution Scale(int32_t& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Resolution Scale");

	struct Get Resolution Scale_Params {
		int32_t& Value;
	}; Get Resolution Scale_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Resolution Scale
inline void UBP_GameSettings_C::Set Resolution Scale(int32_t Value, char Apply, int32_t& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Resolution Scale");

	struct Set Resolution Scale_Params {
		int32_t Value;
		char Apply;
		int32_t& Result;
	}; Set Resolution Scale_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify Resolution Scale
inline void UBP_GameSettings_C::Modify Resolution Scale(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Resolution Scale");

	struct Modify Resolution Scale_Params {
		char Modify;
	}; Modify Resolution Scale_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Prepeare Previus Settings State
inline void UBP_GameSettings_C::Prepeare Previus Settings State() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Prepeare Previus Settings State");

	struct Prepeare Previus Settings State_Params {
		
	}; Prepeare Previus Settings State_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Save All Settings
inline void UBP_GameSettings_C::Save All Settings() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Save All Settings");

	struct Save All Settings_Params {
		
	}; Save All Settings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify All Settings
inline void UBP_GameSettings_C::Modify All Settings(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify All Settings");

	struct Modify All Settings_Params {
		char Modify;
	}; Modify All Settings_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify All Audio Settings
inline void UBP_GameSettings_C::Modify All Audio Settings(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify All Audio Settings");

	struct Modify All Audio Settings_Params {
		char Modify;
	}; Modify All Audio Settings_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify All Look Settings
inline void UBP_GameSettings_C::Modify All Look Settings(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify All Look Settings");

	struct Modify All Look Settings_Params {
		char Modify;
	}; Modify All Look Settings_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Look Sensitivity Combined Y
inline void UBP_GameSettings_C::Get Look Sensitivity Combined Y(float Input Axis Y, float World Delta, float& Vertical Y) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Look Sensitivity Combined Y");

	struct Get Look Sensitivity Combined Y_Params {
		float Input Axis Y;
		float World Delta;
		float& Vertical Y;
	}; Get Look Sensitivity Combined Y_Params Params;

	Params.Input Axis Y = Input Axis Y;
	Params.World Delta = World Delta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Vertical Y = Params.Vertical Y;

}

// Function BP_GameSettings.BP_GameSettings_C.Get Volume Ambient
inline void UBP_GameSettings_C::Get Volume Ambient(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Volume Ambient");

	struct Get Volume Ambient_Params {
		float& Value;
	}; Get Volume Ambient_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier Ambient
inline void UBP_GameSettings_C::Get Audio Multiplier Ambient(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier Ambient");

	struct Get Audio Multiplier Ambient_Params {
		float& Value;
	}; Get Audio Multiplier Ambient_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier Ambient
inline void UBP_GameSettings_C::Set Audio Multiplier Ambient(float Set Value, char Apply) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier Ambient");

	struct Set Audio Multiplier Ambient_Params {
		float Set Value;
		char Apply;
	}; Set Audio Multiplier Ambient_Params Params;

	Params.Set Value = Set Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier Ambient
inline void UBP_GameSettings_C::Modify Audio Multiplier Ambient(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier Ambient");

	struct Modify Audio Multiplier Ambient_Params {
		char Modify;
	}; Modify Audio Multiplier Ambient_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Volume Effect
inline void UBP_GameSettings_C::Get Volume Effect(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Volume Effect");

	struct Get Volume Effect_Params {
		float& Value;
	}; Get Volume Effect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier Effect
inline void UBP_GameSettings_C::Get Audio Multiplier Effect(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier Effect");

	struct Get Audio Multiplier Effect_Params {
		float& Value;
	}; Get Audio Multiplier Effect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier Effect
inline void UBP_GameSettings_C::Set Audio Multiplier Effect(float Set Value, char Apply) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier Effect");

	struct Set Audio Multiplier Effect_Params {
		float Set Value;
		char Apply;
	}; Set Audio Multiplier Effect_Params Params;

	Params.Set Value = Set Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier Effect
inline void UBP_GameSettings_C::Modify Audio Multiplier Effect(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier Effect");

	struct Modify Audio Multiplier Effect_Params {
		char Modify;
	}; Modify Audio Multiplier Effect_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Volume Voice
inline void UBP_GameSettings_C::Get Volume Voice(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Volume Voice");

	struct Get Volume Voice_Params {
		float& Value;
	}; Get Volume Voice_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier Voice
inline void UBP_GameSettings_C::Get Audio Multiplier Voice(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier Voice");

	struct Get Audio Multiplier Voice_Params {
		float& Value;
	}; Get Audio Multiplier Voice_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier Voice
inline void UBP_GameSettings_C::Set Audio Multiplier Voice(float Set Value, char Apply) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier Voice");

	struct Set Audio Multiplier Voice_Params {
		float Set Value;
		char Apply;
	}; Set Audio Multiplier Voice_Params Params;

	Params.Set Value = Set Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier Voice
inline void UBP_GameSettings_C::Modify Audio Multiplier Voice(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier Voice");

	struct Modify Audio Multiplier Voice_Params {
		char Modify;
	}; Modify Audio Multiplier Voice_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Volume Music
inline void UBP_GameSettings_C::Get Volume Music(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Volume Music");

	struct Get Volume Music_Params {
		float& Value;
	}; Get Volume Music_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier Music
inline void UBP_GameSettings_C::Get Audio Multiplier Music(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier Music");

	struct Get Audio Multiplier Music_Params {
		float& Value;
	}; Get Audio Multiplier Music_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier Music
inline void UBP_GameSettings_C::Set Audio Multiplier Music(float Set Value, char Apply) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier Music");

	struct Set Audio Multiplier Music_Params {
		float Set Value;
		char Apply;
	}; Set Audio Multiplier Music_Params Params;

	Params.Set Value = Set Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier Music
inline void UBP_GameSettings_C::Modify Audio Multiplier Music(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier Music");

	struct Modify Audio Multiplier Music_Params {
		char Modify;
	}; Modify Audio Multiplier Music_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Volume Master
inline void UBP_GameSettings_C::Get Volume Master(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Volume Master");

	struct Get Volume Master_Params {
		float& Value;
	}; Get Volume Master_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Add Volume Control
inline void UBP_GameSettings_C::Add Volume Control(struct Unknown Audio Emittor, char Audio Channel) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Add Volume Control");

	struct Add Volume Control_Params {
		struct Unknown Audio Emittor;
		char Audio Channel;
	}; Add Volume Control_Params Params;

	Params.Audio Emittor = Audio Emittor;
	Params.Audio Channel = Audio Channel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Apply Audio Settings
inline void UBP_GameSettings_C::Apply Audio Settings(char Audio Channel, enum class Unknow Type) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Apply Audio Settings");

	struct Apply Audio Settings_Params {
		char Audio Channel;
		enum class Unknow Type;
	}; Apply Audio Settings_Params Params;

	Params.Audio Channel = Audio Channel;
	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier Master
inline void UBP_GameSettings_C::Get Audio Multiplier Master(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier Master");

	struct Get Audio Multiplier Master_Params {
		float& Value;
	}; Get Audio Multiplier Master_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier Master
inline void UBP_GameSettings_C::Set Audio Multiplier Master(float Set Value, char Apply) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier Master");

	struct Set Audio Multiplier Master_Params {
		float Set Value;
		char Apply;
	}; Set Audio Multiplier Master_Params Params;

	Params.Set Value = Set Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier Master
inline void UBP_GameSettings_C::Modify Audio Multiplier Master(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier Master");

	struct Modify Audio Multiplier Master_Params {
		char Modify;
	}; Modify Audio Multiplier Master_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Look Vertical Invert
inline void UBP_GameSettings_C::Get Look Vertical Invert(char& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Look Vertical Invert");

	struct Get Look Vertical Invert_Params {
		char& Value;
	}; Get Look Vertical Invert_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Look Vertical Invert
inline void UBP_GameSettings_C::Set Look Vertical Invert(char Set Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Look Vertical Invert");

	struct Set Look Vertical Invert_Params {
		char Set Value;
	}; Set Look Vertical Invert_Params Params;

	Params.Set Value = Set Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify Look Vertical Invert
inline void UBP_GameSettings_C::Modify Look Vertical Invert(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Look Vertical Invert");

	struct Modify Look Vertical Invert_Params {
		char Modify;
	}; Modify Look Vertical Invert_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Look Horizontal Invert
inline void UBP_GameSettings_C::Get Look Horizontal Invert(char& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Look Horizontal Invert");

	struct Get Look Horizontal Invert_Params {
		char& Value;
	}; Get Look Horizontal Invert_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Look Horizontal Invert
inline void UBP_GameSettings_C::Set Look Horizontal Invert(char Set Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Look Horizontal Invert");

	struct Set Look Horizontal Invert_Params {
		char Set Value;
	}; Set Look Horizontal Invert_Params Params;

	Params.Set Value = Set Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify Look Horizontal Invert
inline void UBP_GameSettings_C::Modify Look Horizontal Invert(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Look Horizontal Invert");

	struct Modify Look Horizontal Invert_Params {
		char Modify;
	}; Modify Look Horizontal Invert_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Look Vertical Sensitivity
inline void UBP_GameSettings_C::Get Look Vertical Sensitivity(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Look Vertical Sensitivity");

	struct Get Look Vertical Sensitivity_Params {
		float& Value;
	}; Get Look Vertical Sensitivity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Look Vertical Sensitivity
inline void UBP_GameSettings_C::Set Look Vertical Sensitivity(float Set Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Look Vertical Sensitivity");

	struct Set Look Vertical Sensitivity_Params {
		float Set Value;
	}; Set Look Vertical Sensitivity_Params Params;

	Params.Set Value = Set Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify Look Vertical Sensitivity
inline void UBP_GameSettings_C::Modify Look Vertical Sensitivity(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Look Vertical Sensitivity");

	struct Modify Look Vertical Sensitivity_Params {
		char Modify;
	}; Modify Look Vertical Sensitivity_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Look Horizontal Sensitivity
inline void UBP_GameSettings_C::Get Look Horizontal Sensitivity(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Look Horizontal Sensitivity");

	struct Get Look Horizontal Sensitivity_Params {
		float& Value;
	}; Get Look Horizontal Sensitivity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Look Horizontal Sensitivity
inline void UBP_GameSettings_C::Set Look Horizontal Sensitivity(float Set Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Look Horizontal Sensitivity");

	struct Set Look Horizontal Sensitivity_Params {
		float Set Value;
	}; Set Look Horizontal Sensitivity_Params Params;

	Params.Set Value = Set Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify Look Horizontal Sensitivity
inline void UBP_GameSettings_C::Modify Look Horizontal Sensitivity(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Look Horizontal Sensitivity");

	struct Modify Look Horizontal Sensitivity_Params {
		char Modify;
	}; Modify Look Horizontal Sensitivity_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Apply Screen Settings
inline void UBP_GameSettings_C::Apply Screen Settings() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Apply Screen Settings");

	struct Apply Screen Settings_Params {
		
	}; Apply Screen Settings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify Screen Mode
inline void UBP_GameSettings_C::Modify Screen Mode(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Screen Mode");

	struct Modify Screen Mode_Params {
		char Modify;
	}; Modify Screen Mode_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Screen Mode
inline void UBP_GameSettings_C::Get Screen Mode(char& Screen Mode, struct FString& Command) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Screen Mode");

	struct Get Screen Mode_Params {
		char& Screen Mode;
		struct FString& Command;
	}; Get Screen Mode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Screen Mode = Params.Screen Mode;
	Command = Params.Command;

}

// Function BP_GameSettings.BP_GameSettings_C.Get Screen Resolution
inline void UBP_GameSettings_C::Get Screen Resolution(struct Unknown& Resolution) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Screen Resolution");

	struct Get Screen Resolution_Params {
		struct Unknown& Resolution;
	}; Get Screen Resolution_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Resolution = Params.Resolution;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Screen Mode
inline void UBP_GameSettings_C::Set Screen Mode(char Screen Mode, char Apply, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Screen Mode");

	struct Set Screen Mode_Params {
		char Screen Mode;
		char Apply;
		char& Result;
	}; Set Screen Mode_Params Params;

	Params.Screen Mode = Screen Mode;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Screen Resolution
inline void UBP_GameSettings_C::Set Screen Resolution(struct Unknown Resolution, char Apply, struct Unknown& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Screen Resolution");

	struct Set Screen Resolution_Params {
		struct Unknown Resolution;
		char Apply;
		struct Unknown& Result;
	}; Set Screen Resolution_Params Params;

	Params.Resolution = Resolution;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify Screen Resolution
inline void UBP_GameSettings_C::Modify Screen Resolution(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Screen Resolution");

	struct Modify Screen Resolution_Params {
		char Modify;
	}; Modify Screen Resolution_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Motion Blur Strength
inline void UBP_GameSettings_C::Get Motion Blur Strength(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Motion Blur Strength");

	struct Get Motion Blur Strength_Params {
		float& Value;
	}; Get Motion Blur Strength_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Motion Blur Strength
inline void UBP_GameSettings_C::Set Motion Blur Strength(float Value, char Apply, float& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Motion Blur Strength");

	struct Set Motion Blur Strength_Params {
		float Value;
		char Apply;
		float& Result;
	}; Set Motion Blur Strength_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify Motion Blur Strength
inline void UBP_GameSettings_C::Modify Motion Blur Strength(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Motion Blur Strength");

	struct Modify Motion Blur Strength_Params {
		char Modify;
	}; Modify Motion Blur Strength_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Gain Intensity
inline void UBP_GameSettings_C::Get Gain Intensity(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Gain Intensity");

	struct Get Gain Intensity_Params {
		float& Value;
	}; Get Gain Intensity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Gain Intensity
inline void UBP_GameSettings_C::Set Gain Intensity(float Value, char Apply, float& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Gain Intensity");

	struct Set Gain Intensity_Params {
		float Value;
		char Apply;
		float& Result;
	}; Set Gain Intensity_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify Gain Intensity
inline void UBP_GameSettings_C::Modify Gain Intensity(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Gain Intensity");

	struct Modify Gain Intensity_Params {
		char Modify;
	}; Modify Gain Intensity_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Gamma Intensity
inline void UBP_GameSettings_C::Get Gamma Intensity(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Gamma Intensity");

	struct Get Gamma Intensity_Params {
		float& Value;
	}; Get Gamma Intensity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Gamma Intensity
inline void UBP_GameSettings_C::Set Gamma Intensity(float Value, char Apply, float& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Gamma Intensity");

	struct Set Gamma Intensity_Params {
		float Value;
		char Apply;
		float& Result;
	}; Set Gamma Intensity_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify Gamma Intensity
inline void UBP_GameSettings_C::Modify Gamma Intensity(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Gamma Intensity");

	struct Modify Gamma Intensity_Params {
		char Modify;
	}; Modify Gamma Intensity_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Bloom Intensity
inline void UBP_GameSettings_C::Get Bloom Intensity(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Bloom Intensity");

	struct Get Bloom Intensity_Params {
		float& Value;
	}; Get Bloom Intensity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Bloom Intensity
inline void UBP_GameSettings_C::Set Bloom Intensity(float Value, char Apply, float& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Bloom Intensity");

	struct Set Bloom Intensity_Params {
		float Value;
		char Apply;
		float& Result;
	}; Set Bloom Intensity_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify Bloom Intensity
inline void UBP_GameSettings_C::Modify Bloom Intensity(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Bloom Intensity");

	struct Modify Bloom Intensity_Params {
		char Modify;
	}; Modify Bloom Intensity_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Vsync
inline void UBP_GameSettings_C::Get Vsync(char& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Vsync");

	struct Get Vsync_Params {
		char& Value;
	}; Get Vsync_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Vsync
inline void UBP_GameSettings_C::Set Vsync(char Value, char Apply, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Vsync");

	struct Set Vsync_Params {
		char Value;
		char Apply;
		char& Result;
	}; Set Vsync_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify Vsync
inline void UBP_GameSettings_C::Modify Vsync(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Vsync");

	struct Modify Vsync_Params {
		char Modify;
	}; Modify Vsync_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Remove Field Of View Control From Camera
inline void UBP_GameSettings_C::Remove Field Of View Control From Camera(struct Unknown Camera) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Remove Field Of View Control From Camera");

	struct Remove Field Of View Control From Camera_Params {
		struct Unknown Camera;
	}; Remove Field Of View Control From Camera_Params Params;

	Params.Camera = Camera;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Add Field Of View Control To Camera
inline void UBP_GameSettings_C::Add Field Of View Control To Camera(struct Unknown Camera) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Add Field Of View Control To Camera");

	struct Add Field Of View Control To Camera_Params {
		struct Unknown Camera;
	}; Add Field Of View Control To Camera_Params Params;

	Params.Camera = Camera;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Field Of View
inline void UBP_GameSettings_C::Get Field Of View(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Field Of View");

	struct Get Field Of View_Params {
		float& Value;
	}; Get Field Of View_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Field Of View
inline void UBP_GameSettings_C::Set Field Of View(float Value, char Apply, float& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Field Of View");

	struct Set Field Of View_Params {
		float Value;
		char Apply;
		float& Result;
	}; Set Field Of View_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify Field Of View
inline void UBP_GameSettings_C::Modify Field Of View(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Field Of View");

	struct Modify Field Of View_Params {
		char Modify;
	}; Modify Field Of View_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get View Distance
inline void UBP_GameSettings_C::Get View Distance(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get View Distance");

	struct Get View Distance_Params {
		float& Value;
	}; Get View Distance_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set View Distance
inline void UBP_GameSettings_C::Set View Distance(float Value, char Apply, float& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set View Distance");

	struct Set View Distance_Params {
		float Value;
		char Apply;
		float& Result;
	}; Set View Distance_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify View Distance
inline void UBP_GameSettings_C::Modify View Distance(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify View Distance");

	struct Modify View Distance_Params {
		char Modify;
	}; Modify View Distance_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Effect Quality
inline void UBP_GameSettings_C::Get Effect Quality(int32_t& Value, struct FString& Formatted) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Effect Quality");

	struct Get Effect Quality_Params {
		int32_t& Value;
		struct FString& Formatted;
	}; Get Effect Quality_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	Formatted = Params.Formatted;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Effect Quality
inline void UBP_GameSettings_C::Set Effect Quality(int32_t Value, char Apply, int32_t& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Effect Quality");

	struct Set Effect Quality_Params {
		int32_t Value;
		char Apply;
		int32_t& Result;
	}; Set Effect Quality_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify Effect Quality
inline void UBP_GameSettings_C::Modify Effect Quality(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Effect Quality");

	struct Modify Effect Quality_Params {
		char Modify;
	}; Modify Effect Quality_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Texture Quality
inline void UBP_GameSettings_C::Get Texture Quality(int32_t& Value, struct FString& Formatted) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Texture Quality");

	struct Get Texture Quality_Params {
		int32_t& Value;
		struct FString& Formatted;
	}; Get Texture Quality_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	Formatted = Params.Formatted;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Texture Quality
inline void UBP_GameSettings_C::Set Texture Quality(int32_t Value, char Apply, int32_t& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Texture Quality");

	struct Set Texture Quality_Params {
		int32_t Value;
		char Apply;
		int32_t& Result;
	}; Set Texture Quality_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify Texture Quality
inline void UBP_GameSettings_C::Modify Texture Quality(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Texture Quality");

	struct Modify Texture Quality_Params {
		char Modify;
	}; Modify Texture Quality_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Shadow Quality
inline void UBP_GameSettings_C::Get Shadow Quality(int32_t& Value, struct FString& Formatted) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Shadow Quality");

	struct Get Shadow Quality_Params {
		int32_t& Value;
		struct FString& Formatted;
	}; Get Shadow Quality_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	Formatted = Params.Formatted;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Shadow Quality
inline void UBP_GameSettings_C::Set Shadow Quality(int32_t Value, char Apply, int32_t& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Shadow Quality");

	struct Set Shadow Quality_Params {
		int32_t Value;
		char Apply;
		int32_t& Result;
	}; Set Shadow Quality_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify Shadow Quality
inline void UBP_GameSettings_C::Modify Shadow Quality(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Shadow Quality");

	struct Modify Shadow Quality_Params {
		char Modify;
	}; Modify Shadow Quality_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify All Video Settings
inline void UBP_GameSettings_C::Modify All Video Settings(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify All Video Settings");

	struct Modify All Video Settings_Params {
		char Modify;
	}; Modify All Video Settings_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Anti Aliasing Quality
inline void UBP_GameSettings_C::Get Anti Aliasing Quality(int32_t& Value, struct FString& Formatted) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Anti Aliasing Quality");

	struct Get Anti Aliasing Quality_Params {
		int32_t& Value;
		struct FString& Formatted;
	}; Get Anti Aliasing Quality_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	Formatted = Params.Formatted;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Anti Aliasing Quality
inline void UBP_GameSettings_C::Set Anti Aliasing Quality(int32_t Value, char Apply, int32_t& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Anti Aliasing Quality");

	struct Set Anti Aliasing Quality_Params {
		int32_t Value;
		char Apply;
		int32_t& Result;
	}; Set Anti Aliasing Quality_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify Anti Aliasing Quality
inline void UBP_GameSettings_C::Modify Anti Aliasing Quality(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Anti Aliasing Quality");

	struct Modify Anti Aliasing Quality_Params {
		char Modify;
	}; Modify Anti Aliasing Quality_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get Text Format Quality Level
inline void UBP_GameSettings_C::Get Text Format Quality Level(int32_t Quality Level, struct FString& Formatted) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Text Format Quality Level");

	struct Get Text Format Quality Level_Params {
		int32_t Quality Level;
		struct FString& Formatted;
	}; Get Text Format Quality Level_Params Params;

	Params.Quality Level = Quality Level;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Formatted = Params.Formatted;

}

// Function BP_GameSettings.BP_GameSettings_C.Get Post Process Quality
inline void UBP_GameSettings_C::Get Post Process Quality(int32_t& Value, struct FString& Formatted) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get Post Process Quality");

	struct Get Post Process Quality_Params {
		int32_t& Value;
		struct FString& Formatted;
	}; Get Post Process Quality_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	Formatted = Params.Formatted;

}

// Function BP_GameSettings.BP_GameSettings_C.Set Post Process Quality
inline void UBP_GameSettings_C::Set Post Process Quality(int32_t Value, char Apply, int32_t& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set Post Process Quality");

	struct Set Post Process Quality_Params {
		int32_t Value;
		char Apply;
		int32_t& Result;
	}; Set Post Process Quality_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify Post Process Quality
inline void UBP_GameSettings_C::Modify Post Process Quality(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify Post Process Quality");

	struct Modify Post Process Quality_Params {
		char Modify;
	}; Modify Post Process Quality_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Update Audio Emittor
inline void UBP_GameSettings_C::Update Audio Emittor(struct Unknown Emittor, char& Is Valid) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Update Audio Emittor");

	struct Update Audio Emittor_Params {
		struct Unknown Emittor;
		char& Is Valid;
	}; Update Audio Emittor_Params Params;

	Params.Emittor = Emittor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Is Valid = Params.Is Valid;

}

// Function BP_GameSettings.BP_GameSettings_C.Create Clone
inline void UBP_GameSettings_C::Create Clone(struct Unknown& Cloned Game Settings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Create Clone");

	struct Create Clone_Params {
		struct Unknown& Cloned Game Settings;
	}; Create Clone_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Cloned Game Settings = Params.Cloned Game Settings;

}

