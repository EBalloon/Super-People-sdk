// BlueprintGeneratedClass Chat_System.Chat_System_C
class AChat_System_C : UActor {
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

	void Get(struct FString& Group); // Function Chat_System.Chat_System_C.Get(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Send(struct FString Message, struct FString Group); // Function Chat_System.Chat_System_C.Send(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Push(struct Unknown To, struct Unknown From, struct FString Message, struct FString Group, char Display); // Function Chat_System.Chat_System_C.Push(Net|NetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Create(struct FString Group); // Function Chat_System.Chat_System_C.Create(Net|NetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Add(struct FString Group); // Function Chat_System.Chat_System_C.Add(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Join(struct FString Group); // Function Chat_System.Chat_System_C.Join(Net|NetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Add(struct FString Group); // Function Chat_System.Chat_System_C.Add(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Send(struct FString Message, struct FString Group); // Function Chat_System.Chat_System_C.Send(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Add(); // Function Chat_System.Chat_System_C.Add(Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function Chat_System.Chat_System_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Spawn(); // Function Chat_System.Chat_System_C.Spawn(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Set(); // Function Chat_System.Chat_System_C.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Leave(struct FString Group, int32_t Index); // Function Chat_System.Chat_System_C.Leave(Net|NetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Remove(struct FString Group); // Function Chat_System.Chat_System_C.Remove(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Add(struct FString Group); // Function Chat_System.Chat_System_C.Add(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Remove(struct FString Group); // Function Chat_System.Chat_System_C.Remove(Net|NetServer|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Next(char Direction, char Wrap); // Function Chat_System.Chat_System_C.Next(Net|NetClient|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ExecuteUbergraph_Chat_System(int32_t EntryPoint); // Function Chat_System.Chat_System_C.ExecuteUbergraph_Chat_System(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

