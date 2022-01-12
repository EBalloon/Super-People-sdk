// WidgetBlueprintGeneratedClass WB_ClassicSettingsText.WB_ClassicSettingsText_C
class UWB_ClassicSettingsText_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UTextBlock TextField; // 0x250 (8)
	struct FText Text; // 0x258 (24)

	void Construct(); // Function WB_ClassicSettingsText.WB_ClassicSettingsText_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void Update Text(struct FText Text); // Function WB_ClassicSettingsText.WB_ClassicSettingsText_C.Update Text(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_WB_ClassicSettingsText(int32_t EntryPoint); // Function WB_ClassicSettingsText.WB_ClassicSettingsText_C.ExecuteUbergraph_WB_ClassicSettingsText(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function WB_ClassicSettingsText.WB_ClassicSettingsText_C.Construct
inline void UWB_ClassicSettingsText_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function WB_ClassicSettingsText.WB_ClassicSettingsText_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WB_ClassicSettingsText.WB_ClassicSettingsText_C.Update Text
inline void UWB_ClassicSettingsText_C::Update Text(struct FText Text) {
	static auto fn = UObject::FindObject<UFunction>("Function WB_ClassicSettingsText.WB_ClassicSettingsText_C.Update Text");

	struct Update Text_Params {
		struct FText Text;
	}; Update Text_Params Params;

	Params.Text = Text;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WB_ClassicSettingsText.WB_ClassicSettingsText_C.ExecuteUbergraph_WB_ClassicSettingsText
inline void UWB_ClassicSettingsText_C::ExecuteUbergraph_WB_ClassicSettingsText(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function WB_ClassicSettingsText.WB_ClassicSettingsText_C.ExecuteUbergraph_WB_ClassicSettingsText");

	struct ExecuteUbergraph_WB_ClassicSettingsText_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_WB_ClassicSettingsText_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

