// Class Overlay.BasicOverlays
class UBasicOverlays : public UOverlays {

public:

	struct TArray<Unknown> Overlays; // 0x28 (16)
};

// Class Overlay.LocalizedOverlays
class ULocalizedOverlays : public UOverlays {

public:

	struct Unknown DefaultOverlays; // 0x28 (8)
	struct TMap<Unknown, Unknown> LocaleToOverlaysMap; // 0x30 (80)
};

// ScriptStruct Overlay.OverlayItem
struct FOverlayItem {
	struct Unknown StartTime; // 0x0 (8)
	struct Unknown EndTime; // 0x8 (8)
	struct FString Text; // 0x10 (16)
	struct Unknown Position; // 0x20 (8)
};

