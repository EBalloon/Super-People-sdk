// BlueprintGeneratedClass Chameleon.Chameleon_C
class AChameleon_C : public UActor {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328 (8)
	struct UMaterialBillboardComponent MaterialBillboard; // 0x330 (8)
	struct UPostProcessComponent InternalPP; // 0x338 (8)
	struct UBoxComponent Bounding Box; // 0x340 (8)
	char Bleach Bypass : 0; // 0x348 (1)
	char Distance Fog : 0; // 0x349 (1)
	char Channel Clamper : 0; // 0x34A (1)
	struct UMaterial mChannelClamper; // 0x350 (8)
	struct UMaterialInstanceDynamic iChannelClamper; // 0x358 (8)
	char Channel Swapper : 0; // 0x360 (1)
	char Screen Drops : 0; // 0x361 (1)
	char Alcohol : 0; // 0x362 (1)
	char Drug : 0; // 0x363 (1)
	char Mosaic : 0; // 0x364 (1)
	char Pixel Dissolve : 0; // 0x365 (1)
	char Blur : 0; // 0x366 (1)
	struct UMaterial mBleachBypass; // 0x368 (8)
	struct UMaterial mDistanceFog; // 0x370 (8)
	struct UMaterial mChannelSwapper; // 0x378 (8)
	struct UMaterial mScreenDrops; // 0x380 (8)
	struct UMaterial mAlcohol; // 0x388 (8)
	struct UMaterial mDrug; // 0x390 (8)
	struct UMaterial mMosaic; // 0x398 (8)
	struct UMaterial mPixelDissolve; // 0x3A0 (8)
	struct UMaterial mBlur; // 0x3A8 (8)
	float Channel Clamper Red Intensity; // 0x3B0 (4)
	float Channel Clamper Green Intensity; // 0x3B4 (4)
	float Channel Clamper Blue Intensity; // 0x3B8 (4)
	struct UMaterialInstanceDynamic iBleachBypass; // 0x3C0 (8)
	struct UMaterialInstanceDynamic iDistanceFog; // 0x3C8 (8)
	struct UMaterialInstanceDynamic iChannelSwapper; // 0x3D0 (8)
	char Channel Swapper Red; // 0x3D8 (1)
	char Channel Swapper Green; // 0x3D9 (1)
	char Channel Swapper Blue; // 0x3DA (1)
	struct UMaterialInstanceDynamic iScreenDrops; // 0x3E0 (8)
	struct UMaterialInstanceDynamic iAlcohol; // 0x3E8 (8)
	struct UMaterialInstanceDynamic iDrug; // 0x3F0 (8)
	struct UMaterialInstanceDynamic iMosaic; // 0x3F8 (8)
	struct UMaterialInstanceDynamic iPixelDissolve; // 0x400 (8)
	struct UMaterialInstanceDynamic iBlur; // 0x408 (8)
	struct UTexture2D Screen Drops Layer 1 Map; // 0x410 (8)
	float Screen Drops Layer 1 Intensity; // 0x418 (4)
	float Mosaic Scale; // 0x41C (4)
	float Alcohol Speed; // 0x420 (4)
	float Drug Speed; // 0x424 (4)
	float Pixel Dissolve Intensity; // 0x428 (4)
	float Blur Amount; // 0x42C (4)
	char ASCII : 0; // 0x430 (1)
	struct UMaterial mAscii; // 0x438 (8)
	struct UMaterialInstanceDynamic iAscii; // 0x440 (8)
	char Colorize : 0; // 0x448 (1)
	struct UMaterial mColorize; // 0x450 (8)
	struct UMaterialInstanceDynamic iColorize; // 0x458 (8)
	float Colorize Detail; // 0x460 (4)
	char Comic : 0; // 0x464 (1)
	struct UMaterial mComic; // 0x468 (8)
	struct UMaterialInstanceDynamic iComic; // 0x470 (8)
	struct FLinearColor Comic Blend Color; // 0x478 (16)
	float Comic Threshold; // 0x488 (4)
	char Edge Detect : 0; // 0x48C (1)
	struct UMaterial mEdgeDetect; // 0x490 (8)
	struct UMaterialInstanceDynamic iEdgeDetect; // 0x498 (8)
	char Emboss : 0; // 0x4A0 (1)
	struct UMaterial mEmboss; // 0x4A8 (8)
	struct UMaterialInstanceDynamic iEmboss; // 0x4B0 (8)
	char Glitch : 0; // 0x4B8 (1)
	struct UMaterial mGlitch; // 0x4C0 (8)
	struct UMaterialInstanceDynamic iGlitch; // 0x4C8 (8)
	float Glitch Speed; // 0x4D0 (4)
	float Glitch Lines; // 0x4D4 (4)
	float Glitch Blocking; // 0x4D8 (4)
	char Monitor Effects : 0; // 0x4DC (1)
	struct UMaterial mGrainNLines; // 0x4E0 (8)
	struct UMaterialInstanceDynamic iGrainNLines; // 0x4E8 (8)
	float Monitor Effects Line Count; // 0x4F0 (4)
	float Monitor Effects Intensity 1; // 0x4F4 (4)
	float Monitor Effects Intensity 2; // 0x4F8 (4)
	char Hard Emboss : 0; // 0x4FC (1)
	struct UMaterial mHardEmboss; // 0x500 (8)
	struct UMaterialInstanceDynamic iHardEmboss; // 0x508 (8)
	char Hue Panner : 0; // 0x510 (1)
	struct UMaterial mHuePanner; // 0x518 (8)
	struct UMaterialInstanceDynamic iHuePanner; // 0x520 (8)
	float Hue Panner Speed; // 0x528 (4)
	char Monochrome : 0; // 0x52C (1)
	struct UMaterial mMonochrome; // 0x530 (8)
	struct UMaterialInstanceDynamic iMonochrome; // 0x538 (8)
	struct FLinearColor Monochrome Color; // 0x540 (16)
	char Radial Blur : 0; // 0x550 (1)
	struct UMaterial mRadialBlur; // 0x558 (8)
	struct UMaterialInstanceDynamic iRadialBlur; // 0x560 (8)
	float Radial Blur Width; // 0x568 (4)
	int32_t Radial Blur Samples; // 0x56C (4)
	char Scratches : 0; // 0x570 (1)
	struct UMaterial mScratches; // 0x578 (8)
	struct UMaterialInstanceDynamic iScratches; // 0x580 (8)
	char Screen Waves : 0; // 0x588 (1)
	struct UMaterial mScreenWaves; // 0x590 (8)
	struct UMaterialInstanceDynamic iScreenWaves; // 0x598 (8)
	float Screen Waves X Tiling; // 0x5A0 (4)
	float Screen Waves Y Tiling; // 0x5A4 (4)
	float Monitor Effects Distortion 1; // 0x5A8 (4)
	float Monitor Effects Distortion 2; // 0x5AC (4)
	float Monitor Effects Picture Scale; // 0x5B0 (4)
	struct FLinearColor Distance Fog Near Color; // 0x5B4 (16)
	struct FLinearColor Distance Fog Far Color; // 0x5C4 (16)
	float Distance Fog Distance; // 0x5D4 (4)
	struct UTexture2D Scratches Distortion Map; // 0x5D8 (8)
	float Scratches Distortion Amount; // 0x5E0 (4)
	struct FLinearColor Scratches Color; // 0x5E4 (16)
	float Screen Drops Layer 1 Speed; // 0x5F4 (4)
	float Screen Drops Layer 1 Noise; // 0x5F8 (4)
	struct UTexture2D Screen Drops Layer 2 Map; // 0x600 (8)
	float Screen Drops Layer 2 Intensity; // 0x608 (4)
	float Screen Drops Layer 2 Speed; // 0x60C (4)
	float Screen Drops Layer 2 Noise; // 0x610 (4)
	struct UTexture2D Screen Drops Layer 3 Map; // 0x618 (8)
	float Screen Drops Layer 3 Intensity; // 0x620 (4)
	float Screen Drops Layer 3 Speed; // 0x624 (4)
	char Invert : 0; // 0x628 (1)
	struct UMaterial mInvert; // 0x630 (8)
	struct UMaterialInstanceDynamic iInvert; // 0x638 (8)
	char Iridescent : 0; // 0x640 (1)
	struct UMaterial mIridescent; // 0x648 (8)
	struct UMaterialInstanceDynamic iIridescent; // 0x650 (8)
	float Iridescent Iridescence; // 0x658 (4)
	char Kuwahara : 0; // 0x65C (1)
	struct UMaterial mKuwahara; // 0x660 (8)
	struct UMaterialInstanceDynamic iKuwahara; // 0x668 (8)
	int32_t Kuwahara Amount; // 0x670 (4)
	char Pulse : 0; // 0x674 (1)
	struct UMaterial mPulse; // 0x678 (8)
	struct UMaterialInstanceDynamic iPulse; // 0x680 (8)
	float Pulse Center X; // 0x688 (4)
	float Pulse Center Y; // 0x68C (4)
	float Pulse Speed; // 0x690 (4)
	float Pulse Smoothing; // 0x694 (4)
	char Squares : 0; // 0x698 (1)
	struct UMaterial mSquares; // 0x6A0 (8)
	struct UMaterialInstanceDynamic iSquares; // 0x6A8 (8)
	float Squares Scale; // 0x6B0 (4)
	float Squares Ratio; // 0x6B4 (4)
	float Squares Radius; // 0x6B8 (4)
	float Squares Brightness; // 0x6BC (4)
	char Tiles : 0; // 0x6C0 (1)
	struct UMaterial mTiles; // 0x6C8 (8)
	struct UMaterialInstanceDynamic iTiles; // 0x6D0 (8)
	char Tiles Centered : 0; // 0x6D8 (1)
	float Tiles Count; // 0x6DC (4)
	char TV Noise : 0; // 0x6E0 (1)
	struct UMaterial mTVNoise; // 0x6E8 (8)
	struct UMaterialInstanceDynamic iTVNoise; // 0x6F0 (8)
	float TV Noise Contrast; // 0x6F8 (4)
	float TV Noise Intensity; // 0x6FC (4)
	struct FPostProcessSettings Native Post Process; // 0x700 (1472)
	char LOOK! : 0; // 0xCC0 (1)
	char LOOK! Presets; // 0xCC1 (1)
	char Circles : 0; // 0xCC2 (1)
	struct UMaterial mCircles; // 0xCC8 (8)
	struct UMaterialInstanceDynamic iCircles; // 0xCD0 (8)
	float Circles Ratio; // 0xCD8 (4)
	float Circles Tiling; // 0xCDC (4)
	char Sonar : 0; // 0xCE0 (1)
	struct UMaterial mSonar; // 0xCE8 (8)
	struct UMaterialInstanceDynamic iSonar; // 0xCF0 (8)
	struct FLinearColor Sonar Color; // 0xCF8 (16)
	float Sonar Color Intensity; // 0xD08 (4)
	float Sonar Depth; // 0xD0C (4)
	float Sonar Wave Distance; // 0xD10 (4)
	float Sonar Distortion Intensity; // 0xD14 (4)
	float Sonar Sharpness; // 0xD18 (4)
	float Alcohol Offset; // 0xD1C (4)
	char Distance Distortion : 0; // 0xD20 (1)
	struct UMaterial mDistanceDistortion; // 0xD28 (8)
	struct UMaterialInstanceDynamic iDistanceDistortion; // 0xD30 (8)
	struct UTexture2D Distance Distortion Normal; // 0xD38 (8)
	float Distance Distortion Amount; // 0xD40 (4)
	float Distance Distortion Edge Distance; // 0xD44 (4)
	float Distance Distortion Edge Fading; // 0xD48 (4)
	float Distance Distortion Movement Speed; // 0xD4C (4)
	float Distance Distortion Movement Scale; // 0xD50 (4)
	float Distance Distortion Affected Brightness; // 0xD54 (4)
	float Distance Distortion Unaffected Brightness; // 0xD58 (4)
	char Drawing : 0; // 0xD5C (1)
	struct UMaterial mDrawing; // 0xD60 (8)
	struct UMaterialInstanceDynamic iDrawing; // 0xD68 (8)
	struct UTexture2D Drawing Paper Texture; // 0xD70 (8)
	char Drawing Noise Algorithm; // 0xD78 (1)
	float Drawing Ink Amount; // 0xD7C (4)
	float Drawing Liner Amount; // 0xD80 (4)
	struct FLinearColor Drawing Blending Color; // 0xD84 (16)
	char Magic Transitions : 0; // 0xD94 (1)
	struct UMaterial mMagicTransitions; // 0xD98 (8)
	struct UMaterialInstanceDynamic iMagicTransitions; // 0xDA0 (8)
	struct UTexture2D Magic Transitions Final Texture; // 0xDA8 (8)
	struct UTexture2D Magic Transitions Mask Texture; // 0xDB0 (8)
	float Magic Transitions Transition Amount; // 0xDB8 (4)
	float Magic Transitions Flashing Intensity; // 0xDBC (4)
	float Magic Transitions Flashing Tolerance; // 0xDC0 (4)
	struct FLinearColor Magic Transitions Flashing Color; // 0xDC4 (16)
	char Screen Damage : 0; // 0xDD4 (1)
	struct UMaterial mScreenDamage; // 0xDD8 (8)
	struct UMaterialInstanceDynamic iScreenDamage; // 0xDE0 (8)
	struct UTexture2D Screen Damage Texture; // 0xDE8 (8)
	float Screen Damage Intensity; // 0xDF0 (4)
	float Screen Damage Distortion; // 0xDF4 (4)
	struct FLinearColor Screen Damage Tint; // 0xDF8 (16)
	float Screen Damage Edge Size; // 0xE08 (4)
	float Screen Damage Fading; // 0xE0C (4)
	char Screen Decals : 0; // 0xE10 (1)
	struct UMaterial mScreenDecals; // 0xE18 (8)
	struct UMaterialInstanceDynamic iScreenDecals; // 0xE20 (8)
	struct UTexture2D Screen Decals Slot 1 - Texture; // 0xE28 (8)
	float Screen Decals Slot 1 - Distortion; // 0xE30 (4)
	float Screen Decals Slot 1 - Intensity; // 0xE34 (4)
	float Screen Decals Slot 1 - Position X; // 0xE38 (4)
	float Screen Decals Slot 1 - Position Y; // 0xE3C (4)
	float Screen Decals Slot 1 - Rotation; // 0xE40 (4)
	float Screen Decals Slot 1 - Size; // 0xE44 (4)
	struct UTexture2D Screen Decals Slot 2 - Texture; // 0xE48 (8)
	float Screen Decals Slot 2 - Distortion; // 0xE50 (4)
	float Screen Decals Slot 2 - Intensity; // 0xE54 (4)
	float Screen Decals Slot 2 - Position X; // 0xE58 (4)
	float Screen Decals Slot 2 - Position Y; // 0xE5C (4)
	float Screen Decals Slot 2 - Rotation; // 0xE60 (4)
	float Screen Decals Slot 2 - Size; // 0xE64 (4)
	struct UTexture2D Screen Decals Slot 3 - Texture; // 0xE68 (8)
	float Screen Decals Slot 3 - Distortion; // 0xE70 (4)
	float Screen Decals Slot 3 - Intensity; // 0xE74 (4)
	float Screen Decals Slot 3 - Position X; // 0xE78 (4)
	float Screen Decals Slot 3 - Position Y; // 0xE7C (4)
	float Screen Decals Slot 3 - Rotation; // 0xE80 (4)
	float Screen Decals Slot 3 - Size; // 0xE84 (4)
	struct UTexture2D Screen Decals Slot 4 - Texture; // 0xE88 (8)
	float Screen Decals Slot 4 - Distortion; // 0xE90 (4)
	float Screen Decals Slot 4 - Intensity; // 0xE94 (4)
	float Screen Decals Slot 4 - Position X; // 0xE98 (4)
	float Screen Decals Slot 4 - Position Y; // 0xE9C (4)
	float Screen Decals Slot 4 - Rotation; // 0xEA0 (4)
	float Screen Decals Slot 4 - Size; // 0xEA4 (4)
	char Sharpen : 0; // 0xEA8 (1)
	struct UMaterial mSharpen; // 0xEB0 (8)
	struct UMaterialInstanceDynamic iSharpen; // 0xEB8 (8)
	float Sharpen Value; // 0xEC0 (4)
	char Toon Shading : 0; // 0xEC4 (1)
	struct UMaterial mToonShading; // 0xEC8 (8)
	struct UMaterialInstanceDynamic iToonShading; // 0xED0 (8)
	char Toon Shading Use Diffuse Buffer : 0; // 0xED8 (1)
	float Toon Shading Details; // 0xEDC (4)
	float Toon Shading Fading ; // 0xEE0 (4)
	float Toon Shading Size; // 0xEE4 (4)
	float Toon Shading Sobel Strength; // 0xEE8 (4)
	char Anamorphic Lens Flares : 0; // 0xEEC (1)
	struct UMaterial mAnamorphicLensFlares; // 0xEF0 (8)
	struct UMaterialInstanceDynamic iAnamorphicLensFlares; // 0xEF8 (8)
	float Anamorphic Lens Flares Linear Color; // 0xF00 (4)
	float Anamorphic Lens Flares Exposure Scale; // 0xF04 (4)
	float Anamorphic Lens Flares Threshold; // 0xF08 (4)
	float Anamorphic Lens Flares Intensity; // 0xF0C (4)
	float Anamorphic Lens Flares Steps; // 0xF10 (4)
	float Anamorphic Lens Flares Length; // 0xF14 (4)
	struct FLinearColor Anamorphic Lens Flares Tint; // 0xF18 (16)
	char Frost : 0; // 0xF28 (1)
	struct UMaterial mFrost; // 0xF30 (8)
	struct UMaterialInstanceDynamic iFrost; // 0xF38 (8)
	struct UTexture2D Frost Texture; // 0xF40 (8)
	float Frost Colorization; // 0xF48 (4)
	float Frost Distortion Strength; // 0xF4C (4)
	float Frost Visible Area; // 0xF50 (4)
	struct FLinearColor ASCII Color Multiplier; // 0xF54 (16)
	char Neon : 0; // 0xF64 (1)
	struct UMaterial mNeon; // 0xF68 (8)
	struct UMaterialInstanceDynamic iNeon; // 0xF70 (8)
	struct FLinearColor Neon Color; // 0xF78 (16)
	float Neon Noise; // 0xF88 (4)
	float Neon Power; // 0xF8C (4)
	char Custom Depth Highlighter : 0; // 0xF90 (1)
	struct UMaterial mCustomDepthHighlighter; // 0xF98 (8)
	struct UMaterialInstanceDynamic iCustomDepthHighlighter; // 0xFA0 (8)
	struct FLinearColor Custom Depth Highlighter Highlight Color; // 0xFA8 (16)
	float Custom Depth Highlighter Highlight Opacity; // 0xFB8 (4)
	char Custom Depth Highlighter (Clip) : 0; // 0xFBC (1)
	struct UMaterial mCustomDepthHighlighterClip; // 0xFC0 (8)
	struct UMaterialInstanceDynamic iCustomDepthHighlighterClip; // 0xFC8 (8)
	struct FLinearColor Custom Depth Highlighter (C) Highlight Color; // 0xFD0 (16)
	float Custom Depth Highlighter (C) Highlight Opacity; // 0xFE0 (4)
	float Edge Detect Threshold; // 0xFE4 (4)
	float Scratches Noising; // 0xFE8 (4)
	char Enabled : 0; // 0xFEC (1)
	char Unbound : 0; // 0xFED (1)
	struct TArray<struct UMaterial> AllMaterials; // 0xFF0 (16)
	float Screen Drops Layer 3 Noise; // 0x1000 (4)
	struct FLinearColor Screen Drops Diffuse Color; // 0x1004 (16)
	float Screen Drops Splashes Amount; // 0x1014 (4)
	float Screen Drops Splashes Tiling; // 0x1018 (4)
	float Screen Drops Splashes Intensity; // 0x101C (4)
	float Screen Drops Bump; // 0x1020 (4)
	char 2D Transform : 0; // 0x1024 (1)
	struct UMaterial m2DTransform; // 0x1028 (8)
	struct UMaterialInstanceDynamic i2DTransform; // 0x1030 (8)
	char Kaleidescope : 0; // 0x1038 (1)
	struct UMaterial mKaleidescope; // 0x1040 (8)
	struct UMaterialInstanceDynamic iKaleidescope; // 0x1048 (8)
	char Letterboxing : 0; // 0x1050 (1)
	struct UMaterial mLetterboxing; // 0x1058 (8)
	struct UMaterialInstanceDynamic iLetterboxing; // 0x1060 (8)
	char Snow : 0; // 0x1068 (1)
	struct UMaterial mSnow; // 0x1070 (8)
	struct UMaterialInstanceDynamic iSnow; // 0x1078 (8)
	float 2D Transform Anchor Point (X); // 0x1080 (4)
	float 2D Transform Anchor Point (Y); // 0x1084 (4)
	float 2D Transform Rotate; // 0x1088 (4)
	float 2D Transform Pan (X); // 0x108C (4)
	float 2D Transform Pan (Y); // 0x1090 (4)
	float 2D Transform Scale (X); // 0x1094 (4)
	float 2D Transform Scale (Y); // 0x1098 (4)
	char 2D Transform Tiled : 0; // 0x109C (1)
	float Kaleidescope Scale; // 0x10A0 (4)
	float Kaleidescope Factor A; // 0x10A4 (4)
	float Kaleidescope Factor B; // 0x10A8 (4)
	struct UTexture2D Letterboxing Texture; // 0x10B0 (8)
	float Letterboxing Size; // 0x10B8 (4)
	char Letterboxing Horizontal : 0; // 0x10BC (1)
	char Letterboxing Vertical : 0; // 0x10BD (1)
	float Snow Amount; // 0x10C0 (4)
	float Snow Distortion; // 0x10C4 (4)
	float Snow Size; // 0x10C8 (4)
	float Snow Speed (X); // 0x10CC (4)
	float Snow Speed (Y); // 0x10D0 (4)
	float Drawing Animation Speed; // 0x10D4 (4)
	float Distance Fog Edge Sharpness; // 0x10D8 (4)
	float Screen Drops Diffuse Intensity; // 0x10DC (4)
	char World Splash : 0; // 0x10E0 (1)
	struct UMaterial mWorldSplash; // 0x10E8 (8)
	struct UMaterialInstanceDynamic iWorldSplash; // 0x10F0 (8)
	float World Splash Distort; // 0x10F8 (4)
	float World Splash Smoothness; // 0x10FC (4)
	float World Splash Tiling; // 0x1100 (4)
	struct FLinearColor World Splash Color Tint; // 0x1104 (16)
	int32_t Blur Samples; // 0x1114 (4)
	struct FLinearColor Frost Color; // 0x1118 (16)
	float Comic PreMultiplier; // 0x1128 (4)
	float Comic Desaturation; // 0x112C (4)
	char World Glitch : 0; // 0x1130 (1)
	struct UMaterial mWorldGlitch; // 0x1138 (8)
	struct UMaterialInstanceDynamic iWorldGlitch; // 0x1140 (8)
	char World Glitch Animated : 0; // 0x1148 (1)
	float World Glitch Animation Speed; // 0x114C (4)
	float World Glitch Distance; // 0x1150 (4)
	float World Glitch Distance Sharpness; // 0x1154 (4)
	float World Glitch Phase; // 0x1158 (4)
	float World Glitch Power; // 0x115C (4)
	struct FVector World Glitch Grid Position; // 0x1160 (12)
	struct FVector World Glitch Grid Size; // 0x116C (12)
	char Digitize : 0; // 0x1178 (1)
	struct UMaterial mDigitize; // 0x1180 (8)
	struct UMaterialInstanceDynamic iDigitize; // 0x1188 (8)
	struct FLinearColor Digitize Cell Color; // 0x1190 (16)
	struct FVector Digitize Cell Position; // 0x11A0 (12)
	struct FVector Digitize Cell Position Over Time; // 0x11AC (12)
	float Digitize Distance; // 0x11B8 (4)
	float Digitize Distance Sharpness; // 0x11BC (4)
	float Digitize Cell Size; // 0x11C0 (4)
	float Digitize Cell Color Multiplier; // 0x11C4 (4)
	float Digitize Cell Distortion; // 0x11C8 (4)
	float Digitize Background Color Multiplier; // 0x11CC (4)
	char Alarm : 0; // 0x11D0 (1)
	struct UMaterial mAlarm; // 0x11D8 (8)
	struct UMaterialInstanceDynamic iAlarm; // 0x11E0 (8)
	struct FLinearColor Alarm Color; // 0x11E8 (16)
	float Alarm Speed; // 0x11F8 (4)
	char Sketch : 0; // 0x11FC (1)
	struct UMaterial mSketch; // 0x1200 (8)
	struct UMaterialInstanceDynamic iSketch; // 0x1208 (8)
	struct FLinearColor Sketch Color; // 0x1210 (16)
	struct FLinearColor Sketch Background Color; // 0x1220 (16)
	float Sketch Power; // 0x1230 (4)
	float Sketch Pattern Rotation; // 0x1234 (4)
	float Sketch Pattern Speed; // 0x1238 (4)
	struct FLinearColor Custom Depth Highlighter Outline Color; // 0x123C (16)
	float Custom Depth Highlighter Outline Opacity; // 0x124C (4)
	struct FLinearColor Custom Depth Highlighter (C) Outline Color; // 0x1250 (16)
	float Custom Depth Highlighter (C) Outline Opacity; // 0x1260 (4)
	char Wired : 0; // 0x1264 (1)
	struct UMaterialInstanceDynamic iWired; // 0x1268 (8)
	struct UMaterial mWired; // 0x1270 (8)
	struct FLinearColor Wired Color; // 0x1278 (16)
	float Wired Power; // 0x1288 (4)
	struct FAdvancedEffectFeatures Mosaic - Advanced; // 0x1290 (56)
	struct FAdvancedEffectFeatures Drug - Advanced; // 0x12C8 (56)
	struct FAdvancedEffectFeatures Alcohol - Advanced; // 0x1300 (56)
	struct FAdvancedEffectFeatures Pixel Dissolve - Advanced; // 0x1338 (56)
	struct FAdvancedEffectFeatures Channel Clamper - Advanced; // 0x1370 (56)
	struct FAdvancedEffectFeatures Channel Swapper - Advanced; // 0x13A8 (56)
	struct FAdvancedEffectFeatures Bleach Bypass - Advanced; // 0x13E0 (56)
	struct FAdvancedEffectFeatures Blur - Advanced; // 0x1418 (56)
	float ASCII PreMultiplier; // 0x1450 (4)
	struct FAdvancedEffectFeatures ASCII - Advanced; // 0x1458 (56)
	struct FAdvancedEffectFeatures Colorize - Advanced; // 0x1490 (56)
	struct FAdvancedEffectFeatures Edge Detect - Advanced; // 0x14C8 (56)
	struct FAdvancedEffectFeatures Emboss - Advanced; // 0x1500 (56)
	struct FAdvancedEffectFeatures Hard Emboss - Advanced; // 0x1538 (56)
	float Glitch Grid Distortion Power; // 0x1570 (4)
	float Glitch Grid Distortion Size; // 0x1574 (4)
	float Glitch Grid Distortion Speed; // 0x1578 (4)
	struct FAdvancedEffectFeatures Glitch - Advanced; // 0x1580 (56)
	char Monitor Effects Tiled : 0; // 0x15B8 (1)
	struct FAdvancedEffectFeatures Monitor Effects - Advanced; // 0x15C0 (56)
	struct FAdvancedEffectFeatures Hue Panner - Advanced; // 0x15F8 (56)
	struct FAdvancedEffectFeatures Monochrome - Advanced; // 0x1630 (56)
	struct FVector2D Radial Blur Center; // 0x1668 (8)
	struct FVector2D Radial Blur Sample Offset; // 0x1670 (8)
	struct FAdvancedEffectFeatures Radial Blur - Advanced; // 0x1678 (56)
	struct FAdvancedEffectFeatures Scratches - Advanced; // 0x16B0 (56)
	struct FAdvancedEffectFeatures Screen Waves - Advanced; // 0x16E8 (56)
	struct FAdvancedEffectFeatures Distance Fog - Advanced; // 0x1720 (56)
	struct FAdvancedEffectFeatures Screen Drops - Advanced; // 0x1758 (56)
	struct FAdvancedEffectFeatures Invert - Advanced; // 0x1790 (56)
	struct FAdvancedEffectFeatures Iridescent - Advanced; // 0x17C8 (56)
	struct FAdvancedEffectFeatures Kuwahara - Advanced; // 0x1800 (56)
	struct FAdvancedEffectFeatures Pulse - Advanced; // 0x1838 (56)
	struct FAdvancedEffectFeatures Squares - Advanced; // 0x1870 (56)
	struct FAdvancedEffectFeatures Tiles - Advanced; // 0x18A8 (56)
	struct FAdvancedEffectFeatures TV Noise - Advanced; // 0x18E0 (56)
	struct FAdvancedEffectFeatures Circles - Advanced; // 0x1918 (56)
	struct FAdvancedEffectFeatures Sonar - Advanced; // 0x1950 (56)
	struct FAdvancedEffectFeatures Distance Distortion - Advanced; // 0x1988 (56)
	struct FAdvancedEffectFeatures Drawing - Advanced; // 0x19C0 (56)
	struct FAdvancedEffectFeatures Magic Transitions - Advanced; // 0x19F8 (56)
	struct FAdvancedEffectFeatures Screen Damage - Advanced; // 0x1A30 (56)
	struct FAdvancedEffectFeatures Screen Decals - Advanced; // 0x1A68 (56)
	struct FAdvancedEffectFeatures Sharpen - Advanced; // 0x1AA0 (56)
	struct FAdvancedEffectFeatures Toon Shading - Advanced; // 0x1AD8 (56)
	struct FAdvancedEffectFeatures Anamorphic Lens Flares - Advanced; // 0x1B10 (56)
	struct FAdvancedEffectFeatures Frost - Advanced; // 0x1B48 (56)
	struct FAdvancedEffectFeatures Neon - Advanced; // 0x1B80 (56)
	struct FAdvancedEffectFeaturesNoCustomDepth Custom Depth Highlighter - Advanced; // 0x1BB8 (48)
	struct FAdvancedEffectFeaturesNoCustomDepth Custom Depth Highlighter (Clip) - Advanced; // 0x1BE8 (48)
	struct FLinearColor 2D Transform Background Color; // 0x1C18 (16)
	struct FAdvancedEffectFeatures 2D Transform - Advanced; // 0x1C28 (56)
	struct FAdvancedEffectFeatures Kaleidescope - Advanced; // 0x1C60 (56)
	struct FAdvancedEffectFeatures Letterboxing - Advanced; // 0x1C98 (56)
	struct FAdvancedEffectFeatures Snow - Advanced; // 0x1CD0 (56)
	struct FAdvancedEffectFeatures World Splash - Advanced; // 0x1D08 (56)
	struct FAdvancedEffectFeatures World Glitch - Advanced; // 0x1D40 (56)
	struct FAdvancedEffectFeatures Digitize - Advanced; // 0x1D78 (56)
	struct FAdvancedEffectFeatures Alarm - Advanced; // 0x1DB0 (56)
	struct FAdvancedEffectFeatures Sketch - Advanced; // 0x1DE8 (56)
	struct FAdvancedEffectFeatures Wired - Advanced; // 0x1E20 (56)
	float Comic Pattern Intensity; // 0x1E58 (4)
	int32_t Comic Pattern Line Count; // 0x1E5C (4)
	float Comic Pattern Rotation; // 0x1E60 (4)
	struct FAdvancedEffectFeatures Comic - Advanced; // 0x1E68 (56)
	char Actor Featurette : 0; // 0x1EA0 (1)
	struct UMaterial mActorFeaturette; // 0x1EA8 (8)
	struct UMaterialInstanceDynamic iActorFeaturette; // 0x1EB0 (8)
	struct FLinearColor Actor Featurette Background Multiplier; // 0x1EB8 (16)
	float Actor Featurette Background Desaturation; // 0x1EC8 (4)
	struct FLinearColor Actor Featurette Foreground Multiplier; // 0x1ECC (16)
	float Actor Featurette Foreground Saturation; // 0x1EDC (4)
	float Actor Featurette Blur Amount; // 0x1EE0 (4)
	int32_t Actor Featurette Blur Samples; // 0x1EE4 (4)
	int32_t Actor Featurette Stencil Mask; // 0x1EE8 (4)
	struct FAdvancedEffectFeaturesNoCustomDepth Actor Featurette - Advanced; // 0x1EF0 (48)
	char Infected : 0; // 0x1F20 (1)
	struct UMaterial mInfected; // 0x1F28 (8)
	struct UMaterialInstanceDynamic iInfected; // 0x1F30 (8)
	float Infected Distortion Amount; // 0x1F38 (4)
	float Infected Smoothness; // 0x1F3C (4)
	float Infected Speed; // 0x1F40 (4)
	float Infected TransformZ; // 0x1F44 (4)
	struct FAdvancedEffectFeatures Infected - Advanced; // 0x1F48 (56)
	char Colored AO : 0; // 0x1F80 (1)
	struct UMaterial mColoredAO; // 0x1F88 (8)
	struct UMaterialInstanceDynamic iColoredAO; // 0x1F90 (8)
	struct FLinearColor Colored AO Color; // 0x1F98 (16)
	float Colored AO Intensity; // 0x1FA8 (4)
	struct FAdvancedEffectFeatures Colored AO - Advanced; // 0x1FB0 (56)
	char Camera Shake : 0; // 0x1FE8 (1)
	struct UMaterial mCameraShake; // 0x1FF0 (8)
	struct UMaterialInstanceDynamic iCameraShake; // 0x1FF8 (8)
	float Camera Shake Power (X); // 0x2000 (4)
	float Camera Shake Power (Y); // 0x2004 (4)
	float Camera Shake Frequency; // 0x2008 (4)
	struct FAdvancedEffectFeatures Camera Shake - Advanced; // 0x2010 (56)
	char Disco Ball : 0; // 0x2048 (1)
	struct UMaterial mDiscoBall; // 0x2050 (8)
	struct UMaterialInstanceDynamic iDiscoBall; // 0x2058 (8)
	struct FVector3DN Disco Ball WS Center; // 0x2060 (12)
	struct FLinearColor Disco Ball Color 1; // 0x206C (16)
	struct FLinearColor Disco Ball Color 2; // 0x207C (16)
	struct FVector Disco Ball Block Scale; // 0x208C (12)
	float Disco Ball Block Distribution; // 0x2098 (4)
	float Disco Ball Rotation Speed; // 0x209C (4)
	float Disco Ball Manual Rotation; // 0x20A0 (4)
	struct FAdvancedEffectFeatures Disco Ball - Advanced; // 0x20A8 (56)
	char Hazy Lights : 0; // 0x20E0 (1)
	struct UMaterial mHazyLights; // 0x20E8 (8)
	struct UMaterialInstanceDynamic iHazyLights; // 0x20F0 (8)
	struct FVector2DN Hazy Lights Move Speed; // 0x20F8 (8)
	struct FVector2DN Hazy Lights Position; // 0x2100 (8)
	struct FAdvancedEffectFeatures Hazy Lights - Advanced; // 0x2108 (56)
	char Melted World : 0; // 0x2140 (1)
	struct UMaterial mMeltedWorld; // 0x2148 (8)
	struct UMaterialInstanceDynamic iMeltedWorld; // 0x2150 (8)
	struct FVector Melted World Size; // 0x2158 (12)
	float Melted World Distance; // 0x2164 (4)
	float Melted World Power; // 0x2168 (4)
	float Melted World Sharpness; // 0x216C (4)
	struct FAdvancedEffectFeatures Melted World - Advanced; // 0x2170 (56)
	char Selective Color : 0; // 0x21A8 (1)
	struct UMaterial mSelectiveColor; // 0x21B0 (8)
	struct UMaterialInstanceDynamic iSelectiveColor; // 0x21B8 (8)
	struct FLinearColor Selective Color Mask Color; // 0x21C0 (16)
	float Selective Color Hue Tolerance; // 0x21D0 (4)
	float Selective Color Saturation Tolerance; // 0x21D4 (4)
	float Selective Color Value Tolerance; // 0x21D8 (4)
	struct FAdvancedEffectFeatures Selective Color - Advanced; // 0x21E0 (56)
	char Screen Fire : 0; // 0x2218 (1)
	struct UMaterial mScreenFire; // 0x2220 (8)
	struct UMaterialInstanceDynamic iScreenFire; // 0x2228 (8)
	struct FLinearColor Screen Fire Color; // 0x2230 (16)
	float Screen Fire Distortion Amount; // 0x2240 (4)
	float Screen Fire Mask Contrast; // 0x2244 (4)
	float Screen Fire Mask Scale; // 0x2248 (4)
	float Screen Fire Flame Tiling; // 0x224C (4)
	float Screen Fire Speed; // 0x2250 (4)
	struct FAdvancedEffectFeatures Screen Fire - Advanced; // 0x2258 (56)
	char Haunted : 0; // 0x2290 (1)
	struct UMaterial mHaunted; // 0x2298 (8)
	struct UMaterialInstanceDynamic iHaunted; // 0x22A0 (8)
	float Haunted Amount; // 0x22A8 (4)
	float Haunted Mask Scale; // 0x22AC (4)
	struct UTexture2D Haunted Texture; // 0x22B0 (8)
	float Haunted Texture Scale; // 0x22B8 (4)
	struct FAdvancedEffectFeatures Haunted - Advanced; // 0x22C0 (56)
	char Grid Cell : 0; // 0x22F8 (1)
	struct UMaterial mGridCell; // 0x2300 (8)
	struct UMaterialInstanceDynamic iGridCell; // 0x2308 (8)
	char Grid Cell Animated : 0; // 0x2310 (1)
	float Grid Cell Animation Speed; // 0x2314 (4)
	struct FLinearColor Grid Cell Color; // 0x2318 (16)
	struct FLinearColor Grid Cell Void Color; // 0x2328 (16)
	float Grid Cell Tiling; // 0x2338 (4)
	float Grid Cell Transition Amount; // 0x233C (4)
	char Lens Distortion : 0; // 0x2340 (1)
	struct UMaterial mLensDistortion; // 0x2348 (8)
	struct UMaterialInstanceDynamic iLensDistortion; // 0x2350 (8)
	float Lens Distortion Optic Refinement; // 0x2358 (4)
	float Lens Distortion Optic Size; // 0x235C (4)
	float Lens Distortion Optic Position X; // 0x2360 (4)
	float Lens Distortion Optic Position Y; // 0x2364 (4)
	struct UTexture2D Lens Distortion Scope Texture; // 0x2368 (8)
	float Lens Distortion Scope Texture Scale X; // 0x2370 (4)
	float Lens Distortion Scope Texture Scale Y; // 0x2374 (4)
	struct FAdvancedEffectFeatures Lens Distortion - Advanced; // 0x2378 (56)
	struct FAdvancedEffectFeatures Grid Cell - Advanced; // 0x23B0 (56)
	char Zone : 0; // 0x23E8 (1)
	struct UMaterial mZone; // 0x23F0 (8)
	struct UMaterialInstanceDynamic iZone; // 0x23F8 (8)
	struct FLinearColor Zone Center; // 0x2400 (16)
	float Zone Radius; // 0x2410 (4)
	float Zone Edge Hardness; // 0x2414 (4)
	struct FLinearColor Zone Edge Color; // 0x2418 (16)
	struct FLinearColor Zone Coverage Color; // 0x2428 (16)
	struct FAdvancedEffectFeatures Zone - Advanced; // 0x2438 (56)
	char Pyramid : 0; // 0x2470 (1)
	struct UMaterial mPyramid; // 0x2478 (8)
	struct UMaterialInstanceDynamic iPyramid; // 0x2480 (8)
	char Pyramid Masked : 0; // 0x2488 (1)
	struct FLinearColor Pyramid Background Color; // 0x248C (16)
	float Pyramid Width; // 0x249C (4)
	float Pyramid Pan; // 0x24A0 (4)
	float Pyramid Tile Amount; // 0x24A4 (4)
	struct FAdvancedEffectFeatures Pyramid - Advanced; // 0x24A8 (56)
	char Mojo : 0; // 0x24E0 (1)
	struct UMaterial mMojo; // 0x24E8 (8)
	struct UMaterialInstanceDynamic iMojo; // 0x24F0 (8)
	char Mojo Animated : 0; // 0x24F8 (1)
	float Mojo Animation Speed; // 0x24FC (4)
	struct UTexture2D Mojo Mask; // 0x2500 (8)
	struct UTexture2D Mojo Distortion Map; // 0x2508 (8)
	float Mojo Distortion Amount; // 0x2510 (4)
	struct FLinearColor Mojo Color; // 0x2514 (16)
	float Mojo Intensity; // 0x2524 (4)
	float Mojo Phase; // 0x2528 (4)
	float Mojo Tolerance; // 0x252C (4)
	struct FAdvancedEffectFeatures Mojo - Advanced; // 0x2530 (56)

	void Create Effect Material Instance(struct UMaterial Material, struct UMaterialInstanceDynamic& Instance); // Function Chameleon.Chameleon_C.Create Effect Material Instance(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Mojo Func(char IsEnabled); // Function Chameleon.Chameleon_C.Mojo Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Pyramid Func(char IsEnabled); // Function Chameleon.Chameleon_C.Pyramid Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Zone Func(char IsEnabled); // Function Chameleon.Chameleon_C.Zone Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Lens Func(char IsEnabled); // Function Chameleon.Chameleon_C.Lens Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Grid Cell Func(char IsEnabled); // Function Chameleon.Chameleon_C.Grid Cell Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Haunted Func(char IsEnabled); // Function Chameleon.Chameleon_C.Haunted Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Screen Fire Func(char IsEnabled); // Function Chameleon.Chameleon_C.Screen Fire Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Selective Color Func(char IsEnabled); // Function Chameleon.Chameleon_C.Selective Color Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Melted World Func(char IsEnabled); // Function Chameleon.Chameleon_C.Melted World Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Hazy Lights Func(char IsEnabled); // Function Chameleon.Chameleon_C.Hazy Lights Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Disco Ball Func(char IsEnabled); // Function Chameleon.Chameleon_C.Disco Ball Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Camera Shake Func(char IsEnabled); // Function Chameleon.Chameleon_C.Camera Shake Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Colored AO Func(char IsEnabled); // Function Chameleon.Chameleon_C.Colored AO Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Infected Func(char IsEnabled); // Function Chameleon.Chameleon_C.Infected Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Actor Featurette Func(char IsEnabled); // Function Chameleon.Chameleon_C.Actor Featurette Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Set Advanced Effect Features (No Custom Depth)(struct FAdvancedEffectFeaturesNoCustomDepth Features, struct UMaterial Material, struct UMaterialInstanceDynamic Dynamic Material Instance); // Function Chameleon.Chameleon_C.Set Advanced Effect Features (No Custom Depth)(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Set Advanced Effect Features(struct FAdvancedEffectFeatures Features, struct UMaterial Material, struct UMaterialInstanceDynamic Dynamic Material Instance); // Function Chameleon.Chameleon_C.Set Advanced Effect Features(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Wired Func(char IsEnabled); // Function Chameleon.Chameleon_C.Wired Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Sketch Func(char IsEnabled); // Function Chameleon.Chameleon_C.Sketch Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Alarm Func(char IsEnabled); // Function Chameleon.Chameleon_C.Alarm Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Digitize Func(char IsEnabled); // Function Chameleon.Chameleon_C.Digitize Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void World Glitch Func(char IsEnabled); // Function Chameleon.Chameleon_C.World Glitch Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void World Splash Func(char IsEnabled); // Function Chameleon.Chameleon_C.World Splash Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Snow Func(char IsEnabled); // Function Chameleon.Chameleon_C.Snow Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Letterboxing Func(char IsEnabled); // Function Chameleon.Chameleon_C.Letterboxing Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Kaleidescope Func(char IsEnabled); // Function Chameleon.Chameleon_C.Kaleidescope Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void 2D Transform Func(char IsEnabled); // Function Chameleon.Chameleon_C.2D Transform Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void SetEffectPriority(int32_t Priority, struct UMaterial Material); // Function Chameleon.Chameleon_C.SetEffectPriority(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ApplyChameleonSettings(); // Function Chameleon.Chameleon_C.ApplyChameleonSettings(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Custom Depth Highlighter (NC) Func(char IsEnabled); // Function Chameleon.Chameleon_C.Custom Depth Highlighter (NC) Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Custom Depth Highlighter Func(char IsEnabled); // Function Chameleon.Chameleon_C.Custom Depth Highlighter Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Neon Func(char IsEnabled); // Function Chameleon.Chameleon_C.Neon Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Frost Func(char IsEnabled); // Function Chameleon.Chameleon_C.Frost Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Anamorphic Lens Flares Func(char IsEnabled); // Function Chameleon.Chameleon_C.Anamorphic Lens Flares Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Toon Shading Func(char IsEnabled); // Function Chameleon.Chameleon_C.Toon Shading Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Sharpen Func(char IsEnabled); // Function Chameleon.Chameleon_C.Sharpen Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Screen Decals Func(char IsEnabled); // Function Chameleon.Chameleon_C.Screen Decals Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Screen Damage Func(char IsEnabled); // Function Chameleon.Chameleon_C.Screen Damage Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Magic Transitions Func(char IsEnabled); // Function Chameleon.Chameleon_C.Magic Transitions Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Drawing Func(char IsEnabled); // Function Chameleon.Chameleon_C.Drawing Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Distance Distortion Func(char Condition); // Function Chameleon.Chameleon_C.Distance Distortion Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Sonar Func(char Condition); // Function Chameleon.Chameleon_C.Sonar Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Circles Func(char Condition); // Function Chameleon.Chameleon_C.Circles Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void LOOK Func(char Condition); // Function Chameleon.Chameleon_C.LOOK Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void TV Noise Func(char& IsEnabled); // Function Chameleon.Chameleon_C.TV Noise Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Tiles Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Tiles Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Squares Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Squares Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Pulse Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Pulse Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Kuwahara Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Kuwahara Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Iridescent Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Iridescent Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Invert Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Invert Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Hard Emboss Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Hard Emboss Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Emboss Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Emboss Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Edge Detect Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Edge Detect Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ASCII Func(char& IsEnabled); // Function Chameleon.Chameleon_C.ASCII Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Bleach Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Bleach Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Scratches Func(char IsEnabled); // Function Chameleon.Chameleon_C.Scratches Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Distance Fog Func(char IsEnabled); // Function Chameleon.Chameleon_C.Distance Fog Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Screen Waves Func(char IsEnabled); // Function Chameleon.Chameleon_C.Screen Waves Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Radial Blur Func(char IsEnabled); // Function Chameleon.Chameleon_C.Radial Blur Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Monochrome Func(char IsEnabled); // Function Chameleon.Chameleon_C.Monochrome Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Hue Panner Func(char IsEnabled); // Function Chameleon.Chameleon_C.Hue Panner Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void MonitorFX Func(char IsEnabled); // Function Chameleon.Chameleon_C.MonitorFX Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Glitch Func(char IsEnabled); // Function Chameleon.Chameleon_C.Glitch Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Comic Func(char IsEnabled); // Function Chameleon.Chameleon_C.Comic Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Colorize Func(char Condition); // Function Chameleon.Chameleon_C.Colorize Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Blur Func(char IsEnabled); // Function Chameleon.Chameleon_C.Blur Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Pixel Dissolve Func(char IsEnabled); // Function Chameleon.Chameleon_C.Pixel Dissolve Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Drug Func(char IsEnabled); // Function Chameleon.Chameleon_C.Drug Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Alcohol Func(char IsEnabled); // Function Chameleon.Chameleon_C.Alcohol Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Mosaic Func(char IsEnabled); // Function Chameleon.Chameleon_C.Mosaic Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Screen Drops Func(char IsEnabled); // Function Chameleon.Chameleon_C.Screen Drops Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void InitChameleon(); // Function Chameleon.Chameleon_C.InitChameleon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Channel Swapper Func(char IsEnabled); // Function Chameleon.Chameleon_C.Channel Swapper Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void Channel Clamper Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Channel Clamper Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void UserConstructionScript(); // Function Chameleon.Chameleon_C.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ReceiveActorBeginOverlap(struct UActor OtherActor); // Function Chameleon.Chameleon_C.ReceiveActorBeginOverlap(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ReceiveTick(float DeltaSeconds); // Function Chameleon.Chameleon_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
	void ExecuteUbergraph_Chameleon(int32_t EntryPoint); // Function Chameleon.Chameleon_C.ExecuteUbergraph_Chameleon(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2BA5C80>
};

// Function Chameleon.Chameleon_C.Create Effect Material Instance
inline void AChameleon_C::Create Effect Material Instance(struct UMaterial Material, struct UMaterialInstanceDynamic& Instance) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Create Effect Material Instance");

	struct Create Effect Material Instance_Params {
		struct UMaterial Material;
		struct UMaterialInstanceDynamic& Instance;
	}; Create Effect Material Instance_Params Params;

	Params.Material = Material;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Instance = Params.Instance;

}

// Function Chameleon.Chameleon_C.Mojo Func
inline void AChameleon_C::Mojo Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Mojo Func");

	struct Mojo Func_Params {
		char IsEnabled;
	}; Mojo Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Pyramid Func
inline void AChameleon_C::Pyramid Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Pyramid Func");

	struct Pyramid Func_Params {
		char IsEnabled;
	}; Pyramid Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Zone Func
inline void AChameleon_C::Zone Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Zone Func");

	struct Zone Func_Params {
		char IsEnabled;
	}; Zone Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Lens Func
inline void AChameleon_C::Lens Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Lens Func");

	struct Lens Func_Params {
		char IsEnabled;
	}; Lens Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Grid Cell Func
inline void AChameleon_C::Grid Cell Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Grid Cell Func");

	struct Grid Cell Func_Params {
		char IsEnabled;
	}; Grid Cell Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Haunted Func
inline void AChameleon_C::Haunted Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Haunted Func");

	struct Haunted Func_Params {
		char IsEnabled;
	}; Haunted Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Screen Fire Func
inline void AChameleon_C::Screen Fire Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Screen Fire Func");

	struct Screen Fire Func_Params {
		char IsEnabled;
	}; Screen Fire Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Selective Color Func
inline void AChameleon_C::Selective Color Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Selective Color Func");

	struct Selective Color Func_Params {
		char IsEnabled;
	}; Selective Color Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Melted World Func
inline void AChameleon_C::Melted World Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Melted World Func");

	struct Melted World Func_Params {
		char IsEnabled;
	}; Melted World Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Hazy Lights Func
inline void AChameleon_C::Hazy Lights Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Hazy Lights Func");

	struct Hazy Lights Func_Params {
		char IsEnabled;
	}; Hazy Lights Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Disco Ball Func
inline void AChameleon_C::Disco Ball Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Disco Ball Func");

	struct Disco Ball Func_Params {
		char IsEnabled;
	}; Disco Ball Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Camera Shake Func
inline void AChameleon_C::Camera Shake Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Camera Shake Func");

	struct Camera Shake Func_Params {
		char IsEnabled;
	}; Camera Shake Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Colored AO Func
inline void AChameleon_C::Colored AO Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Colored AO Func");

	struct Colored AO Func_Params {
		char IsEnabled;
	}; Colored AO Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Infected Func
inline void AChameleon_C::Infected Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Infected Func");

	struct Infected Func_Params {
		char IsEnabled;
	}; Infected Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Actor Featurette Func
inline void AChameleon_C::Actor Featurette Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Actor Featurette Func");

	struct Actor Featurette Func_Params {
		char IsEnabled;
	}; Actor Featurette Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Set Advanced Effect Features (No Custom Depth)
inline void AChameleon_C::Set Advanced Effect Features (No Custom Depth)(struct FAdvancedEffectFeaturesNoCustomDepth Features, struct UMaterial Material, struct UMaterialInstanceDynamic Dynamic Material Instance) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Set Advanced Effect Features (No Custom Depth)");

	struct Set Advanced Effect Features (No Custom Depth)_Params {
		struct FAdvancedEffectFeaturesNoCustomDepth Features;
		struct UMaterial Material;
		struct UMaterialInstanceDynamic Dynamic Material Instance;
	}; Set Advanced Effect Features (No Custom Depth)_Params Params;

	Params.Features = Features;
	Params.Material = Material;
	Params.Dynamic Material Instance = Dynamic Material Instance;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Set Advanced Effect Features
inline void AChameleon_C::Set Advanced Effect Features(struct FAdvancedEffectFeatures Features, struct UMaterial Material, struct UMaterialInstanceDynamic Dynamic Material Instance) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Set Advanced Effect Features");

	struct Set Advanced Effect Features_Params {
		struct FAdvancedEffectFeatures Features;
		struct UMaterial Material;
		struct UMaterialInstanceDynamic Dynamic Material Instance;
	}; Set Advanced Effect Features_Params Params;

	Params.Features = Features;
	Params.Material = Material;
	Params.Dynamic Material Instance = Dynamic Material Instance;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Wired Func
inline void AChameleon_C::Wired Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Wired Func");

	struct Wired Func_Params {
		char IsEnabled;
	}; Wired Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Sketch Func
inline void AChameleon_C::Sketch Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Sketch Func");

	struct Sketch Func_Params {
		char IsEnabled;
	}; Sketch Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Alarm Func
inline void AChameleon_C::Alarm Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Alarm Func");

	struct Alarm Func_Params {
		char IsEnabled;
	}; Alarm Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Digitize Func
inline void AChameleon_C::Digitize Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Digitize Func");

	struct Digitize Func_Params {
		char IsEnabled;
	}; Digitize Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.World Glitch Func
inline void AChameleon_C::World Glitch Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.World Glitch Func");

	struct World Glitch Func_Params {
		char IsEnabled;
	}; World Glitch Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.World Splash Func
inline void AChameleon_C::World Splash Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.World Splash Func");

	struct World Splash Func_Params {
		char IsEnabled;
	}; World Splash Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Snow Func
inline void AChameleon_C::Snow Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Snow Func");

	struct Snow Func_Params {
		char IsEnabled;
	}; Snow Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Letterboxing Func
inline void AChameleon_C::Letterboxing Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Letterboxing Func");

	struct Letterboxing Func_Params {
		char IsEnabled;
	}; Letterboxing Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Kaleidescope Func
inline void AChameleon_C::Kaleidescope Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Kaleidescope Func");

	struct Kaleidescope Func_Params {
		char IsEnabled;
	}; Kaleidescope Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.2D Transform Func
inline void AChameleon_C::2D Transform Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.2D Transform Func");

	struct 2D Transform Func_Params {
		char IsEnabled;
	}; 2D Transform Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.SetEffectPriority
inline void AChameleon_C::SetEffectPriority(int32_t Priority, struct UMaterial Material) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.SetEffectPriority");

	struct SetEffectPriority_Params {
		int32_t Priority;
		struct UMaterial Material;
	}; SetEffectPriority_Params Params;

	Params.Priority = Priority;
	Params.Material = Material;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.ApplyChameleonSettings
inline void AChameleon_C::ApplyChameleonSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.ApplyChameleonSettings");

	struct ApplyChameleonSettings_Params {
		
	}; ApplyChameleonSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Custom Depth Highlighter (NC) Func
inline void AChameleon_C::Custom Depth Highlighter (NC) Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Custom Depth Highlighter (NC) Func");

	struct Custom Depth Highlighter (NC) Func_Params {
		char IsEnabled;
	}; Custom Depth Highlighter (NC) Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Custom Depth Highlighter Func
inline void AChameleon_C::Custom Depth Highlighter Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Custom Depth Highlighter Func");

	struct Custom Depth Highlighter Func_Params {
		char IsEnabled;
	}; Custom Depth Highlighter Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Neon Func
inline void AChameleon_C::Neon Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Neon Func");

	struct Neon Func_Params {
		char IsEnabled;
	}; Neon Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Frost Func
inline void AChameleon_C::Frost Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Frost Func");

	struct Frost Func_Params {
		char IsEnabled;
	}; Frost Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Anamorphic Lens Flares Func
inline void AChameleon_C::Anamorphic Lens Flares Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Anamorphic Lens Flares Func");

	struct Anamorphic Lens Flares Func_Params {
		char IsEnabled;
	}; Anamorphic Lens Flares Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Toon Shading Func
inline void AChameleon_C::Toon Shading Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Toon Shading Func");

	struct Toon Shading Func_Params {
		char IsEnabled;
	}; Toon Shading Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Sharpen Func
inline void AChameleon_C::Sharpen Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Sharpen Func");

	struct Sharpen Func_Params {
		char IsEnabled;
	}; Sharpen Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Screen Decals Func
inline void AChameleon_C::Screen Decals Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Screen Decals Func");

	struct Screen Decals Func_Params {
		char IsEnabled;
	}; Screen Decals Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Screen Damage Func
inline void AChameleon_C::Screen Damage Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Screen Damage Func");

	struct Screen Damage Func_Params {
		char IsEnabled;
	}; Screen Damage Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Magic Transitions Func
inline void AChameleon_C::Magic Transitions Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Magic Transitions Func");

	struct Magic Transitions Func_Params {
		char IsEnabled;
	}; Magic Transitions Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Drawing Func
inline void AChameleon_C::Drawing Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Drawing Func");

	struct Drawing Func_Params {
		char IsEnabled;
	}; Drawing Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Distance Distortion Func
inline void AChameleon_C::Distance Distortion Func(char Condition) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Distance Distortion Func");

	struct Distance Distortion Func_Params {
		char Condition;
	}; Distance Distortion Func_Params Params;

	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Sonar Func
inline void AChameleon_C::Sonar Func(char Condition) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Sonar Func");

	struct Sonar Func_Params {
		char Condition;
	}; Sonar Func_Params Params;

	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Circles Func
inline void AChameleon_C::Circles Func(char Condition) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Circles Func");

	struct Circles Func_Params {
		char Condition;
	}; Circles Func_Params Params;

	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.LOOK Func
inline void AChameleon_C::LOOK Func(char Condition) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.LOOK Func");

	struct LOOK Func_Params {
		char Condition;
	}; LOOK Func_Params Params;

	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.TV Noise Func
inline void AChameleon_C::TV Noise Func(char& IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.TV Noise Func");

	struct TV Noise Func_Params {
		char& IsEnabled;
	}; TV Noise Func_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsEnabled = Params.IsEnabled;

}

// Function Chameleon.Chameleon_C.Tiles Func
inline void AChameleon_C::Tiles Func(char& IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Tiles Func");

	struct Tiles Func_Params {
		char& IsEnabled;
	}; Tiles Func_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsEnabled = Params.IsEnabled;

}

// Function Chameleon.Chameleon_C.Squares Func
inline void AChameleon_C::Squares Func(char& IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Squares Func");

	struct Squares Func_Params {
		char& IsEnabled;
	}; Squares Func_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsEnabled = Params.IsEnabled;

}

// Function Chameleon.Chameleon_C.Pulse Func
inline void AChameleon_C::Pulse Func(char& IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Pulse Func");

	struct Pulse Func_Params {
		char& IsEnabled;
	}; Pulse Func_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsEnabled = Params.IsEnabled;

}

// Function Chameleon.Chameleon_C.Kuwahara Func
inline void AChameleon_C::Kuwahara Func(char& IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Kuwahara Func");

	struct Kuwahara Func_Params {
		char& IsEnabled;
	}; Kuwahara Func_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsEnabled = Params.IsEnabled;

}

// Function Chameleon.Chameleon_C.Iridescent Func
inline void AChameleon_C::Iridescent Func(char& IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Iridescent Func");

	struct Iridescent Func_Params {
		char& IsEnabled;
	}; Iridescent Func_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsEnabled = Params.IsEnabled;

}

// Function Chameleon.Chameleon_C.Invert Func
inline void AChameleon_C::Invert Func(char& IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Invert Func");

	struct Invert Func_Params {
		char& IsEnabled;
	}; Invert Func_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsEnabled = Params.IsEnabled;

}

// Function Chameleon.Chameleon_C.Hard Emboss Func
inline void AChameleon_C::Hard Emboss Func(char& IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Hard Emboss Func");

	struct Hard Emboss Func_Params {
		char& IsEnabled;
	}; Hard Emboss Func_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsEnabled = Params.IsEnabled;

}

// Function Chameleon.Chameleon_C.Emboss Func
inline void AChameleon_C::Emboss Func(char& IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Emboss Func");

	struct Emboss Func_Params {
		char& IsEnabled;
	}; Emboss Func_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsEnabled = Params.IsEnabled;

}

// Function Chameleon.Chameleon_C.Edge Detect Func
inline void AChameleon_C::Edge Detect Func(char& IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Edge Detect Func");

	struct Edge Detect Func_Params {
		char& IsEnabled;
	}; Edge Detect Func_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsEnabled = Params.IsEnabled;

}

// Function Chameleon.Chameleon_C.ASCII Func
inline void AChameleon_C::ASCII Func(char& IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.ASCII Func");

	struct ASCII Func_Params {
		char& IsEnabled;
	}; ASCII Func_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsEnabled = Params.IsEnabled;

}

// Function Chameleon.Chameleon_C.Bleach Func
inline void AChameleon_C::Bleach Func(char& IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Bleach Func");

	struct Bleach Func_Params {
		char& IsEnabled;
	}; Bleach Func_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsEnabled = Params.IsEnabled;

}

// Function Chameleon.Chameleon_C.Scratches Func
inline void AChameleon_C::Scratches Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Scratches Func");

	struct Scratches Func_Params {
		char IsEnabled;
	}; Scratches Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Distance Fog Func
inline void AChameleon_C::Distance Fog Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Distance Fog Func");

	struct Distance Fog Func_Params {
		char IsEnabled;
	}; Distance Fog Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Screen Waves Func
inline void AChameleon_C::Screen Waves Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Screen Waves Func");

	struct Screen Waves Func_Params {
		char IsEnabled;
	}; Screen Waves Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Radial Blur Func
inline void AChameleon_C::Radial Blur Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Radial Blur Func");

	struct Radial Blur Func_Params {
		char IsEnabled;
	}; Radial Blur Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Monochrome Func
inline void AChameleon_C::Monochrome Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Monochrome Func");

	struct Monochrome Func_Params {
		char IsEnabled;
	}; Monochrome Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Hue Panner Func
inline void AChameleon_C::Hue Panner Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Hue Panner Func");

	struct Hue Panner Func_Params {
		char IsEnabled;
	}; Hue Panner Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.MonitorFX Func
inline void AChameleon_C::MonitorFX Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.MonitorFX Func");

	struct MonitorFX Func_Params {
		char IsEnabled;
	}; MonitorFX Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Glitch Func
inline void AChameleon_C::Glitch Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Glitch Func");

	struct Glitch Func_Params {
		char IsEnabled;
	}; Glitch Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Comic Func
inline void AChameleon_C::Comic Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Comic Func");

	struct Comic Func_Params {
		char IsEnabled;
	}; Comic Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Colorize Func
inline void AChameleon_C::Colorize Func(char Condition) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Colorize Func");

	struct Colorize Func_Params {
		char Condition;
	}; Colorize Func_Params Params;

	Params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Blur Func
inline void AChameleon_C::Blur Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Blur Func");

	struct Blur Func_Params {
		char IsEnabled;
	}; Blur Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Pixel Dissolve Func
inline void AChameleon_C::Pixel Dissolve Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Pixel Dissolve Func");

	struct Pixel Dissolve Func_Params {
		char IsEnabled;
	}; Pixel Dissolve Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Drug Func
inline void AChameleon_C::Drug Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Drug Func");

	struct Drug Func_Params {
		char IsEnabled;
	}; Drug Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Alcohol Func
inline void AChameleon_C::Alcohol Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Alcohol Func");

	struct Alcohol Func_Params {
		char IsEnabled;
	}; Alcohol Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Mosaic Func
inline void AChameleon_C::Mosaic Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Mosaic Func");

	struct Mosaic Func_Params {
		char IsEnabled;
	}; Mosaic Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Screen Drops Func
inline void AChameleon_C::Screen Drops Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Screen Drops Func");

	struct Screen Drops Func_Params {
		char IsEnabled;
	}; Screen Drops Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.InitChameleon
inline void AChameleon_C::InitChameleon() {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.InitChameleon");

	struct InitChameleon_Params {
		
	}; InitChameleon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Channel Swapper Func
inline void AChameleon_C::Channel Swapper Func(char IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Channel Swapper Func");

	struct Channel Swapper Func_Params {
		char IsEnabled;
	}; Channel Swapper Func_Params Params;

	Params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Channel Clamper Func
inline void AChameleon_C::Channel Clamper Func(char& IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Channel Clamper Func");

	struct Channel Clamper Func_Params {
		char& IsEnabled;
	}; Channel Clamper Func_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsEnabled = Params.IsEnabled;

}

// Function Chameleon.Chameleon_C.UserConstructionScript
inline void AChameleon_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.ReceiveActorBeginOverlap
inline void AChameleon_C::ReceiveActorBeginOverlap(struct UActor OtherActor) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.ReceiveActorBeginOverlap");

	struct ReceiveActorBeginOverlap_Params {
		struct UActor OtherActor;
	}; ReceiveActorBeginOverlap_Params Params;

	Params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.ReceiveTick
inline void AChameleon_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.ExecuteUbergraph_Chameleon
inline void AChameleon_C::ExecuteUbergraph_Chameleon(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.ExecuteUbergraph_Chameleon");

	struct ExecuteUbergraph_Chameleon_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_Chameleon_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

