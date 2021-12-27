// BlueprintGeneratedClass BP_GameSettings.BP_GameSettings_C
class UBP_GameSettings_C : public UBravoHotelLocalSavedSettings {

public:

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

	void SetAutoReloadSetting(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.SetAutoReloadSetting(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetAutoReloadSetting(char& autoReload); // Function BP_GameSettings.BP_GameSettings_C.GetAutoReloadSetting(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ModifyAutoReloadSetting(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyAutoReloadSetting(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ModifyScalabilityQuality(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyScalabilityQuality(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetScalabilityQuality(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.GetScalabilityQuality(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetScalabilityQuality(int32_t Value, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.SetScalabilityQuality(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetViewDistanceQuality(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.GetViewDistanceQuality(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetViewDistanceQuality(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.SetViewDistanceQuality(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ModifyViewDistanceQuality(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyViewDistanceQuality(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetFireModeSetting(enum class Unknow WeaponType, enum class Unknow New, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.SetFireModeSetting(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetFireModeSetting(struct TMap<Unknown, Unknown>& FireModeSettings); // Function BP_GameSettings.BP_GameSettings_C.GetFireModeSetting(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ModifyFireModeSetting(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyFireModeSetting(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetContrast(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetContrast(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetContrast(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetContrast(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ModifyContrast(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyContrast(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetMaxBrightness(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetMaxBrightness(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetMaxBrightness(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetMaxBrightness(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ModifyMaxBrightness(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyMaxBrightness(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetMinBrightness(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetMinBrightness(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetMinBrightness(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetMinBrightness(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ModifyMinBrightness(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyMinBrightness(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ModifyTemporalAACurrentFrameWeight(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAACurrentFrameWeight(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetTemporalAACurrentFrameWeight(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTemporalAACurrentFrameWeight(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTemporalAACurrentFrameWeight(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTemporalAACurrentFrameWeight(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetTonemapperSharpen(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTonemapperSharpen(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetTemporalAASamples(int32_t& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTemporalAASamples(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetTemporalAAPauseCorrect(char& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTemporalAAPauseCorrect(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetTemporalAACatmullRom(char& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTemporalAACatmullRom(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTonemapperSharpen(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTonemapperSharpen(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTemporalAASamples(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTemporalAASamples(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTemporalAAPauseCorrect(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTemporalAAPauseCorrect(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTemporalAACatmullRom(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTemporalAACatmullRom(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ModifyTonemapperSharpen(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTonemapperSharpen(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ModifyTemporalAASamples(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAASamples(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ModifyTemporalAAPauseCorrect(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAAPauseCorrect(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ModifyTemporalAACatmullRom(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAACatmullRom(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ModifyTemporalAAFilterSize(char Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAAFilterSize(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetTemporalAAFilterSize(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTemporalAAFilterSize(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetTemporalAAFilterSize(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTemporalAAFilterSize(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetSensitivityValue(enum class Unknow MouseSensitivityType, int32_t& Sensitivity); // Function BP_GameSettings.BP_GameSettings_C.GetSensitivityValue(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetSensitivityValue(enum class Unknow MouseSensitivityType, int32_t Sensitivity); // Function BP_GameSettings.BP_GameSettings_C.SetSensitivityValue(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(float Set, char Apply); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Save(); // Function BP_GameSettings.BP_GameSettings_C.Save(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Load(); // Function BP_GameSettings.BP_GameSettings_C.Load(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(struct TScriptInterface<IUnknown> Game); // Function BP_GameSettings.BP_GameSettings_C.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(struct TArray<Unknown>& Saved); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(struct TArray<Unknown>& Key); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(int32_t Save); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(struct FString Save); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(struct TScriptInterface<IUnknown> Game); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(struct TArray<Unknown>& Combinations); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Generate(); // Function BP_GameSettings.BP_GameSettings_C.Generate(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Load(); // Function BP_GameSettings.BP_GameSettings_C.Load(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Save(); // Function BP_GameSettings.BP_GameSettings_C.Save(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Store(struct Unknown& KeySave); // Function BP_GameSettings.BP_GameSettings_C.Store(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(struct FString Input, struct Unknown& Input, char& SUCCESS); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Fill(); // Function BP_GameSettings.BP_GameSettings_C.Fill(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Init(); // Function BP_GameSettings.BP_GameSettings_C.Init(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Update(float Real, float World, struct Unknown PlayerController); // Function BP_GameSettings.BP_GameSettings_C.Update(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Delete(); // Function BP_GameSettings.BP_GameSettings_C.Delete(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float Input, float World, float& Horizontal); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(struct FString& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(struct FString Value, char Apply, struct FString& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(int32_t& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(int32_t& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Prepeare(); // Function BP_GameSettings.BP_GameSettings_C.Prepeare(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Save(); // Function BP_GameSettings.BP_GameSettings_C.Save(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float Input, float World, float& Vertical); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(float Set, char Apply); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(float Set, char Apply); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(float Set, char Apply); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(float Set, char Apply); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Add(struct Unknown Audio, char Audio); // Function BP_GameSettings.BP_GameSettings_C.Add(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Apply(char Audio, enum class Unknow Type); // Function BP_GameSettings.BP_GameSettings_C.Apply(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(float Set, char Apply); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(char Set); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(char Set); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(float Set); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(float Set); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Apply(); // Function BP_GameSettings.BP_GameSettings_C.Apply(Private|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(char& Screen, struct FString& Command); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(struct Unknown& Resolution); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(char Screen, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(struct Unknown Resolution, char Apply, struct Unknown& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(char& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(char Value, char Apply, char& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Remove(struct Unknown Camera); // Function BP_GameSettings.BP_GameSettings_C.Remove(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Add(struct Unknown Camera); // Function BP_GameSettings.BP_GameSettings_C.Add(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(float Value, char Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(int32_t Quality, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Get(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(int32_t Value, char Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Modify(char Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Update(struct Unknown Emittor, char& Is); // Function BP_GameSettings.BP_GameSettings_C.Update(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Create(struct Unknown& Cloned); // Function BP_GameSettings.BP_GameSettings_C.Create(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
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

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(char& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		char& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(char Value, char Apply, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		char Value;
		char Apply;
		char& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

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

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(char& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		char& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(char Value, char Apply, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		char Value;
		char Apply;
		char& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(float Value, char Apply, float& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		float Value;
		char Apply;
		float& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(char& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		char& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(char Value, char Apply, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		char Value;
		char Apply;
		char& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.SetFireModeSetting
inline void UBP_GameSettings_C::SetFireModeSetting(enum class Unknow WeaponType, enum class Unknow New, char Apply, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.SetFireModeSetting");

	struct SetFireModeSetting_Params {
		enum class Unknow WeaponType;
		enum class Unknow New;
		char Apply;
		char& Result;
	}; SetFireModeSetting_Params Params;

	Params.WeaponType = WeaponType;
	Params.New = New;
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

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(char& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		char& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(char Value, char Apply, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		char Value;
		char Apply;
		char& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

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

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(int32_t& Value, struct FString& Formatted) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		int32_t& Value;
		struct FString& Formatted;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	Formatted = Params.Formatted;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(int32_t Value, char Apply, int32_t& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		int32_t Value;
		char Apply;
		int32_t& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(float Set, char Apply) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		float Set;
		char Apply;
	}; Set_Params Params;

	Params.Set = Set;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Save
inline void UBP_GameSettings_C::Save() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Save");

	struct Save_Params {
		
	}; Save_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Load
inline void UBP_GameSettings_C::Load() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Load");

	struct Load_Params {
		
	}; Load_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Init
inline void UBP_GameSettings_C::Init(struct TScriptInterface<IUnknown> Game) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Init");

	struct Init_Params {
		struct TScriptInterface<IUnknown> Game;
	}; Init_Params Params;

	Params.Game = Game;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(struct TArray<Unknown>& Saved) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		struct TArray<Unknown>& Saved;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Saved = Params.Saved;

}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(struct TArray<Unknown>& Key) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		struct TArray<Unknown>& Key;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Key = Params.Key;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(int32_t Save) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		int32_t Save;
	}; Set_Params Params;

	Params.Save = Save;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(struct FString Save) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		struct FString Save;
	}; Set_Params Params;

	Params.Save = Save;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(struct TScriptInterface<IUnknown> Game) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		struct TScriptInterface<IUnknown> Game;
	}; Set_Params Params;

	Params.Game = Game;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(struct TArray<Unknown>& Combinations) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		struct TArray<Unknown>& Combinations;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Combinations = Params.Combinations;

}

// Function BP_GameSettings.BP_GameSettings_C.Generate
inline void UBP_GameSettings_C::Generate() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Generate");

	struct Generate_Params {
		
	}; Generate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Load
inline void UBP_GameSettings_C::Load() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Load");

	struct Load_Params {
		
	}; Load_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Save
inline void UBP_GameSettings_C::Save() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Save");

	struct Save_Params {
		
	}; Save_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Store
inline void UBP_GameSettings_C::Store(struct Unknown& KeySave) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Store");

	struct Store_Params {
		struct Unknown& KeySave;
	}; Store_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeySave = Params.KeySave;

}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(struct FString Input, struct Unknown& Input, char& SUCCESS) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		struct FString Input;
		struct Unknown& Input;
		char& SUCCESS;
	}; Get_Params Params;

	Params.Input = Input;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Input = Params.Input;
	SUCCESS = Params.SUCCESS;

}

// Function BP_GameSettings.BP_GameSettings_C.Fill
inline void UBP_GameSettings_C::Fill() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Fill");

	struct Fill_Params {
		
	}; Fill_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Init
inline void UBP_GameSettings_C::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Init");

	struct Init_Params {
		
	}; Init_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Update
inline void UBP_GameSettings_C::Update(float Real, float World, struct Unknown PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Update");

	struct Update_Params {
		float Real;
		float World;
		struct Unknown PlayerController;
	}; Update_Params Params;

	Params.Real = Real;
	Params.World = World;
	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Delete
inline void UBP_GameSettings_C::Delete() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Delete");

	struct Delete_Params {
		
	}; Delete_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float Input, float World, float& Horizontal) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float Input;
		float World;
		float& Horizontal;
	}; Get_Params Params;

	Params.Input = Input;
	Params.World = World;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Horizontal = Params.Horizontal;

}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(struct FString& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		struct FString& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(struct FString Value, char Apply, struct FString& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		struct FString Value;
		char Apply;
		struct FString& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(int32_t& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		int32_t& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(int32_t Value, char Apply, int32_t& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		int32_t Value;
		char Apply;
		int32_t& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(float Value, char Apply, float& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		float Value;
		char Apply;
		float& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(char& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		char& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(char Value, char Apply, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		char Value;
		char Apply;
		char& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(int32_t& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		int32_t& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(int32_t Value, char Apply, int32_t& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		int32_t Value;
		char Apply;
		int32_t& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Prepeare
inline void UBP_GameSettings_C::Prepeare() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Prepeare");

	struct Prepeare_Params {
		
	}; Prepeare_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Save
inline void UBP_GameSettings_C::Save() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Save");

	struct Save_Params {
		
	}; Save_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float Input, float World, float& Vertical) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float Input;
		float World;
		float& Vertical;
	}; Get_Params Params;

	Params.Input = Input;
	Params.World = World;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Vertical = Params.Vertical;

}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(float Set, char Apply) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		float Set;
		char Apply;
	}; Set_Params Params;

	Params.Set = Set;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(float Set, char Apply) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		float Set;
		char Apply;
	}; Set_Params Params;

	Params.Set = Set;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(float Set, char Apply) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		float Set;
		char Apply;
	}; Set_Params Params;

	Params.Set = Set;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(float Set, char Apply) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		float Set;
		char Apply;
	}; Set_Params Params;

	Params.Set = Set;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Add
inline void UBP_GameSettings_C::Add(struct Unknown Audio, char Audio) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Add");

	struct Add_Params {
		struct Unknown Audio;
		char Audio;
	}; Add_Params Params;

	Params.Audio = Audio;
	Params.Audio = Audio;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Apply
inline void UBP_GameSettings_C::Apply(char Audio, enum class Unknow Type) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Apply");

	struct Apply_Params {
		char Audio;
		enum class Unknow Type;
	}; Apply_Params Params;

	Params.Audio = Audio;
	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(float Set, char Apply) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		float Set;
		char Apply;
	}; Set_Params Params;

	Params.Set = Set;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(char& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		char& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(char Set) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		char Set;
	}; Set_Params Params;

	Params.Set = Set;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(char& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		char& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(char Set) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		char Set;
	}; Set_Params Params;

	Params.Set = Set;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(float Set) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		float Set;
	}; Set_Params Params;

	Params.Set = Set;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(float Set) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		float Set;
	}; Set_Params Params;

	Params.Set = Set;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Apply
inline void UBP_GameSettings_C::Apply() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Apply");

	struct Apply_Params {
		
	}; Apply_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(char& Screen, struct FString& Command) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		char& Screen;
		struct FString& Command;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Screen = Params.Screen;
	Command = Params.Command;

}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(struct Unknown& Resolution) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		struct Unknown& Resolution;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Resolution = Params.Resolution;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(char Screen, char Apply, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		char Screen;
		char Apply;
		char& Result;
	}; Set_Params Params;

	Params.Screen = Screen;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(struct Unknown Resolution, char Apply, struct Unknown& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		struct Unknown Resolution;
		char Apply;
		struct Unknown& Result;
	}; Set_Params Params;

	Params.Resolution = Resolution;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(float Value, char Apply, float& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		float Value;
		char Apply;
		float& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(float Value, char Apply, float& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		float Value;
		char Apply;
		float& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(float Value, char Apply, float& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		float Value;
		char Apply;
		float& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(float Value, char Apply, float& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		float Value;
		char Apply;
		float& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(char& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		char& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(char Value, char Apply, char& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		char Value;
		char Apply;
		char& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Remove
inline void UBP_GameSettings_C::Remove(struct Unknown Camera) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Remove");

	struct Remove_Params {
		struct Unknown Camera;
	}; Remove_Params Params;

	Params.Camera = Camera;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Add
inline void UBP_GameSettings_C::Add(struct Unknown Camera) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Add");

	struct Add_Params {
		struct Unknown Camera;
	}; Add_Params Params;

	Params.Camera = Camera;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(float Value, char Apply, float& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		float Value;
		char Apply;
		float& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(float& Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		float& Value;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(float Value, char Apply, float& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		float Value;
		char Apply;
		float& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(int32_t& Value, struct FString& Formatted) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		int32_t& Value;
		struct FString& Formatted;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	Formatted = Params.Formatted;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(int32_t Value, char Apply, int32_t& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		int32_t Value;
		char Apply;
		int32_t& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(int32_t& Value, struct FString& Formatted) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		int32_t& Value;
		struct FString& Formatted;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	Formatted = Params.Formatted;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(int32_t Value, char Apply, int32_t& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		int32_t Value;
		char Apply;
		int32_t& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(int32_t& Value, struct FString& Formatted) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		int32_t& Value;
		struct FString& Formatted;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	Formatted = Params.Formatted;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(int32_t Value, char Apply, int32_t& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		int32_t Value;
		char Apply;
		int32_t& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(int32_t& Value, struct FString& Formatted) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		int32_t& Value;
		struct FString& Formatted;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	Formatted = Params.Formatted;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(int32_t Value, char Apply, int32_t& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		int32_t Value;
		char Apply;
		int32_t& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(int32_t Quality, struct FString& Formatted) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		int32_t Quality;
		struct FString& Formatted;
	}; Get_Params Params;

	Params.Quality = Quality;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Formatted = Params.Formatted;

}

// Function BP_GameSettings.BP_GameSettings_C.Get
inline void UBP_GameSettings_C::Get(int32_t& Value, struct FString& Formatted) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Get");

	struct Get_Params {
		int32_t& Value;
		struct FString& Formatted;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Value = Params.Value;
	Formatted = Params.Formatted;

}

// Function BP_GameSettings.BP_GameSettings_C.Set
inline void UBP_GameSettings_C::Set(int32_t Value, char Apply, int32_t& Result) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Set");

	struct Set_Params {
		int32_t Value;
		char Apply;
		int32_t& Result;
	}; Set_Params Params;

	Params.Value = Value;
	Params.Apply = Apply;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;

}

// Function BP_GameSettings.BP_GameSettings_C.Modify
inline void UBP_GameSettings_C::Modify(char Modify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Modify");

	struct Modify_Params {
		char Modify;
	}; Modify_Params Params;

	Params.Modify = Modify;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_GameSettings.BP_GameSettings_C.Update
inline void UBP_GameSettings_C::Update(struct Unknown Emittor, char& Is) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Update");

	struct Update_Params {
		struct Unknown Emittor;
		char& Is;
	}; Update_Params Params;

	Params.Emittor = Emittor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Is = Params.Is;

}

// Function BP_GameSettings.BP_GameSettings_C.Create
inline void UBP_GameSettings_C::Create(struct Unknown& Cloned) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameSettings.BP_GameSettings_C.Create");

	struct Create_Params {
		struct Unknown& Cloned;
	}; Create_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Cloned = Params.Cloned;

}

