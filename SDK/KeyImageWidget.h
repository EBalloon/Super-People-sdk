// WidgetBlueprintGeneratedClass KeyImageWidget.KeyImageWidget_C
class UKeyImageWidget_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UUW-KeyControl_C Alt; // 0x250 (8)
	struct UTextBlock Alt+; // 0x258 (8)
	struct UUW-KeyControl_C Ctrl; // 0x260 (8)
	struct UTextBlock Ctrl+; // 0x268 (8)
	struct UHorizontalBox HorizontalBox_169; // 0x270 (8)
	struct UUW-KeyControl_C Key; // 0x278 (8)
	struct UScaleBox ScaleBox_1; // 0x280 (8)
	struct UUW-KeyControl_C Shift; // 0x288 (8)
	struct UTextBlock Shift+; // 0x290 (8)
	char Horizontal Alignment; // 0x298 (1)
	char vertical Alignment; // 0x299 (1)
	char UsingAlphaBg : 0; // 0x29A (1)
	enum class EKeySettingType PreKeyType; // 0x29B (1)
	struct FInputActionKeyMapping PreKeyMappingData; // 0x2A0 (40)
	char UsingKeyMappingData : 0; // 0x2C8 (1)
	float DefaultScale; // 0x2CC (4)
	char OverrideFontSize : 0; // 0x2D0 (1)
	int32_t FontSize; // 0x2D4 (4)

	void SetFontSize(char Override); // Function KeyImageWidget.KeyImageWidget_C.SetFontSize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void GetKeyNameFromKey(struct FKey Key, struct FString& Name, char& bRet); // Function KeyImageWidget.KeyImageWidget_C.GetKeyNameFromKey(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Set Key(struct FInputActionKeyMapping Key); // Function KeyImageWidget.KeyImageWidget_C.Set Key(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Set AxistKey(struct FInputAxisKeyMapping AxisKey); // Function KeyImageWidget.KeyImageWidget_C.Set AxistKey(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetInfo(struct FKey Key, char Shift, char Alt, char Ctrl); // Function KeyImageWidget.KeyImageWidget_C.SetInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetEmpty(); // Function KeyImageWidget.KeyImageWidget_C.SetEmpty(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void Construct(); // Function KeyImageWidget.KeyImageWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetInfoFromActionKeyMap(struct FInputActionKeyMapping ActionKeyMap); // Function KeyImageWidget.KeyImageWidget_C.SetInfoFromActionKeyMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void SetKeyType(enum class EKeySettingType KeyType); // Function KeyImageWidget.KeyImageWidget_C.SetKeyType(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void PreConstruct(char IsDesignTime); // Function KeyImageWidget.KeyImageWidget_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void RefreshKey(); // Function KeyImageWidget.KeyImageWidget_C.RefreshKey(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
	void ExecuteUbergraph_KeyImageWidget(int32_t EntryPoint); // Function KeyImageWidget.KeyImageWidget_C.ExecuteUbergraph_KeyImageWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B86EC0>
};

// Function KeyImageWidget.KeyImageWidget_C.SetFontSize
inline void UKeyImageWidget_C::SetFontSize(char Override) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyImageWidget.KeyImageWidget_C.SetFontSize");

	struct SetFontSize_Params {
		char Override;
	}; SetFontSize_Params Params;

	Params.Override = Override;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyImageWidget.KeyImageWidget_C.GetKeyNameFromKey
inline void UKeyImageWidget_C::GetKeyNameFromKey(struct FKey Key, struct FString& Name, char& bRet) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyImageWidget.KeyImageWidget_C.GetKeyNameFromKey");

	struct GetKeyNameFromKey_Params {
		struct FKey Key;
		struct FString& Name;
		char& bRet;
	}; GetKeyNameFromKey_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Name = Params.Name;
	bRet = Params.bRet;

}

// Function KeyImageWidget.KeyImageWidget_C.Set Key
inline void UKeyImageWidget_C::Set Key(struct FInputActionKeyMapping Key) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyImageWidget.KeyImageWidget_C.Set Key");

	struct Set Key_Params {
		struct FInputActionKeyMapping Key;
	}; Set Key_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyImageWidget.KeyImageWidget_C.Set AxistKey
inline void UKeyImageWidget_C::Set AxistKey(struct FInputAxisKeyMapping AxisKey) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyImageWidget.KeyImageWidget_C.Set AxistKey");

	struct Set AxistKey_Params {
		struct FInputAxisKeyMapping AxisKey;
	}; Set AxistKey_Params Params;

	Params.AxisKey = AxisKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyImageWidget.KeyImageWidget_C.SetInfo
inline void UKeyImageWidget_C::SetInfo(struct FKey Key, char Shift, char Alt, char Ctrl) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyImageWidget.KeyImageWidget_C.SetInfo");

	struct SetInfo_Params {
		struct FKey Key;
		char Shift;
		char Alt;
		char Ctrl;
	}; SetInfo_Params Params;

	Params.Key = Key;
	Params.Shift = Shift;
	Params.Alt = Alt;
	Params.Ctrl = Ctrl;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyImageWidget.KeyImageWidget_C.SetEmpty
inline void UKeyImageWidget_C::SetEmpty() {
	static auto fn = UObject::FindObject<UFunction>("Function KeyImageWidget.KeyImageWidget_C.SetEmpty");

	struct SetEmpty_Params {
		
	}; SetEmpty_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyImageWidget.KeyImageWidget_C.Construct
inline void UKeyImageWidget_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function KeyImageWidget.KeyImageWidget_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyImageWidget.KeyImageWidget_C.SetInfoFromActionKeyMap
inline void UKeyImageWidget_C::SetInfoFromActionKeyMap(struct FInputActionKeyMapping ActionKeyMap) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyImageWidget.KeyImageWidget_C.SetInfoFromActionKeyMap");

	struct SetInfoFromActionKeyMap_Params {
		struct FInputActionKeyMapping ActionKeyMap;
	}; SetInfoFromActionKeyMap_Params Params;

	Params.ActionKeyMap = ActionKeyMap;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyImageWidget.KeyImageWidget_C.SetKeyType
inline void UKeyImageWidget_C::SetKeyType(enum class EKeySettingType KeyType) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyImageWidget.KeyImageWidget_C.SetKeyType");

	struct SetKeyType_Params {
		enum class EKeySettingType KeyType;
	}; SetKeyType_Params Params;

	Params.KeyType = KeyType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyImageWidget.KeyImageWidget_C.PreConstruct
inline void UKeyImageWidget_C::PreConstruct(char IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyImageWidget.KeyImageWidget_C.PreConstruct");

	struct PreConstruct_Params {
		char IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyImageWidget.KeyImageWidget_C.RefreshKey
inline void UKeyImageWidget_C::RefreshKey() {
	static auto fn = UObject::FindObject<UFunction>("Function KeyImageWidget.KeyImageWidget_C.RefreshKey");

	struct RefreshKey_Params {
		
	}; RefreshKey_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KeyImageWidget.KeyImageWidget_C.ExecuteUbergraph_KeyImageWidget
inline void UKeyImageWidget_C::ExecuteUbergraph_KeyImageWidget(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function KeyImageWidget.KeyImageWidget_C.ExecuteUbergraph_KeyImageWidget");

	struct ExecuteUbergraph_KeyImageWidget_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_KeyImageWidget_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

