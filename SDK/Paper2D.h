// Enum Paper2D.EFlipbookCollisionMode
enum class EFlipbookCollisionMode : uint8_t {
	NoCollision = 0,
	FirstFrameCollision = 1,
	EachFrameCollision = 2,
	EFlipbookCollisionMode_MAX = 3,
};

// Enum Paper2D.EPaperSpriteAtlasPadding
enum class EPaperSpriteAtlasPadding : uint8_t {
	DilateBorder = 0,
	PadWithZero = 1,
	EPaperSpriteAtlasPadding_MAX = 2,
};

// Enum Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8_t {
	Orthogonal = 0,
	IsometricDiamond = 1,
	IsometricStaggered = 2,
	HexagonalStaggered = 3,
	ETileMapProjectionMode_MAX = 4,
};

// Enum Paper2D.ESpritePivotMode
enum class ESpritePivotMode : uint8_t {
	Top_Left = 0,
	Top_Center = 1,
	Top_Right = 2,
	Center_Left = 3,
	Center_Center = 4,
	Center_Right = 5,
	Bottom_Left = 6,
	Bottom_Center = 7,
	Bottom_Right = 8,
	Custom = 9,
	ESpritePivotMode_MAX = 10,
};

// Enum Paper2D.ESpritePolygonMode
enum class ESpritePolygonMode : uint8_t {
	SourceBoundingBox = 0,
	TightBoundingBox = 1,
	ShrinkWrapped = 2,
	FullyCustom = 3,
	Diced = 4,
	ESpritePolygonMode_MAX = 5,
};

// Enum Paper2D.ESpriteShapeType
enum class ESpriteShapeType : uint8_t {
	Box = 0,
	Circle = 1,
	Polygon = 2,
	ESpriteShapeType_MAX = 3,
};

// Enum Paper2D.ESpriteCollisionMode
enum class ESpriteCollisionMode : uint8_t {
	None = 0,
	Use2DPhysics = 1,
	Use3DPhysics = 2,
	ESpriteCollisionMode_MAX = 3,
};

// Class Paper2D.MaterialExpressionSpriteTextureSampler
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D {

public:

	char bSampleAdditionalTextures : 0; // 0xF0 (1)
	int32_t AdditionalSlotIndex; // 0xF4 (4)
	struct FText SlotDisplayName; // 0xF8 (24)
};

// Class Paper2D.PaperCharacter
class APaperCharacter : public ACharacter {

public:

	struct Unknown Sprite; // 0x5D8 (8)
};

// Class Paper2D.PaperFlipbook
class UPaperFlipbook : public Object {

public:

	float FramesPerSecond; // 0x28 (4)
	struct TArray<Unknown> KeyFrames; // 0x30 (16)
	struct Unknown DefaultMaterial; // 0x40 (8)
	char CollisionSource; // 0x48 (1)

	char IsValidKeyFrameIndex(int32_t Index); // Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A3100>
	float GetTotalDuration(); // Function Paper2D.PaperFlipbook.GetTotalDuration(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A3040>
	struct Unknown GetSpriteAtTime(float Time, char bClampToEnds); // Function Paper2D.PaperFlipbook.GetSpriteAtTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A2F70>
	struct Unknown GetSpriteAtFrame(int32_t FrameIndex); // Function Paper2D.PaperFlipbook.GetSpriteAtFrame(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A2EE0>
	int32_t GetNumKeyFrames(); // Function Paper2D.PaperFlipbook.GetNumKeyFrames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A2E30>
	int32_t GetNumFrames(); // Function Paper2D.PaperFlipbook.GetNumFrames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A2E00>
	int32_t GetKeyFrameIndexAtTime(float Time, char bClampToEnds); // Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A2D30>
};

// Class Paper2D.PaperFlipbookActor
class APaperFlipbookActor : public UActor {

public:

	struct Unknown RenderComponent; // 0x318 (8)
};

// Class Paper2D.PaperFlipbookComponent
class UPaperFlipbookComponent : public UMeshComponent {

public:

	struct Unknown SourceFlipbook; // 0x4D8 (8)
	struct Unknown Material; // 0x4E0 (8)
	float PlayRate; // 0x4E8 (4)
	char bLooping : 0; // 0x4EC (1)
	char bReversePlayback : 0; // 0x4EC (1)
	char bPlaying : 0; // 0x4EC (1)
	float AccumulatedTime; // 0x4F0 (4)
	int32_t CachedFrameIndex; // 0x4F4 (4)
	struct Unknown SpriteColor; // 0x4F8 (16)
	struct Unknown CachedBodySetup; // 0x508 (8)
	struct FMulticastInlineDelegate OnFinishedPlaying; // 0x510 (16)

	void Stop(); // Function Paper2D.PaperFlipbookComponent.Stop(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A3810>
	void SetSpriteColor(struct Unknown NewColor); // Function Paper2D.PaperFlipbookComponent.SetSpriteColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game_BE.exe+0x16A3700>
	void SetPlayRate(float NewRate); // Function Paper2D.PaperFlipbookComponent.SetPlayRate(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A34F0>
	void SetPlaybackPositionInFrames(int32_t NewFramePosition, char bFireEvents); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A3640>
	void SetPlaybackPosition(float NewPosition, char bFireEvents); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A3570>
	void SetNewTime(float NewTime); // Function Paper2D.PaperFlipbookComponent.SetNewTime(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A3470>
	void SetLooping(char bNewLooping); // Function Paper2D.PaperFlipbookComponent.SetLooping(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A33E0>
	char SetFlipbook(struct Unknown NewFlipbook); // Function Paper2D.PaperFlipbookComponent.SetFlipbook(Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A3340>
	void ReverseFromEnd(); // Function Paper2D.PaperFlipbookComponent.ReverseFromEnd(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A3320>
	void Reverse(); // Function Paper2D.PaperFlipbookComponent.Reverse(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A3300>
	void PlayFromStart(); // Function Paper2D.PaperFlipbookComponent.PlayFromStart(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A3240>
	void Play(); // Function Paper2D.PaperFlipbookComponent.Play(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A3220>
	void OnRep_SourceFlipbook(struct Unknown OldFlipbook); // Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook(Final|Native|Protected) // <Game_BE.exe+0x16A31A0>
	char IsReversing(); // Function Paper2D.PaperFlipbookComponent.IsReversing(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A30D0>
	char IsPlaying(); // Function Paper2D.PaperFlipbookComponent.IsPlaying(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A30A0>
	char IsLooping(); // Function Paper2D.PaperFlipbookComponent.IsLooping(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A3070>
	float GetPlayRate(); // Function Paper2D.PaperFlipbookComponent.GetPlayRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A2E50>
	int32_t GetPlaybackPositionInFrames(); // Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A2EB0>
	float GetPlaybackPosition(); // Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A2E80>
	int32_t GetFlipbookLengthInFrames(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A2B70>
	float GetFlipbookLength(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookLength(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A2B40>
	float GetFlipbookFramerate(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A2B10>
	struct Unknown GetFlipbook(); // Function Paper2D.PaperFlipbookComponent.GetFlipbook(Native|Public|BlueprintCallable|BlueprintPure) // <Game_BE.exe+0x16A2AE0>
};

// Class Paper2D.PaperGroupedSpriteActor
class APaperGroupedSpriteActor : public UActor {

public:

	struct Unknown RenderComponent; // 0x318 (8)
};

// Class Paper2D.PaperGroupedSpriteComponent
class UPaperGroupedSpriteComponent : public UMeshComponent {

public:

	struct TArray<Unknown> InstanceMaterials; // 0x4D8 (16)
	struct TArray<Unknown> PerInstanceSpriteData; // 0x4E8 (16)

	char UpdateInstanceTransform(int32_t InstanceIndex, struct Unknown& NewInstanceTransform, char bWorldSpace, char bMarkRenderStateDirty, char bTeleport); // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform(Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <Game_BE.exe+0x16A3940>
	char UpdateInstanceColor(int32_t InstanceIndex, struct Unknown NewInstanceColor, char bMarkRenderStateDirty); // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor(Native|Public|HasDefaults|BlueprintCallable) // <Game_BE.exe+0x16A3830>
	void SortInstancesAlongAxis(struct Unknown WorldSpaceSortAxis); // Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game_BE.exe+0x16A3780>
	char RemoveInstance(int32_t InstanceIndex); // Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance(Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A3260>
	char GetInstanceTransform(int32_t InstanceIndex, struct Unknown& OutInstanceTransform, char bWorldSpace); // Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A2BD0>
	int32_t GetInstanceCount(); // Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A2BA0>
	void ClearInstances(); // Function Paper2D.PaperGroupedSpriteComponent.ClearInstances(Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A2AC0>
	int32_t AddInstance(struct Unknown& Transform, struct Unknown Sprite, char bWorldSpace, struct Unknown Color); // Function Paper2D.PaperGroupedSpriteComponent.AddInstance(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <Game_BE.exe+0x16A2900>
};

// Class Paper2D.PaperRuntimeSettings
class UPaperRuntimeSettings : public Object {

public:

	char bEnableSpriteAtlasGroups : 0; // 0x28 (1)
	char bEnableTerrainSplineEditing : 0; // 0x29 (1)
	char bResizeSpriteDataToMatchTextures : 0; // 0x2A (1)
};

// Class Paper2D.PaperSprite
class UPaperSprite : public Object {

public:

	struct TArray<Unknown> AdditionalSourceTextures; // 0x38 (16)
	struct Unknown BakedSourceUV; // 0x48 (8)
	struct Unknown BakedSourceDimension; // 0x50 (8)
	struct Unknown BakedSourceTexture; // 0x58 (8)
	struct Unknown DefaultMaterial; // 0x60 (8)
	struct Unknown AlternateMaterial; // 0x68 (8)
	struct TArray<Unknown> Sockets; // 0x70 (16)
	char SpriteCollisionDomain; // 0x80 (1)
	float PixelsPerUnrealUnit; // 0x84 (4)
	struct Unknown BodySetup; // 0x88 (8)
	int32_t AlternateMaterialSplitIndex; // 0x90 (4)
	struct TArray<Unknown> BakedRenderData; // 0x98 (16)
};

// Class Paper2D.PaperSpriteActor
class APaperSpriteActor : public UActor {

public:

	struct Unknown RenderComponent; // 0x318 (8)
};

// Class Paper2D.PaperSpriteComponent
class UPaperSpriteComponent : public UMeshComponent {

public:

	struct Unknown SourceSprite; // 0x4D8 (8)
	struct Unknown MaterialOverride; // 0x4E0 (8)
	struct Unknown SpriteColor; // 0x4E8 (16)

	void SetSpriteColor(struct Unknown NewColor); // Function Paper2D.PaperSpriteComponent.SetSpriteColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game_BE.exe+0x16A6CD0>
	char SetSprite(struct Unknown NewSprite); // Function Paper2D.PaperSpriteComponent.SetSprite(Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A3340>
	struct Unknown GetSprite(); // Function Paper2D.PaperSpriteComponent.GetSprite(Native|Public|BlueprintCallable|BlueprintPure) // <Game_BE.exe+0x16A2AE0>
};

// Class Paper2D.PaperTerrainActor
class APaperTerrainActor : public UActor {

public:

	struct Unknown DummyRoot; // 0x318 (8)
	struct Unknown SplineComponent; // 0x320 (8)
	struct Unknown RenderComponent; // 0x328 (8)
};

// Class Paper2D.PaperTerrainComponent
class UPaperTerrainComponent : public UPrimitiveComponent {

public:

	struct Unknown TerrainMaterial; // 0x4A8 (8)
	char bClosedSpline : 0; // 0x4B0 (1)
	char bFilledSpline : 0; // 0x4B1 (1)
	struct Unknown AssociatedSpline; // 0x4B8 (8)
	int32_t RandomSeed; // 0x4C0 (4)
	float SegmentOverlapAmount; // 0x4C4 (4)
	struct Unknown TerrainColor; // 0x4C8 (16)
	int32_t ReparamStepsPerSegment; // 0x4D8 (4)
	char SpriteCollisionDomain; // 0x4DC (1)
	float CollisionThickness; // 0x4E0 (4)
	struct Unknown CachedBodySetup; // 0x4E8 (8)

	void SetTerrainColor(struct Unknown NewColor); // Function Paper2D.PaperTerrainComponent.SetTerrainColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game_BE.exe+0x16A6D50>
};

// Class Paper2D.PaperTerrainMaterial
class UPaperTerrainMaterial : public UDataAsset {

public:

	struct TArray<Unknown> Rules; // 0x30 (16)
	struct Unknown InteriorFill; // 0x40 (8)
};

// Class Paper2D.PaperTileLayer
class UPaperTileLayer : public Object {

public:

	struct FText LayerName; // 0x28 (24)
	int32_t LayerWidth; // 0x40 (4)
	int32_t LayerHeight; // 0x44 (4)
	char bHiddenInGame : 0; // 0x48 (1)
	char bLayerCollides : 0; // 0x48 (1)
	char bOverrideCollisionThickness : 0; // 0x48 (1)
	char bOverrideCollisionOffset : 0; // 0x48 (1)
	float CollisionThicknessOverride; // 0x4C (4)
	float CollisionOffsetOverride; // 0x50 (4)
	struct Unknown LayerColor; // 0x54 (16)
	int32_t AllocatedWidth; // 0x64 (4)
	int32_t AllocatedHeight; // 0x68 (4)
	struct TArray<Unknown> AllocatedCells; // 0x70 (16)
	struct Unknown TileSet; // 0x80 (8)
	struct TArray<Unknown> AllocatedGrid; // 0x88 (16)
};

// Class Paper2D.PaperTileMap
class UPaperTileMap : public Object {

public:

	int32_t MapWidth; // 0x28 (4)
	int32_t MapHeight; // 0x2C (4)
	int32_t TileWidth; // 0x30 (4)
	int32_t TileHeight; // 0x34 (4)
	float PixelsPerUnrealUnit; // 0x38 (4)
	float SeparationPerTileX; // 0x3C (4)
	float SeparationPerTileY; // 0x40 (4)
	float SeparationPerLayer; // 0x44 (4)
	struct Unknown SelectedTileSet; // 0x48 (40)
	struct Unknown Material; // 0x70 (8)
	struct TArray<Unknown> TileLayers; // 0x78 (16)
	float CollisionThickness; // 0x88 (4)
	char SpriteCollisionDomain; // 0x8C (1)
	char ProjectionMode; // 0x8D (1)
	int32_t HexSideLength; // 0x90 (4)
	struct Unknown BodySetup; // 0x98 (8)
	int32_t LayerNameIndex; // 0xA0 (4)
};

// Class Paper2D.PaperTileMapActor
class APaperTileMapActor : public UActor {

public:

	struct Unknown RenderComponent; // 0x318 (8)
};

// Class Paper2D.PaperTileMapComponent
class UPaperTileMapComponent : public UMeshComponent {

public:

	int32_t MapWidth; // 0x4D8 (4)
	int32_t MapHeight; // 0x4DC (4)
	int32_t TileWidth; // 0x4E0 (4)
	int32_t TileHeight; // 0x4E4 (4)
	struct Unknown DefaultLayerTileSet; // 0x4E8 (8)
	struct Unknown Material; // 0x4F0 (8)
	struct TArray<Unknown> TileLayers; // 0x4F8 (16)
	struct Unknown TileMapColor; // 0x508 (16)
	int32_t UseSingleLayerIndex; // 0x518 (4)
	char bUseSingleLayer : 0; // 0x51C (1)
	struct Unknown TileMap; // 0x520 (8)

	void SetTileMapColor(struct Unknown NewColor); // Function Paper2D.PaperTileMapComponent.SetTileMapColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game_BE.exe+0x16A6F30>
	char SetTileMap(struct Unknown NewTileMap); // Function Paper2D.PaperTileMapComponent.SetTileMap(Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A3340>
	void SetTile(int32_t X, int32_t Y, int32_t Layer, struct Unknown NewValue); // Function Paper2D.PaperTileMapComponent.SetTile(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A6DD0>
	void SetLayerColor(struct Unknown NewColor, int32_t Layer); // Function Paper2D.PaperTileMapComponent.SetLayerColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game_BE.exe+0x16A6C00>
	void SetLayerCollision(int32_t Layer, char bHasCollision, char bOverrideThickness, float CustomThickness, char bOverrideOffset, float CustomOffset, char bRebuildCollision); // Function Paper2D.PaperTileMapComponent.SetLayerCollision(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A69E0>
	void SetDefaultCollisionThickness(float Thickness, char bRebuildCollision); // Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A6910>
	void ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles); // Function Paper2D.PaperTileMapComponent.ResizeMap(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A6850>
	void RebuildCollision(); // Function Paper2D.PaperTileMapComponent.RebuildCollision(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A6830>
	char OwnsTileMap(); // Function Paper2D.PaperTileMapComponent.OwnsTileMap(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A6800>
	void MakeTileMapEditable(); // Function Paper2D.PaperTileMapComponent.MakeTileMapEditable(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A67E0>
	void GetTilePolygon(int32_t TileX, int32_t TileY, struct TArray<Unknown>& Points, int32_t LayerIndex, char bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTilePolygon(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A6480>
	struct Unknown GetTileMapColor(); // Function Paper2D.PaperTileMapComponent.GetTileMapColor(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A6440>
	struct Unknown GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, char bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTileCornerPosition(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A62E0>
	struct Unknown GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, char bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTileCenterPosition(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A6180>
	struct Unknown GetTile(int32_t X, int32_t Y, int32_t Layer); // Function Paper2D.PaperTileMapComponent.GetTile(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A6070>
	void GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers); // Function Paper2D.PaperTileMapComponent.GetMapSize(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game_BE.exe+0x16A5F30>
	struct Unknown GetLayerColor(int32_t Layer); // Function Paper2D.PaperTileMapComponent.GetLayerColor(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <Game_BE.exe+0x16A5E90>
	void CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, char bCreateLayer); // Function Paper2D.PaperTileMapComponent.CreateNewTileMap(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A5CE0>
	struct Unknown AddNewLayer(); // Function Paper2D.PaperTileMapComponent.AddNewLayer(Final|Native|Public|BlueprintCallable) // <Game_BE.exe+0x16A5CB0>
};

// Class Paper2D.PaperTileSet
class UPaperTileSet : public Object {

public:

	struct Unknown TileSize; // 0x28 (8)
	struct Unknown TileSheet; // 0x30 (8)
	struct TArray<Unknown> AdditionalSourceTextures; // 0x38 (16)
	struct Unknown BorderMargin; // 0x48 (16)
	struct Unknown PerTileSpacing; // 0x58 (8)
	struct Unknown DrawingOffset; // 0x60 (8)
	int32_t WidthInTiles; // 0x68 (4)
	int32_t HeightInTiles; // 0x6C (4)
	int32_t AllocatedWidth; // 0x70 (4)
	int32_t AllocatedHeight; // 0x74 (4)
	struct TArray<Unknown> PerTileData; // 0x78 (16)
	struct TArray<Unknown> Terrains; // 0x88 (16)
	int32_t TileWidth; // 0x98 (4)
	int32_t TileHeight; // 0x9C (4)
	int32_t Margin; // 0xA0 (4)
	int32_t Spacing; // 0xA4 (4)
};

// ScriptStruct Paper2D.IntMargin
struct FIntMargin {
	int32_t Left; // 0x0 (4)
	int32_t Top; // 0x4 (4)
	int32_t Right; // 0x8 (4)
	int32_t Bottom; // 0xC (4)
};

// ScriptStruct Paper2D.PaperFlipbookKeyFrame
struct FPaperFlipbookKeyFrame {
	struct Unknown Sprite; // 0x0 (8)
	int32_t FrameRun; // 0x8 (4)
};

// ScriptStruct Paper2D.SpriteInstanceData
struct FSpriteInstanceData {
	struct Unknown Transform; // 0x0 (64)
	struct Unknown SourceSprite; // 0x40 (8)
	struct Unknown VertexColor; // 0x48 (4)
	int32_t MaterialIndex; // 0x4C (4)
};

// ScriptStruct Paper2D.PaperSpriteSocket
struct FPaperSpriteSocket {
	struct Unknown LocalTransform; // 0x0 (48)
	struct FName SocketName; // 0x30 (8)
};

// ScriptStruct Paper2D.PaperSpriteAtlasSlot
struct FPaperSpriteAtlasSlot {
	struct Unknown SpriteRef; // 0x0 (40)
	int32_t AtlasIndex; // 0x28 (4)
	int32_t X; // 0x2C (4)
	int32_t Y; // 0x30 (4)
	int32_t Width; // 0x34 (4)
	int32_t Height; // 0x38 (4)
};

// ScriptStruct Paper2D.PaperTerrainMaterialRule
struct FPaperTerrainMaterialRule {
	struct Unknown StartCap; // 0x0 (8)
	struct TArray<Unknown> Body; // 0x8 (16)
	struct Unknown EndCap; // 0x18 (8)
	float MinimumAngle; // 0x20 (4)
	float MaximumAngle; // 0x24 (4)
	char bEnableCollision : 0; // 0x28 (1)
	float CollisionOffset; // 0x2C (4)
	int32_t DrawOrder; // 0x30 (4)
};

// ScriptStruct Paper2D.PaperTileInfo
struct FPaperTileInfo {
	struct Unknown TileSet; // 0x0 (8)
	int32_t PackedTileIndex; // 0x8 (4)
};

// ScriptStruct Paper2D.PaperTileSetTerrain
struct FPaperTileSetTerrain {
	struct FString TerrainName; // 0x0 (16)
	int32_t CenterTileIndex; // 0x10 (4)
};

// ScriptStruct Paper2D.PaperTileMetadata
struct FPaperTileMetadata {
	struct FName UserDataName; // 0x0 (8)
	struct Unknown CollisionData; // 0x8 (48)
	char TerrainMembership[0x4]; // 0x38 (4)
};

// ScriptStruct Paper2D.SpriteGeometryCollection
struct FSpriteGeometryCollection {
	struct TArray<Unknown> Shapes; // 0x0 (16)
	char GeometryType; // 0x10 (1)
	int32_t PixelsPerSubdivisionX; // 0x14 (4)
	int32_t PixelsPerSubdivisionY; // 0x18 (4)
	char bAvoidVertexMerging : 0; // 0x1C (1)
	float AlphaThreshold; // 0x20 (4)
	float DetailAmount; // 0x24 (4)
	float SimplifyEpsilon; // 0x28 (4)
};

// ScriptStruct Paper2D.SpriteGeometryShape
struct FSpriteGeometryShape {
	enum class Unknow ShapeType; // 0x0 (1)
	struct TArray<Unknown> Vertices; // 0x8 (16)
	struct Unknown BoxSize; // 0x18 (8)
	struct Unknown BoxPosition; // 0x20 (8)
	float Rotation; // 0x28 (4)
	char bNegativeWinding : 0; // 0x2C (1)
};

// ScriptStruct Paper2D.SpriteDrawCallRecord
struct FSpriteDrawCallRecord {
	struct Unknown Destination; // 0x0 (12)
	struct Unknown BaseTexture; // 0x10 (8)
	struct Unknown Color; // 0x48 (4)
};

// Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
inline char UPaperFlipbook::IsValidKeyFrameIndex(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex");

	struct IsValidKeyFrameIndex_Params {
		int32_t Index;
		char ReturnValue;

	}; IsValidKeyFrameIndex_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbook.GetTotalDuration
inline float UPaperFlipbook::GetTotalDuration() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetTotalDuration");

	struct GetTotalDuration_Params {
		
		float ReturnValue;

	}; GetTotalDuration_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbook.GetSpriteAtTime
inline struct Unknown UPaperFlipbook::GetSpriteAtTime(float Time, char bClampToEnds) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetSpriteAtTime");

	struct GetSpriteAtTime_Params {
		float Time;
		char bClampToEnds;
		struct Unknown ReturnValue;

	}; GetSpriteAtTime_Params Params;

	Params.Time = Time;
	Params.bClampToEnds = bClampToEnds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbook.GetSpriteAtFrame
inline struct Unknown UPaperFlipbook::GetSpriteAtFrame(int32_t FrameIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetSpriteAtFrame");

	struct GetSpriteAtFrame_Params {
		int32_t FrameIndex;
		struct Unknown ReturnValue;

	}; GetSpriteAtFrame_Params Params;

	Params.FrameIndex = FrameIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbook.GetNumKeyFrames
inline int32_t UPaperFlipbook::GetNumKeyFrames() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetNumKeyFrames");

	struct GetNumKeyFrames_Params {
		
		int32_t ReturnValue;

	}; GetNumKeyFrames_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbook.GetNumFrames
inline int32_t UPaperFlipbook::GetNumFrames() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetNumFrames");

	struct GetNumFrames_Params {
		
		int32_t ReturnValue;

	}; GetNumFrames_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
inline int32_t UPaperFlipbook::GetKeyFrameIndexAtTime(float Time, char bClampToEnds) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime");

	struct GetKeyFrameIndexAtTime_Params {
		float Time;
		char bClampToEnds;
		int32_t ReturnValue;

	}; GetKeyFrameIndexAtTime_Params Params;

	Params.Time = Time;
	Params.bClampToEnds = bClampToEnds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbookComponent.Stop
inline void UPaperFlipbookComponent::Stop() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Stop");

	struct Stop_Params {
		
	}; Stop_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.SetSpriteColor
inline void UPaperFlipbookComponent::SetSpriteColor(struct Unknown NewColor) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetSpriteColor");

	struct SetSpriteColor_Params {
		struct Unknown NewColor;
	}; SetSpriteColor_Params Params;

	Params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.SetPlayRate
inline void UPaperFlipbookComponent::SetPlayRate(float NewRate) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlayRate");

	struct SetPlayRate_Params {
		float NewRate;
	}; SetPlayRate_Params Params;

	Params.NewRate = NewRate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
inline void UPaperFlipbookComponent::SetPlaybackPositionInFrames(int32_t NewFramePosition, char bFireEvents) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames");

	struct SetPlaybackPositionInFrames_Params {
		int32_t NewFramePosition;
		char bFireEvents;
	}; SetPlaybackPositionInFrames_Params Params;

	Params.NewFramePosition = NewFramePosition;
	Params.bFireEvents = bFireEvents;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
inline void UPaperFlipbookComponent::SetPlaybackPosition(float NewPosition, char bFireEvents) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition");

	struct SetPlaybackPosition_Params {
		float NewPosition;
		char bFireEvents;
	}; SetPlaybackPosition_Params Params;

	Params.NewPosition = NewPosition;
	Params.bFireEvents = bFireEvents;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.SetNewTime
inline void UPaperFlipbookComponent::SetNewTime(float NewTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetNewTime");

	struct SetNewTime_Params {
		float NewTime;
	}; SetNewTime_Params Params;

	Params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.SetLooping
inline void UPaperFlipbookComponent::SetLooping(char bNewLooping) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetLooping");

	struct SetLooping_Params {
		char bNewLooping;
	}; SetLooping_Params Params;

	Params.bNewLooping = bNewLooping;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.SetFlipbook
inline char UPaperFlipbookComponent::SetFlipbook(struct Unknown NewFlipbook) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetFlipbook");

	struct SetFlipbook_Params {
		struct Unknown NewFlipbook;
		char ReturnValue;

	}; SetFlipbook_Params Params;

	Params.NewFlipbook = NewFlipbook;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbookComponent.ReverseFromEnd
inline void UPaperFlipbookComponent::ReverseFromEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.ReverseFromEnd");

	struct ReverseFromEnd_Params {
		
	}; ReverseFromEnd_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.Reverse
inline void UPaperFlipbookComponent::Reverse() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Reverse");

	struct Reverse_Params {
		
	}; Reverse_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.PlayFromStart
inline void UPaperFlipbookComponent::PlayFromStart() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.PlayFromStart");

	struct PlayFromStart_Params {
		
	}; PlayFromStart_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.Play
inline void UPaperFlipbookComponent::Play() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Play");

	struct Play_Params {
		
	}; Play_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
inline void UPaperFlipbookComponent::OnRep_SourceFlipbook(struct Unknown OldFlipbook) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook");

	struct OnRep_SourceFlipbook_Params {
		struct Unknown OldFlipbook;
	}; OnRep_SourceFlipbook_Params Params;

	Params.OldFlipbook = OldFlipbook;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.IsReversing
inline char UPaperFlipbookComponent::IsReversing() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsReversing");

	struct IsReversing_Params {
		
		char ReturnValue;

	}; IsReversing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbookComponent.IsPlaying
inline char UPaperFlipbookComponent::IsPlaying() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsPlaying");

	struct IsPlaying_Params {
		
		char ReturnValue;

	}; IsPlaying_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbookComponent.IsLooping
inline char UPaperFlipbookComponent::IsLooping() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsLooping");

	struct IsLooping_Params {
		
		char ReturnValue;

	}; IsLooping_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbookComponent.GetPlayRate
inline float UPaperFlipbookComponent::GetPlayRate() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlayRate");

	struct GetPlayRate_Params {
		
		float ReturnValue;

	}; GetPlayRate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
inline int32_t UPaperFlipbookComponent::GetPlaybackPositionInFrames() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames");

	struct GetPlaybackPositionInFrames_Params {
		
		int32_t ReturnValue;

	}; GetPlaybackPositionInFrames_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
inline float UPaperFlipbookComponent::GetPlaybackPosition() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition");

	struct GetPlaybackPosition_Params {
		
		float ReturnValue;

	}; GetPlaybackPosition_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
inline int32_t UPaperFlipbookComponent::GetFlipbookLengthInFrames() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames");

	struct GetFlipbookLengthInFrames_Params {
		
		int32_t ReturnValue;

	}; GetFlipbookLengthInFrames_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
inline float UPaperFlipbookComponent::GetFlipbookLength() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookLength");

	struct GetFlipbookLength_Params {
		
		float ReturnValue;

	}; GetFlipbookLength_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
inline float UPaperFlipbookComponent::GetFlipbookFramerate() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate");

	struct GetFlipbookFramerate_Params {
		
		float ReturnValue;

	}; GetFlipbookFramerate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbookComponent.GetFlipbook
inline struct Unknown UPaperFlipbookComponent::GetFlipbook() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbook");

	struct GetFlipbook_Params {
		
		struct Unknown ReturnValue;

	}; GetFlipbook_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
inline char UPaperGroupedSpriteComponent::UpdateInstanceTransform(int32_t InstanceIndex, struct Unknown& NewInstanceTransform, char bWorldSpace, char bMarkRenderStateDirty, char bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform");

	struct UpdateInstanceTransform_Params {
		int32_t InstanceIndex;
		struct Unknown& NewInstanceTransform;
		char bWorldSpace;
		char bMarkRenderStateDirty;
		char bTeleport;
		char ReturnValue;

	}; UpdateInstanceTransform_Params Params;

	Params.InstanceIndex = InstanceIndex;
	Params.bWorldSpace = bWorldSpace;
	Params.bMarkRenderStateDirty = bMarkRenderStateDirty;
	Params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewInstanceTransform = Params.NewInstanceTransform;


	return params.ReturnValue;
}

// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
inline char UPaperGroupedSpriteComponent::UpdateInstanceColor(int32_t InstanceIndex, struct Unknown NewInstanceColor, char bMarkRenderStateDirty) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor");

	struct UpdateInstanceColor_Params {
		int32_t InstanceIndex;
		struct Unknown NewInstanceColor;
		char bMarkRenderStateDirty;
		char ReturnValue;

	}; UpdateInstanceColor_Params Params;

	Params.InstanceIndex = InstanceIndex;
	Params.NewInstanceColor = NewInstanceColor;
	Params.bMarkRenderStateDirty = bMarkRenderStateDirty;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
inline void UPaperGroupedSpriteComponent::SortInstancesAlongAxis(struct Unknown WorldSpaceSortAxis) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis");

	struct SortInstancesAlongAxis_Params {
		struct Unknown WorldSpaceSortAxis;
	}; SortInstancesAlongAxis_Params Params;

	Params.WorldSpaceSortAxis = WorldSpaceSortAxis;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
inline char UPaperGroupedSpriteComponent::RemoveInstance(int32_t InstanceIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance");

	struct RemoveInstance_Params {
		int32_t InstanceIndex;
		char ReturnValue;

	}; RemoveInstance_Params Params;

	Params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
inline char UPaperGroupedSpriteComponent::GetInstanceTransform(int32_t InstanceIndex, struct Unknown& OutInstanceTransform, char bWorldSpace) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform");

	struct GetInstanceTransform_Params {
		int32_t InstanceIndex;
		struct Unknown& OutInstanceTransform;
		char bWorldSpace;
		char ReturnValue;

	}; GetInstanceTransform_Params Params;

	Params.InstanceIndex = InstanceIndex;
	Params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutInstanceTransform = Params.OutInstanceTransform;


	return params.ReturnValue;
}

// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
inline int32_t UPaperGroupedSpriteComponent::GetInstanceCount() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount");

	struct GetInstanceCount_Params {
		
		int32_t ReturnValue;

	}; GetInstanceCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperGroupedSpriteComponent.ClearInstances
inline void UPaperGroupedSpriteComponent::ClearInstances() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.ClearInstances");

	struct ClearInstances_Params {
		
	}; ClearInstances_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperGroupedSpriteComponent.AddInstance
inline int32_t UPaperGroupedSpriteComponent::AddInstance(struct Unknown& Transform, struct Unknown Sprite, char bWorldSpace, struct Unknown Color) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.AddInstance");

	struct AddInstance_Params {
		struct Unknown& Transform;
		struct Unknown Sprite;
		char bWorldSpace;
		struct Unknown Color;
		int32_t ReturnValue;

	}; AddInstance_Params Params;

	Params.Sprite = Sprite;
	Params.bWorldSpace = bWorldSpace;
	Params.Color = Color;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transform = Params.Transform;


	return params.ReturnValue;
}

// Function Paper2D.PaperSpriteComponent.SetSpriteColor
inline void UPaperSpriteComponent::SetSpriteColor(struct Unknown NewColor) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.SetSpriteColor");

	struct SetSpriteColor_Params {
		struct Unknown NewColor;
	}; SetSpriteColor_Params Params;

	Params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperSpriteComponent.SetSprite
inline char UPaperSpriteComponent::SetSprite(struct Unknown NewSprite) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.SetSprite");

	struct SetSprite_Params {
		struct Unknown NewSprite;
		char ReturnValue;

	}; SetSprite_Params Params;

	Params.NewSprite = NewSprite;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperSpriteComponent.GetSprite
inline struct Unknown UPaperSpriteComponent::GetSprite() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.GetSprite");

	struct GetSprite_Params {
		
		struct Unknown ReturnValue;

	}; GetSprite_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperTerrainComponent.SetTerrainColor
inline void UPaperTerrainComponent::SetTerrainColor(struct Unknown NewColor) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTerrainComponent.SetTerrainColor");

	struct SetTerrainColor_Params {
		struct Unknown NewColor;
	}; SetTerrainColor_Params Params;

	Params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperTileMapComponent.SetTileMapColor
inline void UPaperTileMapComponent::SetTileMapColor(struct Unknown NewColor) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTileMapColor");

	struct SetTileMapColor_Params {
		struct Unknown NewColor;
	}; SetTileMapColor_Params Params;

	Params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperTileMapComponent.SetTileMap
inline char UPaperTileMapComponent::SetTileMap(struct Unknown NewTileMap) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTileMap");

	struct SetTileMap_Params {
		struct Unknown NewTileMap;
		char ReturnValue;

	}; SetTileMap_Params Params;

	Params.NewTileMap = NewTileMap;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperTileMapComponent.SetTile
inline void UPaperTileMapComponent::SetTile(int32_t X, int32_t Y, int32_t Layer, struct Unknown NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTile");

	struct SetTile_Params {
		int32_t X;
		int32_t Y;
		int32_t Layer;
		struct Unknown NewValue;
	}; SetTile_Params Params;

	Params.X = X;
	Params.Y = Y;
	Params.Layer = Layer;
	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperTileMapComponent.SetLayerColor
inline void UPaperTileMapComponent::SetLayerColor(struct Unknown NewColor, int32_t Layer) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetLayerColor");

	struct SetLayerColor_Params {
		struct Unknown NewColor;
		int32_t Layer;
	}; SetLayerColor_Params Params;

	Params.NewColor = NewColor;
	Params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperTileMapComponent.SetLayerCollision
inline void UPaperTileMapComponent::SetLayerCollision(int32_t Layer, char bHasCollision, char bOverrideThickness, float CustomThickness, char bOverrideOffset, float CustomOffset, char bRebuildCollision) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetLayerCollision");

	struct SetLayerCollision_Params {
		int32_t Layer;
		char bHasCollision;
		char bOverrideThickness;
		float CustomThickness;
		char bOverrideOffset;
		float CustomOffset;
		char bRebuildCollision;
	}; SetLayerCollision_Params Params;

	Params.Layer = Layer;
	Params.bHasCollision = bHasCollision;
	Params.bOverrideThickness = bOverrideThickness;
	Params.CustomThickness = CustomThickness;
	Params.bOverrideOffset = bOverrideOffset;
	Params.CustomOffset = CustomOffset;
	Params.bRebuildCollision = bRebuildCollision;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
inline void UPaperTileMapComponent::SetDefaultCollisionThickness(float Thickness, char bRebuildCollision) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness");

	struct SetDefaultCollisionThickness_Params {
		float Thickness;
		char bRebuildCollision;
	}; SetDefaultCollisionThickness_Params Params;

	Params.Thickness = Thickness;
	Params.bRebuildCollision = bRebuildCollision;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperTileMapComponent.ResizeMap
inline void UPaperTileMapComponent::ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.ResizeMap");

	struct ResizeMap_Params {
		int32_t NewWidthInTiles;
		int32_t NewHeightInTiles;
	}; ResizeMap_Params Params;

	Params.NewWidthInTiles = NewWidthInTiles;
	Params.NewHeightInTiles = NewHeightInTiles;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperTileMapComponent.RebuildCollision
inline void UPaperTileMapComponent::RebuildCollision() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.RebuildCollision");

	struct RebuildCollision_Params {
		
	}; RebuildCollision_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperTileMapComponent.OwnsTileMap
inline char UPaperTileMapComponent::OwnsTileMap() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.OwnsTileMap");

	struct OwnsTileMap_Params {
		
		char ReturnValue;

	}; OwnsTileMap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperTileMapComponent.MakeTileMapEditable
inline void UPaperTileMapComponent::MakeTileMapEditable() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.MakeTileMapEditable");

	struct MakeTileMapEditable_Params {
		
	}; MakeTileMapEditable_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperTileMapComponent.GetTilePolygon
inline void UPaperTileMapComponent::GetTilePolygon(int32_t TileX, int32_t TileY, struct TArray<Unknown>& Points, int32_t LayerIndex, char bWorldSpace) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTilePolygon");

	struct GetTilePolygon_Params {
		int32_t TileX;
		int32_t TileY;
		struct TArray<Unknown>& Points;
		int32_t LayerIndex;
		char bWorldSpace;
	}; GetTilePolygon_Params Params;

	Params.TileX = TileX;
	Params.TileY = TileY;
	Params.LayerIndex = LayerIndex;
	Params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Points = Params.Points;

}

// Function Paper2D.PaperTileMapComponent.GetTileMapColor
inline struct Unknown UPaperTileMapComponent::GetTileMapColor() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileMapColor");

	struct GetTileMapColor_Params {
		
		struct Unknown ReturnValue;

	}; GetTileMapColor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
inline struct Unknown UPaperTileMapComponent::GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, char bWorldSpace) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileCornerPosition");

	struct GetTileCornerPosition_Params {
		int32_t TileX;
		int32_t TileY;
		int32_t LayerIndex;
		char bWorldSpace;
		struct Unknown ReturnValue;

	}; GetTileCornerPosition_Params Params;

	Params.TileX = TileX;
	Params.TileY = TileY;
	Params.LayerIndex = LayerIndex;
	Params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
inline struct Unknown UPaperTileMapComponent::GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, char bWorldSpace) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileCenterPosition");

	struct GetTileCenterPosition_Params {
		int32_t TileX;
		int32_t TileY;
		int32_t LayerIndex;
		char bWorldSpace;
		struct Unknown ReturnValue;

	}; GetTileCenterPosition_Params Params;

	Params.TileX = TileX;
	Params.TileY = TileY;
	Params.LayerIndex = LayerIndex;
	Params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperTileMapComponent.GetTile
inline struct Unknown UPaperTileMapComponent::GetTile(int32_t X, int32_t Y, int32_t Layer) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTile");

	struct GetTile_Params {
		int32_t X;
		int32_t Y;
		int32_t Layer;
		struct Unknown ReturnValue;

	}; GetTile_Params Params;

	Params.X = X;
	Params.Y = Y;
	Params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperTileMapComponent.GetMapSize
inline void UPaperTileMapComponent::GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetMapSize");

	struct GetMapSize_Params {
		int32_t& MapWidth;
		int32_t& MapHeight;
		int32_t& NumLayers;
	}; GetMapSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MapWidth = Params.MapWidth;
	MapHeight = Params.MapHeight;
	NumLayers = Params.NumLayers;

}

// Function Paper2D.PaperTileMapComponent.GetLayerColor
inline struct Unknown UPaperTileMapComponent::GetLayerColor(int32_t Layer) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetLayerColor");

	struct GetLayerColor_Params {
		int32_t Layer;
		struct Unknown ReturnValue;

	}; GetLayerColor_Params Params;

	Params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperTileMapComponent.CreateNewTileMap
inline void UPaperTileMapComponent::CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, char bCreateLayer) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.CreateNewTileMap");

	struct CreateNewTileMap_Params {
		int32_t MapWidth;
		int32_t MapHeight;
		int32_t TileWidth;
		int32_t TileHeight;
		float PixelsPerUnrealUnit;
		char bCreateLayer;
	}; CreateNewTileMap_Params Params;

	Params.MapWidth = MapWidth;
	Params.MapHeight = MapHeight;
	Params.TileWidth = TileWidth;
	Params.TileHeight = TileHeight;
	Params.PixelsPerUnrealUnit = PixelsPerUnrealUnit;
	Params.bCreateLayer = bCreateLayer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperTileMapComponent.AddNewLayer
inline struct Unknown UPaperTileMapComponent::AddNewLayer() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.AddNewLayer");

	struct AddNewLayer_Params {
		
		struct Unknown ReturnValue;

	}; AddNewLayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

