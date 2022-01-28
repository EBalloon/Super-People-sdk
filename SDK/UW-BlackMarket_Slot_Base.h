// WidgetBlueprintGeneratedClass UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C
class UUW-BlackMarket_Slot_Base_C : public UUserWidget {

public:

	struct FName ItemRowName; // 0x248 (8)
	struct FString ConsoleCommandString; // 0x250 (16)
	struct FString GiveCount; // 0x260 (16)
	enum class EItemType ItemType; // 0x270 (1)
	struct UImage Icon; // 0x278 (8)
	char bSlot : 0; // 0x280 (1)
	int32_t Count; // 0x284 (4)
	struct FName AmmoName; // 0x288 (8)
	struct FString AmmoCommandString; // 0x290 (16)
	int32_t AmmoCount; // 0x2A0 (4)
	struct UBravoHotelDevelopmentBlackMarket BlackMarketMainRef; // 0x2A8 (8)
	struct FBravoHotelBlackMarketDataType BlackmarketDataInfo; // 0x2B0 (280)
	struct TArray<struct FString> ConsoleMultiCommandString; // 0x3C8 (16)

	void SetConsoleMultiCommandString(struct TArray<struct FString>& Str); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetConsoleMultiCommandString(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetItemMultiCommand(struct FName ItemRowName, enum class EItemType ItemType, struct TArray<struct FString>& Command); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetItemMultiCommand(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetData(struct FBravoHotelBlackMarketDataType Data); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetData(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetAmmoInfoForWeapon(struct FName AmmoName, int32_t Count); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetAmmoInfoForWeapon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetItemType(enum class EItemType ItemType); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetItemType(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void RunCommand(); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.RunCommand(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetConsoleCommandString(struct FString Str); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetConsoleCommandString(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetItemCommand(struct FName ItemRowName, enum class EItemType ItemType, struct FString Command); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetItemCommand(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetConsoleMultiCommandString
inline void UUW-BlackMarket_Slot_Base_C::SetConsoleMultiCommandString(struct TArray<struct FString>& Str) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetConsoleMultiCommandString");

	struct SetConsoleMultiCommandString_Params {
		struct TArray<struct FString>& Str;
	}; SetConsoleMultiCommandString_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Str = Params.Str;

}

// Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetItemMultiCommand
inline void UUW-BlackMarket_Slot_Base_C::SetItemMultiCommand(struct FName ItemRowName, enum class EItemType ItemType, struct TArray<struct FString>& Command) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetItemMultiCommand");

	struct SetItemMultiCommand_Params {
		struct FName ItemRowName;
		enum class EItemType ItemType;
		struct TArray<struct FString>& Command;
	}; SetItemMultiCommand_Params Params;

	Params.ItemRowName = ItemRowName;
	Params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Command = Params.Command;

}

// Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetData
inline void UUW-BlackMarket_Slot_Base_C::SetData(struct FBravoHotelBlackMarketDataType Data) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetData");

	struct SetData_Params {
		struct FBravoHotelBlackMarketDataType Data;
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
inline void UUW-BlackMarket_Slot_Base_C::SetItemType(enum class EItemType ItemType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetItemType");

	struct SetItemType_Params {
		enum class EItemType ItemType;
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
inline void UUW-BlackMarket_Slot_Base_C::SetItemCommand(struct FName ItemRowName, enum class EItemType ItemType, struct FString Command) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetItemCommand");

	struct SetItemCommand_Params {
		struct FName ItemRowName;
		enum class EItemType ItemType;
		struct FString Command;
	}; SetItemCommand_Params Params;

	Params.ItemRowName = ItemRowName;
	Params.ItemType = ItemType;
	Params.Command = Command;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

