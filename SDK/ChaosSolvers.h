// ScriptStruct ChaosSolvers.SolverBreakingFilterSettings
struct FSolverBreakingFilterSettings {
	char FilterEnabled : 0; // 0x0 (1)
	float MinMass; // 0x4 (4)
	float MinSpeed; // 0x8 (4)
	float MinVolume; // 0xC (4)
};

// ScriptStruct ChaosSolvers.SolverCollisionFilterSettings
struct FSolverCollisionFilterSettings {
	char FilterEnabled : 0; // 0x0 (1)
	float MinMass; // 0x4 (4)
	float MinSpeed; // 0x8 (4)
	float MinImpulse; // 0xC (4)
};

// ScriptStruct ChaosSolvers.SolverTrailingFilterSettings
struct FSolverTrailingFilterSettings {
	char FilterEnabled : 0; // 0x0 (1)
	float MinMass; // 0x4 (4)
	float MinSpeed; // 0x8 (4)
	float MinVolume; // 0xC (4)
};

