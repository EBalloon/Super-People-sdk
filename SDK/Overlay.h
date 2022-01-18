// Class Overlay.BasicOverlays
class UBasicOverlays : public UOverlays {

public:

	struct TArray<struct FOverlayItem> Overlays; // 0x28 (16)
};

// Class Overlay.LocalizedOverlays
class ULocalizedOverlays : public UOverlays {

public:

	struct UBasicOverlays DefaultOverlays; // 0x28 (8)
	struct TMap<struct FString, struct UBasicOverlays> LocaleToOverlaysMap; // 0x30 (80)
};

// ScriptStruct Overlay.OverlayItem
struct FOverlayItem {
	struct FTimespan StartTime; // 0x0 (8)
	struct FTimespan EndTime; // 0x8 (8)
	struct FString Text; // 0x10 (16)
	struct FVector2D Position; // 0x20 (8)
};

