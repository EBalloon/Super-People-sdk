// Class Overlay.BasicOverlays
struct UBasicOverlays : UOverlays {
	struct TArray<Unknown> Overlays; // 0x28 (16)
};

// Class Overlay.LocalizedOverlays
struct ULocalizedOverlays : UOverlays {
	struct Unknown DefaultOverlays; // 0x28 (8)
	struct TMap<Unknown, Unknown>Unknown LocaleToOverlaysMap; // 0x30 (80)
};

