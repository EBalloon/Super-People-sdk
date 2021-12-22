// BlueprintGeneratedClass Destructi.B
struct AB : ADestructibleActor {
	struct Unknown UberGraphFrame; //  0x328 Size(8)
	float OpacityTime_Opacity_Percent_6C96418549465FDC90E47A873A3B4734; //  0x330 Size(4)
	float OpacityTime_Opacity_6C96418549465FDC90E47A873A3B4734; //  0x334 Size(4)
	char OpacityTime__Direction_6C96418549465FDC90E47A873A3B4734; //  0x338 Size(1)
	struct Unknown OpacityTime; //  0x340 Size(8)
	float Opacity; //  0x348 Size(4)
	float DM_Opacity; //  0x34c Size(4)
	char Opacity_Bool; //  0x350 Size(1)

	void OpacityTime__FinishedFunc(); // Function Destructi.B.OpacityTime__FinishedFunc(BlueprintEvent) // <Game+0x23b1e70>
};

// BlueprintGeneratedClass Destructi.B
struct AB : UActor {
	struct Unknown UberGraphFrame; //  0x310 Size(8)
	struct Unknown StaticMesh; //  0x318 Size(8)
	struct Unknown DefaultSceneRoot; //  0x320 Size(8)
	float DestructibleMeshLifeTime; //  0x328 Size(4)

	void ReceiveBeginPlay(); // Function Destructi.B.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <Game+0x23b1e70>
};

// BlueprintGeneratedClass Destructi.B
struct UB : UBravoHotelDestructibleComponent {
	struct Unknown UberGraphFrame; //  0x630 Size(8)
	float DestructibleMeshLifeTime; //  0x638 Size(4)
	char IsLegacyMethodEnable; //  0x63c Size(1)
	float StaticMeshLifeSpanTime; //  0x640 Size(4)
	char GameStarted; //  0x644 Size(1)
	float DefaultHpCache; //  0x648 Size(4)
	char IsDestructedBeforeGameStart; //  0x64c Size(1)
	char Is; //  0x64d Size(1)
	struct FMulticastInlineDelegate DestructEventDispatcher; //  0x650 Size(10)
	float LinearDamping; //  0x660 Size(4)
	float MassInKg; //  0x664 Size(4)
	float AngularDamping; //  0x668 Size(4)
	char ClassType; //  0x66c Size(1)

	void OnRep_IsDestructedBeforeGameStart(); // Function Destructi.B.OnRep_IsDestructedBeforeGameStart(BlueprintCallable|BlueprintEvent) // <Game+0x23b1e70>
};

