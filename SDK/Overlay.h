// Class Overlay.BasicOverlays
struct UBasicOverlays : UOverlays {
	Unknown Overlays; //  0x28 Size(10)
};

// Class Overlay.LocalizedOverlays
struct ULocalizedOverlays : UOverlays {
	Unknown DefaultOverlays; //  0x28 Size(8)
	Unknown LocaleToOverlaysMap; //  0x30 Size(50)
};

