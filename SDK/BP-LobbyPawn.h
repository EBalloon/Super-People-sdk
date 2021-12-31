// BlueprintGeneratedClass BP-LobbyPawn.BP-LobbyPawn_C
class ABP-LobbyPawn_C : public ABravoHotelLobbyCharacter {

public:

	struct Unknown UberGraphFrame; // 0x3A60 (8)
	struct Unknown Box; // 0x3A68 (8)
	int32_t PawnIndex; // 0x3A70 (4)
	struct Unknown* BravoHotelPlayerStateClass; // 0x3A78 (8)
	char bReady : 0; // 0x3A80 (1)
	char bMatchSuccess : 0; // 0x3A81 (1)
	char bIsFaceCustomizing : 0; // 0x3A82 (1)

	void ReceiveBeginPlay(); // Function BP-LobbyPawn.BP-LobbyPawn_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnEquipWeapon(); // Function BP-LobbyPawn.BP-LobbyPawn_C.OnEquipWeapon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void InitCustomizableObjectInstance(); // Function BP-LobbyPawn.BP-LobbyPawn_C.InitCustomizableObjectInstance(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_BP-LobbyPawn(int32_t EntryPoint); // Function BP-LobbyPawn.BP-LobbyPawn_C.ExecuteUbergraph_BP-LobbyPawn(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function BP-LobbyPawn.BP-LobbyPawn_C.ReceiveBeginPlay
inline void ABP-LobbyPawn_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyPawn.BP-LobbyPawn_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyPawn.BP-LobbyPawn_C.OnEquipWeapon
inline void ABP-LobbyPawn_C::OnEquipWeapon() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyPawn.BP-LobbyPawn_C.OnEquipWeapon");

	struct OnEquipWeapon_Params {
		
	}; OnEquipWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyPawn.BP-LobbyPawn_C.InitCustomizableObjectInstance
inline void ABP-LobbyPawn_C::InitCustomizableObjectInstance() {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyPawn.BP-LobbyPawn_C.InitCustomizableObjectInstance");

	struct InitCustomizableObjectInstance_Params {
		
	}; InitCustomizableObjectInstance_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP-LobbyPawn.BP-LobbyPawn_C.ExecuteUbergraph_BP-LobbyPawn
inline void ABP-LobbyPawn_C::ExecuteUbergraph_BP-LobbyPawn(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP-LobbyPawn.BP-LobbyPawn_C.ExecuteUbergraph_BP-LobbyPawn");

	struct ExecuteUbergraph_BP-LobbyPawn_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP-LobbyPawn_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

