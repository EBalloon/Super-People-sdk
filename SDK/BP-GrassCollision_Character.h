// BlueprintGeneratedClass BP-GrassCollision_Character.BP-GrassCollision_Character_C
class UBP-GrassCollision_Character_C : public UBravoHotelGrassCollisionComponent {

public:

	struct Unknown UberGraphFrame; // 0xB8 (8)
	float TextureScale; // 0xC0 (4)
	float CollisionArea; // 0xC4 (4)
	float LieDistance; // 0xC8 (4)
	float DrawDistance; // 0xCC (4)
	struct Unknown Brush; // 0xD0 (8)
	float Brush Intensity; // 0xD8 (4)
	struct Unknown Eraser; // 0xE0 (8)
	float Erase Intensity; // 0xE8 (4)
	char IsTickStart : 0; // 0xEC (1)
	struct Unknown TargetCharacter; // 0xF0 (8)

	void DrawGrassCollision(struct Unknown TargetCharacter); // Function BP-GrassCollision_Character.BP-GrassCollision_Character_C.DrawGrassCollision(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ClearRenderTarget(); // Function BP-GrassCollision_Character.BP-GrassCollision_Character_C.ClearRenderTarget(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_BP-GrassCollision_Character(int32_t EntryPoint); // Function BP-GrassCollision_Character.BP-GrassCollision_Character_C.ExecuteUbergraph_BP-GrassCollision_Character(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B812B0>
};

// Function BP-GrassCollision_Character.BP-GrassCollision_Character_C.DrawGrassCollision
inline void UBP-GrassCollision_Character_C::DrawGrassCollision(struct Unknown TargetCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrassCollision_Character.BP-GrassCollision_Character_C.DrawGrassCollision");

	struct DrawGrassCollision_Params {
		struct Unknown TargetCharacter;
	}; DrawGrassCollision_Params Params;

	Params.TargetCharacter = TargetCharacter;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrassCollision_Character.BP-GrassCollision_Character_C.ClearRenderTarget
inline void UBP-GrassCollision_Character_C::ClearRenderTarget() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrassCollision_Character.BP-GrassCollision_Character_C.ClearRenderTarget");

	struct ClearRenderTarget_Params {
		
	}; ClearRenderTarget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-GrassCollision_Character.BP-GrassCollision_Character_C.ExecuteUbergraph_BP-GrassCollision_Character
inline void UBP-GrassCollision_Character_C::ExecuteUbergraph_BP-GrassCollision_Character(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-GrassCollision_Character.BP-GrassCollision_Character_C.ExecuteUbergraph_BP-GrassCollision_Character");

	struct ExecuteUbergraph_BP-GrassCollision_Character_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-GrassCollision_Character_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

