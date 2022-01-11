// WidgetBlueprintGeneratedClass WB_ClassicComboBoxItem.WB_ClassicComboBoxItem_C
class UWB_ClassicComboBoxItem_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown TextComboBoxItem; // 0x250 (8)
	struct Unknown WB_ClassicComboBoxButton; // 0x258 (8)
	struct FString ItemOption; // 0x260 (16)
	struct Unknown Resolution; // 0x270 (8)

	void Construct(); // Function WB_ClassicComboBoxItem.WB_ClassicComboBoxItem_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_WB_ClassicComboBoxItem(int32_t EntryPoint); // Function WB_ClassicComboBoxItem.WB_ClassicComboBoxItem_C.ExecuteUbergraph_WB_ClassicComboBoxItem(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
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

