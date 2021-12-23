// Enum Paper2D.EFlipbookCollisionMode
enum class EFlipbookCollisionMode : uint8 {
	EFlipbookCollisionMode = 0
	EFlipbookCollisionMode = 1
	EFlipbookCollisionMode = 2
	EFlipbookCollisionMode = 3
};

// Enum Paper2D.EPaperSpriteAtlasPadding
enum class EPaperSpriteAtlasPadding : uint8 {
	EPaperSpriteAtlasPadding = 0
	EPaperSpriteAtlasPadding = 1
	EPaperSpriteAtlasPadding = 2
};

// Enum Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8 {
	ETileMapProjectionMode = 0
	ETileMapProjectionMode = 1
	ETileMapProjectionMode = 2
	ETileMapProjectionMode = 3
	ETileMapProjectionMode = 4
};

// Enum Paper2D.ESpritePivotMode
enum class ESpritePivotMode : uint8 {
	ESpritePivotMode = 0
	ESpritePivotMode = 1
	ESpritePivotMode = 2
	ESpritePivotMode = 3
	ESpritePivotMode = 4
	ESpritePivotMode = 5
	ESpritePivotMode = 6
	ESpritePivotMode = 7
	ESpritePivotMode = 8
	ESpritePivotMode = 9
	ESpritePivotMode = 10
};

// Enum Paper2D.ESpritePolygonMode
enum class ESpritePolygonMode : uint8 {
	ESpritePolygonMode = 0
	ESpritePolygonMode = 1
	ESpritePolygonMode = 2
	ESpritePolygonMode = 3
	ESpritePolygonMode = 4
	ESpritePolygonMode = 5
};

// Enum Paper2D.ESpriteShapeType
enum class ESpriteShapeType : uint8 {
	ESpriteShapeType = 0
	ESpriteShapeType = 1
	ESpriteShapeType = 2
	ESpriteShapeType = 3
};

// Enum Paper2D.ESpriteCollisionMode
enum class ESpriteCollisionMode : uint8 {
	ESpriteCollisionMode = 0
	ESpriteCollisionMode = 1
	ESpriteCollisionMode = 2
	ESpriteCollisionMode = 3
};

// Class Paper2D.MaterialExpressionSpriteTextureSampler
class UMaterialExpressionSpriteTextureSampler : UMaterialExpressionTextureSampleParameter2D {
	char bSampleAdditionalTextures : 0; // 0xF0 (1)
	int32_t AdditionalSlotIndex; // 0xF4 (4)
	struct FText SlotDisplayName; // 0xF8 (24)
};

// Class Paper2D.PaperCharacter
class APaperCharacter : ACharacter {
	struct Unknown Sprite; // 0x5D8 (8)
};

// Class Paper2D.PaperFlipbook
class UPaperFlipbook : Object {
	float FramesPerSecond; // 0x28 (4)
	struct TArray<Unknown> KeyFrames; // 0x30 (16)
	struct Unknown DefaultMaterial; // 0x40 (8)
	char CollisionSource; // 0x48 (1)

	char IsValidKeyFrameIndex(int32_t Index); // Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D970>
	float GetTotalDuration(); // Function Paper2D.PaperFlipbook.GetTotalDuration(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D8B0>
	struct Unknown GetSpriteAtTime(float Time, char bClampToEnds); // Function Paper2D.PaperFlipbook.GetSpriteAtTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D7E0>
	struct Unknown GetSpriteAtFrame(int32_t FrameIndex); // Function Paper2D.PaperFlipbook.GetSpriteAtFrame(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D750>
	int32_t GetNumKeyFrames(); // Function Paper2D.PaperFlipbook.GetNumKeyFrames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D6A0>
	int32_t GetNumFrames(); // Function Paper2D.PaperFlipbook.GetNumFrames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D670>
	int32_t GetKeyFrameIndexAtTime(float Time, char bClampToEnds); // Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D5A0>
};

// Class Paper2D.PaperFlipbookActor
class APaperFlipbookActor : UActor {
	struct Unknown RenderComponent; // 0x310 (8)
};

// Class Paper2D.PaperFlipbookComponent
class UPaperFlipbookComponent : UMeshComponent {
	struct Unknown SourceFlipbook; // 0x4E8 (8)
	struct Unknown Material; // 0x4F0 (8)
	float PlayRate; // 0x4F8 (4)
	char bLooping : 0; // 0x4FC (1)
	char bReversePlayback : 0; // 0x4FC (1)
	char bPlaying : 0; // 0x4FC (1)
	float AccumulatedTime; // 0x500 (4)
	int32_t CachedFrameIndex; // 0x504 (4)
	struct Unknown SpriteColor; // 0x508 (16)
	struct Unknown CachedBodySetup; // 0x518 (8)
	struct FMulticastInlineDelegate OnFinishedPlaying; // 0x520 (16)

	void Stop(); // Function Paper2D.PaperFlipbookComponent.Stop(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168E080>
	void SetSpriteColor(struct Unknown NewColor); // Function Paper2D.PaperFlipbookComponent.SetSpriteColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168DF70>
	void SetPlayRate(float NewRate); // Function Paper2D.PaperFlipbookComponent.SetPlayRate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168DD60>
	void SetPlaybackPositionInFrames(int32_t NewFramePosition, char bFireEvents); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168DEB0>
	void SetPlaybackPosition(float NewPosition, char bFireEvents); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168DDE0>
	void SetNewTime(float NewTime); // Function Paper2D.PaperFlipbookComponent.SetNewTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168DCE0>
	void SetLooping(char bNewLooping); // Function Paper2D.PaperFlipbookComponent.SetLooping(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168DC50>
	char SetFlipbook(struct Unknown NewFlipbook); // Function Paper2D.PaperFlipbookComponent.SetFlipbook(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168DBB0>
	void ReverseFromEnd(); // Function Paper2D.PaperFlipbookComponent.ReverseFromEnd(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168DB90>
	void Reverse(); // Function Paper2D.PaperFlipbookComponent.Reverse(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168DB70>
	void PlayFromStart(); // Function Paper2D.PaperFlipbookComponent.PlayFromStart(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168DAB0>
	void Play(); // Function Paper2D.PaperFlipbookComponent.Play(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168DA90>
	void OnRep_SourceFlipbook(struct Unknown OldFlipbook); // Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook(Final|Native|Protected) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168DA10>
	char IsReversing(); // Function Paper2D.PaperFlipbookComponent.IsReversing(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D940>
	char IsPlaying(); // Function Paper2D.PaperFlipbookComponent.IsPlaying(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D910>
	char IsLooping(); // Function Paper2D.PaperFlipbookComponent.IsLooping(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D8E0>
	float GetPlayRate(); // Function Paper2D.PaperFlipbookComponent.GetPlayRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D6C0>
	int32_t GetPlaybackPositionInFrames(); // Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D720>
	float GetPlaybackPosition(); // Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D6F0>
	int32_t GetFlipbookLengthInFrames(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D3E0>
	float GetFlipbookLength(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookLength(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D3B0>
	float GetFlipbookFramerate(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D380>
	struct Unknown GetFlipbook(); // Function Paper2D.PaperFlipbookComponent.GetFlipbook(Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D350>
};

// Class Paper2D.PaperGroupedSpriteActor
class APaperGroupedSpriteActor : UActor {
	struct Unknown RenderComponent; // 0x310 (8)
};

// Class Paper2D.PaperGroupedSpriteComponent
class UPaperGroupedSpriteComponent : UMeshComponent {
	struct TArray<Unknown> InstanceMaterials; // 0x4E8 (16)
	struct TArray<Unknown> PerInstanceSpriteData; // 0x4F8 (16)

	char UpdateInstanceTransform(int32_t InstanceIndex, struct Unknown& NewInstanceTransform, char bWorldSpace, char bMarkRenderStateDirty, char bTeleport); // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform(Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168E1B0>
	char UpdateInstanceColor(int32_t InstanceIndex, struct Unknown NewInstanceColor, char bMarkRenderStateDirty); // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168E0A0>
	void SortInstancesAlongAxis(struct Unknown WorldSpaceSortAxis); // Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168DFF0>
	char RemoveInstance(int32_t InstanceIndex); // Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168DAD0>
	char GetInstanceTransform(int32_t InstanceIndex, struct Unknown& OutInstanceTransform, char bWorldSpace); // Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D440>
	int32_t GetInstanceCount(); // Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D410>
	void ClearInstances(); // Function Paper2D.PaperGroupedSpriteComponent.ClearInstances(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D330>
	int32_t AddInstance(struct Unknown& Transform, struct Unknown Sprite, char bWorldSpace, struct Unknown Color); // Function Paper2D.PaperGroupedSpriteComponent.AddInstance(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D170>
};

// Class Paper2D.PaperRuntimeSettings
class UPaperRuntimeSettings : Object {
	char bEnableSpriteAtlasGroups : 0; // 0x28 (1)
	char bEnableTerrainSplineEditing : 0; // 0x29 (1)
	char bResizeSpriteDataToMatchTextures : 0; // 0x2A (1)
};

// Class Paper2D.PaperSprite
class UPaperSprite : Object {
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
class APaperSpriteActor : UActor {
	struct Unknown RenderComponent; // 0x310 (8)
};

// Class Paper2D.PaperSpriteComponent
class UPaperSpriteComponent : UMeshComponent {
	struct Unknown SourceSprite; // 0x4E8 (8)
	struct Unknown MaterialOverride; // 0x4F0 (8)
	struct Unknown SpriteColor; // 0x4F8 (16)

	void SetSpriteColor(struct Unknown NewColor); // Function Paper2D.PaperSpriteComponent.SetSpriteColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1691580>
	char SetSprite(struct Unknown NewSprite); // Function Paper2D.PaperSpriteComponent.SetSprite(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168DBB0>
	struct Unknown GetSprite(); // Function Paper2D.PaperSpriteComponent.GetSprite(Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D350>
};

// Class Paper2D.PaperTerrainActor
class APaperTerrainActor : UActor {
	struct Unknown DummyRoot; // 0x310 (8)
	struct Unknown SplineComponent; // 0x318 (8)
	struct Unknown RenderComponent; // 0x320 (8)
};

// Class Paper2D.PaperTerrainComponent
class UPaperTerrainComponent : UPrimitiveComponent {
	struct Unknown TerrainMaterial; // 0x4B8 (8)
	char bClosedSpline : 0; // 0x4C0 (1)
	char bFilledSpline : 0; // 0x4C1 (1)
	struct Unknown AssociatedSpline; // 0x4C8 (8)
	int32_t RandomSeed; // 0x4D0 (4)
	float SegmentOverlapAmount; // 0x4D4 (4)
	struct Unknown TerrainColor; // 0x4D8 (16)
	int32_t ReparamStepsPerSegment; // 0x4E8 (4)
	char SpriteCollisionDomain; // 0x4EC (1)
	float CollisionThickness; // 0x4F0 (4)
	struct Unknown CachedBodySetup; // 0x4F8 (8)

	void SetTerrainColor(struct Unknown NewColor); // Function Paper2D.PaperTerrainComponent.SetTerrainColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1691600>
};

// Class Paper2D.PaperTerrainMaterial
class UPaperTerrainMaterial : UDataAsset {
	struct TArray<Unknown> Rules; // 0x30 (16)
	struct Unknown InteriorFill; // 0x40 (8)
};

// Class Paper2D.PaperTileLayer
class UPaperTileLayer : Object {
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
class UPaperTileMap : Object {
	int32_t MapWidth; // 0x28 (4)
	int32_t MapHeight; // 0x2C (4)
	int32_t TileWidth; // 0x30 (4)
	int32_t TileHeight; // 0x34 (4)
	float PixelsPerUnrealUnit; // 0x38 (4)
	float SeparationPerTileX; // 0x3C (4)
	float SeparationPerTileY; // 0x40 (4)
	float SeparationPerLayer; // 0x44 (4)
	struct TSoftObjectPtr<Unknown> SelectedTileSet; // 0x48 (40)
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
class APaperTileMapActor : UActor {
	struct Unknown RenderComponent; // 0x310 (8)
};

// Class Paper2D.PaperTileMapComponent
class UPaperTileMapComponent : UMeshComponent {
	int32_t MapWidth; // 0x4E8 (4)
	int32_t MapHeight; // 0x4EC (4)
	int32_t TileWidth; // 0x4F0 (4)
	int32_t TileHeight; // 0x4F4 (4)
	struct Unknown DefaultLayerTileSet; // 0x4F8 (8)
	struct Unknown Material; // 0x500 (8)
	struct TArray<Unknown> TileLayers; // 0x508 (16)
	struct Unknown TileMapColor; // 0x518 (16)
	int32_t UseSingleLayerIndex; // 0x528 (4)
	char bUseSingleLayer : 0; // 0x52C (1)
	struct Unknown TileMap; // 0x530 (8)

	void SetTileMapColor(struct Unknown NewColor); // Function Paper2D.PaperTileMapComponent.SetTileMapColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16917E0>
	char SetTileMap(struct Unknown NewTileMap); // Function Paper2D.PaperTileMapComponent.SetTileMap(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168DBB0>
	void SetTile(int32_t X, int32_t Y, int32_t Layer, struct Unknown NewValue); // Function Paper2D.PaperTileMapComponent.SetTile(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1691680>
	void SetLayerColor(struct Unknown NewColor, int32_t Layer); // Function Paper2D.PaperTileMapComponent.SetLayerColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16914B0>
	void SetLayerCollision(int32_t Layer, char bHasCollision, char bOverrideThickness, float CustomThickness, char bOverrideOffset, float CustomOffset, char bRebuildCollision); // Function Paper2D.PaperTileMapComponent.SetLayerCollision(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1691290>
	void SetDefaultCollisionThickness(float Thickness, char bRebuildCollision); // Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16911C0>
	void ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles); // Function Paper2D.PaperTileMapComponent.ResizeMap(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1691100>
	void RebuildCollision(); // Function Paper2D.PaperTileMapComponent.RebuildCollision(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16910E0>
	char OwnsTileMap(); // Function Paper2D.PaperTileMapComponent.OwnsTileMap(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16910B0>
	void MakeTileMapEditable(); // Function Paper2D.PaperTileMapComponent.MakeTileMapEditable(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1691090>
	void GetTilePolygon(int32_t TileX, int32_t TileY, struct TArray<Unknown>& Points, int32_t LayerIndex, char bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTilePolygon(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1690D30>
	struct Unknown GetTileMapColor(); // Function Paper2D.PaperTileMapComponent.GetTileMapColor(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1690CF0>
	struct Unknown GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, char bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTileCornerPosition(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1690B90>
	struct Unknown GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, char bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTileCenterPosition(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1690A30>
	struct Unknown GetTile(int32_t X, int32_t Y, int32_t Layer); // Function Paper2D.PaperTileMapComponent.GetTile(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1690920>
	void GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers); // Function Paper2D.PaperTileMapComponent.GetMapSize(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16907E0>
	struct Unknown GetLayerColor(int32_t Layer); // Function Paper2D.PaperTileMapComponent.GetLayerColor(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1690740>
	void CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, char bCreateLayer); // Function Paper2D.PaperTileMapComponent.CreateNewTileMap(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1690590>
	struct Unknown AddNewLayer(); // Function Paper2D.PaperTileMapComponent.AddNewLayer(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1690560>
};

// Class Paper2D.PaperTileSet
class UPaperTileSet : Object {
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
	struct TSoftObjectPtr<Unknown> SpriteRef; // 0x0 (40)
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

