// Class Overlay.BasicOverlays
struct UBasicOverlays : UOverlays {
	struct TArray<Unknown> Overlays; //  0x28 Size(10)
};

// Class Overlay.LocalizedOverlays
struct ULocalizedOverlays : UOverlays {
	struct Unknown DefaultOverlays; //  0x28 Size(8)
	struct TMap<{}, {}>Unknown LocaleToOverlaysMap; //  0x30 Size(50)
};

