// UserDefinedEnum B.B
enum class B : uint8 {
	B = 0
	B = 1
	B = 2
	B = 3
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotel3DViewActor {
	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown PointLight3; // 0x318 (8)
	struct Unknown PointLight2; // 0x320 (8)
	struct Unknown SpotLight; // 0x328 (8)
	struct Unknown PointLight1; // 0x330 (8)
	struct Unknown BravoHotelSceneCaptureComponent2D; // 0x338 (8)
	struct Unknown PointLight; // 0x340 (8)
	struct Unknown SpotLight2; // 0x348 (8)
	struct Unknown Cube; // 0x350 (8)
	struct Unknown CustomizableSkeletal; // 0x358 (8)
	struct Unknown SkeletalMesh; // 0x360 (8)
	struct Unknown Camera; // 0x368 (8)
	struct Unknown Scene; // 0x370 (8)
	struct Unknown CharacterRef; // 0x378 (8)
	struct TArray<Unknown> PreviewWeapons; // 0x380 (16)
	char EnableTick : 0; // 0x390 (1)
	struct Unknown TargetAccel; // 0x394 (12)
	struct Unknown CurrentAccel; // 0x3A0 (12)

	void Resize(int32_t SizeX, int32_t SizeY); // Function B.B.Resize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddRotation(float Delta); // Function B.B.AddRotation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnUpdatedMutable(struct Unknown Instance); // Function B.B.OnUpdatedMutable(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelAircraftBomber {
	struct Unknown UberGraphFrame; // 0x320 (8)
	struct Unknown ParticleSystem; // 0x328 (8)
	struct Unknown S; // 0x330 (8)
	struct Unknown DefaultSceneRoot; // 0x338 (8)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveDestroyed(); // Function B.B.ReceiveDestroyed(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnInterpToResetDelegate__DelegateSignature(struct Unknown& ImpactResult, float Time); // Function B.B.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnInterpToResetDelegate__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelSkillTargetingNuclear {
	struct Unknown UberGraphFrame; // 0x358 (8)

	void UpdateTargetSize(); // Function B.B.UpdateTargetSize(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct UB : UHUDInteractionComponent {
	struct Unknown UberGraphFrame; // 0xF0 (8)
	struct Unknown PlayerController; // 0xF8 (8)
	char bAlreadySetOptionWidget : 0; // 0x100 (1)
	float defaultContrast; // 0x104 (4)
	float defaultMaxBrightness; // 0x108 (4)
	float defaultMinBrightness; // 0x10C (4)
	float MinBrightness; // 0x110 (4)
	float MaxBrightness; // 0x114 (4)
	float Contrast; // 0x118 (4)
	char bUsePostProcessVolumeOption : 0; // 0x11C (1)
	float ColorGradingGlobalGamma; // 0x120 (4)
	float FilmToeIntensity; // 0x124 (4)
	char IsInWidget : 0; // 0x128 (1)
	char bInputModeUI : 0; // 0x129 (1)
	struct TArray<Unknown> InputActionsToBlock; // 0x130 (16)

	void CheckAnyAction(char& AnyAction); // Function B.B.CheckAnyAction(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CheckAnyCloseUI(char& AnyClosed); // Function B.B.CheckAnyCloseUI(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InputCloseUI(); // Function B.B.InputCloseUI(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Callback(); // Function B.B.Callback(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetMousePositionToCenter(); // Function B.B.SetMousePositionToCenter(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CheckInputState(); // Function B.B.CheckInputState(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetActionBlocked(char WantsToBlock, struct TArray<Unknown>& ActionNames, struct Unknown Widget); // Function B.B.SetActionBlocked(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	char IsGlobalPostProcessVolume(struct Unknown Other); // Function B.B.IsGlobalPostProcessVolume(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetPostProcessVolumeDefaultOption(); // Function B.B.SetPostProcessVolumeDefaultOption(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InitOptionWidget(); // Function B.B.InitOptionWidget(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void IsSpectating(char& IsSpectating); // Function B.B.IsSpectating(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetPlayerHUD(char& IsAlive, struct Unknown& PlayerHUD); // Function B.B.GetPlayerHUD(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InputOptionMenu(); // Function B.B.InputOptionMenu(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InputModeGame(struct Unknown Widget); // Function B.B.InputModeGame(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InputModeUI(struct Unknown Widget); // Function B.B.InputModeUI(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InputToggleIngameHUD(); // Function B.B.InputToggleIngameHUD(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelSpectatorPawn {
	struct Unknown UberGraphFrame; // 0x3D0 (8)
	struct Unknown Camera; // 0x3D8 (8)
	struct Unknown SpringArm; // 0x3E0 (8)
	char bKillCam : 0; // 0x3E8 (1)

	void TargetSetting(); // Function B.B.TargetSetting(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetTargetByUID(int32_t UID, struct Unknown& TargetPawn); // Function B.B.GetTargetByUID(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void KillCamTarget(); // Function B.B.KillCamTarget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnSetTarget(); // Function B.B.OnSetTarget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelProjectileGrenadeMolotovCocktail {
	struct Unknown UberGraphFrame; // 0x7F0 (8)
	float TextureScale; // 0x7F8 (4)
	float CollisionSize; // 0x7FC (4)

	void ActiveThrowingProjectileMainEffect(); // Function B.B.ActiveThrowingProjectileMainEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelTransportDropBoxActor {
	struct Unknown UberGraphFrame; // 0x4A0 (8)
	float OverWater_CV_OverWater_77012AB948B572A268E63583418444D0; // 0x4A8 (4)
	char OverWater__Direction_77012AB948B572A268E63583418444D0; // 0x4AC (1)
	struct Unknown OverWater; // 0x4B0 (8)
	float HittingWater_CV_OverWater_7E5F9D2E4D0DDDC70F2F67AD035A6212; // 0x4B8 (4)
	char HittingWater__Direction_7E5Ftor; // 0x4BC (1)
	struct Unknown HittingWater; // 0x4C0 (8)
	float LandingTimer; // 0x4C8 (4)
	struct TArray<Unknown> ItemResult; // 0x4D0 (16)
	float ParachuteTimer; // 0x4E0 (4)
	float LandingDelay; // 0x4E4 (4)
	float ForceLandingDelaySeconds; // 0x4E8 (4)
	char bLandedOnGround : 0; // 0x4EC (1)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OverWater__FinishedFunc(); // Function B.B.OverWater__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OverWater__UpdateFunc(); // Function B.B.OverWater__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void HittingWater__FinishedFunc(); // Function B.B.HittingWater__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void HittingWater__UpdateFunc(); // Function B.B.HittingWater__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void NormalHitSound(); // Function B.B.NormalHitSound(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void WaterHitSound(); // Function B.B.WaterHitSound(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnActivated(); // Function B.B.OnActivated(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetLastPosition(struct Unknown Location, struct Unknown Rotation); // Function B.B.SetLastPosition(Net|NetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Cutoff(); // Function B.B.Cutoff(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OpenDropBoxEvent(); // Function B.B.OpenDropBoxEvent(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnOverWater(); // Function B.B.OnOverWater(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnHittingWater(); // Function B.B.OnHittingWater(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GenerateItems(struct FName ItemKey); // Function B.B.GenerateItems(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetItemInBlueprint(struct FName& ItemKey); // Function B.B.SetItemInBlueprint(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void LandedOnWaterEvent(); // Function B.B.LandedOnWaterEvent(Event|Protected|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// WidgetBlueprintGeneratedClass B.B
struct UB : UUserWidget {
	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown B_Value; // 0x250 (8)
	struct Unknown Check; // 0x258 (8)
	struct Unknown G_Value; // 0x260 (8)
	struct Unknown Image_166; // 0x268 (8)
	struct Unknown Land; // 0x270 (8)
	struct Unknown Land_2; // 0x278 (8)
	struct Unknown Land_3; // 0x280 (8)
	struct Unknown Land_4; // 0x288 (8)
	struct Unknown Land_5; // 0x290 (8)
	struct Unknown Land_6; // 0x298 (8)
	struct Unknown R_5; // 0x2A0 (8)
	struct Unknown R_7; // 0x2A8 (8)
	struct Unknown R_9; // 0x2B0 (8)
	struct Unknown R_Value; // 0x2B8 (8)
	struct Unknown TextBlock_4; // 0x2C0 (8)
	struct Unknown TextBlock_5; // 0x2C8 (8)
	struct Unknown TextBlock_6; // 0x2D0 (8)
	struct Unknown TextBlock_8; // 0x2D8 (8)
	struct Unknown TextBlock_9; // 0x2E0 (8)
	struct Unknown TextBlock_10; // 0x2E8 (8)
	struct Unknown Timer; // 0x2F0 (8)

	void OnLoaded_395796F147F051B7CCBB17B8AB7F3577(struct Unknown Loaded); // Function B.B.OnLoaded_395796F147F051B7CCBB17B8AB7F3577(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnLoaded_9E09E1234991DF79517848BF7BB1AC45(struct Unknown Loaded); // Function B.B.OnLoaded_9E09E1234991DF79517848BF7BB1AC45(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnLoaded_4A9EA3EE453D348BBD4E76837B616AD3(struct Unknown Loaded); // Function B.B.OnLoaded_4A9EA3EE453D348BBD4E76837B616AD3(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(struct Unknown WeightMap); // Function B.B.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(char Enable); // Function B.B.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void a_1(); // Function B.B.a_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelProjectileBullet {
	struct Unknown UberGraphFrame; // 0x520 (8)
	struct Unknown ParticleSystem; // 0x528 (8)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : UActor {
	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown WorldViewCamera; // 0x318 (8)
	struct Unknown DefaultSceneRoot; // 0x320 (8)
	float DeltaTime; // 0x328 (4)
	char bIsBackgroundScene : 0; // 0x32C (1)

	void CheckWorldViewCameraLocationRange(); // Function B.B.CheckWorldViewCameraLocationRange(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void PreventCameraWallCollision(); // Function B.B.PreventCameraWallCollision(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ATransportAircraftPawn {
	struct Unknown UberGraphFrame; // 0x6D0 (8)

	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelProjectileMolotovF {
	struct Unknown UberGraphFrame; // 0x398 (8)
	float TextureScale; // 0x3A0 (4)
	float BurnArea; // 0x3A4 (4)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : UActor {
	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown FirstCamera; // 0x318 (8)
	struct Unknown FirstSpringArm; // 0x320 (8)
	struct Unknown ThirdCamera; // 0x328 (8)
	struct Unknown SecondCamera; // 0x330 (8)
	struct Unknown DefaultSceneRoot; // 0x338 (8)
	float DeltaSeconds; // 0x340 (4)
	struct Unknown TargetDeltaLocation; // 0x344 (12)
	struct Unknown Character; // 0x350 (8)
	float LowerBoundCameraHeightDelta; // 0x358 (4)
	char bHeightUpdateFinished : 0; // 0x35C (1)
	float ThridCameraRotationYawDelta; // 0x360 (4)
	float ThirdCameraMinHeight; // 0x364 (4)
	float FirstSpringArmDeltaZ; // 0x368 (4)

	void CheckThirdCameraLocationRange(); // Function B.B.CheckThirdCameraLocationRange(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdateActorRotationToPelvis(); // Function B.B.UpdateActorRotationToPelvis(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetActiveCamera(struct Unknown& ActiveCamera); // Function B.B.GetActiveCamera(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdateLowerBoundCameraHeight(); // Function B.B.UpdateLowerBoundCameraHeight(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void PreventCameraWallCollision(); // Function B.B.PreventCameraWallCollision(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InitReferences(char& bSuccess); // Function B.B.InitReferences(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdateCameraHeightToHead(); // Function B.B.UpdateCameraHeightToHead(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnEndViewTarget(struct Unknown PC); // Function B.B.K2_OnEndViewTarget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelProjectileMolotovFu {
	struct Unknown UberGraphFrame; // 0x398 (8)
	float TextureScale; // 0x3A0 (4)
	float BurnArea; // 0x3A4 (4)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelMaterialEffectActor {
	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelAreaSkillZonePowerInterruption {
	struct Unknown UberGraphFrame; // 0x368 (8)
	float SkillDelayTime; // 0x370 (4)
	struct Unknown BlackOutDynamicMaterial; // 0x378 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ActivateEffect(struct Unknown Character); // Function B.B.ActivateEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void DeactivateEffect(struct Unknown Character); // Function B.B.DeactivateEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BPSetAreaSkillInfo(); // Function B.B.BPSetAreaSkillInfo(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void StartDestroy(); // Function B.B.StartDestroy(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown BravoHotelVehicleTire_RR; // 0xD00 (8)
	struct Unknown BravoHotelVehicleTire_RL; // 0xD08 (8)
	struct Unknown BravoHotelVehicleTire_FR; // 0xD10 (8)
	struct Unknown BravoHotelVehicleTire_FL; // 0xD18 (8)
	struct Unknown VehicleSeatCollision1; // 0xD20 (8)
	struct Unknown VehicleSeatCollision; // 0xD28 (8)
	struct Unknown BravoHotelVehicleSeat01; // 0xD30 (8)
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown BravoHotelVehicleTire_RR; // 0xD18 (8)
	struct Unknown BravoHotelVehicleTire_RL; // 0xD20 (8)
	struct Unknown BravoHotelVehicleTire_FR; // 0xD28 (8)
	struct Unknown BravoHotelVehicleTire_FL; // 0xD30 (8)
	struct Unknown B; // 0xD38 (8)
	struct Unknown B; // 0xD40 (8)
	struct Unknown BravoHotelVehicleSeat04; // 0xD48 (8)
	struct Unknown BravoHotelVehicleSeat03; // 0xD50 (8)
	struct Unknown BravoHotelVehicleSeat02; // 0xD58 (8)
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown BravoHotelShellCasingArrow_Clip; // 0x22F0 (8)
};

// BlueprintGeneratedClass B.B
struct AB : UActor {
	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown Widget; // 0x318 (8)
	struct Unknown DefaultSceneRoot; // 0x320 (8)
	struct Unknown TargetCharacter; // 0x328 (8)
	struct Unknown LoudnessCurve; // 0x330 (8)
	float AmplifierLength; // 0x338 (4)
	enum class Unknow TagetGroundState; // 0x33C (1)
	char IsFiring : 0; // 0x33D (1)
	struct Unknown CurrentWeapon; // 0x340 (8)
	struct Unknown SingleTimerEvent; // 0x348 (8)
	char IsSingleFiring : 0; // 0x350 (1)

	void a_1(float DeltaSeconds, struct Unknown OldLocation, struct Unknown OldVelocity); // Function B.B.a_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void a_1(enum class Unknow State); // Function B.B.a_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetTarget(struct Unknown TargetCharacter, float AmplifierLength); // Function B.B.SetTarget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CharacterMovementEv(float DeltaSeconds, struct Unknown OldLocation, struct Unknown OldVelocity); // Function B.B.CharacterMovementEv(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnStartSimulateFire(); // Function B.B.OnStartSimulateFire(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SingleStopEvent(); // Function B.B.SingleStopEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct UB : USaveGame {
	char bHideWorkInProgress : 0; // 0x28 (1)
	enum class Unknow MainTab; // 0x29 (1)
	enum class Unknow WeaponSubTab; // 0x2A (1)
	enum class Unknow AttachmentSubTab; // 0x2B (1)
	enum class Unknow WearableSubTab; // 0x2C (1)
	enum class Unknow CustomSubTab; // 0x2D (1)
	enum class Unknow GearSubTab; // 0x2E (1)
};

// WidgetBlueprintGeneratedClass B.B
struct UB : UUserWidget {
	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown BackgroundBlurFadeIn; // 0x250 (8)
	struct Unknown Idle; // 0x258 (8)
	struct Unknown BackgroundBlur_1; // 0x260 (8)
	struct Unknown BT; // 0x268 (8)
	struct Unknown Btn; // 0x270 (8)
	struct Unknown Btn; // 0x278 (8)
	struct Unknown Btn; // 0x280 (8)
	struct Unknown Canvas_Main; // 0x288 (8)
	struct Unknown KillcamBtns; // 0x290 (8)
	struct Unknown MemberChangeBox; // 0x298 (8)
	struct Unknown TextDepth_Replay; // 0x2A0 (8)
	struct Unknown U; // 0x2A8 (8)
	char bIsKillCam : 0; // 0x2B0 (1)

	struct Unknown GetInteractiveWidget(); // Function B.B.GetInteractiveWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetTargetPlayerInfo(struct Unknown PlayerState); // Function B.B.SetTargetPlayerInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	enum class Unknow GetVisibility_1(); // Function B.B.GetVisibility_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct FText GetText_1(); // Function B.B.GetText_1(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetReplayBtn(char bVisiable); // Function B.B.SetReplayBtn(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetTargetBtn(char bVisiable); // Function B.B.SetTargetBtn(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddCoreInfoRouteping(struct Unknown PlayerState); // Function B.B.AddCoreInfoRouteping(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddCoreInfoSmartping(struct Unknown PlayerState); // Function B.B.AddCoreInfoSmartping(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddKillMsgByMolotov(struct FText& Killer, struct FText& WeaponName, struct FText& Victim, char bHeasShot, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID); // Function B.B.AddKillMsgByMolotov(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddKillMsgByVehicle(struct FText& Killer, struct FText& Victim, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID); // Function B.B.AddKillMsgByVehicle(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddKillMsgByWeapon(struct FText& Killer, struct FText& WeaponName, struct FText& Victim, char bHeasShot, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID); // Function B.B.AddKillMsgByWeapon(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddKillMsgCrash(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function B.B.AddKillMsgCrash(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddKillMsgFallToDeath(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function B.B.AddKillMsgFallToDeath(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddKillMsgKnockOut(struct FText& Killer, struct FText& Victim, char bLocalKiller, char bByTeam, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t KillerTierID, int32_t DiedTierID); // Function B.B.AddKillMsgKnockOut(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddKillMsgMagneticField(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function B.B.AddKillMsgMagneticField(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddKillMsgNoOxygen(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function B.B.AddKillMsgNoOxygen(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddKillMsgRedZone(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function B.B.AddKillMsgRedZone(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddKillMsgSuicide(struct FText& Victim, char bTeamDead, int32_t AliveCount, char bKnockOut, int32_t DiedTierID); // Function B.B.AddKillMsgSuicide(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddPerkMessage(struct FName PerkName, int32_t Level); // Function B.B.AddPerkMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddPingMessage(struct FString MessageTag, char UsingBackGround); // Function B.B.AddPingMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddRequestMessage(struct Unknown PlayerState, struct FString Message); // Function B.B.AddRequestMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Close(); // Function B.B.Close(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void FinishPerkSpin(enum class Unknow LevelUpType); // Function B.B.FinishPerkSpin(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void HideAmplifier(); // Function B.B.HideAmplifier(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void HideBlueZoneNotiMessage(); // Function B.B.HideBlueZoneNotiMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void HideMinimapWidget(); // Function B.B.HideMinimapWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void HideTeamPositionWidget(); // Function B.B.HideTeamPositionWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void HideVehicleWidget(); // Function B.B.HideVehicleWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void LevelUpEvent(struct Unknown PerkInfo, int32_t CurrentLevel, enum class Unknow LevelUpType, struct Unknown DisplayAbility, int32_t LastLevel); // Function B.B.LevelUpEvent(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnChangedToggleType(enum class Unknow PreType, enum class Unknow CurrentType); // Function B.B.OnChangedToggleType(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Open(); // Function B.B.Open(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OpenMainMenu(); // Function B.B.OpenMainMenu(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void PlaySupplyBoxMessage(struct FString Message); // Function B.B.PlaySupplyBoxMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ResetMiniMapPlayers(); // Function B.B.ResetMiniMapPlayers(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ResetWorldMap(); // Function B.B.ResetWorldMap(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetNickName(struct FText& NickName); // Function B.B.SetNickName(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetToggleMinimap(char bToggle); // Function B.B.SetToggleMinimap(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowAmplifier(struct FString InText); // Function B.B.ShowAmplifier(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowBlueZoneNotiMessage(struct FString Title, struct FString Desc); // Function B.B.ShowBlueZoneNotiMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowCommonMessage(struct Unknown& MessageInfo); // Function B.B.ShowCommonMessage(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowDeathAndAliveMessage(struct FText& Victim, int32_t AliveCount); // Function B.B.ShowDeathAndAliveMessage(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowDeathUserWidget(struct Unknown& Info); // Function B.B.ShowDeathUserWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowEnergyItemUse(int32_t Type); // Function B.B.ShowEnergyItemUse(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowGameProgressMessage(int32_t Type, int32_t Time); // Function B.B.ShowGameProgressMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowGameWaitMessage(int32_t Time); // Function B.B.ShowGameWaitMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowHittedDamage(struct Unknown InstigatorCharacter); // Function B.B.ShowHittedDamage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowInventoryNotEnoughSpaceMessage(); // Function B.B.ShowInventoryNotEnoughSpaceMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowLineOfFire(struct Unknown& Pos); // Function B.B.ShowLineOfFire(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowMinimapWidget(); // Function B.B.ShowMinimapWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowMyKillInfo(struct FText& WeaponName, struct FText& Victim, int32_t KillCount, int32_t AliveCount, char bHeadShot, char bTeamKill); // Function B.B.ShowMyKillInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowMyKnockOutInfo(struct FText& WeaponName, struct FText& Victim, char bHeadShot, char bTeamKill); // Function B.B.ShowMyKnockOutInfo(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowNuclearMessage(int32_t Count); // Function B.B.ShowNuclearMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowRedZoneBombMessage(); // Function B.B.ShowRedZoneBombMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowRedZoneStartMessage(); // Function B.B.ShowRedZoneStartMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowReverseSideTeamPositionWidget(int32_t TeamIconIndex, float Angle, struct Unknown ScreenMaxSize); // Function B.B.ShowReverseSideTeamPositionWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowTeamPositionWidget(int32_t TeamIndex, struct Unknown ScreenPosition, char bNetCullDistance); // Function B.B.ShowTeamPositionWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowVehicleWidget(struct Unknown VehicleSeat); // Function B.B.ShowVehicleWidget(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void TeamInfoVisibility(char bState); // Function B.B.TeamInfoVisibility(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ToggleMiniMap(); // Function B.B.ToggleMiniMap(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdateLineOfFire(struct Unknown& Pos, char LastUpdate, float delataTime); // Function B.B.UpdateLineOfFire(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__Btn(); // Function B.B.BndEvt__Btn(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__Btn(); // Function B.B.BndEvt__Btn(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__Btn(); // Function B.B.BndEvt__Btn(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__Btn(); // Function B.B.BndEvt__Btn(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OpenPopup(); // Function B.B.OpenPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void StartBackGroundBlur(); // Function B.B.StartBackGroundBlur(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ResetBackGroundBlur(); // Function B.B.ResetBackGroundBlur(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function B.B.BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddCoreInfoRequestResuscitation(struct Unknown PlayerState); // Function B.B.AddCoreInfoRequestResuscitation(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ClosePopup(); // Function B.B.ClosePopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void HideAnim(); // Function B.B.HideAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowAnim(); // Function B.B.ShowAnim(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : UActor {
	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown WorldViewCamera; // 0x318 (8)
	struct Unknown FarCamera; // 0x320 (8)
	struct Unknown NearCamera; // 0x328 (8)
	struct Unknown DefaultSceneRoot; // 0x330 (8)
	struct Unknown CharacterRef; // 0x338 (8)
	struct Unknown TargetNearCameraTransform; // 0x340 (48)
	float DeltaTime; // 0x370 (4)
	struct Unknown TargetFarCameraTransform; // 0x380 (48)
	struct Unknown PlayerControllerRef; // 0x3B0 (8)
	char bIsBackgroundScene : 0; // 0x3B8 (1)
	struct TArray<Unknown> WinTeamCharacters; // 0x3C0 (16)
	struct TArray<Unknown> DuoLocation_Near; // 0x3D0 (16)
	struct Unknown CharacterOriginLocation; // 0x3E0 (12)
	struct TArray<Unknown> DuoRotation_Near; // 0x3F0 (16)
	struct TArray<Unknown> DuoLocation_Far; // 0x400 (16)
	struct TArray<Unknown> DuoRotation_Far; // 0x410 (16)
	struct TArray<Unknown> TrioLocation_Near; // 0x420 (16)
	struct TArray<Unknown> TrioRotation_Near; // 0x430 (16)
	struct TArray<Unknown> TrioLocation_Far; // 0x440 (16)
	struct TArray<Unknown> TrioRotation_Far; // 0x450 (16)
	struct TArray<Unknown> SquadLocation_Near; // 0x460 (16)
	struct TArray<Unknown> SquadRotation_Near; // 0x470 (16)
	struct TArray<Unknown> SquadLocation_Far; // 0x480 (16)
	struct TArray<Unknown> SquadRotation_Far; // 0x490 (16)
	struct Unknown CharacterOriginRotation; // 0x4A0 (12)

	void ResetCharacter(); // Function B.B.ResetCharacter(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetFloorLocation(struct Unknown InLocation, struct Unknown& OutLocation); // Function B.B.GetFloorLocation(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdateCharacterRotation(); // Function B.B.UpdateCharacterRotation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdateCharacterLocation(); // Function B.B.UpdateCharacterLocation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void PlayWinAnimation(struct Unknown TargetCharacter); // Function B.B.PlayWinAnimation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetWinMontage(struct Unknown TargetCharacter, struct Unknown& WinMontage); // Function B.B.GetWinMontage(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CheckWorldViewCameraLocationRange(); // Function B.B.CheckWorldViewCameraLocationRange(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetActiveCamera(struct Unknown& ActiveCamera); // Function B.B.GetActiveCamera(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void PreventCameraWallCollision(); // Function B.B.PreventCameraWallCollision(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InitReferences(char& bSuccess); // Function B.B.InitReferences(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Start(); // Function B.B.Start(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelProjectileMolotov {
	struct Unknown UberGraphFrame; // 0x398 (8)
	float TextureScale; // 0x3A0 (4)
	float BurnArea; // 0x3A4 (4)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : UActor {
	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown WorldViewCamera; // 0x318 (8)
	struct Unknown FarCamera; // 0x320 (8)
	struct Unknown NearCamera; // 0x328 (8)
	struct Unknown DefaultSceneRoot; // 0x330 (8)
	struct Unknown CharacterRef; // 0x338 (8)
	struct Unknown TargetNearCameraTransform; // 0x340 (48)
	float DeltaTime; // 0x370 (4)
	struct Unknown TargetFarCameraTransform; // 0x380 (48)
	struct Unknown PlayerControllerRef; // 0x3B0 (8)
	char bIsBackgroundScene : 0; // 0x3B8 (1)
	struct TArray<Unknown> WinTeamCharacters; // 0x3C0 (16)
	struct TArray<Unknown> DuoLocation_Near; // 0x3D0 (16)
	struct Unknown CharacterOriginLocation; // 0x3E0 (12)
	struct TArray<Unknown> DuoRotation_Near; // 0x3F0 (16)
	struct TArray<Unknown> DuoLocation_Far; // 0x400 (16)
	struct TArray<Unknown> DuoRotation_Far; // 0x410 (16)
	struct TArray<Unknown> TrioLocation_Near; // 0x420 (16)
	struct TArray<Unknown> TrioRotation_Near; // 0x430 (16)
	struct TArray<Unknown> TrioLocation_Far; // 0x440 (16)
	struct TArray<Unknown> TrioRotation_Far; // 0x450 (16)
	struct TArray<Unknown> SquadLocation_Near; // 0x460 (16)
	struct TArray<Unknown> SquadRotation_Near; // 0x470 (16)
	struct TArray<Unknown> SquadLocation_Far; // 0x480 (16)
	struct TArray<Unknown> SquadRotation_Far; // 0x490 (16)
	struct Unknown CharacterOriginRotation; // 0x4A0 (12)

	void GetFloorLocation(struct Unknown InLocation, struct Unknown& OutLocation); // Function B.B.GetFloorLocation(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdateCharacterRotation(); // Function B.B.UpdateCharacterRotation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdateCharacterLocation(); // Function B.B.UpdateCharacterLocation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void PlayWinAnimation(struct Unknown TargetCharacter); // Function B.B.PlayWinAnimation(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetWinMontage(struct Unknown TargetCharacter, struct Unknown& WinMontage); // Function B.B.GetWinMontage(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CheckWorldViewCameraLocationRange(); // Function B.B.CheckWorldViewCameraLocationRange(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetActiveCamera(struct Unknown& ActiveCamera); // Function B.B.GetActiveCamera(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void PreventCameraWallCollision(); // Function B.B.PreventCameraWallCollision(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InitReferences(char& bSuccess); // Function B.B.InitReferences(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Start(); // Function B.B.Start(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnFinishMatchEndAnimation(); // Function B.B.OnFinishMatchEndAnimation(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelMaterialEffectActor {
	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// WidgetBlueprintGeneratedClass B.B
struct UB : UBravoHotelLoadingWidget {
	struct Unknown UberGraphFrame; // 0x2A0 (8)
	struct Unknown HorizontalBox_1; // 0x2A8 (8)
	struct Unknown Image_bg; // 0x2B0 (8)
	struct Unknown RichTextBlock; // 0x2B8 (8)
	struct Unknown RichTextBlock_Title; // 0x2C0 (8)
	struct Unknown Throbber_1; // 0x2C8 (8)
	struct Unknown VerticalBox_2; // 0x2D0 (8)
	struct TArray<Unknown> Textures; // 0x2D8 (16)
	struct Unknown Game; // 0x2E8 (8)
	struct FString TempString; // 0x2F0 (16)
	char Key : 0; // 0x300 (1)
	int32_t RandomTemp; // 0x304 (4)
	int32_t ImageIndex; // 0x308 (4)
	int32_t TitleIndex; // 0x30C (4)

	void SetInfo(enum class Unknow Type, struct Unknown& OutData); // Function B.B.SetInfo(Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnLoaded_26F99F1744F423909EA588B7F2CD8F0A(struct Unknown Loaded); // Function B.B.OnLoaded_26F99F1744F423909EA588B7F2CD8F0A(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Load(struct TSoftObjectPtr<Unknown> Texture); // Function B.B.Load(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AsyncLoad(struct TSoftObjectPtr<Unknown> Texture); // Function B.B.AsyncLoad(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveEndAfterLoading(); // Function B.B.ReceiveEndAfterLoading(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Update(struct Unknown& Data); // Function B.B.Update(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetDesc(struct FString Desc); // Function B.B.SetDesc(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetTitle(struct FText Title); // Function B.B.SetTitle(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetImage(struct Unknown Imgae); // Function B.B.SetImage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Destruct(); // Function B.B.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowDesc(float DelayTime); // Function B.B.ShowDesc(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown BravoHotelVehicleTire_R; // 0xD68 (8)
	struct Unknown BravoHotelVehicleTire_F; // 0xD70 (8)
	struct Unknown VehicleSeatCollision1; // 0xD78 (8)
	struct Unknown VehicleSeatCollision; // 0xD80 (8)
	struct Unknown BravoHotelVehicleSeat02; // 0xD88 (8)
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelAreaSkillZoneWetFog {
	struct Unknown UberGraphFrame; // 0x388 (8)

	void ActivateEffect(struct Unknown Character); // Function B.B.ActivateEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void DeactivateEffect(struct Unknown Character); // Function B.B.DeactivateEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BPSetAreaSkillInfo(); // Function B.B.BPSetAreaSkillInfo(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void StartDestroy(); // Function B.B.StartDestroy(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// WidgetBlueprintGeneratedClass B.B
struct UB : UUserWidget {
	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown U; // 0x250 (8)
	struct FMulticastInlineDelegate OnTriedToLogin; // 0x258 (16)
	struct FMulticastInlineDelegate OnTriedToTestLogin; // 0x268 (16)
	char bEnableDevServer : 0; // 0x278 (1)
	struct FMulticastInlineDelegate OnMoveLobby; // 0x280 (16)
	struct FMulticastInlineDelegate OnPlayBGM; // 0x290 (16)
	struct FMulticastInlineDelegate OnSaveUserData; // 0x2A0 (16)
	char bPlayBGM : 0; // 0x2B0 (1)
	char b : 0; // 0x2B1 (1)
	struct FMulticastInlineDelegate OnSkipTitle; // 0x2B8 (16)

	void HideExitPopup(); // Function B.B.HideExitPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Login(); // Function B.B.Login(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ValidateUserName(struct FText InputUserName, char& ret, struct FName& UserName); // Function B.B.ValidateUserName(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Construct(); // Function B.B.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnLogin(); // Function B.B.OnLogin(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowMouseCursor(); // Function B.B.ShowMouseCursor(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnLoginSucceeded(); // Function B.B.OnLoginSucceeded(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnLoginFailed(int32_t ErrorIndex, struct FString ErrorID, struct FString Parameters); // Function B.B.OnLoginFailed(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnSkipTitle__DelegateSignature(); // Function B.B.OnSkipTitle__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnSaveUserData__DelegateSignature(); // Function B.B.OnSaveUserData__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnPlayBGM__DelegateSignature(); // Function B.B.OnPlayBGM__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnMoveLobby__DelegateSignature(); // Function B.B.OnMoveLobby__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnTriedToTestLogin__DelegateSignature(struct FName UserName, struct FString TestIP); // Function B.B.OnTriedToTestLogin__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnTriedToLogin__DelegateSignature(struct FName UserName, struct FString Password); // Function B.B.OnTriedToLogin__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelMaterialEffectActor {
	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct UB : USavedInventorySettings {
	char ShowPerkSlot : 0; // 0x30 (1)
};

// BlueprintGeneratedClass B.B
struct UB : ULadderComponent {
	struct Unknown UberGraphFrame; // 0x210 (8)
	char NeedToChangeHand : 0; // 0x218 (1)
	float CrntAxisValue; // 0x21C (4)
	float GoalLocationZ; // 0x220 (4)
	char NeedMoveOnLadder : 0; // 0x224 (1)
	float MotionMinAlpha; // 0x228 (4)
	char CanStopMotion : 0; // 0x22C (1)
	float DirectSnapLocZ; // 0x230 (4)
	float DeltaSecond; // 0x234 (4)
	float LastSecond; // 0x238 (4)
	int32_t AdditionalStepCount; // 0x23C (4)

	void CalcLadderInteractionType(); // Function B.B.CalcLadderInteractionType(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CanCancelMotion(char& CanCancel); // Function B.B.CanCancelMotion(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetEndLocation(struct Unknown& LadderRelativeLocation); // Function B.B.GetEndLocation(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetMovingInfo(); // Function B.B.SetMovingInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void MoveInMotion(); // Function B.B.MoveInMotion(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ActiveCameraInterp(); // Function B.B.ActiveCameraInterp(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CalcSnappingTime(); // Function B.B.CalcSnappingTime(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InitializeLadder(); // Function B.B.InitializeLadder(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetMovementOnLadder(float AxisValue); // Function B.B.SetMovementOnLadder(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddMovementOnLadder(float AxisValue); // Function B.B.AddMovementOnLadder(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CheckCanExitLadder(char IsTop, char& Result); // Function B.B.CheckCanExitLadder(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ChangeMovementMode(char OnLadder); // Function B.B.ChangeMovementMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CalcTargetLocation(enum class Unknow InLadderInteractionType, struct Unknown& OutTargetLocation); // Function B.B.CalcTargetLocation(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetCharacterClimbSettings(char ClimbOn); // Function B.B.SetCharacterClimbSettings(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SnapToLadder(); // Function B.B.SnapToLadder(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetSnappingInfo(float& DirectSnapLocZ); // Function B.B.SetSnappingInfo(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetLadderPos(); // Function B.B.SetLadderPos(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CheckLadderEnd(float Input, char& Result, char& IsTop, float& InputScale); // Function B.B.CheckLadderEnd(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnNotifyEnd_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName); // Function B.B.OnNotifyEnd_ABB5B46F49E086A9FC6EC9AE877A3650(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnNotifyBegin_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName); // Function B.B.OnNotifyBegin_ABB5B46F49E086A9FC6EC9AE877A3650(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnInterrupted_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName); // Function B.B.OnInterrupted_ABB5B46F49E086A9FC6EC9AE877A3650(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnBlendOut_ABB5B46F49E086A9(struct FName NotifyName); // Function B.B.OnBlendOut_ABB5B46F49E086A9(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnCompleted_ABB5B46F49E086A9FC6EC9AE877A3650(struct FName NotifyName); // Function B.B.OnCompleted_ABB5B46F49E086A9FC6EC9AE877A3650(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ServerSetMovementOnLadder(struct Unknown LadderLocation, float AxisValue); // Function B.B.ServerSetMovementOnLadder(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void StopMontage(struct Unknown StopMontage); // Function B.B.StopMontage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CompleteExitingLadder(); // Function B.B.CompleteExitingLadder(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CompleteEnteringLadder(); // Function B.B.CompleteEnteringLadder(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void MultiStopMontage(struct Unknown StopMontage); // Function B.B.MultiStopMontage(Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ServerStopMontage(struct Unknown StopMontage); // Function B.B.ServerStopMontage(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void LadderStateEvent(); // Function B.B.LadderStateEvent(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ServerDownLadder(enum class Unknow LadderInteractionType); // Function B.B.ServerDownLadder(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void PlayLadderAnim(); // Function B.B.PlayLadderAnim(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void StartMoveInMotion(); // Function B.B.StartMoveInMotion(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CancelMotion(float AxisValue); // Function B.B.CancelMotion(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExceptionSetUsingLadder(struct Unknown UsingLadder); // Function B.B.ExceptionSetUsingLadder(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ServerUseLadder(enum class Unknow LadderInteractionType, float SnappingTime, float DirectSnapLocZ, struct Unknown UsingLadder); // Function B.B.ServerUseLadder(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void MultiUseLadder(enum class Unknow LadderInteractionType, float SnappingTime, float DirectSnapLocZ, struct Unknown UsingLadder); // Function B.B.MultiUseLadder(Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void MultiDownLadder(enum class Unknow LadderInteractionType); // Function B.B.MultiDownLadder(Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void StartStopMontage(struct Unknown StopMontage); // Function B.B.StartStopMontage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ServerSetLadderState(enum class Unknow LadderState); // Function B.B.ServerSetLadderState(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_StartUseladder(); // Function B.B.K2_StartUseladder(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_StopUseLadder(); // Function B.B.K2_StopUseLadder(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_MoveRightOnLadder(float AxisValue); // Function B.B.K2_MoveRightOnLadder(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_MoveForwardOnLadder(float AxisValue); // Function B.B.K2_MoveForwardOnLadder(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelGrenadeWeapon {
	struct Unknown UberGraphFrame; // 0x1F20 (8)
	struct Unknown StaticMesh_Ring; // 0x1F28 (8)
	struct Unknown StaticMesh_Lever; // 0x1F30 (8)
	float Timeline_0_Lerp_77CED3694A7ECD58C02266AF5F5B5991; // 0x1F38 (4)
	char Timeline_0__Direction_77CED3694A7ECD58C02266AF5F5B5991; // 0x1F3C (1)
	struct Unknown Timeline_1; // 0x1F40 (8)
	float Lerp_Lerp_EDD5977E4E850EC460B1E599F1FF45F8; // 0x1F48 (4)
	char Lerp__Direction_EDD5977E4E850EC460B1E599F1FF45F8; // 0x1F4C (1)
	struct Unknown Lerp; // 0x1F50 (8)
	struct Unknown InterpOffset; // 0x1F58 (12)
	struct Unknown DesiredLocation; // 0x1F64 (12)
	struct Unknown InitalLocalVelocity; // 0x1F70 (12)
	struct Unknown DesiredLocation_Ing; // 0x1F7C (12)
	struct Unknown InitalLocalVelocity_Ing; // 0x1F88 (12)
	enum class Unknow ThrowingWeaponState; // 0x1F94 (1)
	char ThrowingAction_Bool : 0; // 0x1F95 (1)
	struct Unknown DesiredLocation_3; // 0x1F98 (12)
	struct Unknown DesiredLocation_2_Ing; // 0x1FA4 (12)
	struct Unknown InitalLocalVelocity_3; // 0x1FB0 (12)
	struct Unknown InitalLocalVelocity_2_ing; // 0x1FBC (12)
	float PathLifeTime; // 0x1FC8 (4)
	float TimeInterval; // 0x1FCC (4)
	struct Unknown IndicatorComponent_2; // 0x1FD0 (8)
	struct Unknown IndicatorComponent_3; // 0x1FD8 (8)
	struct Unknown TrajectoryComponent_2; // 0x1FE0 (8)
	struct Unknown TrajectoryComponent_3; // 0x1FE8 (8)

	struct Unknown GetDebugInfo(); // Function B.B.GetDebugInfo(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CheckNeedDrawing(char& Need); // Function B.B.CheckNeedDrawing(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void IsReplayTarget(char& IsReplayTarget); // Function B.B.IsReplayTarget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetProjectileLocationAndVelocity(int32_t Index, struct Unknown& Location, struct Unknown& Velocity); // Function B.B.GetProjectileLocationAndVelocity(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ThrowingAction(enum class Unknow ThrowingWeaponState, char Condition); // Function B.B.ThrowingAction(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct Unknown Add(); // Function B.B.Add(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CalcGrenadeWeaponLocationOffset(struct Unknown Offest); // Function B.B.CalcGrenadeWeaponLocationOffset(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Lerp__FinishedFunc(); // Function B.B.Lerp__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Lerp__UpdateFunc(); // Function B.B.Lerp__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Timeline_0__FinishedFunc(); // Function B.B.Timeline_0__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Timeline_0__UpdateFunc(); // Function B.B.Timeline_0__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void DrawProjectileTrajectory(); // Function B.B.DrawProjectileTrajectory(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveDestroyed(); // Function B.B.ReceiveDestroyed(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnChangeThrowingWeaponStateDelegate_Event(enum class Unknow ThrowingWeaponState); // Function B.B.OnChangeThrowingWeaponStateDelegate_Event(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnChangeThrowingTypeDelegate_Event(enum class Unknow ThrowingType); // Function B.B.OnChangeThrowingTypeDelegate_Event(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void DrawProjectileTrajectory_ChangeType(); // Function B.B.DrawProjectileTrajectory_ChangeType(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnCharacterGroundStateChangeDelegate(enum class Unknow State); // Function B.B.OnCharacterGroundStateChangeDelegate(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InitProjectileTrajectory(); // Function B.B.InitProjectileTrajectory(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnFire(); // Function B.B.OnFire(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ForceUpdateProjectileTrajectory(); // Function B.B.ForceUpdateProjectileTrajectory(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnChangedReplayViewMode_2(char IsPlayer); // Function B.B.OnChangedReplayViewMode_2(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnOwnerBecomeViewTarget(); // Function B.B.K2_OnOwnerBecomeViewTarget(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnOwnerEndViewTarget(); // Function B.B.K2_OnOwnerEndViewTarget(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveEndPlay(char EndPlayReason); // Function B.B.ReceiveEndPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABHPersonalSupplyBox {
	struct Unknown UberGraphFrame; // 0x378 (8)
	struct Unknown StaticMeshUnassigned; // 0x380 (8)
	struct Unknown StaticMeshAssigned; // 0x388 (8)
	float LandingTimer; // 0x390 (4)
	char bLanding : 0; // 0x394 (1)
	struct TArray<Unknown> ItemResult; // 0x398 (16)
	float ParachuteTimer; // 0x3A8 (4)
	float VisibleValue; // 0x3AC (4)
	char VisibleAnimationState : 0; // 0x3B0 (1)

	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdateEffect(float InterpValue); // Function B.B.UpdateEffect(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ChangeBoxMesh(char IsMyBox); // Function B.B.ChangeBoxMesh(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Visible(char IsShow); // Function B.B.Visible(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnChangeState(enum class Unknow StateType); // Function B.B.OnChangeState(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelInventoryCharacter {
	struct Unknown SpotLight1; // 0x3D8 (8)
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelHeartBeatSensor {
	struct Unknown UberGraphFrame; // 0x1BF0 (8)
	struct Unknown InternalPP; // 0x1BF8 (8)
	struct Unknown EffectMaterial; // 0x1C00 (8)
	char IsActive : 0; // 0x1C08 (1)
	struct Unknown m; // 0x1C10 (8)
	struct Unknown i; // 0x1C18 (8)
	struct Unknown Radial; // 0x1C20 (56)
	float Radial; // 0x1C58 (4)
	int32_t Radial; // 0x1C5C (4)
	struct Unknown Radial; // 0x1C60 (8)
	struct Unknown Radial; // 0x1C68 (8)
	struct Unknown Native; // 0x1C70 (1472)
	struct Unknown mSelectiveColor; // 0x2230 (8)
	struct Unknown iSelectiveColor; // 0x2238 (8)
	struct Unknown Selective; // 0x2240 (56)
	struct Unknown Selective; // 0x2278 (16)
	float Selective; // 0x2288 (4)
	float Selective; // 0x228C (4)
	float Selective; // 0x2290 (4)
	float CurrentBlur; // 0x2294 (4)
	float CurrentSelective; // 0x2298 (4)
	float FadeInSpeed; // 0x229C (4)
	float FadeOutSpeed; // 0x22A0 (4)
	struct Unknown mMonochrome; // 0x22A8 (8)
	struct Unknown iMonochrome; // 0x22B0 (8)
	struct Unknown Monochrome; // 0x22B8 (56)
	struct Unknown Monochrome; // 0x22F0 (16)
	struct Unknown MBlackColor; // 0x2300 (8)
	struct Unknown IBlackColor; // 0x2308 (8)
	struct Unknown BlackColor; // 0x2310 (56)
	float ActiveDelayTime; // 0x2348 (4)
	struct Unknown MainWidget; // 0x2350 (8)
	struct Unknown TopWidget; // 0x2358 (8)

	void GetTopWidget(struct Unknown& TopWidget); // Function B.B.GetTopWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetMainWidget(struct Unknown& MainWidget); // Function B.B.GetMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void IsOwnerLocallyControlled(char& bIsLocallyControlled); // Function B.B.IsOwnerLocallyControlled(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BlackColorFunc(char IsEnabled); // Function B.B.BlackColorFunc(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Monochrome(char IsEnabled); // Function B.B.Monochrome(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Selective(char IsEnabled); // Function B.B.Selective(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetEffectPriority(int32_t Priority, struct Unknown Material); // Function B.B.SetEffectPriority(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetAdvancedEffectFeatures(struct Unknown Features, struct Unknown Material, struct Unknown Dynamic); // Function B.B.SetAdvancedEffectFeatures(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Radial(char IsEnabled); // Function B.B.Radial(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CreateEffectMaterialInstance(struct Unknown Material, struct Unknown& Instance); // Function B.B.CreateEffectMaterialInstance(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ScreenEffectEvent(char RadialBlur, char BlackColor); // Function B.B.ScreenEffectEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnPostEventAtLocationEvent(struct FString EventKey, struct Unknown& Location); // Function B.B.OnPostEventAtLocationEvent(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddActiveEvent(); // Function B.B.AddActiveEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnEquip(); // Function B.B.K2_OnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveDestroyed(); // Function B.B.ReceiveDestroyed(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnUnEquip(); // Function B.B.K2_OnUnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnClickedHeartBeatSensor(); // Function B.B.OnClickedHeartBeatSensor(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnActiveHeartBeatSensor(); // Function B.B.OnActiveHeartBeatSensor(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnDeactiveHeartBeatSensor(); // Function B.B.OnDeactiveHeartBeatSensor(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : UActor {
	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown Widget; // 0x318 (8)
	struct Unknown DefaultSceneRoot; // 0x320 (8)
	struct Unknown TargetCharacter; // 0x328 (8)
	struct Unknown LoudnessCurve; // 0x330 (8)
	float HeartBeatSensorLength; // 0x338 (4)
	enum class Unknow TagetGroundState; // 0x33C (1)
	char IsFiring : 0; // 0x33D (1)
	struct Unknown CurrentWeapon; // 0x340 (8)
	struct Unknown SingleTimerEvent; // 0x348 (8)
	char IsSingleFiring : 0; // 0x350 (1)

	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetTarget(struct Unknown TargetCharacter, float HeartBeatSensorLength); // Function B.B.SetTarget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void a_1(float DeltaSeconds, struct Unknown OldLocation, struct Unknown OldVelocity); // Function B.B.a_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelMK3DSpectatorPawn {
	struct Unknown UberGraphFrame; // 0x3C0 (8)
	struct Unknown FreeCam; // 0x3C8 (8)
	struct Unknown SpringArm; // 0x3D0 (8)
	struct Unknown ReplayMainWidget; // 0x3D8 (8)
	char ViewMode; // 0x3E0 (1)

	void GetReplayWidget(struct Unknown& ReplayMainWidget); // Function B.B.GetReplayWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnChangedCurrentSpeedLevel(); // Function B.B.OnChangedCurrentSpeedLevel(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown UberGraphFrame; // 0x420 (8)
	struct Unknown Sphere; // 0x428 (8)

	void SetTexture5mm(); // Function B.B.SetTexture5mm(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABattleRoyaleGameMode_Login {
	struct Unknown DefaultSceneRoot; // 0x648 (8)
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelMK3DReplayController {
	struct Unknown UberGraphFrame; // 0xAB0 (8)
	struct Unknown B; // 0xAB8 (8)
	int32_t OpenedWidgetNum; // 0xAC0 (4)
	char ViewMode; // 0xAC4 (1)

	struct Unknown GetHUDInteractionComponent(); // Function B.B.GetHUDInteractionComponent(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CheckItemListHide(enum class Unknow CameraType); // Function B.B.CheckItemListHide(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetReplaySpectatorPawn(struct Unknown& ReplaySpectatorPawn); // Function B.B.GetReplaySpectatorPawn(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InitWorldMapOption(); // Function B.B.InitWorldMapOption(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetMaxViewportSize(); // Function B.B.SetMaxViewportSize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnChangeViewMode(); // Function B.B.OnChangeViewMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnChangeCameraType(enum class Unknow CameraType); // Function B.B.OnChangeCameraType(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetVisibilityPerkDeck(); // Function B.B.SetVisibilityPerkDeck(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Init(); // Function B.B.Init(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ChangeInputMode(char ShowMouse); // Function B.B.ChangeInputMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CheckInputMode(); // Function B.B.CheckInputMode(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_CloseUI_K2Node_InputActionEvent_3(struct Unknown Key); // Function B.B.InpActEvt_CloseUI_K2Node_InputActionEvent_3(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_MiniMap_K2Node_InputActionEvent_2(struct Unknown Key); // Function B.B.InpActEvt_MiniMap_K2Node_InputActionEvent_2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_1(struct Unknown Key); // Function B.B.InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_1(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnInputWorldMap(); // Function B.B.OnInputWorldMap(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnInputReplayTimelineWidget(); // Function B.B.OnInputReplayTimelineWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnInputItemListWidget(); // Function B.B.OnInputItemListWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnInputPlayerListWidget(); // Function B.B.OnInputPlayerListWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ChangeCameraTypeDelegate_Event_1(enum class Unknow CameraType, struct FString TargetPlayerName); // Function B.B.ChangeCameraTypeDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ChangeViewModeDelegate_Event_1(char ViewMode); // Function B.B.ChangeViewModeDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnViewportSizedBP(); // Function B.B.OnViewportSizedBP(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnInputItemList(); // Function B.B.OnInputItemList(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelSpectatorController {
	struct Unknown UberGraphFrame; // 0x13F0 (8)
	struct Unknown Observer; // 0x13F8 (8)
	char PlayingKillCam : 0; // 0x1400 (1)
	struct Unknown AfterGameHUD; // 0x1408 (8)
	struct Unknown GameInstanceRef; // 0x1410 (8)
	char bKillCamFinish : 0; // 0x1418 (1)

	void SetObserver(); // Function B.B.SetObserver(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void NextObservingTarget(); // Function B.B.NextObservingTarget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void PreObservingTarget(); // Function B.B.PreObservingTarget(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetKillCamStartTime(); // Function B.B.SetKillCamStartTime(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnKillcamFinish(); // Function B.B.OnKillcamFinish(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetTargetPlayerInfo(struct Unknown PlayerState); // Function B.B.SetTargetPlayerInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelCharacterPrefab {
	struct Unknown UberGraphFrame; // 0x3A60 (8)
	struct Unknown B; // 0x3A68 (8)
	struct Unknown OutBlueZone; // 0x3A70 (8)
	struct Unknown B; // 0x3A78 (8)
	struct Unknown DevCamera_ChildActor; // 0x3A80 (8)
	struct Unknown TeamInfoUpdater; // 0x3A88 (8)
	float VelocityZ_LandingDamage; // 0x3A90 (4)
	struct Unknown CharacterPreviewRef; // 0x3A98 (8)
	struct Unknown Chat; // 0x3AA0 (8)
	char ShowChatToggle : 0; // 0x3AA8 (1)
	float CurrentViewportSizeX; // 0x3AAC (4)
	float CurrentViewportSizeY; // 0x3AB0 (4)
	char OutScreenPosition : 0; // 0x3AB4 (1)
	int32_t SightNumForTset; // 0x3AB8 (4)
	char bDefaultAmplifier : 0; // 0x3ABC (1)
	float CurrentTeamInfoHeight; // 0x3AC0 (4)

	void ForceInitRecordingCharacter(); // Function B.B.ForceInitRecordingCharacter(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CheckAimingCancelation(); // Function B.B.CheckAimingCancelation(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CorrectionScreenPosition(struct Unknown& ScreenPosition, char& RetOutScreenPosition); // Function B.B.CorrectionScreenPosition(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void LoadTableData(); // Function B.B.LoadTableData(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Six_K2Node_InputKeyEvent_7(struct Unknown Key); // Function B.B.InpActEvt_Six_K2Node_InputKeyEvent_7(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_RightBracket_K2Node_InputKeyEvent_6(struct Unknown Key); // Function B.B.InpActEvt_RightBracket_K2Node_InputKeyEvent_6(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_LeftBracket_K2Node_InputKeyEvent_5(struct Unknown Key); // Function B.B.InpActEvt_LeftBracket_K2Node_InputKeyEvent_5(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Divide_K2Node_InputKeyEvent_4(struct Unknown Key); // Function B.B.InpActEvt_Divide_K2Node_InputKeyEvent_4(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Hyphen_K2Node_InputKeyEvent_3(struct Unknown Key); // Function B.B.InpActEvt_Hyphen_K2Node_InputKeyEvent_3(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Ctrl_2(struct Unknown Key); // Function B.B.InpActEvt_Ctrl_2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Semicolon_K2Node_InputKeyEvent_1(struct Unknown Key); // Function B.B.InpActEvt_Semicolon_K2Node_InputKeyEvent_1(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_EnterSceneOfWin(); // Function B.B.K2_EnterSceneOfWin(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReadyTeleport(); // Function B.B.ReadyTeleport(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ServerPlayTeleportEffect(); // Function B.B.ServerPlayTeleportEffect(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void MultiPlayTeleportEffect(); // Function B.B.MultiPlayTeleportEffect(Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void PlayTeleportEffect(); // Function B.B.PlayTeleportEffect(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void DoTeleportEffect(); // Function B.B.DoTeleportEffect(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ServerCrazyJump(); // Function B.B.ServerCrazyJump(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ServerResetCrazyJump(); // Function B.B.ServerResetCrazyJump(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnGoParachute(); // Function B.B.K2_OnGoParachute(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ServerLaunch(struct Unknown LaunchVelocity); // Function B.B.ServerLaunch(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_Cheat_ToggleCharacterDebugCamera(); // Function B.B.K2_Cheat_ToggleCharacterDebugCamera(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_FPSK_OnStartADS(); // Function B.B.K2_FPSK_OnStartADS(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_FPSK_OnEndADS(); // Function B.B.K2_FPSK_OnEndADS(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SwitchMovementModeEvent(char MovementMode, enum class Unknow CustomMovementMode); // Function B.B.SwitchMovementModeEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ServerSwitchMovementModeEvent(char MovementMode, enum class Unknow CustomMovementMode); // Function B.B.ServerSwitchMovementModeEvent(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void MulticastSwitchMovementMode(char MovementMode, enum class Unknow CustomMovementMode); // Function B.B.MulticastSwitchMovementMode(Net|NetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void DoPlayDynamicMontage(struct Unknown AnimSequence, struct FName SlotName, float PlayRate); // Function B.B.DoPlayDynamicMontage(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ServerPlayDynamicMontage(struct Unknown AnimSequence, struct FName SlotName, float PlayRate); // Function B.B.ServerPlayDynamicMontage(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void MulticastPlayDynamicMontage(struct Unknown AnimSequence, struct FName SlotName, float PlayRate); // Function B.B.MulticastPlayDynamicMontage(Net|NetMulticast|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnLanded(struct Unknown& Hit); // Function B.B.OnLanded(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveDestroyed(); // Function B.B.ReceiveDestroyed(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InitRecordingCharacter(); // Function B.B.InitRecordingCharacter(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetVisibleOutBlueZoneBlizzard(char Visible); // Function B.B.SetVisibleOutBlueZoneBlizzard(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_UpdateMutable_PreviewPawn(char bChangeGender); // Function B.B.K2_UpdateMutable_PreviewPawn(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnDeath(); // Function B.B.OnDeath(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddCharacterRotation(float Val); // Function B.B.AddCharacterRotation(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetRecordingCharacterTickRate(float TickRate); // Function B.B.SetRecordingCharacterTickRate(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Spawn(); // Function B.B.Spawn(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown UberGraphFrame; // 0x3AC8 (8)
	struct Unknown Listener; // 0x3AD0 (8)
	float _P_Cam_Z_NewTrack_0_898B65D1462B08609DA61C81A7B52313; // 0x3AD8 (4)
	char _P_Cam_Z__Direction_898B65D1462B08609DA61C81A7B52313; // 0x3ADC (1)
	struct Unknown 3P_Cam_Z; // 0x3AE0 (8)
	struct Unknown CriticalUITimeHandler; // 0x3AE8 (8)
	struct Unknown DyingUITimeHandler; // 0x3AF0 (8)
	struct Unknown ClothHandler; // 0x3AF8 (8)
	struct Unknown ClothBallObject; // 0x3B00 (8)
	struct Unknown BallHandleLocation; // 0x3B08 (12)
	float GamepadInputModifier; // 0x3B14 (4)
	float BaseTurnRate; // 0x3B18 (4)
	float BaseLookUpRate; // 0x3B1C (4)
	struct TArray<Unknown> PerkLevelUpWidgets; // 0x3B20 (16)
	float PerkLevelUpWidthDepth; // 0x3B30 (4)
	struct Unknown AmplifierEffect; // 0x3B38 (8)
	float Cam_Shake_Radius; // 0x3B40 (4)
	struct Unknown MainWidget; // 0x3B48 (8)
	struct Unknown HeartBeatSensorEffect; // 0x3B50 (8)

	char IsEnableSpawnSupplyBox(struct Unknown TargetActor, struct FString& OutResult); // Function B.B.IsEnableSpawnSupplyBox(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	char IsInstancedFoliageActor(struct Unknown TargetActor); // Function B.B.IsInstancedFoliageActor(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetMainWidget(struct Unknown& MainWidget); // Function B.B.GetMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void 3P_Cam_Z__FinishedFunc(); // Function B.B.3P_Cam_Z__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void 3P_Cam_Z__UpdateFunc(); // Function B.B.3P_Cam_Z__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_19(struct Unknown Key); // Function B.B.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_19(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18(struct Unknown Key); // Function B.B.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_18(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_One_K2Node_InputKeyEvent_17(struct Unknown Key); // Function B.B.InpActEvt_One_K2Node_InputKeyEvent_17(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Two_K2Node_InputKeyEvent_16(struct Unknown Key); // Function B.B.InpActEvt_Two_K2Node_InputKeyEvent_16(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Three_K2Node_InputKeyEvent_15(struct Unknown Key); // Function B.B.InpActEvt_Three_K2Node_InputKeyEvent_15(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Four_K2Node_InputKeyEvent_14(struct Unknown Key); // Function B.B.InpActEvt_Four_K2Node_InputKeyEvent_14(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Five_K2Node_InputKeyEvent_13(struct Unknown Key); // Function B.B.InpActEvt_Five_K2Node_InputKeyEvent_13(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Six_K2Node_InputKeyEvent_12(struct Unknown Key); // Function B.B.InpActEvt_Six_K2Node_InputKeyEvent_12(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Seven_K2Node_InputKeyEvent_11(struct Unknown Key); // Function B.B.InpActEvt_Seven_K2Node_InputKeyEvent_11(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Eight_K2Node_InputKeyEvent_10(struct Unknown Key); // Function B.B.InpActEvt_Eight_K2Node_InputKeyEvent_10(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9(struct Unknown Key); // Function B.B.InpActEvt_Ctrl_One_K2Node_InputKeyEvent_9(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8(struct Unknown Key); // Function B.B.InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_8(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7(struct Unknown Key); // Function B.B.InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_7(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6(struct Unknown Key); // Function B.B.InpActEvt_Ctrl_Four_K2Node_InputKeyEvent_6(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5(struct Unknown Key); // Function B.B.InpActEvt_Ctrl_Five_K2Node_InputKeyEvent_5(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4(struct Unknown Key); // Function B.B.InpActEvt_Ctrl_Six_K2Node_InputKeyEvent_4(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3(struct Unknown Key); // Function B.B.InpActEvt_Ctrl_Seven_K2Node_InputKeyEvent_3(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2(struct Unknown Key); // Function B.B.InpActEvt_Ctrl_Eight_K2Node_InputKeyEvent_2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_NumPadZero_K2Node_InputKeyEvent_1(struct Unknown Key); // Function B.B.InpActEvt_NumPadZero_K2Node_InputKeyEvent_1(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetCharacterIntheWater(); // Function B.B.SetCharacterIntheWater(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnDeath(); // Function B.B.OnDeath(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnSaveInventoryData(); // Function B.B.OnSaveInventoryData(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddPerkEvent(struct Unknown& PerkInfo, struct Unknown& InCurrentDisplayAbility, int32_t LastLevel, int32_t ClassLevel, enum class Unknow LevelUpType); // Function B.B.AddPerkEvent(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void RemovePerkLevelUI(); // Function B.B.RemovePerkLevelUI(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CreatePerkLevelUI(int32_t Count); // Function B.B.CreatePerkLevelUI(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void PerkSpinEvent(char bShow, int32_t Count, enum class Unknow Slot); // Function B.B.PerkSpinEvent(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowAmplifierEffect(char IsAmplifierEffect, float AmplifierLength); // Function B.B.ShowAmplifierEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnLanded(struct Unknown& Hit); // Function B.B.OnLanded(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReadyGivePerkEvent(); // Function B.B.ReadyGivePerkEvent(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void KillGivePerkEvent(int32_t KillCount); // Function B.B.KillGivePerkEvent(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowHeartBeatSensorEffect(char IsHeartBeatSensorEffect, float HeartBeatSensorLength); // Function B.B.ShowHeartBeatSensorEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelBrokenEquipment {
	struct Unknown UberGraphFrame; // 0x330 (8)
	float Power_Min; // 0x338 (4)
	float Power_Max; // 0x33C (4)
	float FlyAngle; // 0x340 (4)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelPlayerHUD {
	struct Unknown UberGraphFrame; // 0x860 (8)
	struct Unknown DefaultSceneRoot; // 0x868 (8)
	struct TMap<Unknown, Unknown>Unknown TableInfo; // 0x870 (80)
	struct TArray<Unknown> NewVar_1; // 0x8C0 (16)
	struct TArray<Unknown> GuideWidgetStack; // 0x8D0 (16)
	enum class Unknow NewVar_2; // 0x8E0 (1)

	void IsSpectate(char& Return); // Function B.B.IsSpectate(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnShowMyKillInfoMessage(struct Unknown BroadCastInfo); // Function B.B.OnShowMyKillInfoMessage(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnShowMyKnockOutInfo(struct FText WeaponName, struct FText Victim, char IsHeadShot, char TeamKill, char SelfKill); // Function B.B.OnShowMyKnockOutInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnShowMyKillInfo(struct FText WeaponName, struct FText Victim, int32_t KillCount, char IsHeadShot, char TeamKill, char SelfKill, char FinallyKill); // Function B.B.OnShowMyKillInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SelectTopOrBottomWidget(enum class Unknow MessageType, struct Unknown& UserWidget); // Function B.B.SelectTopOrBottomWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SelectTable(enum class Unknow TableType, struct Unknown& DataTable); // Function B.B.SelectTable(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void HideHUDMessage(enum class Unknow MessageType); // Function B.B.HideHUDMessage(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowHudMessageAll(); // Function B.B.ShowHudMessageAll(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowHudMessageAt(int32_t MessageTypeNum); // Function B.B.ShowHudMessageAt(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnAddKillMessageAll(); // Function B.B.OnAddKillMessageAll(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowHUDMessageAtNum(char ShowNext, int32_t TypeNum); // Function B.B.ShowHUDMessageAtNum(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowKillMessage(struct TArray<Unknown>& DamageTypeArray); // Function B.B.ShowKillMessage(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowGuideWidget(enum class Unknow GuideType); // Function B.B.ShowGuideWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void HideGuideWidget(enum class Unknow GuideType); // Function B.B.HideGuideWidget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowHUDMessage(struct Unknown MessageRow); // Function B.B.ShowHUDMessage(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_SetMainAndSpectatorWidgetVisiblility(char bIsVisible, char bMainWidget, char bSpectatorWidget); // Function B.B.K2_SetMainAndSpectatorWidgetVisiblility(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct UB : UBravoHotelGameInstance {
	struct Unknown UberGraphFrame; // 0x5A0 (8)
	struct Unknown Game; // 0x5A8 (8)
	struct Unknown LastPCPosition; // 0x5B0 (12)

	void Update(char Audio, float Volume, char& ); // Function B.B.Update(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Run(struct FString Console, char& ); // Function B.B.Run(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Get(struct Unknown& SettingsWrapper); // Function B.B.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void StartRecordingReplay(); // Function B.B.StartRecordingReplay(Net|NetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void StopRecordingReplay(); // Function B.B.StopRecordingReplay(Net|NetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveInit(); // Function B.B.ReceiveInit(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown UberGraphFrame; // 0x22F0 (8)

	void GetTargetEffectorLocationR(struct Unknown& TargetEffectorLocationR); // Function B.B.GetTargetEffectorLocationR(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnEquip(); // Function B.B.K2_OnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnUnEquip(); // Function B.B.K2_OnUnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CheckWeaponScale(); // Function B.B.CheckWeaponScale(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : UActor {
	struct Unknown Box; // 0x310 (8)
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelVehicle {
	struct Unknown UberGraphFrame; // 0xCD0 (8)
	struct Unknown TeamInfoUpdater; // 0xCD8 (8)
	float Timeline_0_NewTrack_0_FB4F6B44434A25E409AE66987076220A; // 0xCE0 (4)
	char Timeline_0__Direction_FB4F6B44434A25E409AE66987076220A; // 0xCE4 (1)
	struct Unknown Timeline_1; // 0xCE8 (8)
	struct Unknown EngineSound; // 0xCF0 (8)

	void SetWaterLevelZ_Func(); // Function B.B.SetWaterLevelZ_Func(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	float GetCameraTargetArmLength(); // Function B.B.GetCameraTargetArmLength(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetupCamera(); // Function B.B.SetupCamera(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Timeline_0__FinishedFunc(); // Function B.B.Timeline_0__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Timeline_0__UpdateFunc(); // Function B.B.Timeline_0__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_9(struct Unknown Key); // Function B.B.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_9(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_8(struct Unknown Key); // Function B.B.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_8(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_7(struct Unknown Key); // Function B.B.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_7(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_6(struct Unknown Key); // Function B.B.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_6(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_One_K2Node_InputKeyEvent_5(struct Unknown Key); // Function B.B.InpActEvt_One_K2Node_InputKeyEvent_5(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Two_K2Node_InputKeyEvent_4(struct Unknown Key); // Function B.B.InpActEvt_Two_K2Node_InputKeyEvent_4(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Three_K2Node_InputKeyEvent_3(struct Unknown Key); // Function B.B.InpActEvt_Three_K2Node_InputKeyEvent_3(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Four_K2Node_InputKeyEvent_2(struct Unknown Key); // Function B.B.InpActEvt_Four_K2Node_InputKeyEvent_2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Five_K2Node_InputKeyEvent_1(struct Unknown Key); // Function B.B.InpActEvt_Five_K2Node_InputKeyEvent_1(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetWaterLevelZ(); // Function B.B.SetWaterLevelZ(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnNitroJumpEnd(); // Function B.B.K2_OnNitroJumpEnd(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnBoosterChanged(char bIsBoosted); // Function B.B.K2_OnBoosterChanged(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelBootyBoxActor {
	struct Unknown StaticMesh; // 0x3B8 (8)
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelProjectileGrenadeMolotovCocktail {
	struct Unknown UberGraphFrame; // 0x7F0 (8)
	float TextureScale; // 0x7F8 (4)
	float CollisionSize; // 0x7FC (4)

	void ActiveThrowingProjectileMainEffect(); // Function B.B.ActiveThrowingProjectileMainEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelProjectileMolotov {
	struct Unknown UberGraphFrame; // 0x398 (8)
	float TextureScale; // 0x3A0 (4)
	float BurnArea; // 0x3A4 (4)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown UberGraphFrame; // 0x22F0 (8)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct UB : UDragDropOperation {
	struct Unknown WidgetReference; // 0x88 (8)
	enum class Unknow InventorySlotWidgetKind; // 0x90 (1)
};

// BlueprintGeneratedClass B.B
struct UB : UBravoHotelGrassCollisionComponent {
	struct Unknown UberGraphFrame; // 0xB8 (8)
	float TextureScale; // 0xC0 (4)
	float CollisionArea; // 0xC4 (4)
	float LieDistance; // 0xC8 (4)
	float DrawDistance; // 0xCC (4)
	struct Unknown Brush; // 0xD0 (8)
	float Brush; // 0xD8 (4)
	struct Unknown Eraser; // 0xE0 (8)
	float Erase; // 0xE8 (4)
	char IsTickStart : 0; // 0xEC (1)
	struct Unknown TargetCharacter; // 0xF0 (8)

	void DrawGrassCollision(struct Unknown TargetCharacter); // Function B.B.DrawGrassCollision(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ClearRenderTarget(); // Function B.B.ClearRenderTarget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown UberGraphFrame; // 0xCF8 (8)
	struct Unknown Handle_IsAnyHit; // 0xD00 (8)
	char IsAnyHit : 0; // 0xD08 (1)
	struct Unknown LastHitActor; // 0xD10 (8)

	void CheckLastHitActor(); // Function B.B.CheckLastHitActor(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void IsLandscape(char& IsLandscape); // Function B.B.IsLandscape(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveHit(struct Unknown MyComp, struct Unknown Other, struct Unknown OtherComp, char bSelfMoved, struct Unknown HitLocation, struct Unknown HitNormal, struct Unknown NormalImpulse, struct Unknown& Hit); // Function B.B.ReceiveHit(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CheckAnyHit(); // Function B.B.CheckAnyHit(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ResetGate(); // Function B.B.ResetGate(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown UberGraphFrame; // 0x22F0 (8)
	float BarrelHeatEffect_Effect_Intensity_B2A9FBB3451595B9BFEF019625EA581E; // 0x22F8 (4)
	char BarrelHeatEffect__Direction_B2A9FBB3451595B9BFEF019625EA581E; // 0x22FC (1)
	struct Unknown BarrelHeatEffect; // 0x2300 (8)

	void BarrelHeatEffect__FinishedFunc(); // Function B.B.BarrelHeatEffect__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BarrelHeatEffect__UpdateFunc(); // Function B.B.BarrelHeatEffect__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnStartSimulateFire(); // Function B.B.K2_OnStartSimulateFire(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnEndSimulateFire(); // Function B.B.K2_OnEndSimulateFire(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelMagazineForDrop {
	struct Unknown UberGraphFrame; // 0x360 (8)
	float PhysicsSimulateTime; // 0x368 (4)
	float LifeTime; // 0x36C (4)
	float AddImpulse; // 0x370 (4)
	char Stance; // 0x374 (1)
	float AddImpulse_Crouched; // 0x378 (4)
	float AddImpulse_Proned; // 0x37C (4)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelMaterialEffectActor {
	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct UB : UB {
	struct Unknown UberGraphFrame; // 0x140 (8)
	char bHasJustClosed_1 : 0; // 0x148 (1)
	float defaultContrast_1; // 0x14C (4)
	float defaultMaxBrightness_1; // 0x150 (4)
	float defaultMinBrightness_1; // 0x154 (4)
	float MinBrightness_1; // 0x158 (4)
	float MaxBrightness_1; // 0x15C (4)
	float Contrast_1; // 0x160 (4)
	char bUsePostProcessVolumeOption_1 : 0; // 0x164 (1)
	float ColorGradingGlobalGamma_1; // 0x168 (4)
	float FilmToeIntensity_1; // 0x16C (4)
	char IsInWidget_1 : 0; // 0x170 (1)
	char bInputModeUI_1 : 0; // 0x171 (1)
	struct TArray<Unknown> InputActionsToBlock_1; // 0x178 (16)

	void CheckAnyAction(char& AnyAction); // Function B.B.CheckAnyAction(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CheckAnyCloseUI(char& AnyClosed); // Function B.B.CheckAnyCloseUI(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct Unknown GetSightInfoWidget(); // Function B.B.GetSightInfoWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetReplayWidget(char WantsToCreateIfNull, struct Unknown& Widget); // Function B.B.GetReplayWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetSpectatorWidget(char WantsToCreateIfNull, struct Unknown& Widget); // Function B.B.GetSpectatorWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetInventoryWidget(char WantsToCreateIfNull, struct Unknown& Widget); // Function B.B.GetInventoryWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetPlayerSpectatorHUD(struct Unknown& RefSpectatorHUD); // Function B.B.GetPlayerSpectatorHUD(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void IsReplay(char& IsReplay); // Function B.B.IsReplay(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void IsOpenSystemPopup(char& b); // Function B.B.IsOpenSystemPopup(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetPlayerMainWidget(char WantsToCreateIfNull, struct Unknown& Widget); // Function B.B.GetPlayerMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void IsMatchEnd(char& State); // Function B.B.IsMatchEnd(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InputMiniMap(); // Function B.B.InputMiniMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InputWorldMap(); // Function B.B.InputWorldMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InputToggleIngameHUD(); // Function B.B.InputToggleIngameHUD(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelProjectileGrenadeBomb {
	struct Unknown UberGraphFrame; // 0x678 (8)
	struct Unknown Ak; // 0x680 (8)

	void BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct Unknown HitComponent, struct Unknown OtherActor, struct Unknown OtherComp, struct Unknown NormalImpulse, struct Unknown& Hit); // Function B.B.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// WidgetBlueprintGeneratedClass B.B
struct UB : UBravoHotelLobbyWidget_Web {
	struct Unknown UberGraphFrame; // 0x4C8 (8)
	struct Unknown FadeOutNotice; // 0x4D0 (8)
	struct Unknown Bg; // 0x4D8 (8)
	struct Unknown Bg_2; // 0x4E0 (8)
	struct Unknown CanvasPanel_GameNotice; // 0x4E8 (8)
	struct Unknown CanvasPanel_PrefetchingProgress; // 0x4F0 (8)
	struct Unknown Image; // 0x4F8 (8)
	struct Unknown Image_145; // 0x500 (8)
	struct Unknown ProgressText; // 0x508 (8)
	struct Unknown U; // 0x510 (8)
	struct TArray<Unknown> WeaponList_1; // 0x518 (16)
	struct TArray<Unknown> CharacterInfoWidgetList; // 0x528 (16)
	int32_t PartySize; // 0x538 (4)
	struct Unknown EquipmentTransition; // 0x540 (8)
	char BindParticle : 0; // 0x548 (1)
	struct TArray<Unknown> EffectPool; // 0x550 (16)
	struct FMulticastInlineDelegate EventDispatcher_Mov; // 0x560 (16)
	struct FString CurrentTab; // 0x570 (16)

	void CheckOptionChanged(); // Function B.B.CheckOptionChanged(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InitArmoryMeshActor(); // Function B.B.InitArmoryMeshActor(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddEffect(struct Unknown Location, float Delay); // Function B.B.AddEffect(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SendPlayTimeMsg(); // Function B.B.SendPlayTimeMsg(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdateCharacterInfo(); // Function B.B.UpdateCharacterInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CreateCharacterInfo(); // Function B.B.CreateCharacterInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddWeaponInfo(struct FString Name, struct Unknown Offset); // Function B.B.AddWeaponInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InitWeapon(); // Function B.B.InitWeapon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void HideExitPopup(); // Function B.B.HideExitPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Construct(); // Function B.B.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function B.B.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowMouseCursor(); // Function B.B.ShowMouseCursor(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnMatchingSucceeded(); // Function B.B.OnMatchingSucceeded(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnMatchingFailed(int32_t ErrorCode, struct FString ExtraDescription); // Function B.B.OnMatchingFailed(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetVisibleSelectGameMode(char bState); // Function B.B.SetVisibleSelectGameMode(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CustomEvent_1(); // Function B.B.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SendPlayTimeMessage(); // Function B.B.SendPlayTimeMessage(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void a_1(char Visible, struct Unknown& Location); // Function B.B.a_1(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void EquipmentSounedDelegate_Event_1(); // Function B.B.EquipmentSounedDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SlotHoverSounedDelegate_Event_1(); // Function B.B.SlotHoverSounedDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnChangedArmoryTab(struct FString TabName); // Function B.B.K2_OnChangedArmoryTab(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnReceiveCraftWeapon(struct Unknown& CraftWeapon); // Function B.B.K2_OnReceiveCraftWeapon(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnChangedWeaponList(struct TArray<Unknown>& ReceiveWeaponList); // Function B.B.K2_OnChangedWeaponList(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnChangedMaterialList(struct TArray<Unknown>& ReceiveMaterialList); // Function B.B.K2_OnChangedMaterialList(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnChangedGold(int32_t ReceiveGold); // Function B.B.K2_OnChangedGold(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_MoveToCraftWeapon(int32_t CraftingID); // Function B.B.K2_MoveToCraftWeapon(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_Init(); // Function B.B.K2_Init(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnChangedMainTab(struct FString TabName); // Function B.B.OnChangedMainTab(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnChangeProgress(struct FString PrefetchingProgressString); // Function B.B.OnChangeProgress(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnPrefetchingProgressVisible(enum class Unknow InVisibility); // Function B.B.OnPrefetchingProgressVisible(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnCleanCampaignJoined(char bJoined); // Function B.B.K2_OnCleanCampaignJoined(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void EventDispatcher_Mov(int32_t CraftingID); // Function B.B.EventDispatcher_Movoined(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// WidgetBlueprintGeneratedClass B.B
struct UB : UBravoHotelCreateCharacterWidget {
	struct Unknown UberGraphFrame; // 0x308 (8)
	struct Unknown CoherentUIGTWidget_90; // 0x310 (8)
	struct Unknown U; // 0x318 (8)
	enum class Unknow CurrentSceneType; // 0x320 (1)

	void Construct(); // Function B.B.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Tick(struct Unknown MyGeometry, float InDeltaTime); // Function B.B.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CustomEvent_1(enum class Unknow SceneType); // Function B.B.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelOutGameParachuteActor {
	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown ParachuteBag_SkeletalMesh; // 0x318 (8)
	struct Unknown Parachute_SkeletalMesh; // 0x320 (8)
	struct Unknown DefaultSceneRoot; // 0x328 (8)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetSkinMaterial(struct Unknown Material); // Function B.B.SetSkinMaterial(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelLobbyPlayerController {
	struct Unknown UberGraphFrame; // 0x720 (8)
	struct Unknown B; // 0x728 (8)
	struct FMulticastInlineDelegate EventDispatcher_PlayLobbySound; // 0x730 (16)
	struct FMulticastInlineDelegate EventDispatcher_StopLobbySound; // 0x740 (16)
	struct Unknown MediaSoundComponent; // 0x750 (8)
	struct Unknown OperationMessageWidget; // 0x758 (8)
	enum class Unknow CurrentSceneType; // 0x760 (1)
	struct Unknown LobbyWidgetRef; // 0x768 (8)

	void CanInput(char& bCheck); // Function B.B.CanInput(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CheckCohLoad(char& bCheck); // Function B.B.CheckCohLoad(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CheckWantPopupEvent(char& bCheck); // Function B.B.CheckWantPopupEvent(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct Unknown GetHUDInteractionComponent(); // Function B.B.GetHUDInteractionComponent(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdateMouseWheel(float Delta); // Function B.B.UpdateMouseWheel(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdateMouseY(float Delta); // Function B.B.UpdateMouseY(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void UpdateMouseX(float Delta); // Function B.B.UpdateMouseX(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CreateDefaultSkin(); // Function B.B.CreateDefaultSkin(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetLobbyMainWidget(struct Unknown& Widget); // Function B.B.GetLobbyMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_CloseUI_K2Node_InputActionEvent_2(struct Unknown Key); // Function B.B.InpActEvt_CloseUI_K2Node_InputActionEvent_2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_LobbyMoveTab_K2Node_InputActionEvent_1(struct Unknown Key); // Function B.B.InpActEvt_LobbyMoveTab_K2Node_InputActionEvent_1(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue); // Function B.B.InpAxisEvt_Turn_K2Node_InputAxisEvent_1(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(float AxisValue); // Function B.B.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5(float AxisValue); // Function B.B.InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_5(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void PlayTutorial(); // Function B.B.PlayTutorial(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void NotifyOperationMessage(struct FText& NotifyText); // Function B.B.NotifyOperationMessage(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ChangedSceneDelegate_Event_1(enum class Unknow SceneType); // Function B.B.ChangedSceneDelegate_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnInputPopupEvent(); // Function B.B.OnInputPopupEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CreateOptionPopup(); // Function B.B.CreateOptionPopup(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void EventDispatcher_StopLobbySound__DelegateSignature(); // Function B.B.EventDispatcher_StopLobbySound__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void EventDispatcher_PlayLobbySound__DelegateSignature(); // Function B.B.EventDispatcher_PlayLobbySound__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelMaterialEffectActor {
	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown ScopeWidget_Background; // 0x420 (8)
	struct Unknown Cube; // 0x428 (8)
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown B; // 0xD18 (8)
	struct Unknown B; // 0xD20 (8)
	struct Unknown B; // 0xD28 (8)
	struct Unknown B; // 0xD30 (8)
	struct Unknown BravoHotelVehicleSeat04; // 0xD38 (8)
	struct Unknown BravoHotelVehicleSeat03; // 0xD40 (8)
	struct Unknown BravoHotelVehicleSeat02; // 0xD48 (8)
};

// BlueprintGeneratedClass B.B
struct UB : UBravoHotelGameSettingManager {
	struct Unknown UberGraphFrame; // 0x38 (8)
	struct Unknown Game; // 0x40 (8)

	void Get(struct Unknown& SettingsWrapper); // Function B.B.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Run(struct FString Console, char& ); // Function B.B.Run(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Update(char Audio, float Volume, char& ); // Function B.B.Update(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveInit(); // Function B.B.ReceiveInit(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct UB : USaveGame {
	struct TArray<Unknown> WearableItemList; // 0x28 (16)
	struct TArray<Unknown> CustomItemList; // 0x38 (16)
	struct TArray<Unknown> WeaponItemList; // 0x48 (16)
	struct TArray<Unknown> InBackpackItemList; // 0x58 (16)
	struct Unknown AppearanceInfo; // 0x68 (20)
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelPlayerController {
	struct Unknown UberGraphFrame; // 0x13D8 (8)
	struct Unknown B; // 0x13E0 (8)
	struct Unknown SmartPingSystemComponent; // 0x13E8 (8)
	struct Unknown MapSize; // 0x13F0 (12)
	char IsInWidget : 0; // 0x13FC (1)
	struct TArray<Unknown> InputActionsToBlock; // 0x1400 (16)
	struct Unknown BlueZone; // 0x1410 (8)
	struct TArray<Unknown> PhoneticAlphabetTable_NATO; // 0x1418 (16)
	char bHasJustClosed : 0; // 0x1428 (1)
	char bLineTrace : 0; // 0x1429 (1)
	struct Unknown U; // 0x1430 (8)
	struct Unknown LocalScreenPosition; // 0x1438 (8)
	struct Unknown MaxViewportSize; // 0x1440 (8)
	char ReverseSide : 0; // 0x1448 (1)
	struct Unknown SavedInventory; // 0x1450 (8)
	struct TArray<Unknown> DefaultItemList; // 0x1458 (16)
	struct FString SavedInventorySlotName; // 0x1468 (16)
	char bLoadInventoryData : 0; // 0x1478 (1)
	char bOpenSystemMenu : 0; // 0x1479 (1)
	float MinBrightness; // 0x147C (4)
	float MaxBrightness; // 0x1480 (4)
	float Contrast; // 0x1484 (4)
	char bUsePostProcessVolumeOption : 0; // 0x1488 (1)
	float FilmToeIntensity; // 0x148C (4)
	float ColorGradingGlobalGamma; // 0x1490 (4)
	char bInputModeUI : 0; // 0x1494 (1)
	struct Unknown Timer; // 0x1498 (8)
	struct Unknown DoubleclickTimer; // 0x14A0 (8)
	float CheckTime; // 0x14A8 (4)
	float DoubleClickTime; // 0x14AC (4)
	char CheckDoubleClick : 0; // 0x14B0 (1)
	struct Unknown TempLocation; // 0x14B4 (12)
	struct TArray<Unknown> NameWidgets; // 0x14C0 (16)
	int32_t CurrentNameWidgetCount; // 0x14D0 (4)
	char bNameTooltipMode : 0; // 0x14D4 (1)
	int32_t SmartPingTypeIndex; // 0x14D8 (4)
	char EableSmartPing : 0; // 0x14DC (1)
	char PingLock : 0; // 0x14DD (1)
	struct Unknown OperationMessageWidget; // 0x14E0 (8)
	struct Unknown SelectionMenu; // 0x14E8 (8)
	char IsVisibleSelectionMenu : 0; // 0x14F0 (1)
	struct TMap<Unknown, Unknown>Unknown BoostItemList; // 0x14F8 (80)
	char IgnoreMenu : 0; // 0x1548 (1)

	char HasPerkDeckWidget(); // Function B.B.HasPerkDeckWidget(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct Unknown GetHUDInteractionComponent(); // Function B.B.GetHUDInteractionComponent(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	char IsShowingSystemPopup(); // Function B.B.IsShowingSystemPopup(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetSmartpingInfo(struct Unknown ServerLocation, char IsAgree); // Function B.B.SetSmartpingInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void MakeSmartpingInfo(struct Unknown ServerLocation, char IsAgree); // Function B.B.MakeSmartpingInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CalcZLocation(struct Unknown WorldLocation, float& ZLocation); // Function B.B.CalcZLocation(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnMakeSmartpingInfo(int32_t PingTypeIndex, struct Unknown ServerLocation, char IsAgree); // Function B.B.OnMakeSmartpingInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ShowPerkDeckPopup(); // Function B.B.ShowPerkDeckPopup(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void IsSpectating(char& IsSpectating); // Function B.B.IsSpectating(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void HideInteractive(); // Function B.B.HideInteractive(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct Unknown GetSmartPingSystem(); // Function B.B.GetSmartPingSystem(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CheckInputState(); // Function B.B.CheckInputState(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void IsMatchEnd(char& State); // Function B.B.IsMatchEnd(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void IsOpenSystemPopup(char& b); // Function B.B.IsOpenSystemPopup(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetSpectatorTargetRank(char& Result, int32_t& Rank); // Function B.B.GetSpectatorTargetRank(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	char IsGlobalPostProcessVolume(struct Unknown Other); // Function B.B.IsGlobalPostProcessVolume(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SaveInventoryData(char bSaveAppearlance); // Function B.B.SaveInventoryData(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CheckSavedInventoryData(); // Function B.B.CheckSavedInventoryData(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetDefaultItem(); // Function B.B.SetDefaultItem(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void RunInventoryDataCommand(struct Unknown SavedInventoryData); // Function B.B.RunInventoryDataCommand(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddInBackpackItem(); // Function B.B.AddInBackpackItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddWeaponItem(); // Function B.B.AddWeaponItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddWearableItem(); // Function B.B.AddWearableItem(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetPlayerSpectatorHUD(struct Unknown& RefSpectatorHUD); // Function B.B.GetPlayerSpectatorHUD(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CalcReverseSideScreenPosition(struct Unknown WorldLocation, float& OutScreenPositionAngle); // Function B.B.CalcReverseSideScreenPosition(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CorrectionScreenPositionByTeamPositionWidget(struct Unknown& ScreenPosition, char& RetOutScreenPosition); // Function B.B.CorrectionScreenPositionByTeamPositionWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetCurrentViewportMaxSizeByTeamPositionWidget(struct Unknown& ViewportMaxSize); // Function B.B.GetCurrentViewportMaxSizeByTeamPositionWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetActionBlocked(char bWantsToBlock, struct TArray<Unknown>& ActionNames, struct Unknown Widget); // Function B.B.SetActionBlocked(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void DoNothing(); // Function B.B.DoNothing(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetPlayerMainWidget(char bWantsToCreateIfNull, struct Unknown& Widget); // Function B.B.GetPlayerMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetInventoryWidget(char bWantsToCreateIfNull, struct Unknown& Widget); // Function B.B.GetInventoryWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetPlayerHUD(char& IsAlive, struct Unknown& PlayerHUD); // Function B.B.GetPlayerHUD(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetPawnPosition(struct Unknown& out_Position, struct Unknown& out_MapSize); // Function B.B.GetPawnPosition(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Ctrl_5(struct Unknown Key); // Function B.B.InpActEvt_Ctrl_5(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_Ctrl_B_K2Node_InputKeyEvent_4(struct Unknown Key); // Function B.B.InpActEvt_Ctrl_B_K2Node_InputKeyEvent_4(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_3(struct Unknown Key); // Function B.B.InpActEvt_LeftControl_K2Node_InputKeyEvent_3(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_2(struct Unknown Key); // Function B.B.InpActEvt_LeftControl_K2Node_InputKeyEvent_2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_AcceptUI_K2Node_InputActionEvent_6(struct Unknown Key); // Function B.B.InpActEvt_AcceptUI_K2Node_InputActionEvent_6(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_MiniMap_K2Node_InputActionEvent_5(struct Unknown Key); // Function B.B.InpActEvt_MiniMap_K2Node_InputActionEvent_5(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_CloseUI_K2Node_InputActionEvent_4(struct Unknown Key); // Function B.B.InpActEvt_CloseUI_K2Node_InputActionEvent_4(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_OptionMenu_K2Node_InputActionEvent_3(struct Unknown Key); // Function B.B.InpActEvt_OptionMenu_K2Node_InputActionEvent_3(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_2(struct Unknown Key); // Function B.B.InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent_2(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_ToggleGuideWidget_K2Node_InputActionEvent_1(struct Unknown Key); // Function B.B.InpActEvt_ToggleGuideWidget_K2Node_InputActionEvent_1(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InpActEvt_J_K2Node_InputKeyEvent_1(struct Unknown Key); // Function B.B.InpActEvt_J_K2Node_InputKeyEvent_1(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OpenMarket(); // Function B.B.OpenMarket(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CustomEvent_1(); // Function B.B.CustomEvent_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void a_1(); // Function B.B.a_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CloseBlackMarket(); // Function B.B.CloseBlackMarket(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OpenBlackMarket(); // Function B.B.OpenBlackMarket(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Cheat(struct FString CheatCommand); // Function B.B.Cheat(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SmartPingConfirmHoldUI_BP(); // Function B.B.SmartPingConfirmHoldUI_BP(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SmartPingCancelHoldUI_BP(); // Function B.B.SmartPingCancelHoldUI_BP(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SmartPingReleased_BP(char bIgnoreMenu); // Function B.B.SmartPingReleased_BP(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SmartPingPressed_BP(char bIgnoreMenu); // Function B.B.SmartPingPressed_BP(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SmartPingFastAgree(); // Function B.B.SmartPingFastAgree(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SmartPingHotKey_BP(int32_t Index); // Function B.B.SmartPingHotKey_BP(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ClientSetSmartpingInfo(struct Unknown ServerLocation, char IsAgree); // Function B.B.ClientSetSmartpingInfo(Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ServerMakeSmartpingInfo(struct Unknown ServerLocation, char IsAgree); // Function B.B.ServerMakeSmartpingInfo(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnInputInventory(); // Function B.B.OnInputInventory(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void EnterSceneOfWin(char bWin); // Function B.B.EnterSceneOfWin(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void LoadInventoryData(); // Function B.B.LoadInventoryData(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InputModeUI(struct Unknown Widget); // Function B.B.InputModeUI(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InputModeGame(struct Unknown Widget); // Function B.B.InputModeGame(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ServerEnterSceneOfWin(); // Function B.B.ServerEnterSceneOfWin(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ClientEnterSceneOfWin(); // Function B.B.ClientEnterSceneOfWin(Net|NetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OpenPerkDeckPopup(); // Function B.B.OpenPerkDeckPopup(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_SaveInventoryData(); // Function B.B.K2_SaveInventoryData(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void NotifyOperationMessage(struct FText& NotifyText); // Function B.B.NotifyOperationMessage(Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InsertMarker(); // Function B.B.InsertMarker(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void a_1(struct FName ItemKey); // Function B.B.a_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetUseItemSelectMenu(char bIsShow); // Function B.B.SetUseItemSelectMenu(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetBoostItemSelectMenu(char bIsShow); // Function B.B.SetBoostItemSelectMenu(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CustomEvent(struct FName ItemKey); // Function B.B.CustomEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CheckNameTooltip(); // Function B.B.CheckNameTooltip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void RemoveallCharacterToolTip(); // Function B.B.RemoveallCharacterToolTip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CreateCharacterToolTip(); // Function B.B.CreateCharacterToolTip(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelMaterialEffectActor {
	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelTitleHUD {
	struct Unknown DefaultSceneRoot; // 0x4B0 (8)
	struct Unknown MediaSoundComponent; // 0x4B8 (8)
	struct FMulticastInlineDelegate EventDispatcher_PlayLobbySound; // 0x4C0 (16)
	struct FMulticastInlineDelegate EventDispatcher_StopLobbySound; // 0x4D0 (16)

	void EventDispatcher_StopLobbySound__DelegateSignature(); // Function B.B.EventDispatcher_StopLobbySound__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void EventDispatcher_PlayLobbySound__DelegateSignature(); // Function B.B.EventDispatcher_PlayLobbySound__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelLobbyCharacter {
	struct Unknown UberGraphFrame; // 0x3A70 (8)
	struct Unknown Box; // 0x3A78 (8)
	int32_t PawnIndex; // 0x3A80 (4)
	struct Unknown* BravoHotelPlayerStateClass; // 0x3A88 (8)
	char b : 0; // 0x3A90 (1)
	char bMatchSuccess : 0; // 0x3A91 (1)
	char bIsFaceCustomizing : 0; // 0x3A92 (1)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnEquipWeapon(); // Function B.B.OnEquipWeapon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void InitCustomizableObjectInstance(); // Function B.B.InitCustomizableObjectInstance(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown UberGraphFrame; // 0xCF8 (8)

	void ReceiveUnpossessed(struct Unknown OldController); // Function B.B.ReceiveUnpossessed(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void PlayCameraShake_ModeChange(); // Function B.B.PlayCameraShake_ModeChange(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnPlaySplashParticle(char IsToWater); // Function B.B.OnPlaySplashParticle(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnChangedAmphibiousMode(char bTrue); // Function B.B.OnChangedAmphibiousMode(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelMaterialEffectActor {
	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown Sphere; // 0x420 (8)
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown Sphere; // 0x420 (8)
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown Sphere; // 0x420 (8)
};

// BlueprintGeneratedClass B.B
struct UB : UBravoHotelDestructibleComponent {
	struct Unknown UberGraphFrame; // 0x630 (8)
	float DestructibleMeshLifeTime; // 0x638 (4)
	char IsLegacyMethodEnable : 0; // 0x63C (1)
	float StaticMeshLifeSpanTime; // 0x640 (4)
	char GameStarted : 0; // 0x644 (1)
	float DefaultHpCache; // 0x648 (4)
	char IsDestructedBeforeGameStart : 0; // 0x64C (1)
	char Is : 0; // 0x64D (1)
	struct FMulticastInlineDelegate DestructEventDispatcher; // 0x650 (16)
	float LinearDamping; // 0x660 (4)
	float MassInKg; // 0x664 (4)
	float AngularDamping; // 0x668 (4)
	char ClassType; // 0x66C (1)

	void OnRep_IsDestructedBeforeGameStart(); // Function B.B.OnRep_IsDestructedBeforeGameStart(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Destruct(float Damage, struct Unknown HitLocation, struct Unknown ImpactDirection, struct Unknown& DM); // Function B.B.Destruct(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnDestructComponent(float DamageAmount, struct Unknown& HitInfo, struct Unknown EventInstigator, struct Unknown DamageCauser, struct Unknown& ShotInfo); // Function B.B.K2_OnDestructComponent(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetLifeSpan(float LifeSpan); // Function B.B.SetLifeSpan(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetCollisionEnableWithDelay(float DelayTime); // Function B.B.SetCollisionEnableWithDelay(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void DestructEventDispatcher__DelegateSignature(); // Function B.B.DestructEventDispatcher__DelegateSignature(Public|Delegate|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown UberGraphFrame; // 0xD18 (8)
	struct Unknown AdditionalStuntRotation; // 0xD20 (12)
	char Pressed_Pitch : 0; // 0xD2C (1)
	char Pressed_Roll : 0; // 0xD2D (1)
	char AutoRotate_Roll : 0; // 0xD2E (1)
	char CanStunt_Roll : 0; // 0xD2F (1)
	float StuntValue_Pitch; // 0xD30 (4)
	float StuntValue_Roll; // 0xD34 (4)
	float StuntInterpSpeed_Pitch; // 0xD38 (4)
	float StuntInterpSpeed_Roll; // 0xD3C (4)
	float StuntInterpSpeedRate; // 0xD40 (4)
	float StuntDirection_Pitch; // 0xD44 (4)
	float StuntDirection_Roll; // 0xD48 (4)
	float TargetStunt_Pitch; // 0xD4C (4)
	float TargetStunt_Roll; // 0xD50 (4)
	float ParkingForceValue; // 0xD54 (4)
	float RaisingForceValue; // 0xD58 (4)
	struct Unknown Handle_SetParkingForce; // 0xD60 (8)

	void Stunt(); // Function B.B.Stunt(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ServerAddStuntRotation(struct Unknown AdditionalRot); // Function B.B.ServerAddStuntRotation(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void StartPitch(); // Function B.B.StartPitch(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void StopPitch(); // Function B.B.StopPitch(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CalcStuntValuePitch(); // Function B.B.CalcStuntValuePitch(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CalcStuntValueRoll(); // Function B.B.CalcStuntValueRoll(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void StartRoll(); // Function B.B.StartRoll(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void StopRoll(); // Function B.B.StopRoll(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ResetStunt(); // Function B.B.ResetStunt(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void StuntSpeedInterp(); // Function B.B.StuntSpeedInterp(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelSkillTargetingBombing {
	struct Unknown UberGraphFrame; // 0x368 (8)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelProjectileGrenadeBomb {
	struct Unknown UberGraphFrame; // 0x678 (8)
	struct Unknown Ak; // 0x680 (8)

	void BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct Unknown HitComponent, struct Unknown OtherActor, struct Unknown OtherComp, struct Unknown NormalImpulse, struct Unknown& Hit); // Function B.B.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelAreaSkillZoneHacking {
	struct Unknown UberGraphFrame; // 0x368 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ActivateEffect(struct Unknown Character); // Function B.B.ActivateEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void DeactivateEffect(struct Unknown Character); // Function B.B.DeactivateEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BPSetAreaSkillInfo(); // Function B.B.BPSetAreaSkillInfo(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void StartDestroy(); // Function B.B.StartDestroy(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelAmplifier {
	struct Unknown UberGraphFrame; // 0x1BF0 (8)
	struct Unknown InternalPP; // 0x1BF8 (8)
	struct Unknown EffectMaterial; // 0x1C00 (8)
	char IsActive : 0; // 0x1C08 (1)
	struct Unknown m; // 0x1C10 (8)
	struct Unknown i; // 0x1C18 (8)
	struct Unknown Radial; // 0x1C20 (56)
	float Radial; // 0x1C58 (4)
	int32_t Radial; // 0x1C5C (4)
	struct Unknown Radial; // 0x1C60 (8)
	struct Unknown Radial; // 0x1C68 (8)
	struct Unknown Native; // 0x1C70 (1472)
	struct Unknown mSelectiveColor; // 0x2230 (8)
	struct Unknown iSelectiveColor; // 0x2238 (8)
	struct Unknown Selective; // 0x2240 (56)
	struct Unknown Selective; // 0x2278 (16)
	float Selective; // 0x2288 (4)
	float Selective; // 0x228C (4)
	float Selective; // 0x2290 (4)
	float CurrentBlur; // 0x2294 (4)
	float CurrentSelective; // 0x2298 (4)
	float FadeInSpeed; // 0x229C (4)
	float FadeOutSpeed; // 0x22A0 (4)
	struct Unknown mMonochrome; // 0x22A8 (8)
	struct Unknown iMonochrome; // 0x22B0 (8)
	struct Unknown Monochrome; // 0x22B8 (56)
	struct Unknown Monochrome; // 0x22F0 (16)
	struct Unknown MBlackColor; // 0x2300 (8)
	struct Unknown IBlackColor; // 0x2308 (8)
	struct Unknown BlackColor; // 0x2310 (56)
	float ActiveDelayTime; // 0x2348 (4)
	struct Unknown MainWidget; // 0x2350 (8)
	struct Unknown TopWidget; // 0x2358 (8)

	void GetTopWidget(struct Unknown& TopWidget); // Function B.B.GetTopWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetMainWidget(struct Unknown& MainWidget); // Function B.B.GetMainWidget(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void IsOwnerLocallyControlled(char& bIsLocallyControlled); // Function B.B.IsOwnerLocallyControlled(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BlackColorFunc(char IsEnabled); // Function B.B.BlackColorFunc(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Monochrome(char IsEnabled); // Function B.B.Monochrome(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Selective(char IsEnabled); // Function B.B.Selective(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetEffectPriority(int32_t Priority, struct Unknown Material); // Function B.B.SetEffectPriority(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetAdvancedEffectFeatures(struct Unknown Features, struct Unknown Material, struct Unknown Dynamic); // Function B.B.SetAdvancedEffectFeatures(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Radial(char IsEnabled); // Function B.B.Radial(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void CreateEffectMaterialInstance(struct Unknown Material, struct Unknown& Instance); // Function B.B.CreateEffectMaterialInstance(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ScreenEffectEvent(char RadialBlur, char BlackColor); // Function B.B.ScreenEffectEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnDeactiveAmplifier(); // Function B.B.OnDeactiveAmplifier(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnActiveAmplifier(); // Function B.B.OnActiveAmplifier(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnPostEventAtLocationEvent(struct FString EventKey, struct Unknown& Location); // Function B.B.OnPostEventAtLocationEvent(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AddActiveEvent(); // Function B.B.AddActiveEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnClickedAmplifier(); // Function B.B.OnClickedAmplifier(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnEquip(); // Function B.B.K2_OnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveDestroyed(); // Function B.B.ReceiveDestroyed(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnUnEquip(); // Function B.B.K2_OnUnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown UberGraphFrame; // 0x1FF0 (8)
	struct Unknown ParticleSystem; // 0x1FF8 (8)

	void K2_OnEquip(); // Function B.B.K2_OnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnUnEquip(); // Function B.B.K2_OnUnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown UberGraphFrame; // 0x1FF0 (8)
	struct Unknown ParticleSystem; // 0x1FF8 (8)

	void K2_OnEquip(); // Function B.B.K2_OnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnUnEquip(); // Function B.B.K2_OnUnEquip(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ADestructibleActor {
	struct Unknown UberGraphFrame; // 0x328 (8)
	float OpacityTime_Opacity_Percent_6C96418549465FDC90E47A873A3B4734; // 0x330 (4)
	float OpacityTime_Opacity_6C96418549465FDC90E47A873A3B4734; // 0x334 (4)
	char OpacityTime__Direction_6C96418549465FDC90E47A873A3B4734; // 0x338 (1)
	struct Unknown OpacityTime; // 0x340 (8)
	float Opacity; // 0x348 (4)
	float DM_Opacity; // 0x34C (4)
	char Opacity_Bool : 0; // 0x350 (1)

	void OpacityTime__FinishedFunc(); // Function B.B.OpacityTime__FinishedFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OpacityTime__UpdateFunc(); // Function B.B.OpacityTime__UpdateFunc(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelProjectileMolotov {
	struct Unknown UberGraphFrame; // 0x398 (8)
	float TextureScale; // 0x3A0 (4)
	float BurnArea; // 0x3A4 (4)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown UberGraphFrame; // 0x22F0 (8)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown UberGraphFrame; // 0x22F0 (8)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown UberGraphFrame; // 0x22F0 (8)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelProjectileGrenadeMolotovCocktail {
	struct Unknown UberGraphFrame; // 0x7F0 (8)
	float TextureScale; // 0x7F8 (4)
	float CollisionSize; // 0x7FC (4)

	void ActiveThrowingProjectileMainEffect(); // Function B.B.ActiveThrowingProjectileMainEffect(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelMaterialEffectActor {
	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelMaterialEffectActor {
	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelMaterialEffectActor {
	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelMaterialEffectActor {
	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : ABravoHotelMaterialEffectActor {
	struct Unknown Tire_RL; // 0x460 (8)
	struct Unknown Tire_FL; // 0x468 (8)
	struct Unknown Tire_RR; // 0x470 (8)
	struct Unknown Tire_FR; // 0x478 (8)
	struct Unknown SkeletalMesh; // 0x480 (8)
	struct Unknown DefaultSceneRoot; // 0x488 (8)

	void UserConstructionScript(); // Function B.B.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown B; // 0xD18 (8)
	struct Unknown B; // 0xD20 (8)
	struct Unknown B; // 0xD28 (8)
	struct Unknown BravoHotelVehicleSeat05; // 0xD30 (8)
	struct Unknown BravoHotelVehicleSeat04; // 0xD38 (8)
	struct Unknown BravoHotelVehicleSeat03; // 0xD40 (8)
	struct Unknown BravoHotelVehicleSeat02; // 0xD48 (8)
};

// BlueprintGeneratedClass B.B
struct AB : UActor {
	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown StaticMesh; // 0x318 (8)
	struct Unknown DefaultSceneRoot; // 0x320 (8)
	float DestructibleMeshLifeTime; // 0x328 (4)

	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown UberGraphFrame; // 0xCF8 (8)
	struct Unknown SplashParticleComp; // 0xD00 (8)
	struct Unknown PlaneParticleComp; // 0xD08 (8)
	struct Unknown TimerHandle_RemoveAllWaterParticle; // 0xD10 (8)

	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnPlaySplashParticle(char IsToWater); // Function B.B.OnPlaySplashParticle(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void RemoveAllWaterParticle(); // Function B.B.RemoveAllWaterParticle(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void AdjustWaterParticle(); // Function B.B.AdjustWaterParticle(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown BravoHotelVehicleTire_RR; // 0xD18 (8)
	struct Unknown BravoHotelVehicleTire_RL; // 0xD20 (8)
	struct Unknown BravoHotelVehicleTire_FR; // 0xD28 (8)
	struct Unknown BravoHotelVehicleTire_FL; // 0xD30 (8)
	struct Unknown B; // 0xD38 (8)
	struct Unknown B; // 0xD40 (8)
	struct Unknown BravoHotelVehicleSeat04; // 0xD48 (8)
	struct Unknown BravoHotelVehicleSeat03; // 0xD50 (8)
	struct Unknown BravoHotelVehicleSeat02; // 0xD58 (8)
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown UberGraphFrame; // 0xD18 (8)
	struct Unknown BravoHotelVehicleTire_RR; // 0xD20 (8)
	struct Unknown BravoHotelVehicleTire_RL; // 0xD28 (8)
	struct Unknown BravoHotelVehicleTire_FR; // 0xD30 (8)
	struct Unknown BravoHotelVehicleTire_FL; // 0xD38 (8)
	struct Unknown B; // 0xD40 (8)
	struct Unknown B; // 0xD48 (8)
	struct Unknown B; // 0xD50 (8)
	struct Unknown B; // 0xD58 (8)
	struct Unknown BravoHotelVehicleSeat04; // 0xD60 (8)
	struct Unknown BravoHotelVehicleSeat03; // 0xD68 (8)
	struct Unknown BravoHotelVehicleSeat02; // 0xD70 (8)

	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown UberGraphFrame; // 0xD18 (8)
	struct Unknown BravoHotelVehicleTire_RR; // 0xD20 (8)
	struct Unknown BravoHotelVehicleTire_RL; // 0xD28 (8)
	struct Unknown BravoHotelVehicleTire_FR; // 0xD30 (8)
	struct Unknown BravoHotelVehicleTire_FL; // 0xD38 (8)
	struct Unknown VehicleSeatCollision1; // 0xD40 (8)
	struct Unknown VehicleSeatCollision; // 0xD48 (8)
	struct Unknown BravoHotelVehicleSeat02; // 0xD50 (8)
	struct Unknown ; // 0xD58 (8)

	void ReceiveTick(float DeltaSeconds); // Function B.B.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function B.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_B(int32_t EntryPoint); // Function B.B.ExecuteUbergraph_B(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// BlueprintGeneratedClass B.B
struct AB : AB {
	struct Unknown BravoHotelVehicleTire_RR; // 0xD18 (8)
	struct Unknown BravoHotelVehicleTire_RL; // 0xD20 (8)
	struct Unknown BravoHotelVehicleTire_FR; // 0xD28 (8)
	struct Unknown BravoHotelVehicleTire_FL; // 0xD30 (8)
	struct Unknown B; // 0xD38 (8)
	struct Unknown B; // 0xD40 (8)
	struct Unknown B; // 0xD48 (8)
	struct Unknown B; // 0xD50 (8)
	struct Unknown BravoHotelVehicleSeat04; // 0xD58 (8)
	struct Unknown BravoHotelVehicleSeat03; // 0xD60 (8)
	struct Unknown BravoHotelVehicleSeat02; // 0xD68 (8)
	char bSnowy : 0; // 0xD70 (1)
};

