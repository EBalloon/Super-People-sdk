// WidgetBlueprintGeneratedClass UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C
class UUW-BlackMarket_Slot_Base_C : public UUserWidget {

public:

	struct FName ItemRowName; // 0x248 (8)
	struct FString ConsoleCommandString; // 0x250 (16)
	struct FString GiveCount; // 0x260 (16)
	enum class Unknow ItemType; // 0x270 (1)
	struct Unknown Icon; // 0x278 (8)
	char bSlot : 0; // 0x280 (1)
	int32_t Count; // 0x284 (4)
	struct FName AmmoName; // 0x288 (8)
	struct FString AmmoCommandString; // 0x290 (16)
	int32_t AmmoCount; // 0x2A0 (4)
	struct Unknown BlackMarketMainRef; // 0x2A8 (8)
	struct Unknown BlackmarketDataInfo; // 0x2B0 (280)
	struct TArray<Unknown> ConsoleMultiCommandString; // 0x3C8 (16)

	void SetConsoleMultiCommandString(struct TArray<Unknown>& Str); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetConsoleMultiCommandString(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetItemMultiCommand(struct FName ItemRowName, enum class Unknow ItemType, struct TArray<Unknown>& Command); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetItemMultiCommand(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetData(struct Unknown Data); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetData(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetAmmoInfoForWeapon(struct FName AmmoName, int32_t Count); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetAmmoInfoForWeapon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetItemType(enum class Unknow ItemType); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetItemType(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void RunCommand(); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.RunCommand(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetConsoleCommandString(struct FString Str); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetConsoleCommandString(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
	void SetItemCommand(struct FName ItemRowName, enum class Unknow ItemType, struct FString Command); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetItemCommand(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B812B0>
};

// Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetConsoleMultiCommandString
inline void UUW-BlackMarket_Slot_Base_C::SetConsoleMultiCommandString(struct TArray<Unknown>& Str) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetConsoleMultiCommandString");

	struct SetConsoleMultiCommandString_Params {
		struct TArray<Unknown>& Str;
	}; SetConsoleMultiCommandString_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Str = Params.Str;

}

// Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetItemMultiCommand
inline void UUW-BlackMarket_Slot_Base_C::SetItemMultiCommand(struct FName ItemRowName, enum class Unknow ItemType, struct TArray<Unknown>& Command) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetItemMultiCommand");

	struct SetItemMultiCommand_Params {
		struct FName ItemRowName;
		enum class Unknow ItemType;
		struct TArray<Unknown>& Command;
	}; SetItemMultiCommand_Params Params;

	Params.ItemRowName = ItemRowName;
	Params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Command = Params.Command;

}

// Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetData
inline void UUW-BlackMarket_Slot_Base_C::SetData(struct Unknown Data) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetData");

	struct SetData_Params {
		struct Unknown Data;
	}; SetData_Params Params;

	Params.Data = Data;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetAmmoInfoForWeapon
inline void UUW-BlackMarket_Slot_Base_C::SetAmmoInfoForWeapon(struct FName AmmoName, int32_t Count) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetAmmoInfoForWeapon");

	struct SetAmmoInfoForWeapon_Params {
		struct FName AmmoName;
		int32_t Count;
	}; SetAmmoInfoForWeapon_Params Params;

	Params.AmmoName = AmmoName;
	Params.Count = Count;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetItemType
inline void UUW-BlackMarket_Slot_Base_C::SetItemType(enum class Unknow ItemType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetItemType");

	struct SetItemType_Params {
		enum class Unknow ItemType;
	}; SetItemType_Params Params;

	Params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.RunCommand
inline void UUW-BlackMarket_Slot_Base_C::RunCommand() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.RunCommand");

	struct RunCommand_Params {
		
	}; RunCommand_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetConsoleCommandString
inline void UUW-BlackMarket_Slot_Base_C::SetConsoleCommandString(struct FString Str) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetConsoleCommandString");

	struct SetConsoleCommandString_Params {
		struct FString Str;
	}; SetConsoleCommandString_Params Params;

	Params.Str = Str;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetItemCommand
inline void UUW-BlackMarket_Slot_Base_C::SetItemCommand(struct FName ItemRowName, enum class Unknow ItemType, struct FString Command) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetItemCommand");

	struct SetItemCommand_Params {
		struct FName ItemRowName;
		enum class Unknow ItemType;
		struct FString Command;
	}; SetItemCommand_Params Params;

	Params.ItemRowName = ItemRowName;
	Params.ItemType = ItemType;
	Params.Command = Command;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

