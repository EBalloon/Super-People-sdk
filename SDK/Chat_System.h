// BlueprintGeneratedClass Chat_System.Chat_System_C
class AChat_System_C : public UActor {

public:

	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown DefaultSceneRoot; // 0x318 (8)
	struct TArray<Unknown> Muted; // 0x320 (16)
	char Two : 0; // 0x330 (1)
	struct FString Player; // 0x338 (16)
	struct TArray<Unknown> Players; // 0x348 (16)
	struct Unknown Game; // 0x358 (8)
	struct TArray<Unknown> Joined; // 0x360 (16)
	struct TArray<Unknown> Banned; // 0x370 (16)
	struct TArray<Unknown> Owned; // 0x380 (16)
	struct Unknown Chat; // 0x390 (8)
	struct Unknown HU; // 0x398 (8)

	void Get(struct FString& Group); // Function Chat_System.Chat_System_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Send(struct FString Message, struct FString Group); // Function Chat_System.Chat_System_C.Send(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Push(struct Unknown To, struct Unknown From, struct FString Message, struct FString Group, char Display); // Function Chat_System.Chat_System_C.Push(Net|NetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Create(struct FString Group); // Function Chat_System.Chat_System_C.Create(Net|NetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Add(struct FString Group); // Function Chat_System.Chat_System_C.Add(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Join(struct FString Group); // Function Chat_System.Chat_System_C.Join(Net|NetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Add(struct FString Group); // Function Chat_System.Chat_System_C.Add(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Send(struct FString Message, struct FString Group); // Function Chat_System.Chat_System_C.Send(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Add(); // Function Chat_System.Chat_System_C.Add(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ReceiveBeginPlay(); // Function Chat_System.Chat_System_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Spawn(); // Function Chat_System.Chat_System_C.Spawn(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(); // Function Chat_System.Chat_System_C.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Leave(struct FString Group, int32_t Index); // Function Chat_System.Chat_System_C.Leave(Net|NetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Remove(struct FString Group); // Function Chat_System.Chat_System_C.Remove(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Add(struct FString Group); // Function Chat_System.Chat_System_C.Add(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Remove(struct FString Group); // Function Chat_System.Chat_System_C.Remove(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Next(char Direction, char Wrap); // Function Chat_System.Chat_System_C.Next(Net|NetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_Chat_System(int32_t EntryPoint); // Function Chat_System.Chat_System_C.ExecuteUbergraph_Chat_System(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

// Function Chat_System.Chat_System_C.Get
inline void AChat_System_C::Get(struct FString& Group) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Get");

	struct Get_Params {
		struct FString& Group;
	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Group = Params.Group;

}

// Function Chat_System.Chat_System_C.Send
inline void AChat_System_C::Send(struct FString Message, struct FString Group) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Send");

	struct Send_Params {
		struct FString Message;
		struct FString Group;
	}; Send_Params Params;

	Params.Message = Message;
	Params.Group = Group;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Push
inline void AChat_System_C::Push(struct Unknown To, struct Unknown From, struct FString Message, struct FString Group, char Display) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Push");

	struct Push_Params {
		struct Unknown To;
		struct Unknown From;
		struct FString Message;
		struct FString Group;
		char Display;
	}; Push_Params Params;

	Params.To = To;
	Params.From = From;
	Params.Message = Message;
	Params.Group = Group;
	Params.Display = Display;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Create
inline void AChat_System_C::Create(struct FString Group) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Create");

	struct Create_Params {
		struct FString Group;
	}; Create_Params Params;

	Params.Group = Group;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Add
inline void AChat_System_C::Add(struct FString Group) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Add");

	struct Add_Params {
		struct FString Group;
	}; Add_Params Params;

	Params.Group = Group;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Join
inline void AChat_System_C::Join(struct FString Group) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Join");

	struct Join_Params {
		struct FString Group;
	}; Join_Params Params;

	Params.Group = Group;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Add
inline void AChat_System_C::Add(struct FString Group) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Add");

	struct Add_Params {
		struct FString Group;
	}; Add_Params Params;

	Params.Group = Group;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Send
inline void AChat_System_C::Send(struct FString Message, struct FString Group) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Send");

	struct Send_Params {
		struct FString Message;
		struct FString Group;
	}; Send_Params Params;

	Params.Message = Message;
	Params.Group = Group;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Add
inline void AChat_System_C::Add() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Add");

	struct Add_Params {
		
	}; Add_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.ReceiveBeginPlay
inline void AChat_System_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Spawn
inline void AChat_System_C::Spawn() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Spawn");

	struct Spawn_Params {
		
	}; Spawn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Set
inline void AChat_System_C::Set() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Set");

	struct Set_Params {
		
	}; Set_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Leave
inline void AChat_System_C::Leave(struct FString Group, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Leave");

	struct Leave_Params {
		struct FString Group;
		int32_t Index;
	}; Leave_Params Params;

	Params.Group = Group;
	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Remove
inline void AChat_System_C::Remove(struct FString Group) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Remove");

	struct Remove_Params {
		struct FString Group;
	}; Remove_Params Params;

	Params.Group = Group;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Add
inline void AChat_System_C::Add(struct FString Group) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Add");

	struct Add_Params {
		struct FString Group;
	}; Add_Params Params;

	Params.Group = Group;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Remove
inline void AChat_System_C::Remove(struct FString Group) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Remove");

	struct Remove_Params {
		struct FString Group;
	}; Remove_Params Params;

	Params.Group = Group;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Next
inline void AChat_System_C::Next(char Direction, char Wrap) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Next");

	struct Next_Params {
		char Direction;
		char Wrap;
	}; Next_Params Params;

	Params.Direction = Direction;
	Params.Wrap = Wrap;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.ExecuteUbergraph_Chat_System
inline void AChat_System_C::ExecuteUbergraph_Chat_System(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.ExecuteUbergraph_Chat_System");

	struct ExecuteUbergraph_Chat_System_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_Chat_System_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

