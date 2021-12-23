// BlueprintGeneratedClass BP_GameSettings.BP_GameSettings_C
class UBP_GameSettings_C : UBravoHotelLocalSavedSettings {
	float Look; // 0x120 (4)
	float Look; // 0x124 (4)
	char Look : 0; // 0x128 (1)
	char Look : 0; // 0x129 (1)
	struct TScriptInterface<IUnknown> Game; // 0x130 (16)
	struct FString Save; // 0x140 (16)
	int32_t Save; // 0x150 (4)
	struct TArray<Unknown> AudioEmittors; // 0x158 (16)
	float Audio; // 0x168 (4)
	float Audio; // 0x16C (4)
	float Audio; // 0x170 (4)
	float Audio; // 0x174 (4)
	float Audio; // 0x178 (4)
	float Audio; // 0x17C (4)
	float Volume; // 0x180 (4)
	float Volume; // 0x184 (4)
	float Volume; // 0x188 (4)
	float Volume; // 0x18C (4)
	float Volume; // 0x190 (4)
	int32_t Video; // 0x194 (4)
	int32_t Video; // 0x198 (4)
	struct TArray<Unknown> Camera; // 0x1A0 (16)
	char Screen; // 0x1B0 (1)
	int32_t Resolution; // 0x1B4 (4)
	float View; // 0x1B8 (4)
	int32_t Anti; // 0x1BC (4)
	int32_t Post; // 0x1C0 (4)
	int32_t Shadow; // 0x1C4 (4)
	int32_t Texture; // 0x1C8 (4)
	int32_t Effect; // 0x1CC (4)
	int32_t Foliage; // 0x1D0 (4)
	float Field; // 0x1D4 (4)
	float Motion; // 0x1D8 (4)
	char VSync : 0; // 0x1DC (1)
	char My : 0; // 0x1DD (1)
	int32_t My; // 0x1E0 (4)
	float My; // 0x1E4 (4)
	float Bloom; // 0x1E8 (4)
	float Gamma; // 0x1EC (4)
	float Gain; // 0x1F0 (4)
	struct Unknown Previous; // 0x1F8 (8)
	struct FString My; // 0x200 (16)
	float Current; // 0x210 (4)
	struct TArray<Unknown> Key; // 0x218 (16)
	struct TArray<Unknown> Input; // 0x228 (16)
	struct TArray<Unknown> Saved; // 0x238 (16)
	float Volume; // 0x248 (4)
	char Old; // 0x24C (1)
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
	float ColorGrading; // 0x274 (4)
	char ClearFog : 0; // 0x278 (1)
	int32_t ViewDistanceQuality; // 0x27C (4)
	int32_t ScalabilityQuality; // 0x280 (4)
	int32_t CurrentFileVersion; // 0x284 (4)
	int32_t UpdateFileVersion; // 0x288 (4)
	char Smooth : 0; // 0x28C (1)

	void SetAutoReloadSetting(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.SetAutoReloadSetting(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetAutoReloadSetting(char& autoReload); // Function BP_GameSettings.BP_GameSettings_C.GetAutoReloadSetting(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ModifyAutoReloadSetting(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyAutoReloadSetting(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ModifyScalabilityQuality(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyScalabilityQuality(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetScalabilityQuality(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.GetScalabilityQuality(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetScalabilityQuality(int32_t Value, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.SetScalabilityQuality(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetViewDistanceQuality(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.GetViewDistanceQuality(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetViewDistanceQuality(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.SetViewDistanceQuality(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ModifyViewDistanceQuality(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyViewDistanceQuality(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetFireModeSetting(enum class Unknow WeaponType, enum class Unknow NewWeaponFireMode, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.SetFireModeSetting(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetFireModeSetting(struct TMap<Unknown, Unknown>Unknown& FireModeSettings); // Function BP_GameSettings.BP_GameSettings_C.GetFireModeSetting(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ModifyFireModeSetting(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyFireModeSetting(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetContrast(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetContrast(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetContrast(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetContrast(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ModifyContrast(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyContrast(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetMaxBrightness(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetMaxBrightness(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetMaxBrightness(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetMaxBrightness(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ModifyMaxBrightness(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyMaxBrightness(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetMinBrightness(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetMinBrightness(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetMinBrightness(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetMinBrightness(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ModifyMinBrightness(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyMinBrightness(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ModifyTemporalAACurrentFrameWeight(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAACurrentFrameWeight(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetTemporalAACurrentFrameWeight(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTemporalAACurrentFrameWeight(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetTemporalAACurrentFrameWeight(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTemporalAACurrentFrameWeight(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetTonemapperSharpen(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTonemapperSharpen(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetTemporalAASamples(int32_t& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTemporalAASamples(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetTemporalAAPauseCorrect(char& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTemporalAAPauseCorrect(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetTemporalAACatmullRom(char& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTemporalAACatmullRom(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetTonemapperSharpen(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTonemapperSharpen(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetTemporalAASamples(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTemporalAASamples(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetTemporalAAPauseCorrect(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTemporalAAPauseCorrect(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetTemporalAACatmullRom(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTemporalAACatmullRom(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ModifyTonemapperSharpen(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTonemapperSharpen(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ModifyTemporalAASamples(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAASamples(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ModifyTemporalAAPauseCorrect(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAAPauseCorrect(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ModifyTemporalAACatmullRom(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAACatmullRom(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ModifyTemporalAAFilterSize(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAAFilterSize(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetTemporalAAFilterSize(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTemporalAAFilterSize(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetTemporalAAFilterSize(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTemporalAAFilterSize(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetSensitivityValue(enum class Unknow MouseSensitivityType, int32_t& Sensitivity); // Function BP_GameSettings.BP_GameSettings_C.GetSensitivityValue(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetSensitivityValue(enum class Unknow MouseSensitivityType, int32_t Sensitivity); // Function BP_GameSettings.BP_GameSettings_C.SetSensitivityValue(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(float Set, char Apply); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Save(); // Function BP_GameSettings.BP_GameSettings_C.Save(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Load(); // Function BP_GameSettings.BP_GameSettings_C.Load(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Init(struct TScriptInterface<IUnknown> Game); // Function BP_GameSettings.BP_GameSettings_C.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(struct TArray<Unknown>& Saved); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(struct TArray<Unknown>& Key); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(int32_t Save); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(struct FString Save); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(struct TScriptInterface<IUnknown> Game); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(struct TArray<Unknown>& Combinations); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Generate(); // Function BP_GameSettings.BP_GameSettings_C.Generate(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Load(); // Function BP_GameSettings.BP_GameSettings_C.Load(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Save(); // Function BP_GameSettings.BP_GameSettings_C.Save(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Store(struct Unknown& KeySave); // Function BP_GameSettings.BP_GameSettings_C.Store(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(struct FString Input, struct Unknown& Input, char& SUCCESS); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Fill(); // Function BP_GameSettings.BP_GameSettings_C.Fill(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Init(); // Function BP_GameSettings.BP_GameSettings_C.Init(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Update(float Real, float World, struct Unknown PlayerController); // Function BP_GameSettings.BP_GameSettings_C.Update(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Delete(); // Function BP_GameSettings.BP_GameSettings_C.Delete(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float Input, float World, float& Horizontal); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(struct FString& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(struct FString Value, char Apply, struct FString& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(int32_t& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(int32_t& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Prepeare(); // Function BP_GameSettings.BP_GameSettings_C.Prepeare(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Save(); // Function BP_GameSettings.BP_GameSettings_C.Save(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float Input, float World, float& Vertical); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(float Set, char Apply); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(float Set, char Apply); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(float Set, char Apply); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(float Set, char Apply); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Add(struct Unknown Audio, char Audio); // Function BP_GameSettings.BP_GameSettings_C.Add(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Apply(char Audio, enum class Unknow Type); // Function BP_GameSettings.BP_GameSettings_C.Apply(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(float Set, char Apply); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(char Set); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(char Set); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(float Set); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(float Set); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Apply(); // Function BP_GameSettings.BP_GameSettings_C.Apply(Private|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(char& Screen, struct FString& Command); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(struct Unknown& Resolution); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(char Screen, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(struct Unknown Resolution, char Apply, struct Unknown& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Remove(struct Unknown Camera); // Function BP_GameSettings.BP_GameSettings_C.Remove(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Add(struct Unknown Camera); // Function BP_GameSettings.BP_GameSettings_C.Add(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(int32_t Quality, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Update(struct Unknown Emittor, char& Is); // Function BP_GameSettings.BP_GameSettings_C.Update(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Create(struct Unknown& Cloned); // Function BP_GameSettings.BP_GameSettings_C.Create(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

