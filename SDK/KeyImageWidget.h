// WidgetBlueprintGeneratedClass KeyImageWidget.KeyImageWidget_C
class UKeyImageWidget_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Alt; // 0x250 (8)
	struct Unknown Alt; // 0x258 (8)
	struct Unknown Ctrl; // 0x260 (8)
	struct Unknown Ctrl; // 0x268 (8)
	struct Unknown HorizontalBox_169; // 0x270 (8)
	struct Unknown Key; // 0x278 (8)
	struct Unknown ScaleBox_1; // 0x280 (8)
	struct Unknown Shift; // 0x288 (8)
	struct Unknown Shift; // 0x290 (8)
	char Horizontal; // 0x298 (1)
	char vertical; // 0x299 (1)
	char UsingAlphaBg : 0; // 0x29A (1)
	enum class Unknow PreKeyType; // 0x29B (1)
	struct Unknown PreKeyMappingData; // 0x2A0 (40)
	char UsingKeyMappingData : 0; // 0x2C8 (1)
	float DefaultScale; // 0x2CC (4)
	char OverrideFontSize : 0; // 0x2D0 (1)
	int32_t FontSize; // 0x2D4 (4)

	void SetFontSize(char Override); // Function KeyImageWidget.KeyImageWidget_C.SetFontSize(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void GetKeyNameFromKey(struct Unknown Key, struct FString& Name, char& bRet); // Function KeyImageWidget.KeyImageWidget_C.GetKeyNameFromKey(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(struct Unknown Key); // Function KeyImageWidget.KeyImageWidget_C.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Set(struct Unknown AxisKey); // Function KeyImageWidget.KeyImageWidget_C.Set(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetInfo(struct Unknown Key, char Shift, char Alt, char Ctrl); // Function KeyImageWidget.KeyImageWidget_C.SetInfo(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetEmpty(); // Function KeyImageWidget.KeyImageWidget_C.SetEmpty(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void Construct(); // Function KeyImageWidget.KeyImageWidget_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetInfoFromActionKeyMap(struct Unknown ActionKeyMap); // Function KeyImageWidget.KeyImageWidget_C.SetInfoFromActionKeyMap(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void SetKeyType(enum class Unknow KeyType); // Function KeyImageWidget.KeyImageWidget_C.SetKeyType(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void PreConstruct(char IsDesignTime); // Function KeyImageWidget.KeyImageWidget_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void RefreshKey(); // Function KeyImageWidget.KeyImageWidget_C.RefreshKey(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
	void ExecuteUbergraph_KeyImageWidget(int32_t EntryPoint); // Function KeyImageWidget.KeyImageWidget_C.ExecuteUbergraph_KeyImageWidget(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B3180>
};

