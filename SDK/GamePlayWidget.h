// WidgetBlueprintGeneratedClass GamePlayWidget.GamePlayWidget_C
class UGamePlayWidget_C : public UBravoHotelSettingSubWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298 (8)
	struct USlotItemWidget_C AmmoEffect; // 0x2A0 (8)
	struct USlotItemWidget_C AR; // 0x2A8 (8)
	struct USlotItemWidget_C AutoLadder; // 0x2B0 (8)
	struct USlotItemWidget_C autoReload; // 0x2B8 (8)
	struct USlotItemWidget_C AutoUseMedicalLv1; // 0x2C0 (8)
	struct USlotItemWidget_C AutoUseMedicalLv2; // 0x2C8 (8)
	struct USlotItemWidget_C AutoUseMedicalLv3; // 0x2D0 (8)
	struct USlotItemWidget_C BlueBoostEffect; // 0x2D8 (8)
	struct USlotItemWidget_C CrossHair; // 0x2E0 (8)
	struct USubTitleSlotWidget_C CustsomUseItem; // 0x2E8 (8)
	struct USlotItemWidget_C DMR; // 0x2F0 (8)
	struct USlotItemWidget_C GreenBoostEffect; // 0x2F8 (8)
	struct USlotItemWidget_C ImmediateAttachment; // 0x300 (8)
	struct USlotItemWidget_C InheritAttachment; // 0x308 (8)
	struct USubTitleSlotWidget_C inventory; // 0x310 (8)
	struct USlotItemWidget_C InventoryOrder; // 0x318 (8)
	struct USlotItemWidget_C InventoryScrollSpeed; // 0x320 (8)
	struct USlotItemWidget_C MedicalLv1Effect; // 0x328 (8)
	struct USlotItemWidget_C MedicalLv2Effect; // 0x330 (8)
	struct USlotItemWidget_C MedicalLv3Effect; // 0x338 (8)
	struct USlotItemWidget_C NetworkDebug; // 0x340 (8)
	struct USlotItemWidget_C Pistol; // 0x348 (8)
	struct USlotItemWidget_C RedBoostEffect; // 0x350 (8)
	struct UScrollBox ScrollBox_55; // 0x358 (8)
	struct USlotItemWidget_C SearchExpertWeaponMaterialItem; // 0x360 (8)
	struct USlotItemWidget_C SearchMaterialItem; // 0x368 (8)
	struct USlotItemWidget_C ShowDamageLog; // 0x370 (8)
	struct USlotItemWidget_C ShowGuideWidget; // 0x378 (8)
	struct USlotItemWidget_C ShowPerkSlot; // 0x380 (8)
	struct USlotItemWidget_C ShowSmartPing; // 0x388 (8)
	struct USlotItemWidget_C ShowSmartPingLightPole; // 0x390 (8)
	struct USlotItemWidget_C ShowSmartPingSupplyBox; // 0x398 (8)
	struct USlotItemWidget_C ShowUseaableItemEffect; // 0x3A0 (8)
	struct USlotItemWidget_C SMG; // 0x3A8 (8)
	struct USlotItemWidget_C SR; // 0x3B0 (8)
	struct USlotItemWidget_C Tutorial; // 0x3B8 (8)
	struct USlotItemWidget_C Tutorial_RePlay; // 0x3C0 (8)
	struct USlotItemWidget_C UseItem1; // 0x3C8 (8)
	struct USlotItemWidget_C UseItem2; // 0x3D0 (8)
	struct USlotItemWidget_C UseItem3; // 0x3D8 (8)
	struct USlotItemWidget_C UseItem4; // 0x3E0 (8)
	struct USlotItemWidget_C UseItem5; // 0x3E8 (8)
	struct USlotItemWidget_C UseItem6; // 0x3F0 (8)
	struct USlotItemWidget_C UseItem7; // 0x3F8 (8)
	struct USlotItemWidget_C UseItem8; // 0x400 (8)
	struct UVerticalBox VerticalBox_154; // 0x408 (8)
	struct USubTitleSlotWidget_C ¬©¨Ü; // 0x410 (8)
	struct USubTitleSlotWidget_C xŒ„; // 0x418 (8)
	struct USubTitleSlotWidget_C œ ¬¼; // 0x420 (8)
	struct FTimerHandle ScrollBarTimer; // 0x428 (8)

	void ä¤@t¤¸_1(enum class ESettingType Type); // Function GamePlayWidget.GamePlayWidget_C.ä¤@t¤¸_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void DelegateChangeValue_Event_1(struct UBravoHotelSettingSlotWidget Value); // Function GamePlayWidget.GamePlayWidget_C.DelegateChangeValue_Event_1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void Construct(); // Function GamePlayWidget.GamePlayWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function GamePlayWidget.GamePlayWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void CustomEvent(); // Function GamePlayWidget.GamePlayWidget_C.CustomEvent(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_GamePlayWidget(int32_t EntryPoint); // Function GamePlayWidget.GamePlayWidget_C.ExecuteUbergraph_GamePlayWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function GamePlayWidget.GamePlayWidget_C.ä¤@t¤¸_1
inline void UGamePlayWidget_C::ä¤@t¤¸_1(enum class ESettingType Type) {
	static auto fn = UObject::FindObject<UFunction>("Function GamePlayWidget.GamePlayWidget_C.ä¤@t¤¸_1");

	struct ä¤@t¤¸_1_Params {
		enum class ESettingType Type;
	}; ä¤@t¤¸_1_Params Params;

	Params.Type = Type;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GamePlayWidget.GamePlayWidget_C.DelegateChangeValue_Event_1
inline void UGamePlayWidget_C::DelegateChangeValue_Event_1(struct UBravoHotelSettingSlotWidget Value) {
	static auto fn = UObject::FindObject<UFunction>("Function GamePlayWidget.GamePlayWidget_C.DelegateChangeValue_Event_1");

	struct DelegateChangeValue_Event_1_Params {
		struct UBravoHotelSettingSlotWidget Value;
	}; DelegateChangeValue_Event_1_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GamePlayWidget.GamePlayWidget_C.Construct
inline void UGamePlayWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function GamePlayWidget.GamePlayWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GamePlayWidget.GamePlayWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
inline void UGamePlayWidget_C::BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function GamePlayWidget.GamePlayWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");

	struct BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params {
		float CurrentOffset;
	}; BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params Params;

	Params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GamePlayWidget.GamePlayWidget_C.CustomEvent
inline void UGamePlayWidget_C::CustomEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function GamePlayWidget.GamePlayWidget_C.CustomEvent");

	struct CustomEvent_Params {
		
	}; CustomEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GamePlayWidget.GamePlayWidget_C.ExecuteUbergraph_GamePlayWidget
inline void UGamePlayWidget_C::ExecuteUbergraph_GamePlayWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function GamePlayWidget.GamePlayWidget_C.ExecuteUbergraph_GamePlayWidget");

	struct ExecuteUbergraph_GamePlayWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_GamePlayWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

