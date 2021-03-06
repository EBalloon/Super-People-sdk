// BlueprintGeneratedClass BP-LobbyPawn.BP-LobbyPawn_C
class ABP-LobbyPawn_C : public ABravoHotelLobbyCharacter {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3B40 (8)
	struct UBoxComponent Box; // 0x3B48 (8)
	int32_t PawnIndex; // 0x3B50 (4)
	struct UClass* BravoHotelPlayerStateClass; // 0x3B58 (8)
	char bReady : 0; // 0x3B60 (1)
	char bMatchSuccess : 0; // 0x3B61 (1)
	char bIsFaceCustomizing : 0; // 0x3B62 (1)

	void ReceiveBeginPlay(); // Function BP-LobbyPawn.BP-LobbyPawn_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void OnEquipWeapon(); // Function BP-LobbyPawn.BP-LobbyPawn_C.OnEquipWeapon(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void InitCustomizableObjectInstance(); // Function BP-LobbyPawn.BP-LobbyPawn_C.InitCustomizableObjectInstance(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_BP-LobbyPawn(int32_t EntryPoint); // Function BP-LobbyPawn.BP-LobbyPawn_C.ExecuteUbergraph_BP-LobbyPawn(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
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

