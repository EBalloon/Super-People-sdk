// BlueprintGeneratedClass Chameleon.Chameleon_C
class AChameleon_C : public UActor {

public:

	struct Unknown UberGraphFrame; // 0x310 (8)
	struct Unknown MaterialBillboard; // 0x318 (8)
	struct Unknown InternalPP; // 0x320 (8)
	struct Unknown Bounding Box; // 0x328 (8)
	char Bleach Bypass : 0; // 0x330 (1)
	char Distance Fog : 0; // 0x331 (1)
	char Channel Clamper : 0; // 0x332 (1)
	struct Unknown mChannelClamper; // 0x338 (8)
	struct Unknown iChannelClamper; // 0x340 (8)
	char Channel Swapper : 0; // 0x348 (1)
	char Screen Drops : 0; // 0x349 (1)
	char Alcohol : 0; // 0x34A (1)
	char Drug : 0; // 0x34B (1)
	char Mosaic : 0; // 0x34C (1)
	char Pixel Dissolve : 0; // 0x34D (1)
	char Blur : 0; // 0x34E (1)
	struct Unknown mBleachBypass; // 0x350 (8)
	struct Unknown mDistanceFog; // 0x358 (8)
	struct Unknown mChannelSwapper; // 0x360 (8)
	struct Unknown mScreenDrops; // 0x368 (8)
	struct Unknown mAlcohol; // 0x370 (8)
	struct Unknown mDrug; // 0x378 (8)
	struct Unknown mMosaic; // 0x380 (8)
	struct Unknown mPixelDissolve; // 0x388 (8)
	struct Unknown mBlur; // 0x390 (8)
	float Channel Clamper Red Intensity; // 0x398 (4)
	float Channel Clamper Green Intensity; // 0x39C (4)
	float Channel Clamper Blue Intensity; // 0x3A0 (4)
	struct Unknown iBleachBypass; // 0x3A8 (8)
	struct Unknown iDistanceFog; // 0x3B0 (8)
	struct Unknown iChannelSwapper; // 0x3B8 (8)
	char Channel Swapper Red; // 0x3C0 (1)
	char Channel Swapper Green; // 0x3C1 (1)
	char Channel Swapper Blue; // 0x3C2 (1)
	struct Unknown iScreenDrops; // 0x3C8 (8)
	struct Unknown iAlcohol; // 0x3D0 (8)
	struct Unknown iDrug; // 0x3D8 (8)
	struct Unknown iMosaic; // 0x3E0 (8)
	struct Unknown iPixelDissolve; // 0x3E8 (8)
	struct Unknown iBlur; // 0x3F0 (8)
	struct Unknown Screen Drops Layer 1 Map; // 0x3F8 (8)
	float Screen Drops Layer 1 Intensity; // 0x400 (4)
	float Mosaic Scale; // 0x404 (4)
	float Alcohol Speed; // 0x408 (4)
	float Drug Speed; // 0x40C (4)
	float Pixel Dissolve Intensity; // 0x410 (4)
	float Blur Amount; // 0x414 (4)
	char ASCII : 0; // 0x418 (1)
	struct Unknown mAscii; // 0x420 (8)
	struct Unknown iAscii; // 0x428 (8)
	char Colorize : 0; // 0x430 (1)
	struct Unknown mColorize; // 0x438 (8)
	struct Unknown iColorize; // 0x440 (8)
	float Colorize Detail; // 0x448 (4)
	char Comic : 0; // 0x44C (1)
	struct Unknown mComic; // 0x450 (8)
	struct Unknown iComic; // 0x458 (8)
	struct Unknown Comic Blend Color; // 0x460 (16)
	float Comic Threshold; // 0x470 (4)
	char Edge Detect : 0; // 0x474 (1)
	struct Unknown mEdgeDetect; // 0x478 (8)
	struct Unknown iEdgeDetect; // 0x480 (8)
	char Emboss : 0; // 0x488 (1)
	struct Unknown mEmboss; // 0x490 (8)
	struct Unknown iEmboss; // 0x498 (8)
	char Glitch : 0; // 0x4A0 (1)
	struct Unknown mGlitch; // 0x4A8 (8)
	struct Unknown iGlitch; // 0x4B0 (8)
	float Glitch Speed; // 0x4B8 (4)
	float Glitch Lines; // 0x4BC (4)
	float Glitch Blocking; // 0x4C0 (4)
	char Monitor Effects : 0; // 0x4C4 (1)
	struct Unknown mGrainNLines; // 0x4C8 (8)
	struct Unknown iGrainNLines; // 0x4D0 (8)
	float Monitor Effects Line Count; // 0x4D8 (4)
	float Monitor Effects Intensity 1; // 0x4DC (4)
	float Monitor Effects Intensity 2; // 0x4E0 (4)
	char Hard Emboss : 0; // 0x4E4 (1)
	struct Unknown mHardEmboss; // 0x4E8 (8)
	struct Unknown iHardEmboss; // 0x4F0 (8)
	char Hue Panner : 0; // 0x4F8 (1)
	struct Unknown mHuePanner; // 0x500 (8)
	struct Unknown iHuePanner; // 0x508 (8)
	float Hue Panner Speed; // 0x510 (4)
	char Monochrome : 0; // 0x514 (1)
	struct Unknown mMonochrome; // 0x518 (8)
	struct Unknown iMonochrome; // 0x520 (8)
	struct Unknown Monochrome Color; // 0x528 (16)
	char Radial Blur : 0; // 0x538 (1)
	struct Unknown mRadialBlur; // 0x540 (8)
	struct Unknown iRadialBlur; // 0x548 (8)
	float Radial Blur Width; // 0x550 (4)
	int32_t Radial Blur Samples; // 0x554 (4)
	char Scratches : 0; // 0x558 (1)
	struct Unknown mScratches; // 0x560 (8)
	struct Unknown iScratches; // 0x568 (8)
	char Screen Waves : 0; // 0x570 (1)
	struct Unknown mScreenWaves; // 0x578 (8)
	struct Unknown iScreenWaves; // 0x580 (8)
	float Screen Waves X Tiling; // 0x588 (4)
	float Screen Waves Y Tiling; // 0x58C (4)
	float Monitor Effects Distortion 1; // 0x590 (4)
	float Monitor Effects Distortion 2; // 0x594 (4)
	float Monitor Effects Picture Scale; // 0x598 (4)
	struct Unknown Distance Fog Near Color; // 0x59C (16)
	struct Unknown Distance Fog Far Color; // 0x5AC (16)
	float Distance Fog Distance; // 0x5BC (4)
	struct Unknown Scratches Distortion Map; // 0x5C0 (8)
	float Scratches Distortion Amount; // 0x5C8 (4)
	struct Unknown Scratches Color; // 0x5CC (16)
	float Screen Drops Layer 1 Speed; // 0x5DC (4)
	float Screen Drops Layer 1 Noise; // 0x5E0 (4)
	struct Unknown Screen Drops Layer 2 Map; // 0x5E8 (8)
	float Screen Drops Layer 2 Intensity; // 0x5F0 (4)
	float Screen Drops Layer 2 Speed; // 0x5F4 (4)
	float Screen Drops Layer 2 Noise; // 0x5F8 (4)
	struct Unknown Screen Drops Layer 3 Map; // 0x600 (8)
	float Screen Drops Layer 3 Intensity; // 0x608 (4)
	float Screen Drops Layer 3 Speed; // 0x60C (4)
	char Invert : 0; // 0x610 (1)
	struct Unknown mInvert; // 0x618 (8)
	struct Unknown iInvert; // 0x620 (8)
	char Iridescent : 0; // 0x628 (1)
	struct Unknown mIridescent; // 0x630 (8)
	struct Unknown iIridescent; // 0x638 (8)
	float Iridescent Iridescence; // 0x640 (4)
	char Kuwahara : 0; // 0x644 (1)
	struct Unknown mKuwahara; // 0x648 (8)
	struct Unknown iKuwahara; // 0x650 (8)
	int32_t Kuwahara Amount; // 0x658 (4)
	char Pulse : 0; // 0x65C (1)
	struct Unknown mPulse; // 0x660 (8)
	struct Unknown iPulse; // 0x668 (8)
	float Pulse Center X; // 0x670 (4)
	float Pulse Center Y; // 0x674 (4)
	float Pulse Speed; // 0x678 (4)
	float Pulse Smoothing; // 0x67C (4)
	char Squares : 0; // 0x680 (1)
	struct Unknown mSquares; // 0x688 (8)
	struct Unknown iSquares; // 0x690 (8)
	float Squares Scale; // 0x698 (4)
	float Squares Ratio; // 0x69C (4)
	float Squares Radius; // 0x6A0 (4)
	float Squares Brightness; // 0x6A4 (4)
	char Tiles : 0; // 0x6A8 (1)
	struct Unknown mTiles; // 0x6B0 (8)
	struct Unknown iTiles; // 0x6B8 (8)
	char Tiles Centered : 0; // 0x6C0 (1)
	float Tiles Count; // 0x6C4 (4)
	char TV Noise : 0; // 0x6C8 (1)
	struct Unknown mTVNoise; // 0x6D0 (8)
	struct Unknown iTVNoise; // 0x6D8 (8)
	float TV Noise Contrast; // 0x6E0 (4)
	float TV Noise Intensity; // 0x6E4 (4)
	struct Unknown Native Post Process; // 0x6F0 (1472)
	char LOOK! : 0; // 0xCB0 (1)
	char LOOK! Presets; // 0xCB1 (1)
	char Circles : 0; // 0xCB2 (1)
	struct Unknown mCircles; // 0xCB8 (8)
	struct Unknown iCircles; // 0xCC0 (8)
	float Circles Ratio; // 0xCC8 (4)
	float Circles Tiling; // 0xCCC (4)
	char Sonar : 0; // 0xCD0 (1)
	struct Unknown mSonar; // 0xCD8 (8)
	struct Unknown iSonar; // 0xCE0 (8)
	struct Unknown Sonar Color; // 0xCE8 (16)
	float Sonar Color Intensity; // 0xCF8 (4)
	float Sonar Depth; // 0xCFC (4)
	float Sonar Wave Distance; // 0xD00 (4)
	float Sonar Distortion Intensity; // 0xD04 (4)
	float Sonar Sharpness; // 0xD08 (4)
	float Alcohol Offset; // 0xD0C (4)
	char Distance Distortion : 0; // 0xD10 (1)
	struct Unknown mDistanceDistortion; // 0xD18 (8)
	struct Unknown iDistanceDistortion; // 0xD20 (8)
	struct Unknown Distance Distortion Normal; // 0xD28 (8)
	float Distance Distortion Amount; // 0xD30 (4)
	float Distance Distortion Edge Distance; // 0xD34 (4)
	float Distance Distortion Edge Fading; // 0xD38 (4)
	float Distance Distortion Movement Speed; // 0xD3C (4)
	float Distance Distortion Movement Scale; // 0xD40 (4)
	float Distance Distortion Affected Brightness; // 0xD44 (4)
	float Distance Distortion Unaffected Brightness; // 0xD48 (4)
	char Drawing : 0; // 0xD4C (1)
	struct Unknown mDrawing; // 0xD50 (8)
	struct Unknown iDrawing; // 0xD58 (8)
	struct Unknown Drawing Paper Texture; // 0xD60 (8)
	char Drawing Noise Algorithm; // 0xD68 (1)
	float Drawing Ink Amount; // 0xD6C (4)
	float Drawing Liner Amount; // 0xD70 (4)
	struct Unknown Drawing Blending Color; // 0xD74 (16)
	char Magic Transitions : 0; // 0xD84 (1)
	struct Unknown mMagicTransitions; // 0xD88 (8)
	struct Unknown iMagicTransitions; // 0xD90 (8)
	struct Unknown Magic Transitions Final Texture; // 0xD98 (8)
	struct Unknown Magic Transitions Mask Texture; // 0xDA0 (8)
	float Magic Transitions Transition Amount; // 0xDA8 (4)
	float Magic Transitions Flashing Intensity; // 0xDAC (4)
	float Magic Transitions Flashing Tolerance; // 0xDB0 (4)
	struct Unknown Magic Transitions Flashing Color; // 0xDB4 (16)
	char Screen Damage : 0; // 0xDC4 (1)
	struct Unknown mScreenDamage; // 0xDC8 (8)
	struct Unknown iScreenDamage; // 0xDD0 (8)
	struct Unknown Screen Damage Texture; // 0xDD8 (8)
	float Screen Damage Intensity; // 0xDE0 (4)
	float Screen Damage Distortion; // 0xDE4 (4)
	struct Unknown Screen Damage Tint; // 0xDE8 (16)
	float Screen Damage Edge Size; // 0xDF8 (4)
	float Screen Damage Fading; // 0xDFC (4)
	char Screen Decals : 0; // 0xE00 (1)
	struct Unknown mScreenDecals; // 0xE08 (8)
	struct Unknown iScreenDecals; // 0xE10 (8)
	struct Unknown Screen Decals Slot 1 - Texture; // 0xE18 (8)
	float Screen Decals Slot 1 - Distortion; // 0xE20 (4)
	float Screen Decals Slot 1 - Intensity; // 0xE24 (4)
	float Screen Decals Slot 1 - Position X; // 0xE28 (4)
	float Screen Decals Slot 1 - Position Y; // 0xE2C (4)
	float Screen Decals Slot 1 - Rotation; // 0xE30 (4)
	float Screen Decals Slot 1 - Size; // 0xE34 (4)
	struct Unknown Screen Decals Slot 2 - Texture; // 0xE38 (8)
	float Screen Decals Slot 2 - Distortion; // 0xE40 (4)
	float Screen Decals Slot 2 - Intensity; // 0xE44 (4)
	float Screen Decals Slot 2 - Position X; // 0xE48 (4)
	float Screen Decals Slot 2 - Position Y; // 0xE4C (4)
	float Screen Decals Slot 2 - Rotation; // 0xE50 (4)
	float Screen Decals Slot 2 - Size; // 0xE54 (4)
	struct Unknown Screen Decals Slot 3 - Texture; // 0xE58 (8)
	float Screen Decals Slot 3 - Distortion; // 0xE60 (4)
	float Screen Decals Slot 3 - Intensity; // 0xE64 (4)
	float Screen Decals Slot 3 - Position X; // 0xE68 (4)
	float Screen Decals Slot 3 - Position Y; // 0xE6C (4)
	float Screen Decals Slot 3 - Rotation; // 0xE70 (4)
	float Screen Decals Slot 3 - Size; // 0xE74 (4)
	struct Unknown Screen Decals Slot 4 - Texture; // 0xE78 (8)
	float Screen Decals Slot 4 - Distortion; // 0xE80 (4)
	float Screen Decals Slot 4 - Intensity; // 0xE84 (4)
	float Screen Decals Slot 4 - Position X; // 0xE88 (4)
	float Screen Decals Slot 4 - Position Y; // 0xE8C (4)
	float Screen Decals Slot 4 - Rotation; // 0xE90 (4)
	float Screen Decals Slot 4 - Size; // 0xE94 (4)
	char Sharpen : 0; // 0xE98 (1)
	struct Unknown mSharpen; // 0xEA0 (8)
	struct Unknown iSharpen; // 0xEA8 (8)
	float Sharpen Value; // 0xEB0 (4)
	char Toon Shading : 0; // 0xEB4 (1)
	struct Unknown mToonShading; // 0xEB8 (8)
	struct Unknown iToonShading; // 0xEC0 (8)
	char Toon Shading Use Diffuse Buffer : 0; // 0xEC8 (1)
	float Toon Shading Details; // 0xECC (4)
	float Toon Shading Fading ; // 0xED0 (4)
	float Toon Shading Size; // 0xED4 (4)
	float Toon Shading Sobel Strength; // 0xED8 (4)
	char Anamorphic Lens Flares : 0; // 0xEDC (1)
	struct Unknown mAnamorphicLensFlares; // 0xEE0 (8)
	struct Unknown iAnamorphicLensFlares; // 0xEE8 (8)
	float Anamorphic Lens Flares Linear Color; // 0xEF0 (4)
	float Anamorphic Lens Flares Exposure Scale; // 0xEF4 (4)
	float Anamorphic Lens Flares Threshold; // 0xEF8 (4)
	float Anamorphic Lens Flares Intensity; // 0xEFC (4)
	float Anamorphic Lens Flares Steps; // 0xF00 (4)
	float Anamorphic Lens Flares Length; // 0xF04 (4)
	struct Unknown Anamorphic Lens Flares Tint; // 0xF08 (16)
	char Frost : 0; // 0xF18 (1)
	struct Unknown mFrost; // 0xF20 (8)
	struct Unknown iFrost; // 0xF28 (8)
	struct Unknown Frost Texture; // 0xF30 (8)
	float Frost Colorization; // 0xF38 (4)
	float Frost Distortion Strength; // 0xF3C (4)
	float Frost Visible Area; // 0xF40 (4)
	struct Unknown ASCII Color Multiplier; // 0xF44 (16)
	char Neon : 0; // 0xF54 (1)
	struct Unknown mNeon; // 0xF58 (8)
	struct Unknown iNeon; // 0xF60 (8)
	struct Unknown Neon Color; // 0xF68 (16)
	float Neon Noise; // 0xF78 (4)
	float Neon Power; // 0xF7C (4)
	char Custom Depth Highlighter : 0; // 0xF80 (1)
	struct Unknown mCustomDepthHighlighter; // 0xF88 (8)
	struct Unknown iCustomDepthHighlighter; // 0xF90 (8)
	struct Unknown Custom Depth Highlighter Highlight Color; // 0xF98 (16)
	float Custom Depth Highlighter Highlight Opacity; // 0xFA8 (4)
	char Custom Depth Highlighter (Clip) : 0; // 0xFAC (1)
	struct Unknown mCustomDepthHighlighterClip; // 0xFB0 (8)
	struct Unknown iCustomDepthHighlighterClip; // 0xFB8 (8)
	struct Unknown Custom Depth Highlighter (C) Highlight Color; // 0xFC0 (16)
	float Custom Depth Highlighter (C) Highlight Opacity; // 0xFD0 (4)
	float Edge Detect Threshold; // 0xFD4 (4)
	float Scratches Noising; // 0xFD8 (4)
	char Enabled : 0; // 0xFDC (1)
	char Unbound : 0; // 0xFDD (1)
	struct TArray<Unknown> AllMaterials; // 0xFE0 (16)
	float Screen Drops Layer 3 Noise; // 0xFF0 (4)
	struct Unknown Screen Drops Diffuse Color; // 0xFF4 (16)
	float Screen Drops Splashes Amount; // 0x1004 (4)
	float Screen Drops Splashes Tiling; // 0x1008 (4)
	float Screen Drops Splashes Intensity; // 0x100C (4)
	float Screen Drops Bump; // 0x1010 (4)
	char 2D Transform : 0; // 0x1014 (1)
	struct Unknown m2DTransform; // 0x1018 (8)
	struct Unknown i2DTransform; // 0x1020 (8)
	char Kaleidescope : 0; // 0x1028 (1)
	struct Unknown mKaleidescope; // 0x1030 (8)
	struct Unknown iKaleidescope; // 0x1038 (8)
	char Letterboxing : 0; // 0x1040 (1)
	struct Unknown mLetterboxing; // 0x1048 (8)
	struct Unknown iLetterboxing; // 0x1050 (8)
	char Snow : 0; // 0x1058 (1)
	struct Unknown mSnow; // 0x1060 (8)
	struct Unknown iSnow; // 0x1068 (8)
	float 2D Transform Anchor Point (X); // 0x1070 (4)
	float 2D Transform Anchor Point (Y); // 0x1074 (4)
	float 2D Transform Rotate; // 0x1078 (4)
	float 2D Transform Pan (X); // 0x107C (4)
	float 2D Transform Pan (Y); // 0x1080 (4)
	float 2D Transform Scale (X); // 0x1084 (4)
	float 2D Transform Scale (Y); // 0x1088 (4)
	char 2D Transform Tiled : 0; // 0x108C (1)
	float Kaleidescope Scale; // 0x1090 (4)
	float Kaleidescope Factor A; // 0x1094 (4)
	float Kaleidescope Factor B; // 0x1098 (4)
	struct Unknown Letterboxing Texture; // 0x10A0 (8)
	float Letterboxing Size; // 0x10A8 (4)
	char Letterboxing Horizontal : 0; // 0x10AC (1)
	char Letterboxing Vertical : 0; // 0x10AD (1)
	float Snow Amount; // 0x10B0 (4)
	float Snow Distortion; // 0x10B4 (4)
	float Snow Size; // 0x10B8 (4)
	float Snow Speed (X); // 0x10BC (4)
	float Snow Speed (Y); // 0x10C0 (4)
	float Drawing Animation Speed; // 0x10C4 (4)
	float Distance Fog Edge Sharpness; // 0x10C8 (4)
	float Screen Drops Diffuse Intensity; // 0x10CC (4)
	char World Splash : 0; // 0x10D0 (1)
	struct Unknown mWorldSplash; // 0x10D8 (8)
	struct Unknown iWorldSplash; // 0x10E0 (8)
	float World Splash Distort; // 0x10E8 (4)
	float World Splash Smoothness; // 0x10EC (4)
	float World Splash Tiling; // 0x10F0 (4)
	struct Unknown World Splash Color Tint; // 0x10F4 (16)
	int32_t Blur Samples; // 0x1104 (4)
	struct Unknown Frost Color; // 0x1108 (16)
	float Comic PreMultiplier; // 0x1118 (4)
	float Comic Desaturation; // 0x111C (4)
	char World Glitch : 0; // 0x1120 (1)
	struct Unknown mWorldGlitch; // 0x1128 (8)
	struct Unknown iWorldGlitch; // 0x1130 (8)
	char World Glitch Animated : 0; // 0x1138 (1)
	float World Glitch Animation Speed; // 0x113C (4)
	float World Glitch Distance; // 0x1140 (4)
	float World Glitch Distance Sharpness; // 0x1144 (4)
	float World Glitch Phase; // 0x1148 (4)
	float World Glitch Power; // 0x114C (4)
	struct Unknown World Glitch Grid Position; // 0x1150 (12)
	struct Unknown World Glitch Grid Size; // 0x115C (12)
	char Digitize : 0; // 0x1168 (1)
	struct Unknown mDigitize; // 0x1170 (8)
	struct Unknown iDigitize; // 0x1178 (8)
	struct Unknown Digitize Cell Color; // 0x1180 (16)
	struct Unknown Digitize Cell Position; // 0x1190 (12)
	struct Unknown Digitize Cell Position Over Time; // 0x119C (12)
	float Digitize Distance; // 0x11A8 (4)
	float Digitize Distance Sharpness; // 0x11AC (4)
	float Digitize Cell Size; // 0x11B0 (4)
	float Digitize Cell Color Multiplier; // 0x11B4 (4)
	float Digitize Cell Distortion; // 0x11B8 (4)
	float Digitize Background Color Multiplier; // 0x11BC (4)
	char Alarm : 0; // 0x11C0 (1)
	struct Unknown mAlarm; // 0x11C8 (8)
	struct Unknown iAlarm; // 0x11D0 (8)
	struct Unknown Alarm Color; // 0x11D8 (16)
	float Alarm Speed; // 0x11E8 (4)
	char Sketch : 0; // 0x11EC (1)
	struct Unknown mSketch; // 0x11F0 (8)
	struct Unknown iSketch; // 0x11F8 (8)
	struct Unknown Sketch Color; // 0x1200 (16)
	struct Unknown Sketch Background Color; // 0x1210 (16)
	float Sketch Power; // 0x1220 (4)
	float Sketch Pattern Rotation; // 0x1224 (4)
	float Sketch Pattern Speed; // 0x1228 (4)
	struct Unknown Custom Depth Highlighter Outline Color; // 0x122C (16)
	float Custom Depth Highlighter Outline Opacity; // 0x123C (4)
	struct Unknown Custom Depth Highlighter (C) Outline Color; // 0x1240 (16)
	float Custom Depth Highlighter (C) Outline Opacity; // 0x1250 (4)
	char Wired : 0; // 0x1254 (1)
	struct Unknown iWired; // 0x1258 (8)
	struct Unknown mWired; // 0x1260 (8)
	struct Unknown Wired Color; // 0x1268 (16)
	float Wired Power; // 0x1278 (4)
	struct Unknown Mosaic - Advanced; // 0x1280 (56)
	struct Unknown Drug - Advanced; // 0x12B8 (56)
	struct Unknown Alcohol - Advanced; // 0x12F0 (56)
	struct Unknown Pixel Dissolve - Advanced; // 0x1328 (56)
	struct Unknown Channel Clamper - Advanced; // 0x1360 (56)
	struct Unknown Channel Swapper - Advanced; // 0x1398 (56)
	struct Unknown Bleach Bypass - Advanced; // 0x13D0 (56)
	struct Unknown Blur - Advanced; // 0x1408 (56)
	float ASCII PreMultiplier; // 0x1440 (4)
	struct Unknown ASCII - Advanced; // 0x1448 (56)
	struct Unknown Colorize - Advanced; // 0x1480 (56)
	struct Unknown Edge Detect - Advanced; // 0x14B8 (56)
	struct Unknown Emboss - Advanced; // 0x14F0 (56)
	struct Unknown Hard Emboss - Advanced; // 0x1528 (56)
	float Glitch Grid Distortion Power; // 0x1560 (4)
	float Glitch Grid Distortion Size; // 0x1564 (4)
	float Glitch Grid Distortion Speed; // 0x1568 (4)
	struct Unknown Glitch - Advanced; // 0x1570 (56)
	char Monitor Effects Tiled : 0; // 0x15A8 (1)
	struct Unknown Monitor Effects - Advanced; // 0x15B0 (56)
	struct Unknown Hue Panner - Advanced; // 0x15E8 (56)
	struct Unknown Monochrome - Advanced; // 0x1620 (56)
	struct Unknown Radial Blur Center; // 0x1658 (8)
	struct Unknown Radial Blur Sample Offset; // 0x1660 (8)
	struct Unknown Radial Blur - Advanced; // 0x1668 (56)
	struct Unknown Scratches - Advanced; // 0x16A0 (56)
	struct Unknown Screen Waves - Advanced; // 0x16D8 (56)
	struct Unknown Distance Fog - Advanced; // 0x1710 (56)
	struct Unknown Screen Drops - Advanced; // 0x1748 (56)
	struct Unknown Invert - Advanced; // 0x1780 (56)
	struct Unknown Iridescent - Advanced; // 0x17B8 (56)
	struct Unknown Kuwahara - Advanced; // 0x17F0 (56)
	struct Unknown Pulse - Advanced; // 0x1828 (56)
	struct Unknown Squares - Advanced; // 0x1860 (56)
	struct Unknown Tiles - Advanced; // 0x1898 (56)
	struct Unknown TV Noise - Advanced; // 0x18D0 (56)
	struct Unknown Circles - Advanced; // 0x1908 (56)
	struct Unknown Sonar - Advanced; // 0x1940 (56)
	struct Unknown Distance Distortion - Advanced; // 0x1978 (56)
	struct Unknown Drawing - Advanced; // 0x19B0 (56)
	struct Unknown Magic Transitions - Advanced; // 0x19E8 (56)
	struct Unknown Screen Damage - Advanced; // 0x1A20 (56)
	struct Unknown Screen Decals - Advanced; // 0x1A58 (56)
	struct Unknown Sharpen - Advanced; // 0x1A90 (56)
	struct Unknown Toon Shading - Advanced; // 0x1AC8 (56)
	struct Unknown Anamorphic Lens Flares - Advanced; // 0x1B00 (56)
	struct Unknown Frost - Advanced; // 0x1B38 (56)
	struct Unknown Neon - Advanced; // 0x1B70 (56)
	struct Unknown Custom Depth Highlighter - Advanced; // 0x1BA8 (48)
	struct Unknown Custom Depth Highlighter (Clip) - Advanced; // 0x1BD8 (48)
	struct Unknown 2D Transform Background Color; // 0x1C08 (16)
	struct Unknown 2D Transform - Advanced; // 0x1C18 (56)
	struct Unknown Kaleidescope - Advanced; // 0x1C50 (56)
	struct Unknown Letterboxing - Advanced; // 0x1C88 (56)
	struct Unknown Snow - Advanced; // 0x1CC0 (56)
	struct Unknown World Splash - Advanced; // 0x1CF8 (56)
	struct Unknown World Glitch - Advanced; // 0x1D30 (56)
	struct Unknown Digitize - Advanced; // 0x1D68 (56)
	struct Unknown Alarm - Advanced; // 0x1DA0 (56)
	struct Unknown Sketch - Advanced; // 0x1DD8 (56)
	struct Unknown Wired - Advanced; // 0x1E10 (56)
	float Comic Pattern Intensity; // 0x1E48 (4)
	int32_t Comic Pattern Line Count; // 0x1E4C (4)
	float Comic Pattern Rotation; // 0x1E50 (4)
	struct Unknown Comic - Advanced; // 0x1E58 (56)
	char Actor Featurette : 0; // 0x1E90 (1)
	struct Unknown mActorFeaturette; // 0x1E98 (8)
	struct Unknown iActorFeaturette; // 0x1EA0 (8)
	struct Unknown Actor Featurette Background Multiplier; // 0x1EA8 (16)
	float Actor Featurette Background Desaturation; // 0x1EB8 (4)
	struct Unknown Actor Featurette Foreground Multiplier; // 0x1EBC (16)
	float Actor Featurette Foreground Saturation; // 0x1ECC (4)
	float Actor Featurette Blur Amount; // 0x1ED0 (4)
	int32_t Actor Featurette Blur Samples; // 0x1ED4 (4)
	int32_t Actor Featurette Stencil Mask; // 0x1ED8 (4)
	struct Unknown Actor Featurette - Advanced; // 0x1EE0 (48)
	char Infected : 0; // 0x1F10 (1)
	struct Unknown mInfected; // 0x1F18 (8)
	struct Unknown iInfected; // 0x1F20 (8)
	float Infected Distortion Amount; // 0x1F28 (4)
	float Infected Smoothness; // 0x1F2C (4)
	float Infected Speed; // 0x1F30 (4)
	float Infected TransformZ; // 0x1F34 (4)
	struct Unknown Infected - Advanced; // 0x1F38 (56)
	char Colored AO : 0; // 0x1F70 (1)
	struct Unknown mColoredAO; // 0x1F78 (8)
	struct Unknown iColoredAO; // 0x1F80 (8)
	struct Unknown Colored AO Color; // 0x1F88 (16)
	float Colored AO Intensity; // 0x1F98 (4)
	struct Unknown Colored AO - Advanced; // 0x1FA0 (56)
	char Camera Shake : 0; // 0x1FD8 (1)
	struct Unknown mCameraShake; // 0x1FE0 (8)
	struct Unknown iCameraShake; // 0x1FE8 (8)
	float Camera Shake Power (X); // 0x1FF0 (4)
	float Camera Shake Power (Y); // 0x1FF4 (4)
	float Camera Shake Frequency; // 0x1FF8 (4)
	struct Unknown Camera Shake - Advanced; // 0x2000 (56)
	char Disco Ball : 0; // 0x2038 (1)
	struct Unknown mDiscoBall; // 0x2040 (8)
	struct Unknown iDiscoBall; // 0x2048 (8)
	struct Unknown Disco Ball WS Center; // 0x2050 (12)
	struct Unknown Disco Ball Color 1; // 0x205C (16)
	struct Unknown Disco Ball Color 2; // 0x206C (16)
	struct Unknown Disco Ball Block Scale; // 0x207C (12)
	float Disco Ball Block Distribution; // 0x2088 (4)
	float Disco Ball Rotation Speed; // 0x208C (4)
	float Disco Ball Manual Rotation; // 0x2090 (4)
	struct Unknown Disco Ball - Advanced; // 0x2098 (56)
	char Hazy Lights : 0; // 0x20D0 (1)
	struct Unknown mHazyLights; // 0x20D8 (8)
	struct Unknown iHazyLights; // 0x20E0 (8)
	struct Unknown Hazy Lights Move Speed; // 0x20E8 (8)
	struct Unknown Hazy Lights Position; // 0x20F0 (8)
	struct Unknown Hazy Lights - Advanced; // 0x20F8 (56)
	char Melted World : 0; // 0x2130 (1)
	struct Unknown mMeltedWorld; // 0x2138 (8)
	struct Unknown iMeltedWorld; // 0x2140 (8)
	struct Unknown Melted World Size; // 0x2148 (12)
	float Melted World Distance; // 0x2154 (4)
	float Melted World Power; // 0x2158 (4)
	float Melted World Sharpness; // 0x215C (4)
	struct Unknown Melted World - Advanced; // 0x2160 (56)
	char Selective Color : 0; // 0x2198 (1)
	struct Unknown mSelectiveColor; // 0x21A0 (8)
	struct Unknown iSelectiveColor; // 0x21A8 (8)
	struct Unknown Selective Color Mask Color; // 0x21B0 (16)
	float Selective Color Hue Tolerance; // 0x21C0 (4)
	float Selective Color Saturation Tolerance; // 0x21C4 (4)
	float Selective Color Value Tolerance; // 0x21C8 (4)
	struct Unknown Selective Color - Advanced; // 0x21D0 (56)
	char Screen Fire : 0; // 0x2208 (1)
	struct Unknown mScreenFire; // 0x2210 (8)
	struct Unknown iScreenFire; // 0x2218 (8)
	struct Unknown Screen Fire Color; // 0x2220 (16)
	float Screen Fire Distortion Amount; // 0x2230 (4)
	float Screen Fire Mask Contrast; // 0x2234 (4)
	float Screen Fire Mask Scale; // 0x2238 (4)
	float Screen Fire Flame Tiling; // 0x223C (4)
	float Screen Fire Speed; // 0x2240 (4)
	struct Unknown Screen Fire - Advanced; // 0x2248 (56)
	char Haunted : 0; // 0x2280 (1)
	struct Unknown mHaunted; // 0x2288 (8)
	struct Unknown iHaunted; // 0x2290 (8)
	float Haunted Amount; // 0x2298 (4)
	float Haunted Mask Scale; // 0x229C (4)
	struct Unknown Haunted Texture; // 0x22A0 (8)
	float Haunted Texture Scale; // 0x22A8 (4)
	struct Unknown Haunted - Advanced; // 0x22B0 (56)
	char Grid Cell : 0; // 0x22E8 (1)
	struct Unknown mGridCell; // 0x22F0 (8)
	struct Unknown iGridCell; // 0x22F8 (8)
	char Grid Cell Animated : 0; // 0x2300 (1)
	float Grid Cell Animation Speed; // 0x2304 (4)
	struct Unknown Grid Cell Color; // 0x2308 (16)
	struct Unknown Grid Cell Void Color; // 0x2318 (16)
	float Grid Cell Tiling; // 0x2328 (4)
	float Grid Cell Transition Amount; // 0x232C (4)
	char Lens Distortion : 0; // 0x2330 (1)
	struct Unknown mLensDistortion; // 0x2338 (8)
	struct Unknown iLensDistortion; // 0x2340 (8)
	float Lens Distortion Optic Refinement; // 0x2348 (4)
	float Lens Distortion Optic Size; // 0x234C (4)
	float Lens Distortion Optic Position X; // 0x2350 (4)
	float Lens Distortion Optic Position Y; // 0x2354 (4)
	struct Unknown Lens Distortion Scope Texture; // 0x2358 (8)
	float Lens Distortion Scope Texture Scale X; // 0x2360 (4)
	float Lens Distortion Scope Texture Scale Y; // 0x2364 (4)
	struct Unknown Lens Distortion - Advanced; // 0x2368 (56)
	struct Unknown Grid Cell - Advanced; // 0x23A0 (56)
	char Zone : 0; // 0x23D8 (1)
	struct Unknown mZone; // 0x23E0 (8)
	struct Unknown iZone; // 0x23E8 (8)
	struct Unknown Zone Center; // 0x23F0 (16)
	float Zone Radius; // 0x2400 (4)
	float Zone Edge Hardness; // 0x2404 (4)
	struct Unknown Zone Edge Color; // 0x2408 (16)
	struct Unknown Zone Coverage Color; // 0x2418 (16)
	struct Unknown Zone - Advanced; // 0x2428 (56)
	char Pyramid : 0; // 0x2460 (1)
	struct Unknown mPyramid; // 0x2468 (8)
	struct Unknown iPyramid; // 0x2470 (8)
	char Pyramid Masked : 0; // 0x2478 (1)
	struct Unknown Pyramid Background Color; // 0x247C (16)
	float Pyramid Width; // 0x248C (4)
	float Pyramid Pan; // 0x2490 (4)
	float Pyramid Tile Amount; // 0x2494 (4)
	struct Unknown Pyramid - Advanced; // 0x2498 (56)
	char Mojo : 0; // 0x24D0 (1)
	struct Unknown mMojo; // 0x24D8 (8)
	struct Unknown iMojo; // 0x24E0 (8)
	char Mojo Animated : 0; // 0x24E8 (1)
	float Mojo Animation Speed; // 0x24EC (4)
	struct Unknown Mojo Mask; // 0x24F0 (8)
	struct Unknown Mojo Distortion Map; // 0x24F8 (8)
	float Mojo Distortion Amount; // 0x2500 (4)
	struct Unknown Mojo Color; // 0x2504 (16)
	float Mojo Intensity; // 0x2514 (4)
	float Mojo Phase; // 0x2518 (4)
	float Mojo Tolerance; // 0x251C (4)
	struct Unknown Mojo - Advanced; // 0x2520 (56)

	void Create Effect Material Instance(struct Unknown Material, struct Unknown& Instance); // Function Chameleon.Chameleon_C.Create Effect Material Instance(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Mojo Func(char IsEnabled); // Function Chameleon.Chameleon_C.Mojo Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Pyramid Func(char IsEnabled); // Function Chameleon.Chameleon_C.Pyramid Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Zone Func(char IsEnabled); // Function Chameleon.Chameleon_C.Zone Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Lens Func(char IsEnabled); // Function Chameleon.Chameleon_C.Lens Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Grid Cell Func(char IsEnabled); // Function Chameleon.Chameleon_C.Grid Cell Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Haunted Func(char IsEnabled); // Function Chameleon.Chameleon_C.Haunted Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Screen Fire Func(char IsEnabled); // Function Chameleon.Chameleon_C.Screen Fire Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Selective Color Func(char IsEnabled); // Function Chameleon.Chameleon_C.Selective Color Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Melted World Func(char IsEnabled); // Function Chameleon.Chameleon_C.Melted World Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Hazy Lights Func(char IsEnabled); // Function Chameleon.Chameleon_C.Hazy Lights Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Disco Ball Func(char IsEnabled); // Function Chameleon.Chameleon_C.Disco Ball Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Camera Shake Func(char IsEnabled); // Function Chameleon.Chameleon_C.Camera Shake Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Colored AO Func(char IsEnabled); // Function Chameleon.Chameleon_C.Colored AO Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Infected Func(char IsEnabled); // Function Chameleon.Chameleon_C.Infected Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Actor Featurette Func(char IsEnabled); // Function Chameleon.Chameleon_C.Actor Featurette Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Set Advanced Effect Features (No Custom Depth)(struct Unknown Features, struct Unknown Material, struct Unknown Dynamic Material Instance); // Function Chameleon.Chameleon_C.Set Advanced Effect Features (No Custom Depth)(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Set Advanced Effect Features(struct Unknown Features, struct Unknown Material, struct Unknown Dynamic Material Instance); // Function Chameleon.Chameleon_C.Set Advanced Effect Features(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Wired Func(char IsEnabled); // Function Chameleon.Chameleon_C.Wired Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Sketch Func(char IsEnabled); // Function Chameleon.Chameleon_C.Sketch Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Alarm Func(char IsEnabled); // Function Chameleon.Chameleon_C.Alarm Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Digitize Func(char IsEnabled); // Function Chameleon.Chameleon_C.Digitize Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void World Glitch Func(char IsEnabled); // Function Chameleon.Chameleon_C.World Glitch Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void World Splash Func(char IsEnabled); // Function Chameleon.Chameleon_C.World Splash Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Snow Func(char IsEnabled); // Function Chameleon.Chameleon_C.Snow Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Letterboxing Func(char IsEnabled); // Function Chameleon.Chameleon_C.Letterboxing Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Kaleidescope Func(char IsEnabled); // Function Chameleon.Chameleon_C.Kaleidescope Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void 2D Transform Func(char IsEnabled); // Function Chameleon.Chameleon_C.2D Transform Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void SetEffectPriority(int32_t Priority, struct Unknown Material); // Function Chameleon.Chameleon_C.SetEffectPriority(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ApplyChameleonSettings(); // Function Chameleon.Chameleon_C.ApplyChameleonSettings(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Custom Depth Highlighter (NC) Func(char IsEnabled); // Function Chameleon.Chameleon_C.Custom Depth Highlighter (NC) Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Custom Depth Highlighter Func(char IsEnabled); // Function Chameleon.Chameleon_C.Custom Depth Highlighter Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Neon Func(char IsEnabled); // Function Chameleon.Chameleon_C.Neon Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Frost Func(char IsEnabled); // Function Chameleon.Chameleon_C.Frost Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Anamorphic Lens Flares Func(char IsEnabled); // Function Chameleon.Chameleon_C.Anamorphic Lens Flares Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Toon Shading Func(char IsEnabled); // Function Chameleon.Chameleon_C.Toon Shading Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Sharpen Func(char IsEnabled); // Function Chameleon.Chameleon_C.Sharpen Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Screen Decals Func(char IsEnabled); // Function Chameleon.Chameleon_C.Screen Decals Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Screen Damage Func(char IsEnabled); // Function Chameleon.Chameleon_C.Screen Damage Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Magic Transitions Func(char IsEnabled); // Function Chameleon.Chameleon_C.Magic Transitions Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Drawing Func(char IsEnabled); // Function Chameleon.Chameleon_C.Drawing Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Distance Distortion Func(char Condition); // Function Chameleon.Chameleon_C.Distance Distortion Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Sonar Func(char Condition); // Function Chameleon.Chameleon_C.Sonar Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Circles Func(char Condition); // Function Chameleon.Chameleon_C.Circles Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void LOOK Func(char Condition); // Function Chameleon.Chameleon_C.LOOK Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void TV Noise Func(char& IsEnabled); // Function Chameleon.Chameleon_C.TV Noise Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Tiles Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Tiles Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Squares Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Squares Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Pulse Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Pulse Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Kuwahara Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Kuwahara Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Iridescent Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Iridescent Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Invert Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Invert Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Hard Emboss Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Hard Emboss Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Emboss Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Emboss Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Edge Detect Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Edge Detect Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ASCII Func(char& IsEnabled); // Function Chameleon.Chameleon_C.ASCII Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Bleach Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Bleach Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Scratches Func(char IsEnabled); // Function Chameleon.Chameleon_C.Scratches Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Distance Fog Func(char IsEnabled); // Function Chameleon.Chameleon_C.Distance Fog Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Screen Waves Func(char IsEnabled); // Function Chameleon.Chameleon_C.Screen Waves Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Radial Blur Func(char IsEnabled); // Function Chameleon.Chameleon_C.Radial Blur Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Monochrome Func(char IsEnabled); // Function Chameleon.Chameleon_C.Monochrome Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Hue Panner Func(char IsEnabled); // Function Chameleon.Chameleon_C.Hue Panner Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void MonitorFX Func(char IsEnabled); // Function Chameleon.Chameleon_C.MonitorFX Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Glitch Func(char IsEnabled); // Function Chameleon.Chameleon_C.Glitch Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Comic Func(char IsEnabled); // Function Chameleon.Chameleon_C.Comic Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Colorize Func(char Condition); // Function Chameleon.Chameleon_C.Colorize Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Blur Func(char IsEnabled); // Function Chameleon.Chameleon_C.Blur Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Pixel Dissolve Func(char IsEnabled); // Function Chameleon.Chameleon_C.Pixel Dissolve Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Drug Func(char IsEnabled); // Function Chameleon.Chameleon_C.Drug Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Alcohol Func(char IsEnabled); // Function Chameleon.Chameleon_C.Alcohol Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Mosaic Func(char IsEnabled); // Function Chameleon.Chameleon_C.Mosaic Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Screen Drops Func(char IsEnabled); // Function Chameleon.Chameleon_C.Screen Drops Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void InitChameleon(); // Function Chameleon.Chameleon_C.InitChameleon(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Channel Swapper Func(char IsEnabled); // Function Chameleon.Chameleon_C.Channel Swapper Func(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void Channel Clamper Func(char& IsEnabled); // Function Chameleon.Chameleon_C.Channel Clamper Func(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void UserConstructionScript(); // Function Chameleon.Chameleon_C.UserConstructionScript(Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ReceiveActorBeginOverlap(struct Unknown OtherActor); // Function Chameleon.Chameleon_C.ReceiveActorBeginOverlap(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ReceiveTick(float DeltaSeconds); // Function Chameleon.Chameleon_C.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_Chameleon(int32_t EntryPoint); // Function Chameleon.Chameleon_C.ExecuteUbergraph_Chameleon(Final|UbergraphFunction) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
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

