// Enum Paper2D.EFlipbookCollisionMode
enum class EFlipbookCollisionMode : uint8 {
	EFlipbookCollisionMode = 0,
	EFlipbookCollisionMode = 1,
	EFlipbookCollisionMode = 2,
	EFlipbookCollisionMode = 3
};

// Enum Paper2D.EPaperSpriteAtlasPadding
enum class EPaperSpriteAtlasPadding : uint8 {
	EPaperSpriteAtlasPadding = 0,
	EPaperSpriteAtlasPadding = 1,
	EPaperSpriteAtlasPadding = 2
};

// Enum Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8 {
	ETileMapProjectionMode = 0,
	ETileMapProjectionMode = 1,
	ETileMapProjectionMode = 2,
	ETileMapProjectionMode = 3,
	ETileMapProjectionMode = 4
};

// Enum Paper2D.ESpritePivotMode
enum class ESpritePivotMode : uint8 {
	ESpritePivotMode = 0,
	ESpritePivotMode = 1,
	ESpritePivotMode = 2,
	ESpritePivotMode = 3,
	ESpritePivotMode = 4,
	ESpritePivotMode = 5,
	ESpritePivotMode = 6,
	ESpritePivotMode = 7,
	ESpritePivotMode = 8,
	ESpritePivotMode = 9,
	ESpritePivotMode = 10
};

// Enum Paper2D.ESpritePolygonMode
enum class ESpritePolygonMode : uint8 {
	ESpritePolygonMode = 0,
	ESpritePolygonMode = 1,
	ESpritePolygonMode = 2,
	ESpritePolygonMode = 3,
	ESpritePolygonMode = 4,
	ESpritePolygonMode = 5
};

// Enum Paper2D.ESpriteShapeType
enum class ESpriteShapeType : uint8 {
	ESpriteShapeType = 0,
	ESpriteShapeType = 1,
	ESpriteShapeType = 2,
	ESpriteShapeType = 3
};

// Enum Paper2D.ESpriteCollisionMode
enum class ESpriteCollisionMode : uint8 {
	ESpriteCollisionMode = 0,
	ESpriteCollisionMode = 1,
	ESpriteCollisionMode = 2,
	ESpriteCollisionMode = 3
};

// Class Paper2D.MaterialExpressionSpriteTextureSampler
struct UMaterialExpressionSpriteTextureSampler : UMaterialExpressionTextureSampleParameter2D {
	char bSampleAdditionalTextures; //  0xf0 Size(1)
	int32_t AdditionalSlotIndex; //  0xf4 Size(4)
	struct FText SlotDisplayName; //  0xf8 Size(18)
};

// Class Paper2D.PaperCharacter
struct APaperCharacter : ACharacter {
	Unknown Sprite; //  0x5d8 Size(8)
};

// Class Paper2D.PaperFlipbook
struct UPaperFlipbook : Object {
	float FramesPerSecond; //  0x28 Size(4)
	Unknown KeyFrames; //  0x30 Size(10)
	Unknown DefaultMaterial; //  0x40 Size(8)
	Unknown CollisionSource; //  0x48 Size(1)

	char IsValidKeyFrameIndex(int32_t Index); // Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x168ce30>
};

// Class Paper2D.PaperFlipbookActor
struct APaperFlipbookActor : UActor {
	Unknown RenderComponent; //  0x310 Size(8)
};

// Class Paper2D.PaperFlipbookComponent
struct UPaperFlipbookComponent : UMeshComponent {
	Unknown SourceFlipbook; //  0x4e8 Size(8)
	Unknown Material; //  0x4f0 Size(8)
	float PlayRate; //  0x4f8 Size(4)
	char bLooping; //  0x4fc Size(1)
	char bReversePlayback; //  0x4fc Size(1)
	char bPlaying; //  0x4fc Size(1)
	float AccumulatedTime; //  0x500 Size(4)
	int32_t CachedFrameIndex; //  0x504 Size(4)
	Unknown SpriteColor; //  0x508 Size(10)
	Unknown CachedBodySetup; //  0x518 Size(8)
	struct FMulticastInlineDelegate OnFinishedPlaying; //  0x520 Size(10)

	void Stop(); // Function Paper2D.PaperFlipbookComponent.Stop(Final|Native|Public|BlueprintCallable) // <Game+0x168d540>
};

// Class Paper2D.PaperGroupedSpriteActor
struct APaperGroupedSpriteActor : UActor {
	Unknown RenderComponent; //  0x310 Size(8)
};

// Class Paper2D.PaperGroupedSpriteComponent
struct UPaperGroupedSpriteComponent : UMeshComponent {
	Unknown InstanceMaterials; //  0x4e8 Size(10)
	Unknown PerInstanceSpriteData; //  0x4f8 Size(10)

	char UpdateInstanceTransform(int32_t InstanceIndex, Unknown& NewInstanceTransform, char bWorldSpace, char bMarkRenderStateDirty, char bTeleport); // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform(Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <Game+0x168d670>
};

// Class Paper2D.PaperRuntimeSettings
struct UPaperRuntimeSettings : Object {
	char bEnableSpriteAtlasGroups; //  0x28 Size(1)
	char bEnableTerrainSplineEditing; //  0x29 Size(1)
	char bResizeSpriteDataToMatchTextures; //  0x2a Size(1)
};

// Class Paper2D.PaperSprite
struct UPaperSprite : Object {
	Unknown AdditionalSourceTextures; //  0x38 Size(10)
	Unknown BakedSourceUV; //  0x48 Size(8)
	Unknown BakedSourceDimension; //  0x50 Size(8)
	Unknown BakedSourceTexture; //  0x58 Size(8)
	Unknown DefaultMaterial; //  0x60 Size(8)
	Unknown AlternateMaterial; //  0x68 Size(8)
	Unknown Sockets; //  0x70 Size(10)
	Unknown SpriteCollisionDomain; //  0x80 Size(1)
	float PixelsPerUnrealUnit; //  0x84 Size(4)
	Unknown BodySetup; //  0x88 Size(8)
	int32_t AlternateMaterialSplitIndex; //  0x90 Size(4)
	Unknown BakedRenderData; //  0x98 Size(10)
};

// Class Paper2D.PaperSpriteActor
struct APaperSpriteActor : UActor {
	Unknown RenderComponent; //  0x310 Size(8)
};

// Class Paper2D.PaperSpriteComponent
struct UPaperSpriteComponent : UMeshComponent {
	Unknown SourceSprite; //  0x4e8 Size(8)
	Unknown MaterialOverride; //  0x4f0 Size(8)
	Unknown SpriteColor; //  0x4f8 Size(10)

	void SetSpriteColor(Unknown NewColor); // Function Paper2D.PaperSpriteComponent.SetSpriteColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game+0x1690a00>
};

// Class Paper2D.PaperTerrainActor
struct APaperTerrainActor : UActor {
	Unknown DummyRoot; //  0x310 Size(8)
	Unknown SplineComponent; //  0x318 Size(8)
	Unknown RenderComponent; //  0x320 Size(8)
};

// Class Paper2D.PaperTerrainComponent
struct UPaperTerrainComponent : UPrimitiveComponent {
	Unknown TerrainMaterial; //  0x4b8 Size(8)
	char bClosedSpline; //  0x4c0 Size(1)
	char bFilledSpline; //  0x4c1 Size(1)
	Unknown AssociatedSpline; //  0x4c8 Size(8)
	int32_t RandomSeed; //  0x4d0 Size(4)
	float SegmentOverlapAmount; //  0x4d4 Size(4)
	Unknown TerrainColor; //  0x4d8 Size(10)
	int32_t ReparamStepsPerSegment; //  0x4e8 Size(4)
	Unknown SpriteCollisionDomain; //  0x4ec Size(1)
	float CollisionThickness; //  0x4f0 Size(4)
	Unknown CachedBodySetup; //  0x4f8 Size(8)

	void SetTerrainColor(Unknown NewColor); // Function Paper2D.PaperTerrainComponent.SetTerrainColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game+0x1690a80>
};

// Class Paper2D.PaperTerrainMaterial
struct UPaperTerrainMaterial : UDataAsset {
	Unknown Rules; //  0x30 Size(10)
	Unknown InteriorFill; //  0x40 Size(8)
};

// Class Paper2D.PaperTileLayer
struct UPaperTileLayer : Object {
	struct FText LayerName; //  0x28 Size(18)
	int32_t LayerWidth; //  0x40 Size(4)
	int32_t LayerHeight; //  0x44 Size(4)
	char bHiddenInGame; //  0x48 Size(1)
	char bLayerCollides; //  0x48 Size(1)
	char bOverrideCollisionThickness; //  0x48 Size(1)
	char bOverrideCollisionOffset; //  0x48 Size(1)
	float CollisionThicknessOverride; //  0x4c Size(4)
	float CollisionOffsetOverride; //  0x50 Size(4)
	Unknown LayerColor; //  0x54 Size(10)
	int32_t AllocatedWidth; //  0x64 Size(4)
	int32_t AllocatedHeight; //  0x68 Size(4)
	Unknown AllocatedCells; //  0x70 Size(10)
	Unknown TileSet; //  0x80 Size(8)
	Unknown AllocatedGrid; //  0x88 Size(10)
};

// Class Paper2D.PaperTileMap
struct UPaperTileMap : Object {
	int32_t MapWidth; //  0x28 Size(4)
	int32_t MapHeight; //  0x2c Size(4)
	int32_t TileWidth; //  0x30 Size(4)
	int32_t TileHeight; //  0x34 Size(4)
	float PixelsPerUnrealUnit; //  0x38 Size(4)
	float SeparationPerTileX; //  0x3c Size(4)
	float SeparationPerTileY; //  0x40 Size(4)
	float SeparationPerLayer; //  0x44 Size(4)
	Unknown SelectedTileSet; //  0x48 Size(28)
	Unknown Material; //  0x70 Size(8)
	Unknown TileLayers; //  0x78 Size(10)
	float CollisionThickness; //  0x88 Size(4)
	Unknown SpriteCollisionDomain; //  0x8c Size(1)
	Unknown ProjectionMode; //  0x8d Size(1)
	int32_t HexSideLength; //  0x90 Size(4)
	Unknown BodySetup; //  0x98 Size(8)
	int32_t LayerNameIndex; //  0xa0 Size(4)
};

// Class Paper2D.PaperTileMapActor
struct APaperTileMapActor : UActor {
	Unknown RenderComponent; //  0x310 Size(8)
};

// Class Paper2D.PaperTileMapComponent
struct UPaperTileMapComponent : UMeshComponent {
	int32_t MapWidth; //  0x4e8 Size(4)
	int32_t MapHeight; //  0x4ec Size(4)
	int32_t TileWidth; //  0x4f0 Size(4)
	int32_t TileHeight; //  0x4f4 Size(4)
	Unknown DefaultLayerTileSet; //  0x4f8 Size(8)
	Unknown Material; //  0x500 Size(8)
	Unknown TileLayers; //  0x508 Size(10)
	Unknown TileMapColor; //  0x518 Size(10)
	int32_t UseSingleLayerIndex; //  0x528 Size(4)
	char bUseSingleLayer; //  0x52c Size(1)
	Unknown TileMap; //  0x530 Size(8)

	void SetTileMapColor(Unknown NewColor); // Function Paper2D.PaperTileMapComponent.SetTileMapColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game+0x1690c60>
};

// Class Paper2D.PaperTileSet
struct UPaperTileSet : Object {
	Unknown TileSize; //  0x28 Size(8)
	Unknown TileSheet; //  0x30 Size(8)
	Unknown AdditionalSourceTextures; //  0x38 Size(10)
	Unknown BorderMargin; //  0x48 Size(10)
	Unknown PerTileSpacing; //  0x58 Size(8)
	Unknown DrawingOffset; //  0x60 Size(8)
	int32_t WidthInTiles; //  0x68 Size(4)
	int32_t HeightInTiles; //  0x6c Size(4)
	int32_t AllocatedWidth; //  0x70 Size(4)
	int32_t AllocatedHeight; //  0x74 Size(4)
	Unknown PerTileData; //  0x78 Size(10)
	Unknown Terrains; //  0x88 Size(10)
	int32_t TileWidth; //  0x98 Size(4)
	int32_t TileHeight; //  0x9c Size(4)
	int32_t Margin; //  0xa0 Size(4)
	int32_t Spacing; //  0xa4 Size(4)
};

