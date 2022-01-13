// WidgetBlueprintGeneratedClass UW-Radar_tutorial.UW-Radar_tutorial_C
class UUW-Radar_tutorial_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UImage Image; // 0x250 (8)
	struct UImage Image_2; // 0x258 (8)
	struct UImage Image_3; // 0x260 (8)
	struct UImage Image_4; // 0x268 (8)
	struct UImage Image_917; // 0x270 (8)
	struct UImage Img_TypeIcon; // 0x278 (8)
	struct UKeyImageWidget_C KeyImageWidget; // 0x280 (8)
	struct UKeyImageWidget_C KeyImageWidget_2; // 0x288 (8)
	struct UKeyImageWidget_C KeyImageWidget_3; // 0x290 (8)
	struct UKeyImageWidget_C KeyImageWidget_4; // 0x298 (8)
	struct UKeyImageWidget_C KeyImageWidget_5; // 0x2A0 (8)
	struct UTextBlock T_Context; // 0x2A8 (8)
	struct UTextBlock T_Context_2; // 0x2B0 (8)
	struct UTextBlock T_Context_3; // 0x2B8 (8)
	struct UTextBlock T_Context_4; // 0x2C0 (8)
	struct UTextBlock T_Context_5; // 0x2C8 (8)
	struct UTextBlock Text_SkillName; // 0x2D0 (8)
	struct UVerticalBox VB_Nuclear; // 0x2D8 (8)
	struct UVerticalBox VB_Retreat; // 0x2E0 (8)
	struct UWidgetSwitcher WidgetSwitcher_126; // 0x2E8 (8)

	void SetTutorialInfo(enum class EBuffEventType SkillType); // Function UW-Radar_tutorial.UW-Radar_tutorial_C.SetTutorialInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void OnLoaded_22BC0859447517E514C09EA47A9A913D(struct Object Loaded); // Function UW-Radar_tutorial.UW-Radar_tutorial_C.OnLoaded_22BC0859447517E514C09EA47A9A913D(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetRadarTutorial(); // Function UW-Radar_tutorial.UW-Radar_tutorial_C.SetRadarTutorial(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void SetGuideIconAsyncLoad(struct TSoftObjectPtr<Object> Image); // Function UW-Radar_tutorial.UW-Radar_tutorial_C.SetGuideIconAsyncLoad(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ExecuteUbergraph_UW-Radar_tutorial(int32_t EntryPoint); // Function UW-Radar_tutorial.UW-Radar_tutorial_C.ExecuteUbergraph_UW-Radar_tutorial(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Function UW-Radar_tutorial.UW-Radar_tutorial_C.SetTutorialInfo
inline void UUW-Radar_tutorial_C::SetTutorialInfo(enum class EBuffEventType SkillType) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Radar_tutorial.UW-Radar_tutorial_C.SetTutorialInfo");

	struct SetTutorialInfo_Params {
		enum class EBuffEventType SkillType;
	}; SetTutorialInfo_Params Params;

	Params.SkillType = SkillType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Radar_tutorial.UW-Radar_tutorial_C.OnLoaded_22BC0859447517E514C09EA47A9A913D
inline void UUW-Radar_tutorial_C::OnLoaded_22BC0859447517E514C09EA47A9A913D(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Radar_tutorial.UW-Radar_tutorial_C.OnLoaded_22BC0859447517E514C09EA47A9A913D");

	struct OnLoaded_22BC0859447517E514C09EA47A9A913D_Params {
		struct Object Loaded;
	}; OnLoaded_22BC0859447517E514C09EA47A9A913D_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Radar_tutorial.UW-Radar_tutorial_C.SetRadarTutorial
inline void UUW-Radar_tutorial_C::SetRadarTutorial() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Radar_tutorial.UW-Radar_tutorial_C.SetRadarTutorial");

	struct SetRadarTutorial_Params {
		
	}; SetRadarTutorial_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Radar_tutorial.UW-Radar_tutorial_C.SetGuideIconAsyncLoad
inline void UUW-Radar_tutorial_C::SetGuideIconAsyncLoad(struct TSoftObjectPtr<Object> Image) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Radar_tutorial.UW-Radar_tutorial_C.SetGuideIconAsyncLoad");

	struct SetGuideIconAsyncLoad_Params {
		struct TSoftObjectPtr<Object> Image;
	}; SetGuideIconAsyncLoad_Params Params;

	Params.Image = Image;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Radar_tutorial.UW-Radar_tutorial_C.ExecuteUbergraph_UW-Radar_tutorial
inline void UUW-Radar_tutorial_C::ExecuteUbergraph_UW-Radar_tutorial(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Radar_tutorial.UW-Radar_tutorial_C.ExecuteUbergraph_UW-Radar_tutorial");

	struct ExecuteUbergraph_UW-Radar_tutorial_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Radar_tutorial_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

