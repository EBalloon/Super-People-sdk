// BlueprintGeneratedClass Chameleon.Chameleon_C
class AChameleon_C : public UActor {

public:

	struct Unknown UberGraphFrame; // 0x300 (8)
	struct Unknown MaterialBillboard; // 0x308 (8)
	struct Unknown InternalPP; // 0x310 (8)
	struct Unknown Bounding Box; // 0x318 (8)
	char Bleach Bypass : 0; // 0x320 (1)
	char Distance Fog : 0; // 0x321 (1)
	char Channel Clamper : 0; // 0x322 (1)
	struct Unknown mChannelClamper; // 0x328 (8)
	struct Unknown iChannelClamper; // 0x330 (8)
	char Channel Swapper : 0; // 0x338 (1)
	char Screen Drops : 0; // 0x339 (1)
	char Alcohol : 0; // 0x33A (1)
	char Drug : 0; // 0x33B (1)
	char Mosaic : 0; // 0x33C (1)
	char Pixel Dissolve : 0; // 0x33D (1)
	char Blur : 0; // 0x33E (1)
	struct Unknown mBleachBypass; // 0x340 (8)
	struct Unknown mDistanceFog; // 0x348 (8)
	struct Unknown mChannelSwapper; // 0x350 (8)
	struct Unknown mScreenDrops; // 0x358 (8)
	struct Unknown mAlcohol; // 0x360 (8)
	struct Unknown mDrug; // 0x368 (8)
	struct Unknown mMosaic; // 0x370 (8)
	struct Unknown mPixelDissolve; // 0x378 (8)
	struct Unknown mBlur; // 0x380 (8)
	float Channel Clamper Red Intensity; // 0x388 (4)
	float Channel Clamper Green Intensity; // 0x38C (4)
	float Channel Clamper Blue Intensity; // 0x390 (4)
	struct Unknown iBleachBypass; // 0x398 (8)
	struct Unknown iDistanceFog; // 0x3A0 (8)
	struct Unknown iChannelSwapper; // 0x3A8 (8)
	char Channel Swapper Red; // 0x3B0 (1)
	char Channel Swapper Green; // 0x3B1 (1)
	char Channel Swapper Blue; // 0x3B2 (1)
	struct Unknown iScreenDrops; // 0x3B8 (8)
	struct Unknown iAlcohol; // 0x3C0 (8)
	struct Unknown iDrug; // 0x3C8 (8)
	struct Unknown iMosaic; // 0x3D0 (8)
	struct Unknown iPixelDissolve; // 0x3D8 (8)
	struct Unknown iBlur; // 0x3E0 (8)
	struct Unknown Screen Drops Layer 1 Map; // 0x3E8 (8)
	float Screen Drops Layer 1 Intensity; // 0x3F0 (4)
	float Mosaic Scale; // 0x3F4 (4)
	float Alcohol Speed; // 0x3F8 (4)
	float Drug Speed; // 0x3FC (4)
	float Pixel Dissolve Intensity; // 0x400 (4)
	float Blur Amount; // 0x404 (4)
	char ASCII : 0; // 0x408 (1)
	struct Unknown mAscii; // 0x410 (8)
	struct Unknown iAscii; // 0x418 (8)
	char Colorize : 0; // 0x420 (1)
	struct Unknown mColorize; // 0x428 (8)
	struct Unknown iColorize; // 0x430 (8)
	float Colorize Detail; // 0x438 (4)
	char Comic : 0; // 0x43C (1)
	struct Unknown mComic; // 0x440 (8)
	struct Unknown iComic; // 0x448 (8)
	struct Unknown Comic Blend Color; // 0x450 (16)
	float Comic Threshold; // 0x460 (4)
	char Edge Detect : 0; // 0x464 (1)
	struct Unknown mEdgeDetect; // 0x468 (8)
	struct Unknown iEdgeDetect; // 0x470 (8)
	char Emboss : 0; // 0x478 (1)
	struct Unknown mEmboss; // 0x480 (8)
	struct Unknown iEmboss; // 0x488 (8)
	char Glitch : 0; // 0x490 (1)
	struct Unknown mGlitch; // 0x498 (8)
	struct Unknown iGlitch; // 0x4A0 (8)
	float Glitch Speed; // 0x4A8 (4)
	float Glitch Lines; // 0x4AC (4)
	float Glitch Blocking; // 0x4B0 (4)
	char Monitor Effects : 0; // 0x4B4 (1)
	struct Unknown mGrainNLines; // 0x4B8 (8)
	struct Unknown iGrainNLines; // 0x4C0 (8)
	float Monitor Effects Line Count; // 0x4C8 (4)
	float Monitor Effects Intensity 1; // 0x4CC (4)
	float Monitor Effects Intensity 2; // 0x4D0 (4)
	char Hard Emboss : 0; // 0x4D4 (1)
	struct Unknown mHardEmboss; // 0x4D8 (8)
	struct Unknown iHardEmboss; // 0x4E0 (8)
	char Hue Panner : 0; // 0x4E8 (1)
	struct Unknown mHuePanner; // 0x4F0 (8)
	struct Unknown iHuePanner; // 0x4F8 (8)
	float Hue Panner Speed; // 0x500 (4)
	char Monochrome : 0; // 0x504 (1)
	struct Unknown mMonochrome; // 0x508 (8)
	struct Unknown iMonochrome; // 0x510 (8)
	struct Unknown Monochrome Color; // 0x518 (16)
	char Radial Blur : 0; // 0x528 (1)
	struct Unknown mRadialBlur; // 0x530 (8)
	struct Unknown iRadialBlur; // 0x538 (8)
	float Radial Blur Width; // 0x540 (4)
	int32_t Radial Blur Samples; // 0x544 (4)
	char Scratches : 0; // 0x548 (1)
	struct Unknown mScratches; // 0x550 (8)
	struct Unknown iScratches; // 0x558 (8)
	char Screen Waves : 0; // 0x560 (1)
	struct Unknown mScreenWaves; // 0x568 (8)
	struct Unknown iScreenWaves; // 0x570 (8)
	float Screen Waves X Tiling; // 0x578 (4)
	float Screen Waves Y Tiling; // 0x57C (4)
	float Monitor Effects Distortion 1; // 0x580 (4)
	float Monitor Effects Distortion 2; // 0x584 (4)
	float Monitor Effects Picture Scale; // 0x588 (4)
	struct Unknown Distance Fog Near Color; // 0x58C (16)
	struct Unknown Distance Fog Far Color; // 0x59C (16)
	float Distance Fog Distance; // 0x5AC (4)
	struct Unknown Scratches Distortion Map; // 0x5B0 (8)
	float Scratches Distortion Amount; // 0x5B8 (4)
	struct Unknown Scratches Color; // 0x5BC (16)
	float Screen Drops Layer 1 Speed; // 0x5CC (4)
	float Screen Drops Layer 1 Noise; // 0x5D0 (4)
	struct Unknown Screen Drops Layer 2 Map; // 0x5D8 (8)
	float Screen Drops Layer 2 Intensity; // 0x5E0 (4)
	float Screen Drops Layer 2 Speed; // 0x5E4 (4)
	float Screen Drops Layer 2 Noise; // 0x5E8 (4)
	struct Unknown Screen Drops Layer 3 Map; // 0x5F0 (8)
	float Screen Drops Layer 3 Intensity; // 0x5F8 (4)
	float Screen Drops Layer 3 Speed; // 0x5FC (4)
	char Invert : 0; // 0x600 (1)
	struct Unknown mInvert; // 0x608 (8)
	struct Unknown iInvert; // 0x610 (8)
	char Iridescent : 0; // 0x618 (1)
	struct Unknown mIridescent; // 0x620 (8)
	struct Unknown iIridescent; // 0x628 (8)
	float Iridescent Iridescence; // 0x630 (4)
	char Kuwahara : 0; // 0x634 (1)
	struct Unknown mKuwahara; // 0x638 (8)
	struct Unknown iKuwahara; // 0x640 (8)
	int32_t Kuwahara Amount; // 0x648 (4)
	char Pulse : 0; // 0x64C (1)
	struct Unknown mPulse; // 0x650 (8)
	struct Unknown iPulse; // 0x658 (8)
	float Pulse Center X; // 0x660 (4)
	float Pulse Center Y; // 0x664 (4)
	float Pulse Speed; // 0x668 (4)
	float Pulse Smoothing; // 0x66C (4)
	char Squares : 0; // 0x670 (1)
	struct Unknown mSquares; // 0x678 (8)
	struct Unknown iSquares; // 0x680 (8)
	float Squares Scale; // 0x688 (4)
	float Squares Ratio; // 0x68C (4)
	float Squares Radius; // 0x690 (4)
	float Squares Brightness; // 0x694 (4)
	char Tiles : 0; // 0x698 (1)
	struct Unknown mTiles; // 0x6A0 (8)
	struct Unknown iTiles; // 0x6A8 (8)
	char Tiles Centered : 0; // 0x6B0 (1)
	float Tiles Count; // 0x6B4 (4)
	char TV Noise : 0; // 0x6B8 (1)
	struct Unknown mTVNoise; // 0x6C0 (8)
	struct Unknown iTVNoise; // 0x6C8 (8)
	float TV Noise Contrast; // 0x6D0 (4)
	float TV Noise Intensity; // 0x6D4 (4)
	struct Unknown Native Post Process; // 0x6E0 (1472)
	char LOOK! : 0; // 0xCA0 (1)
	char LOOK! Presets; // 0xCA1 (1)
	char Circles : 0; // 0xCA2 (1)
	struct Unknown mCircles; // 0xCA8 (8)
	struct Unknown iCircles; // 0xCB0 (8)
	float Circles Ratio; // 0xCB8 (4)
	float Circles Tiling; // 0xCBC (4)
	char Sonar : 0; // 0xCC0 (1)
	struct Unknown mSonar; // 0xCC8 (8)
	struct Unknown iSonar; // 0xCD0 (8)
	struct Unknown Sonar Color; // 0xCD8 (16)
	float Sonar Color Intensity; // 0xCE8 (4)
	float Sonar Depth; // 0xCEC (4)
	float Sonar Wave Distance; // 0xCF0 (4)
	float Sonar Distortion Intensity; // 0xCF4 (4)
	float Sonar Sharpness; // 0xCF8 (4)
	float Alcohol Offset; // 0xCFC (4)
	char Distance Distortion : 0; // 0xD00 (1)
	struct Unknown mDistanceDistortion; // 0xD08 (8)
	struct Unknown iDistanceDistortion; // 0xD10 (8)
	struct Unknown Distance Distortion Normal; // 0xD18 (8)
	float Distance Distortion Amount; // 0xD20 (4)
	float Distance Distortion Edge Distance; // 0xD24 (4)
	float Distance Distortion Edge Fading; // 0xD28 (4)
	float Distance Distortion Movement Speed; // 0xD2C (4)
	float Distance Distortion Movement Scale; // 0xD30 (4)
	float Distance Distortion Affected Brightness; // 0xD34 (4)
	float Distance Distortion Unaffected Brightness; // 0xD38 (4)
	char Drawing : 0; // 0xD3C (1)
	struct Unknown mDrawing; // 0xD40 (8)
	struct Unknown iDrawing; // 0xD48 (8)
	struct Unknown Drawing Paper Texture; // 0xD50 (8)
	char Drawing Noise Algorithm; // 0xD58 (1)
	float Drawing Ink Amount; // 0xD5C (4)
	float Drawing Liner Amount; // 0xD60 (4)
	struct Unknown Drawing Blending Color; // 0xD64 (16)
	char Magic Transitions : 0; // 0xD74 (1)
	struct Unknown mMagicTransitions; // 0xD78 (8)
	struct Unknown iMagicTransitions; // 0xD80 (8)
	struct Unknown Magic Transitions Final Texture; // 0xD88 (8)
	struct Unknown Magic Transitions Mask Texture; // 0xD90 (8)
	float Magic Transitions Transition Amount; // 0xD98 (4)
	float Magic Transitions Flashing Intensity; // 0xD9C (4)
	float Magic Transitions Flashing Tolerance; // 0xDA0 (4)
	struct Unknown Magic Transitions Flashing Color; // 0xDA4 (16)
	char Screen Damage : 0; // 0xDB4 (1)
	struct Unknown mScreenDamage; // 0xDB8 (8)
	struct Unknown iScreenDamage; // 0xDC0 (8)
	struct Unknown Screen Damage Texture; // 0xDC8 (8)
	float Screen Damage Intensity; // 0xDD0 (4)
	float Screen Damage Distortion; // 0xDD4 (4)
	struct Unknown Screen Damage Tint; // 0xDD8 (16)
	float Screen Damage Edge Size; // 0xDE8 (4)
	float Screen Damage Fading; // 0xDEC (4)
	char Screen Decals : 0; // 0xDF0 (1)
	struct Unknown mScreenDecals; // 0xDF8 (8)
	struct Unknown iScreenDecals; // 0xE00 (8)
	struct Unknown Screen Decals Slot 1 - Texture; // 0xE08 (8)
	float Screen Decals Slot 1 - Distortion; // 0xE10 (4)
	float Screen Decals Slot 1 - Intensity; // 0xE14 (4)
	float Screen Decals Slot 1 - Position X; // 0xE18 (4)
	float Screen Decals Slot 1 - Position Y; // 0xE1C (4)
	float Screen Decals Slot 1 - Rotation; // 0xE20 (4)
	float Screen Decals Slot 1 - Size; // 0xE24 (4)
	struct Unknown Screen Decals Slot 2 - Texture; // 0xE28 (8)
	float Screen Decals Slot 2 - Distortion; // 0xE30 (4)
	float Screen Decals Slot 2 - Intensity; // 0xE34 (4)
	float Screen Decals Slot 2 - Position X; // 0xE38 (4)
	float Screen Decals Slot 2 - Position Y; // 0xE3C (4)
	float Screen Decals Slot 2 - Rotation; // 0xE40 (4)
	float Screen Decals Slot 2 - Size; // 0xE44 (4)
	struct Unknown Screen Decals Slot 3 - Texture; // 0xE48 (8)
	float Screen Decals Slot 3 - Distortion; // 0xE50 (4)
	float Screen Decals Slot 3 - Intensity; // 0xE54 (4)
	float Screen Decals Slot 3 - Position X; // 0xE58 (4)
	float Screen Decals Slot 3 - Position Y; // 0xE5C (4)
	float Screen Decals Slot 3 - Rotation; // 0xE60 (4)
	float Screen Decals Slot 3 - Size; // 0xE64 (4)
	struct Unknown Screen Decals Slot 4 - Texture; // 0xE68 (8)
	float Screen Decals Slot 4 - Distortion; // 0xE70 (4)
	float Screen Decals Slot 4 - Intensity; // 0xE74 (4)
	float Screen Decals Slot 4 - Position X; // 0xE78 (4)
	float Screen Decals Slot 4 - Position Y; // 0xE7C (4)
	float Screen Decals Slot 4 - Rotation; // 0xE80 (4)
	float Screen Decals Slot 4 - Size; // 0xE84 (4)
	char Sharpen : 0; // 0xE88 (1)
	struct Unknown mSharpen; // 0xE90 (8)
	struct Unknown iSharpen; // 0xE98 (8)
	float Sharpen Value; // 0xEA0 (4)
	char Toon Shading : 0; // 0xEA4 (1)
	struct Unknown mToonShading; // 0xEA8 (8)
	struct Unknown iToonShading; // 0xEB0 (8)
	char Toon Shading Use Diffuse Buffer : 0; // 0xEB8 (1)
	float Toon Shading Details; // 0xEBC (4)
	float Toon Shading Fading ; // 0xEC0 (4)
	float Toon Shading Size; // 0xEC4 (4)
	float Toon Shading Sobel Strength; // 0xEC8 (4)
	char Anamorphic Lens Flares : 0; // 0xECC (1)
	struct Unknown mAnamorphicLensFlares; // 0xED0 (8)
	struct Unknown iAnamorphicLensFlares; // 0xED8 (8)
	float Anamorphic Lens Flares Linear Color; // 0xEE0 (4)
	float Anamorphic Lens Flares Exposure Scale; // 0xEE4 (4)
	float Anamorphic Lens Flares Threshold; // 0xEE8 (4)
	float Anamorphic Lens Flares Intensity; // 0xEEC (4)
	float Anamorphic Lens Flares Steps; // 0xEF0 (4)
	float Anamorphic Lens Flares Length; // 0xEF4 (4)
	struct Unknown Anamorphic Lens Flares Tint; // 0xEF8 (16)
	char Frost : 0; // 0xF08 (1)
	struct Unknown mFrost; // 0xF10 (8)
	struct Unknown iFrost; // 0xF18 (8)
	struct Unknown Frost Texture; // 0xF20 (8)
	float Frost Colorization; // 0xF28 (4)
	float Frost Distortion Strength; // 0xF2C (4)
	float Frost Visible Area; // 0xF30 (4)
	struct Unknown ASCII Color Multiplier; // 0xF34 (16)
	char Neon : 0; // 0xF44 (1)
	struct Unknown mNeon; // 0xF48 (8)
	struct Unknown iNeon; // 0xF50 (8)
	struct Unknown Neon Color; // 0xF58 (16)
	float Neon Noise; // 0xF68 (4)
	float Neon Power; // 0xF6C (4)
	char Custom Depth Highlighter : 0; // 0xF70 (1)
	struct Unknown mCustomDepthHighlighter; // 0xF78 (8)
	struct Unknown iCustomDepthHighlighter; // 0xF80 (8)
	struct Unknown Custom Depth Highlighter Highlight Color; // 0xF88 (16)
	float Custom Depth Highlighter Highlight Opacity; // 0xF98 (4)
	char Custom Depth Highlighter (Clip) : 0; // 0xF9C (1)
	struct Unknown mCustomDepthHighlighterClip; // 0xFA0 (8)
	struct Unknown iCustomDepthHighlighterClip; // 0xFA8 (8)
	struct Unknown Custom Depth Highlighter (C) Highlight Color; // 0xFB0 (16)
	float Custom Depth Highlighter (C) Highlight Opacity; // 0xFC0 (4)
	float Edge Detect Threshold; // 0xFC4 (4)
	float Scratches Noising; // 0xFC8 (4)
	char Enabled : 0; // 0xFCC (1)
	char Unbound : 0; // 0xFCD (1)
	struct TArray<Unknown> AllMaterials; // 0xFD0 (16)
	float Screen Drops Layer 3 Noise; // 0xFE0 (4)
	struct Unknown Screen Drops Diffuse Color; // 0xFE4 (16)
	float Screen Drops Splashes Amount; // 0xFF4 (4)
	float Screen Drops Splashes Tiling; // 0xFF8 (4)
	float Screen Drops Splashes Intensity; // 0xFFC (4)
	float Screen Drops Bump; // 0x1000 (4)
	char 2D Transform : 0; // 0x1004 (1)
	struct Unknown m2DTransform; // 0x1008 (8)
	struct Unknown i2DTransform; // 0x1010 (8)
	char Kaleidescope : 0; // 0x1018 (1)
	struct Unknown mKaleidescope; // 0x1020 (8)
	struct Unknown iKaleidescope; // 0x1028 (8)
	char Letterboxing : 0; // 0x1030 (1)
	struct Unknown mLetterboxing; // 0x1038 (8)
	struct Unknown iLetterboxing; // 0x1040 (8)
	char Snow : 0; // 0x1048 (1)
	struct Unknown mSnow; // 0x1050 (8)
	struct Unknown iSnow; // 0x1058 (8)
	float 2D Transform Anchor Point (X); // 0x1060 (4)
	float 2D Transform Anchor Point (Y); // 0x1064 (4)
	float 2D Transform Rotate; // 0x1068 (4)
	float 2D Transform Pan (X); // 0x106C (4)
	float 2D Transform Pan (Y); // 0x1070 (4)
	float 2D Transform Scale (X); // 0x1074 (4)
	float 2D Transform Scale (Y); // 0x1078 (4)
	char 2D Transform Tiled : 0; // 0x107C (1)
	float Kaleidescope Scale; // 0x1080 (4)
	float Kaleidescope Factor A; // 0x1084 (4)
	float Kaleidescope Factor B; // 0x1088 (4)
	struct Unknown Letterboxing Texture; // 0x1090 (8)
	float Letterboxing Size; // 0x1098 (4)
	char Letterboxing Horizontal : 0; // 0x109C (1)
	char Letterboxing Vertical : 0; // 0x109D (1)
	float Snow Amount; // 0x10A0 (4)
	float Snow Distortion; // 0x10A4 (4)
	float Snow Size; // 0x10A8 (4)
	float Snow Speed (X); // 0x10AC (4)
	float Snow Speed (Y); // 0x10B0 (4)
	float Drawing Animation Speed; // 0x10B4 (4)
	float Distance Fog Edge Sharpness; // 0x10B8 (4)
	float Screen Drops Diffuse Intensity; // 0x10BC (4)
	char World Splash : 0; // 0x10C0 (1)
	struct Unknown mWorldSplash; // 0x10C8 (8)
	struct Unknown iWorldSplash; // 0x10D0 (8)
	float World Splash Distort; // 0x10D8 (4)
	float World Splash Smoothness; // 0x10DC (4)
	float World Splash Tiling; // 0x10E0 (4)
	struct Unknown World Splash Color Tint; // 0x10E4 (16)
	int32_t Blur Samples; // 0x10F4 (4)
	struct Unknown Frost Color; // 0x10F8 (16)
	float Comic PreMultiplier; // 0x1108 (4)
	float Comic Desaturation; // 0x110C (4)
	char World Glitch : 0; // 0x1110 (1)
	struct Unknown mWorldGlitch; // 0x1118 (8)
	struct Unknown iWorldGlitch; // 0x1120 (8)
	char World Glitch Animated : 0; // 0x1128 (1)
	float World Glitch Animation Speed; // 0x112C (4)
	float World Glitch Distance; // 0x1130 (4)
	float World Glitch Distance Sharpness; // 0x1134 (4)
	float World Glitch Phase; // 0x1138 (4)
	float World Glitch Power; // 0x113C (4)
	struct Unknown World Glitch Grid Position; // 0x1140 (12)
	struct Unknown World Glitch Grid Size; // 0x114C (12)
	char Digitize : 0; // 0x1158 (1)
	struct Unknown mDigitize; // 0x1160 (8)
	struct Unknown iDigitize; // 0x1168 (8)
	struct Unknown Digitize Cell Color; // 0x1170 (16)
	struct Unknown Digitize Cell Position; // 0x1180 (12)
	struct Unknown Digitize Cell Position Over Time; // 0x118C (12)
	float Digitize Distance; // 0x1198 (4)
	float Digitize Distance Sharpness; // 0x119C (4)
	float Digitize Cell Size; // 0x11A0 (4)
	float Digitize Cell Color Multiplier; // 0x11A4 (4)
	float Digitize Cell Distortion; // 0x11A8 (4)
	float Digitize Background Color Multiplier; // 0x11AC (4)
	char Alarm : 0; // 0x11B0 (1)
	struct Unknown mAlarm; // 0x11B8 (8)
	struct Unknown iAlarm; // 0x11C0 (8)
	struct Unknown Alarm Color; // 0x11C8 (16)
	float Alarm Speed; // 0x11D8 (4)
	char Sketch : 0; // 0x11DC (1)
	struct Unknown mSketch; // 0x11E0 (8)
	struct Unknown iSketch; // 0x11E8 (8)
	struct Unknown Sketch Color; // 0x11F0 (16)
	struct Unknown Sketch Background Color; // 0x1200 (16)
	float Sketch Power; // 0x1210 (4)
	float Sketch Pattern Rotation; // 0x1214 (4)
	float Sketch Pattern Speed; // 0x1218 (4)
	struct Unknown Custom Depth Highlighter Outline Color; // 0x121C (16)
	float Custom Depth Highlighter Outline Opacity; // 0x122C (4)
	struct Unknown Custom Depth Highlighter (C) Outline Color; // 0x1230 (16)
	float Custom Depth Highlighter (C) Outline Opacity; // 0x1240 (4)
	char Wired : 0; // 0x1244 (1)
	struct Unknown iWired; // 0x1248 (8)
	struct Unknown mWired; // 0x1250 (8)
	struct Unknown Wired Color; // 0x1258 (16)
	float Wired Power; // 0x1268 (4)
	struct Unknown Mosaic - Advanced; // 0x1270 (56)
	struct Unknown Drug - Advanced; // 0x12A8 (56)
	struct Unknown Alcohol - Advanced; // 0x12E0 (56)
	struct Unknown Pixel Dissolve - Advanced; // 0x1318 (56)
	struct Unknown Channel Clamper - Advanced; // 0x1350 (56)
	struct Unknown Channel Swapper - Advanced; // 0x1388 (56)
	struct Unknown Bleach Bypass - Advanced; // 0x13C0 (56)
	struct Unknown Blur - Advanced; // 0x13F8 (56)
	float ASCII PreMultiplier; // 0x1430 (4)
	struct Unknown ASCII - Advanced; // 0x1438 (56)
	struct Unknown Colorize - Advanced; // 0x1470 (56)
	struct Unknown Edge Detect - Advanced; // 0x14A8 (56)
	struct Unknown Emboss - Advanced; // 0x14E0 (56)
	struct Unknown Hard Emboss - Advanced; // 0x1518 (56)
	float Glitch Grid Distortion Power; // 0x1550 (4)
	float Glitch Grid Distortion Size; // 0x1554 (4)
	float Glitch Grid Distortion Speed; // 0x1558 (4)
	struct Unknown Glitch - Advanced; // 0x1560 (56)
	char Monitor Effects Tiled : 0; // 0x1598 (1)
	struct Unknown Monitor Effects - Advanced; // 0x15A0 (56)
	struct Unknown Hue Panner - Advanced; // 0x15D8 (56)
	struct Unknown Monochrome - Advanced; // 0x1610 (56)
	struct Unknown Radial Blur Center; // 0x1648 (8)
	struct Unknown Radial Blur Sample Offset; // 0x1650 (8)
	struct Unknown Radial Blur - Advanced; // 0x1658 (56)
	struct Unknown Scratches - Advanced; // 0x1690 (56)
	struct Unknown Screen Waves - Advanced; // 0x16C8 (56)
	struct Unknown Distance Fog - Advanced; // 0x1700 (56)
	struct Unknown Screen Drops - Advanced; // 0x1738 (56)
	struct Unknown Invert - Advanced; // 0x1770 (56)
	struct Unknown Iridescent - Advanced; // 0x17A8 (56)
	struct Unknown Kuwahara - Advanced; // 0x17E0 (56)
	struct Unknown Pulse - Advanced; // 0x1818 (56)
	struct Unknown Squares - Advanced; // 0x1850 (56)
	struct Unknown Tiles - Advanced; // 0x1888 (56)
	struct Unknown TV Noise - Advanced; // 0x18C0 (56)
	struct Unknown Circles - Advanced; // 0x18F8 (56)
	struct Unknown Sonar - Advanced; // 0x1930 (56)
	struct Unknown Distance Distortion - Advanced; // 0x1968 (56)
	struct Unknown Drawing - Advanced; // 0x19A0 (56)
	struct Unknown Magic Transitions - Advanced; // 0x19D8 (56)
	struct Unknown Screen Damage - Advanced; // 0x1A10 (56)
	struct Unknown Screen Decals - Advanced; // 0x1A48 (56)
	struct Unknown Sharpen - Advanced; // 0x1A80 (56)
	struct Unknown Toon Shading - Advanced; // 0x1AB8 (56)
	struct Unknown Anamorphic Lens Flares - Advanced; // 0x1AF0 (56)
	struct Unknown Frost - Advanced; // 0x1B28 (56)
	struct Unknown Neon - Advanced; // 0x1B60 (56)
	struct Unknown Custom Depth Highlighter - Advanced; // 0x1B98 (48)
	struct Unknown Custom Depth Highlighter (Clip) - Advanced; // 0x1BC8 (48)
	struct Unknown 2D Transform Background Color; // 0x1BF8 (16)
	struct Unknown 2D Transform - Advanced; // 0x1C08 (56)
	struct Unknown Kaleidescope - Advanced; // 0x1C40 (56)
	struct Unknown Letterboxing - Advanced; // 0x1C78 (56)
	struct Unknown Snow - Advanced; // 0x1CB0 (56)
	struct Unknown World Splash - Advanced; // 0x1CE8 (56)
	struct Unknown World Glitch - Advanced; // 0x1D20 (56)
	struct Unknown Digitize - Advanced; // 0x1D58 (56)
	struct Unknown Alarm - Advanced; // 0x1D90 (56)
	struct Unknown Sketch - Advanced; // 0x1DC8 (56)
	struct Unknown Wired - Advanced; // 0x1E00 (56)
	float Comic Pattern Intensity; // 0x1E38 (4)
	int32_t Comic Pattern Line Count; // 0x1E3C (4)
	float Comic Pattern Rotation; // 0x1E40 (4)
	struct Unknown Comic - Advanced; // 0x1E48 (56)
	char Actor Featurette : 0; // 0x1E80 (1)
	struct Unknown mActorFeaturette; // 0x1E88 (8)
	struct Unknown iActorFeaturette; // 0x1E90 (8)
	struct Unknown Actor Featurette Background Multiplier; // 0x1E98 (16)
	float Actor Featurette Background Desaturation; // 0x1EA8 (4)
	struct Unknown Actor Featurette Foreground Multiplier; // 0x1EAC (16)
	float Actor Featurette Foreground Saturation; // 0x1EBC (4)
	float Actor Featurette Blur Amount; // 0x1EC0 (4)
	int32_t Actor Featurette Blur Samples; // 0x1EC4 (4)
	int32_t Actor Featurette Stencil Mask; // 0x1EC8 (4)
	struct Unknown Actor Featurette - Advanced; // 0x1ED0 (48)
	char Infected : 0; // 0x1F00 (1)
	struct Unknown mInfected; // 0x1F08 (8)
	struct Unknown iInfected; // 0x1F10 (8)
	float Infected Distortion Amount; // 0x1F18 (4)
	float Infected Smoothness; // 0x1F1C (4)
	float Infected Speed; // 0x1F20 (4)
	float Infected TransformZ; // 0x1F24 (4)
	struct Unknown Infected - Advanced; // 0x1F28 (56)
	char Colored AO : 0; // 0x1F60 (1)
	struct Unknown mColoredAO; // 0x1F68 (8)
	struct Unknown iColoredAO; // 0x1F70 (8)
	struct Unknown Colored AO Color; // 0x1F78 (16)
	float Colored AO Intensity; // 0x1F88 (4)
	struct Unknown Colored AO - Advanced; // 0x1F90 (56)
	char Camera Shake : 0; // 0x1FC8 (1)
	struct Unknown mCameraShake; // 0x1FD0 (8)
	struct Unknown iCameraShake; // 0x1FD8 (8)
	float Camera Shake Power (X); // 0x1FE0 (4)
	float Camera Shake Power (Y); // 0x1FE4 (4)
	float Camera Shake Frequency; // 0x1FE8 (4)
	struct Unknown Camera Shake - Advanced; // 0x1FF0 (56)
	char Disco Ball : 0; // 0x2028 (1)
	struct Unknown mDiscoBall; // 0x2030 (8)
	struct Unknown iDiscoBall; // 0x2038 (8)
	struct Unknown Disco Ball WS Center; // 0x2040 (12)
	struct Unknown Disco Ball Color 1; // 0x204C (16)
	struct Unknown Disco Ball Color 2; // 0x205C (16)
	struct Unknown Disco Ball Block Scale; // 0x206C (12)
	float Disco Ball Block Distribution; // 0x2078 (4)
	float Disco Ball Rotation Speed; // 0x207C (4)
	float Disco Ball Manual Rotation; // 0x2080 (4)
	struct Unknown Disco Ball - Advanced; // 0x2088 (56)
	char Hazy Lights : 0; // 0x20C0 (1)
	struct Unknown mHazyLights; // 0x20C8 (8)
	struct Unknown iHazyLights; // 0x20D0 (8)
	struct Unknown Hazy Lights Move Speed; // 0x20D8 (8)
	struct Unknown Hazy Lights Position; // 0x20E0 (8)
	struct Unknown Hazy Lights - Advanced; // 0x20E8 (56)
	char Melted World : 0; // 0x2120 (1)
	struct Unknown mMeltedWorld; // 0x2128 (8)
	struct Unknown iMeltedWorld; // 0x2130 (8)
	struct Unknown Melted World Size; // 0x2138 (12)
	float Melted World Distance; // 0x2144 (4)
	float Melted World Power; // 0x2148 (4)
	float Melted World Sharpness; // 0x214C (4)
	struct Unknown Melted World - Advanced; // 0x2150 (56)
	char Selective Color : 0; // 0x2188 (1)
	struct Unknown mSelectiveColor; // 0x2190 (8)
	struct Unknown iSelectiveColor; // 0x2198 (8)
	struct Unknown Selective Color Mask Color; // 0x21A0 (16)
	float Selective Color Hue Tolerance; // 0x21B0 (4)
	float Selective Color Saturation Tolerance; // 0x21B4 (4)
	float Selective Color Value Tolerance; // 0x21B8 (4)
	struct Unknown Selective Color - Advanced; // 0x21C0 (56)
	char Screen Fire : 0; // 0x21F8 (1)
	struct Unknown mScreenFire; // 0x2200 (8)
	struct Unknown iScreenFire; // 0x2208 (8)
	struct Unknown Screen Fire Color; // 0x2210 (16)
	float Screen Fire Distortion Amount; // 0x2220 (4)
	float Screen Fire Mask Contrast; // 0x2224 (4)
	float Screen Fire Mask Scale; // 0x2228 (4)
	float Screen Fire Flame Tiling; // 0x222C (4)
	float Screen Fire Speed; // 0x2230 (4)
	struct Unknown Screen Fire - Advanced; // 0x2238 (56)
	char Haunted : 0; // 0x2270 (1)
	struct Unknown mHaunted; // 0x2278 (8)
	struct Unknown iHaunted; // 0x2280 (8)
	float Haunted Amount; // 0x2288 (4)
	float Haunted Mask Scale; // 0x228C (4)
	struct Unknown Haunted Texture; // 0x2290 (8)
	float Haunted Texture Scale; // 0x2298 (4)
	struct Unknown Haunted - Advanced; // 0x22A0 (56)
	char Grid Cell : 0; // 0x22D8 (1)
	struct Unknown mGridCell; // 0x22E0 (8)
	struct Unknown iGridCell; // 0x22E8 (8)
	char Grid Cell Animated : 0; // 0x22F0 (1)
	float Grid Cell Animation Speed; // 0x22F4 (4)
	struct Unknown Grid Cell Color; // 0x22F8 (16)
	struct Unknown Grid Cell Void Color; // 0x2308 (16)
	float Grid Cell Tiling; // 0x2318 (4)
	float Grid Cell Transition Amount; // 0x231C (4)
	char Lens Distortion : 0; // 0x2320 (1)
	struct Unknown mLensDistortion; // 0x2328 (8)
	struct Unknown iLensDistortion; // 0x2330 (8)
	float Lens Distortion Optic Refinement; // 0x2338 (4)
	float Lens Distortion Optic Size; // 0x233C (4)
	float Lens Distortion Optic Position X; // 0x2340 (4)
	float Lens Distortion Optic Position Y; // 0x2344 (4)
	struct Unknown Lens Distortion Scope Texture; // 0x2348 (8)
	float Lens Distortion Scope Texture Scale X; // 0x2350 (4)
	float Lens Distortion Scope Texture Scale Y; // 0x2354 (4)
	struct Unknown Lens Distortion - Advanced; // 0x2358 (56)
	struct Unknown Grid Cell - Advanced; // 0x2390 (56)
	char Zone : 0; // 0x23C8 (1)
	struct Unknown mZone; // 0x23D0 (8)
	struct Unknown iZone; // 0x23D8 (8)
	struct Unknown Zone Center; // 0x23E0 (16)
	float Zone Radius; // 0x23F0 (4)
	float Zone Edge Hardness; // 0x23F4 (4)
	struct Unknown Zone Edge Color; // 0x23F8 (16)
	struct Unknown Zone Coverage Color; // 0x2408 (16)
	struct Unknown Zone - Advanced; // 0x2418 (56)
	char Pyramid : 0; // 0x2450 (1)
	struct Unknown mPyramid; // 0x2458 (8)
	struct Unknown iPyramid; // 0x2460 (8)
	char Pyramid Masked : 0; // 0x2468 (1)
	struct Unknown Pyramid Background Color; // 0x246C (16)
	float Pyramid Width; // 0x247C (4)
	float Pyramid Pan; // 0x2480 (4)
	float Pyramid Tile Amount; // 0x2484 (4)
	struct Unknown Pyramid - Advanced; // 0x2488 (56)
	char Mojo : 0; // 0x24C0 (1)
	struct Unknown mMojo; // 0x24C8 (8)
	struct Unknown iMojo; // 0x24D0 (8)
	char Mojo Animated : 0; // 0x24D8 (1)
	float Mojo Animation Speed; // 0x24DC (4)
	struct Unknown Mojo Mask; // 0x24E0 (8)
	struct Unknown Mojo Distortion Map; // 0x24E8 (8)
	float Mojo Distortion Amount; // 0x24F0 (4)
	struct Unknown Mojo Color; // 0x24F4 (16)
	float Mojo Intensity; // 0x2504 (4)
	float Mojo Phase; // 0x2508 (4)
	float Mojo Tolerance; // 0x250C (4)
	struct Unknown Mojo - Advanced; // 0x2510 (56)

	void Create Effect Material Instance(struct Unknown Material, struct Unknown& Instance); // Function Chameleon.Chameleon_C.Create Effect Material Instance(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Mojo Func(char IsEnabled); // Function Chameleon.Chameleon_C.Mojo Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Pyramid Func(char IsEnabled); // Function Chameleon.Chameleon_C.Pyramid Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Zone Func(char IsEnabled); // Function Chameleon.Chameleon_C.Zone Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Lens Func(char IsEnabled); // Function Chameleon.Chameleon_C.Lens Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Grid Cell Func(char IsEnabled); // Function Chameleon.Chameleon_C.Grid Cell Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Haunted Func(char IsEnabled); // Function Chameleon.Chameleon_C.Haunted Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Screen Fire Func(char IsEnabled); // Function Chameleon.Chameleon_C.Screen Fire Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Selective Color Func(char IsEnabled); // Function Chameleon.Chameleon_C.Selective Color Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Melted World Func(char IsEnabled); // Function Chameleon.Chameleon_C.Melted World Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Hazy Lights Func(char IsEnabled); // Function Chameleon.Chameleon_C.Hazy Lights Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Disco Ball Func(char IsEnabled); // Function Chameleon.Chameleon_C.Disco Ball Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Camera Shake Func(char IsEnabled); // Function Chameleon.Chameleon_C.Camera Shake Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Colored AO Func(char IsEnabled); // Function Chameleon.Chameleon_C.Colored AO Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Infected Func(char IsEnabled); // Function Chameleon.Chameleon_C.Infected Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Actor Featurette Func(char IsEnabled); // Function Chameleon.Chameleon_C.Actor Featurette Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Set Advanced Effect Features (No Custom Depth)(struct Unknown Features, struct Unknown Material, struct Unknown Dynamic Material Instance); // Function Chameleon.Chameleon_C.Set Advanced Effect Features (No Custom Depth)(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Set Advanced Effect Features(struct Unknown Features, struct Unknown Material, struct Unknown Dynamic Material Instance); // Function Chameleon.Chameleon_C.Set Advanced Effect Features(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Wired Func(char IsEnabled); // Function Chameleon.Chameleon_C.Wired Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Sketch Func(char IsEnabled); // Function Chameleon.Chameleon_C.Sketch Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Alarm Func(char IsEnabled); // Function Chameleon.Chameleon_C.Alarm Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Digitize Func(char IsEnabled); // Function Chameleon.Chameleon_C.Digitize Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void World Glitch Func(char IsEnabled); // Function Chameleon.Chameleon_C.World Glitch Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void World Splash Func(char IsEnabled); // Function Chameleon.Chameleon_C.World Splash Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Snow Func(char IsEnabled); // Function Chameleon.Chameleon_C.Snow Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Letterboxing Func(char IsEnabled); // Function Chameleon.Chameleon_C.Letterboxing Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Kaleidescope Func(char IsEnabled); // Function Chameleon.Chameleon_C.Kaleidescope Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void 2D Transform Func(char IsEnabled); // Function Chameleon.Chameleon_C.2D Transform Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void SetEffectPriority(int32_t Priority, struct Unknown Material); // Function Chameleon.Chameleon_C.SetEffectPriority(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ApplyChameleonSettings(); // Function Chameleon.Chameleon_C.ApplyChameleonSettings(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Custom Depth Highlighter (NC) Func(char IsEnabled); // Function Chameleon.Chameleon_C.Custom Depth Highlighter (NC) Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Custom Depth Highlighter Func(char IsEnabled); // Function Chameleon.Chameleon_C.Custom Depth Highlighter Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Neon Func(char IsEnabled); // Function Chameleon.Chameleon_C.Neon Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Frost Func(char IsEnabled); // Function Chameleon.Chameleon_C.Frost Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Anamorphic Lens Flares Func(char IsEnabled); // Function Chameleon.Chameleon_C.Anamorphic Lens Flares Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Toon Shading Func(char IsEnabled); // Function Chameleon.Chameleon_C.Toon Shading Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Sharpen Func(char IsEnabled); // Function Chameleon.Chameleon_C.Sharpen Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Screen Decals Func(char IsEnabled); // Function Chameleon.Chameleon_C.Screen Decals Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Screen Damage Func(char IsEnabled); // Function Chameleon.Chameleon_C.Screen Damage Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Magic Transitions Func(char IsEnabled); // Function Chameleon.Chameleon_C.Magic Transitions Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Drawing Func(char IsEnabled); // Function Chameleon.Chameleon_C.Drawing Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Distance Distortion Func(char Condition); // Function Chameleon.Chameleon_C.Distance Distortion Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Sonar Func(char Condition); // Function Chameleon.Chameleon_C.Sonar Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Circles Func(char Condition); // Function Chameleon.Chameleon_C.Circles Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void LOOK Func(char Condition); // Function Chameleon.Chameleon_C.LOOK Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void TV Noise Func(char& IsEnabled); // Function Chameleon.Chameleon_C.TV Noise Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Tiles Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Tiles Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Squares Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Squares Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Pulse Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Pulse Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Kuwahara Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Kuwahara Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Iridescent Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Iridescent Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Invert Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Invert Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Hard Emboss Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Hard Emboss Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Emboss Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Emboss Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Edge Detect Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Edge Detect Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ASCII Func(char& IsEnabled); // Function Chameleon.Chameleon_C.ASCII Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Bleach Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Bleach Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Scratches Func(char IsEnabled); // Function Chameleon.Chameleon_C.Scratches Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Distance Fog Func(char IsEnabled); // Function Chameleon.Chameleon_C.Distance Fog Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Screen Waves Func(char IsEnabled); // Function Chameleon.Chameleon_C.Screen Waves Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Radial Blur Func(char IsEnabled); // Function Chameleon.Chameleon_C.Radial Blur Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Monochrome Func(char IsEnabled); // Function Chameleon.Chameleon_C.Monochrome Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Hue Panner Func(char IsEnabled); // Function Chameleon.Chameleon_C.Hue Panner Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void MonitorFX Func(char IsEnabled); // Function Chameleon.Chameleon_C.MonitorFX Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Glitch Func(char IsEnabled); // Function Chameleon.Chameleon_C.Glitch Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Comic Func(char IsEnabled); // Function Chameleon.Chameleon_C.Comic Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Colorize Func(char Condition); // Function Chameleon.Chameleon_C.Colorize Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Blur Func(char IsEnabled); // Function Chameleon.Chameleon_C.Blur Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Pixel Dissolve Func(char IsEnabled); // Function Chameleon.Chameleon_C.Pixel Dissolve Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Drug Func(char IsEnabled); // Function Chameleon.Chameleon_C.Drug Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Alcohol Func(char IsEnabled); // Function Chameleon.Chameleon_C.Alcohol Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Mosaic Func(char IsEnabled); // Function Chameleon.Chameleon_C.Mosaic Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Screen Drops Func(char IsEnabled); // Function Chameleon.Chameleon_C.Screen Drops Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void InitChameleon(); // Function Chameleon.Chameleon_C.InitChameleon(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Channel Swapper Func(char IsEnabled); // Function Chameleon.Chameleon_C.Channel Swapper Func(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void Channel Clamper Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Channel Clamper Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void UserConstructionScript(); // Function Chameleon.Chameleon_C.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ReceiveActorBeginOverlap(struct Unknown OtherActor); // Function Chameleon.Chameleon_C.ReceiveActorBeginOverlap(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ReceiveTick(float DeltaSeconds); // Function Chameleon.Chameleon_C.ReceiveTick(Event|Public|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void ExecuteUbergraph_Chameleon(int32_t EntryPoint); // Function Chameleon.Chameleon_C.ExecuteUbergraph_Chameleon(Final|UbergraphFunction) // <Game_BE.exe+0x2B812B0>
};

// Function Chameleon.Chameleon_C.Create Effect Material Instance
inline void AChameleon_C::Create Effect Material Instance(struct Unknown Material, struct Unknown& Instance) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Create Effect Material Instance");

	struct Create Effect Material Instance_Params {
		struct Unknown Material;
		struct Unknown& Instance;
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
inline void AChameleon_C::Set Advanced Effect Features (No Custom Depth)(struct Unknown Features, struct Unknown Material, struct Unknown Dynamic Material Instance) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Set Advanced Effect Features (No Custom Depth)");

	struct Set Advanced Effect Features (No Custom Depth)_Params {
		struct Unknown Features;
		struct Unknown Material;
		struct Unknown Dynamic Material Instance;
	}; Set Advanced Effect Features (No Custom Depth)_Params Params;

	Params.Features = Features;
	Params.Material = Material;
	Params.Dynamic Material Instance = Dynamic Material Instance;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Chameleon.Chameleon_C.Set Advanced Effect Features
inline void AChameleon_C::Set Advanced Effect Features(struct Unknown Features, struct Unknown Material, struct Unknown Dynamic Material Instance) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.Set Advanced Effect Features");

	struct Set Advanced Effect Features_Params {
		struct Unknown Features;
		struct Unknown Material;
		struct Unknown Dynamic Material Instance;
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
inline void AChameleon_C::SetEffectPriority(int32_t Priority, struct Unknown Material) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.SetEffectPriority");

	struct SetEffectPriority_Params {
		int32_t Priority;
		struct Unknown Material;
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
inline void AChameleon_C::ReceiveActorBeginOverlap(struct Unknown OtherActor) {
	static auto fn = UObject::FindObject<UFunction>("Function Chameleon.Chameleon_C.ReceiveActorBeginOverlap");

	struct ReceiveActorBeginOverlap_Params {
		struct Unknown OtherActor;
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

