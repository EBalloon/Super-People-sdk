// WidgetBlueprintGeneratedClass SubTitleSlotWidget.SubTitleSlotWidget_C
class USubTitleSlotWidget_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UImage Image; // 0x250 (8)
	struct UImage Image_2; // 0x258 (8)
	struct UImage Image_4; // 0x260 (8)
	struct UImage Image_5; // 0x268 (8)
	struct UImage Image_6; // 0x270 (8)
	struct UImage Image_473; // 0x278 (8)
	struct UTextBlock TextBlock_1; // 0x280 (8)
	struct FText Title; // 0x288 (24)

	void Construct(); // Function SubTitleSlotWidget.SubTitleSlotWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Set SubType(enum class EKeySettingSubType SubType); // Function SubTitleSlotWidget.SubTitleSlotWidget_C.Set SubType(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_SubTitleSlotWidget(int32_t EntryPoint); // Function SubTitleSlotWidget.SubTitleSlotWidget_C.ExecuteUbergraph_SubTitleSlotWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function SubTitleSlotWidget.SubTitleSlotWidget_C.Construct
inline void USubTitleSlotWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function SubTitleSlotWidget.SubTitleSlotWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SubTitleSlotWidget.SubTitleSlotWidget_C.Set SubType
inline void USubTitleSlotWidget_C::Set SubType(enum class EKeySettingSubType SubType) {
	static auto fn = UObject::FindObject<UFunction>("Function SubTitleSlotWidget.SubTitleSlotWidget_C.Set SubType");

	struct Set SubType_Params {
		enum class EKeySettingSubType SubType;
	}; Set SubType_Params Params;

	Params.SubType = SubType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SubTitleSlotWidget.SubTitleSlotWidget_C.ExecuteUbergraph_SubTitleSlotWidget
inline void USubTitleSlotWidget_C::ExecuteUbergraph_SubTitleSlotWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function SubTitleSlotWidget.SubTitleSlotWidget_C.ExecuteUbergraph_SubTitleSlotWidget");

	struct ExecuteUbergraph_SubTitleSlotWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_SubTitleSlotWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

