// BlueprintGeneratedClass Chat_System.Chat_System_C
class AChat_System_C : public UActor {

public:

	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown DefaultSceneRoot; // 0x318 (8)
	struct TArray<Unknown> Muted Players; // 0x320 (16)
	char Two-way Mute? : 0; // 0x330 (1)
	struct FString Player Name; // 0x338 (16)
	struct TArray<Unknown> Players to Message; // 0x348 (16)
	struct Unknown Game Instance Blueprint; // 0x358 (8)
	struct TArray<Unknown> Joined Groups; // 0x360 (16)
	struct TArray<Unknown> Banned Groups; // 0x370 (16)
	struct TArray<Unknown> Owned Groups; // 0x380 (16)
	struct Unknown Chat Widget; // 0x390 (8)
	struct Unknown HUD Widget; // 0x398 (8)

	void Get Current Group(struct FString& Group); // Function Chat_System.Chat_System_C.Get Current Group(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Send Chat Message(struct FString Message, struct FString Group); // Function Chat_System.Chat_System_C.Send Chat Message(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Push Item(struct Unknown To:, struct Unknown From:, struct FString Message, struct FString Group, char Display Username?); // Function Chat_System.Chat_System_C.Push Item(Net|NetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Create Group(struct FString Group Name); // Function Chat_System.Chat_System_C.Create Group(Net|NetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Add Global Group on Server(struct FString Group); // Function Chat_System.Chat_System_C.Add Global Group on Server(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Join Group(struct FString Group Name); // Function Chat_System.Chat_System_C.Join Group(Net|NetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Add Local Group on Server(struct FString Group Name); // Function Chat_System.Chat_System_C.Add Local Group on Server(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Send Chat Message Server(struct FString Message, struct FString Group); // Function Chat_System.Chat_System_C.Send Chat Message Server(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Add Player to Chat(); // Function Chat_System.Chat_System_C.Add Player to Chat(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ReceiveBeginPlay(); // Function Chat_System.Chat_System_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Spawn Chat(); // Function Chat_System.Chat_System_C.Spawn Chat(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Set Keyboard Focus to Chat Input(); // Function Chat_System.Chat_System_C.Set Keyboard Focus to Chat Input(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Leave Group(struct FString Group Name, int32_t Index); // Function Chat_System.Chat_System_C.Leave Group(Net|NetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Remove Local Group on Server(struct FString Group Name); // Function Chat_System.Chat_System_C.Remove Local Group on Server(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Add Owned Group on Server(struct FString Group); // Function Chat_System.Chat_System_C.Add Owned Group on Server(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Remove Owned Group On Server(struct FString Group); // Function Chat_System.Chat_System_C.Remove Owned Group On Server(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Next Tab(char Direction, char Wrap Around at End?); // Function Chat_System.Chat_System_C.Next Tab(Net|NetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_Chat_System(int32_t EntryPoint); // Function Chat_System.Chat_System_C.ExecuteUbergraph_Chat_System(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function Chat_System.Chat_System_C.Get Current Group
inline void AChat_System_C::Get Current Group(struct FString& Group) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Get Current Group");

	struct Get Current Group_Params {
		struct FString& Group;
	}; Get Current Group_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Group = Params.Group;

}

// Function Chat_System.Chat_System_C.Send Chat Message
inline void AChat_System_C::Send Chat Message(struct FString Message, struct FString Group) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Send Chat Message");

	struct Send Chat Message_Params {
		struct FString Message;
		struct FString Group;
	}; Send Chat Message_Params Params;

	Params.Message = Message;
	Params.Group = Group;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Push Item
inline void AChat_System_C::Push Item(struct Unknown To:, struct Unknown From:, struct FString Message, struct FString Group, char Display Username?) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Push Item");

	struct Push Item_Params {
		struct Unknown To:;
		struct Unknown From:;
		struct FString Message;
		struct FString Group;
		char Display Username?;
	}; Push Item_Params Params;

	Params.To: = To:;
	Params.From: = From:;
	Params.Message = Message;
	Params.Group = Group;
	Params.Display Username? = Display Username?;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Create Group
inline void AChat_System_C::Create Group(struct FString Group Name) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Create Group");

	struct Create Group_Params {
		struct FString Group Name;
	}; Create Group_Params Params;

	Params.Group Name = Group Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Add Global Group on Server
inline void AChat_System_C::Add Global Group on Server(struct FString Group) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Add Global Group on Server");

	struct Add Global Group on Server_Params {
		struct FString Group;
	}; Add Global Group on Server_Params Params;

	Params.Group = Group;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Join Group
inline void AChat_System_C::Join Group(struct FString Group Name) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Join Group");

	struct Join Group_Params {
		struct FString Group Name;
	}; Join Group_Params Params;

	Params.Group Name = Group Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Add Local Group on Server
inline void AChat_System_C::Add Local Group on Server(struct FString Group Name) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Add Local Group on Server");

	struct Add Local Group on Server_Params {
		struct FString Group Name;
	}; Add Local Group on Server_Params Params;

	Params.Group Name = Group Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Send Chat Message Server
inline void AChat_System_C::Send Chat Message Server(struct FString Message, struct FString Group) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Send Chat Message Server");

	struct Send Chat Message Server_Params {
		struct FString Message;
		struct FString Group;
	}; Send Chat Message Server_Params Params;

	Params.Message = Message;
	Params.Group = Group;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Add Player to Chat
inline void AChat_System_C::Add Player to Chat() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Add Player to Chat");

	struct Add Player to Chat_Params {
		
	}; Add Player to Chat_Params Params;


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

// Function Chat_System.Chat_System_C.Spawn Chat
inline void AChat_System_C::Spawn Chat() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Spawn Chat");

	struct Spawn Chat_Params {
		
	}; Spawn Chat_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Set Keyboard Focus to Chat Input
inline void AChat_System_C::Set Keyboard Focus to Chat Input() {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Set Keyboard Focus to Chat Input");

	struct Set Keyboard Focus to Chat Input_Params {
		
	}; Set Keyboard Focus to Chat Input_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Leave Group
inline void AChat_System_C::Leave Group(struct FString Group Name, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Leave Group");

	struct Leave Group_Params {
		struct FString Group Name;
		int32_t Index;
	}; Leave Group_Params Params;

	Params.Group Name = Group Name;
	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Remove Local Group on Server
inline void AChat_System_C::Remove Local Group on Server(struct FString Group Name) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Remove Local Group on Server");

	struct Remove Local Group on Server_Params {
		struct FString Group Name;
	}; Remove Local Group on Server_Params Params;

	Params.Group Name = Group Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Add Owned Group on Server
inline void AChat_System_C::Add Owned Group on Server(struct FString Group) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Add Owned Group on Server");

	struct Add Owned Group on Server_Params {
		struct FString Group;
	}; Add Owned Group on Server_Params Params;

	Params.Group = Group;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Remove Owned Group On Server
inline void AChat_System_C::Remove Owned Group On Server(struct FString Group) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Remove Owned Group On Server");

	struct Remove Owned Group On Server_Params {
		struct FString Group;
	}; Remove Owned Group On Server_Params Params;

	Params.Group = Group;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chat_System.Chat_System_C.Next Tab
inline void AChat_System_C::Next Tab(char Direction, char Wrap Around at End?) {
	static auto fn = UObject::FindObject<UFunction>("Function Chat_System.Chat_System_C.Next Tab");

	struct Next Tab_Params {
		char Direction;
		char Wrap Around at End?;
	}; Next Tab_Params Params;

	Params.Direction = Direction;
	Params.Wrap Around at End? = Wrap Around at End?;

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

