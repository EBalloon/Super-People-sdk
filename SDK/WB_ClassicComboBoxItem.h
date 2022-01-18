// WidgetBlueprintGeneratedClass WB_ClassicComboBoxItem.WB_ClassicComboBoxItem_C
class UWB_ClassicComboBoxItem_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UTextBlock TextComboBoxItem; // 0x250 (8)
	struct UWB_ClassicComboBoxButton_C WB_ClassicComboBoxButton; // 0x258 (8)
	struct FString ItemOption; // 0x260 (16)
	struct FSVideoResolution Resolution; // 0x270 (8)

	void Construct(); // Function WB_ClassicComboBoxItem.WB_ClassicComboBoxItem_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_WB_ClassicComboBoxItem(int32_t EntryPoint); // Function WB_ClassicComboBoxItem.WB_ClassicComboBoxItem_C.ExecuteUbergraph_WB_ClassicComboBoxItem(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function WB_ClassicComboBoxItem.WB_ClassicComboBoxItem_C.Construct
inline void UWB_ClassicComboBoxItem_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function WB_ClassicComboBoxItem.WB_ClassicComboBoxItem_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WB_ClassicComboBoxItem.WB_ClassicComboBoxItem_C.ExecuteUbergraph_WB_ClassicComboBoxItem
inline void UWB_ClassicComboBoxItem_C::ExecuteUbergraph_WB_ClassicComboBoxItem(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function WB_ClassicComboBoxItem.WB_ClassicComboBoxItem_C.ExecuteUbergraph_WB_ClassicComboBoxItem");

	struct ExecuteUbergraph_WB_ClassicComboBoxItem_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_WB_ClassicComboBoxItem_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

