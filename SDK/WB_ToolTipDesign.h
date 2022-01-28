// WidgetBlueprintGeneratedClass WB_ToolTipDesign.WB_ToolTipDesign_C
class UWB_ToolTipDesign_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct FText My Tool Tip Text; // 0x250 (24)

	void Set Tool Tip Text Design(struct FText Tool Tip, char& -); // Function WB_ToolTipDesign.WB_ToolTipDesign_C.Set Tool Tip Text Design(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Construct(); // Function WB_ToolTipDesign.WB_ToolTipDesign_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_WB_ToolTipDesign(int32_t EntryPoint); // Function WB_ToolTipDesign.WB_ToolTipDesign_C.ExecuteUbergraph_WB_ToolTipDesign(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function WB_ToolTipDesign.WB_ToolTipDesign_C.Set Tool Tip Text Design
inline void UWB_ToolTipDesign_C::Set Tool Tip Text Design(struct FText Tool Tip, char& -) {
	static auto fn = UObject::FindObject<UFunction>("Function WB_ToolTipDesign.WB_ToolTipDesign_C.Set Tool Tip Text Design");

	struct Set Tool Tip Text Design_Params {
		struct FText Tool Tip;
		char& -;
	}; Set Tool Tip Text Design_Params Params;

	Params.Tool Tip = Tool Tip;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	- = Params.-;

}

// Function WB_ToolTipDesign.WB_ToolTipDesign_C.Construct
inline void UWB_ToolTipDesign_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function WB_ToolTipDesign.WB_ToolTipDesign_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WB_ToolTipDesign.WB_ToolTipDesign_C.ExecuteUbergraph_WB_ToolTipDesign
inline void UWB_ToolTipDesign_C::ExecuteUbergraph_WB_ToolTipDesign(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function WB_ToolTipDesign.WB_ToolTipDesign_C.ExecuteUbergraph_WB_ToolTipDesign");

	struct ExecuteUbergraph_WB_ToolTipDesign_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_WB_ToolTipDesign_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

