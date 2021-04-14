/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/PVImageDelegate.h>
#import <libobjc.A.dylib/PVStabilizationDelegate.h>
#import <libobjc.A.dylib/NSKeyedUnarchiverDelegate.h>

@protocol ProjectDelegate;
@class NSString, NSMutableDictionary, NSDate, NSUndoManager, NSMutableArray, FIFOCache, NSDictionary, NSArray, TitleDefinition, ProjectAssetManager, PVEffect;

@interface Project : NSObject <PVImageDelegate, PVStabilizationDelegate, NSKeyedUnarchiverDelegate> {

	NSString* m_path;
	NSMutableDictionary* m_project;
	BOOL m_dirty;
	BOOL m_modifiedSincePublish;
	BOOL m_readOnly;
	int m_isEditingCount;
	int m_duration;
	int m_durationForAllAssets;
	int m_editListDuration;
	NSString* m_identifier;
	NSDate* m_modDate;
	NSMutableDictionary* m_contentModesForOrientation;
	NSUndoManager* m_undoManager;
	NSMutableArray* m_projectChangeLogs;
	FIFOCache* m_kenBurnsImageCache;
	int m_suspendMusicValidate;
	int m_suspendUpdateAnchors;
	BOOL m_needsToUpdateAnchors;
	int m_projectID;
	int m_kenBurnsAcceptability;
	NSDictionary* m_editedRanges;
	BOOL m_validate;
	BOOL m_hasBeenModified;
	int m_currentTime;
	NSMutableArray* m_unusedBkgdAudioClips;
	NSMutableArray* m_deletedMediaFiles;
	CGSize m_currentSize;
	int m_exportHeight;
	BOOL m_missingKBSourceImage;
	NSString* m_displayName;
	int m_frameRate;
	FIFOCache* m_trailerShotCache;
	int m_suspendSave;
	BOOL _isMiro;
	BOOL _allowsSplits;
	BOOL _fadeSongForce;
	BOOL _isExportingPlist;
	NSDictionary* stabilizationDict;
	id<ProjectDelegate> _delegate;
	NSArray* _lastArchiveNameAndDate;
	TitleDefinition* _defaultTitle;
	NSMutableArray* _deletedMediaFiles;
	ProjectAssetManager* _assetManager;
	NSArray* _savedEditList;
	double _fadeToBlackStartTime;
	double _fadeToBlackDuration;
	CGSize _explicitOutputSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<ProjectDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * projectDictionary; 
@property (nonatomic,copy) NSString * path; 
@property (nonatomic,readonly) NSString * persistedStorageName; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSArray * lastArchiveNameAndDate;                     //@synthesize lastArchiveNameAndDate=_lastArchiveNameAndDate - In the implementation block
@property (nonatomic,readonly) NSString * assetsDirectory; 
@property (nonatomic,readonly) NSString * exportDirectory; 
@property (assign,nonatomic) BOOL modifiedSincePublish; 
@property (assign,nonatomic) BOOL readOnly; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * temporaryUniqueIdentifier; 
@property (nonatomic,readonly) int aspect; 
@property (nonatomic,readonly) int projectID; 
@property (nonatomic,readonly) NSString * projectVersion; 
@property (nonatomic,copy) NSDate * modificationDate; 
@property (nonatomic,readonly) NSUndoManager * undoManager; 
@property (nonatomic,retain) TitleDefinition * defaultTitle;                       //@synthesize defaultTitle=_defaultTitle - In the implementation block
@property (nonatomic,retain) NSString * themeID; 
@property (getter=isTrailer,nonatomic,readonly) BOOL trailer; 
@property (assign,nonatomic) BOOL isMiro;                                          //@synthesize isMiro=_isMiro - In the implementation block
@property (nonatomic,readonly) BOOL isSimpleProject; 
@property (assign,nonatomic) BOOL useThemeAudio; 
@property (assign,nonatomic) BOOL allowOriginalMusicForNoneTheme; 
@property (assign,nonatomic) BOOL fadeInFromBlack; 
@property (assign,nonatomic) BOOL fadeOutToBlack; 
@property (nonatomic,retain) NSString * audioTimePitchAlgorithm; 
@property (nonatomic,copy) NSString * defaultTransitionType; 
@property (assign,nonatomic) BOOL allowsSplits;                                    //@synthesize allowsSplits=_allowsSplits - In the implementation block
@property (assign,nonatomic) unsigned long long frameRateMode; 
@property (nonatomic,retain) PVEffect * filterEffect; 
@property (nonatomic,retain) NSString * filterEffectID; 
@property (nonatomic,readonly) unsigned filterSeed; 
@property (assign,nonatomic) BOOL hasBeenModified; 
@property (assign,nonatomic) int currentTime; 
@property (nonatomic,retain) NSMutableArray * deletedMediaFiles;                   //@synthesize deletedMediaFiles=_deletedMediaFiles - In the implementation block
@property (nonatomic,retain) ProjectAssetManager * assetManager;                   //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,retain) NSArray * savedEditList;                              //@synthesize savedEditList=_savedEditList - In the implementation block
@property (assign,nonatomic) double fadeToBlackStartTime;                          //@synthesize fadeToBlackStartTime=_fadeToBlackStartTime - In the implementation block
@property (assign,nonatomic) double fadeToBlackDuration;                           //@synthesize fadeToBlackDuration=_fadeToBlackDuration - In the implementation block
@property (assign,nonatomic) BOOL fadeSongForce;                                   //@synthesize fadeSongForce=_fadeSongForce - In the implementation block
@property (assign,nonatomic) BOOL isExportingPlist;                                //@synthesize isExportingPlist=_isExportingPlist - In the implementation block
@property (nonatomic,retain) NSDictionary * stabilizationDict; 
@property (nonatomic,readonly) double aspectHorizontal; 
@property (nonatomic,readonly) double aspectVertical; 
@property (nonatomic,readonly) double aspectSquare; 
@property (nonatomic,retain) NSMutableArray * editList; 
@property (nonatomic,retain) NSMutableArray * backgroundAudioClips; 
@property (nonatomic,retain) NSMutableArray * foregroundAudioClips; 
@property (nonatomic,retain) NSMutableArray * cutaways; 
@property (nonatomic,retain) NSMutableDictionary * trailerDict; 
@property (assign,nonatomic) CGSize explicitOutputSize;                            //@synthesize explicitOutputSize=_explicitOutputSize - In the implementation block
@property (assign,nonatomic) double aspectRatio; 
@property (nonatomic,readonly) BOOL playbackAt60fps; 
@property (nonatomic,readonly) BOOL exportAt60fps; 
@property (assign,nonatomic) int durationForAllAssets; 
+(CGSize)sizeForRenderIntent:(int)arg1 sourceSize:(CGSize)arg2 ;
+(void)setProjectClass:(Class)arg1 ;
+(id)defaultProjectImage;
+(void)findSharedMediaItems:(id)arg1 inProjectPlist:(id)arg2 addingToResultsMap:(id*)arg3 ;
+(void)replaceProjectsURL:(id)arg1 withURL:(id)arg2 inProjectPlist:(id)arg3 ;
+(id)firstClipDictInEditListOfProjectPlist:(id)arg1 ;
+(id)projectWithSingleMovieClip:(id)arg1 ;
+(BOOL)trailerIsSuitableForThisDevice:(id)arg1 ;
+(CGSize)sizeForMaxPixels:(double)arg1 sourceSize:(CGSize)arg2 ;
+(CGSize)exportImageSize:(CGSize)arg1 ;
+(CGSize)playBackImageSize:(CGSize)arg1 ;
+(CGSize)thumbImageSize:(CGSize)arg1 ;
+(id)projectFilePathFromProjectPath:(id)arg1 forWriting:(BOOL)arg2 ;
+(id)projectHolderPathFromProjectPath:(id)arg1 forWriting:(BOOL)arg2 ;
+(id)assetsDirectory:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(BOOL)isEmpty;
-(id)endEditing;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id<ProjectDelegate>)delegate;
-(void)setDelegate:(id<ProjectDelegate>)arg1 ;
-(NSString *)identifier;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(int)duration;
-(int)aspect;
-(NSDate *)modificationDate;
-(NSString *)displayName;
-(void)validate;
-(BOOL)saveToPath:(id)arg1 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)isEditing;
-(NSUndoManager *)undoManager;
-(BOOL)save;
-(BOOL)isDirty;
-(void)setDisplayName:(NSString *)arg1 ;
-(double)aspectRatio;
-(void)setAspectRatio:(double)arg1 ;
-(int)currentTime;
-(void)setCurrentTime:(int)arg1 ;
-(CGSize)naturalSize;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(BOOL)readOnly;
-(void)setModificationDate:(NSDate *)arg1 ;
-(double)durationInSeconds;
-(NSString *)audioTimePitchAlgorithm;
-(id)thumbnailImage;
-(id)clips;
-(BOOL)isImageValid:(id)arg1 renderingIntent:(int)arg2 size:(CGSize*)arg3 ;
-(CGImageRef)imageForURL:(id)arg1 renderingIntent:(int)arg2 ;
-(BOOL)didStabilize:(id)arg1 time:(SCD_Struct_TV3)arg2 frameData:(CVBufferRef)arg3 inputSize:(CGSize)arg4 cleanAperture:(CGRect)arg5 centeredCleanAperture:(CGRect)arg6 cleanApertureOriginZero:(CGRect)arg7 cropRect:(CGRect)arg8 homography:(SCD_Struct_Pr25)arg9 homographyMatrix4x4:(SCD_Struct_Pr26)arg10 userContext:(id)arg11 ;
-(id)timedStabilizationConfigForTime:(SCD_Struct_TV3)arg1 frameData:(CVBufferRef)arg2 userContext:(id)arg3 ;
-(void)endUndoGroup;
-(BOOL)isExporting;
-(void)setExplicitOutputSize:(CGSize)arg1 ;
-(CGSize)explicitOutputSize;
-(id)hasExportedFile:(id)arg1 ;
-(id)_keyForRenderingIntent:(int)arg1 ;
-(id)_detectedFacesInImage:(id)arg1 clip:(id)arg2 ;
-(NSMutableArray *)backgroundAudioClips;
-(NSMutableArray *)editList;
-(int)naturalFrameRate;
-(double)aspectHorizontal;
-(id)clipsForClipType:(int)arg1 ;
-(double)aspectVertical;
-(BOOL)fadeInFromBlack;
-(id)imageAtTime:(int)arg1 withSize:(CGSize)arg2 ;
-(void)didInitWithContentsOfFile;
-(id)videoPreviewImageOfSize:(CGSize)arg1 ;
-(BOOL)hasMissingAssets;
-(void)startEditing;
-(void)beginUndoGroup:(id)arg1 ;
-(void)captureContentsOfClip:(id)arg1 needsDisplay:(BOOL)arg2 ;
-(id)backgroundAudioClipsInUseAtTime:(int)arg1 ;
-(void)setFadeToBlackDuration:(double)arg1 ;
-(void)setFadeSongForce:(BOOL)arg1 ;
-(double)fadeToBlackDuration;
-(void)setFadeToBlackStartTime:(double)arg1 ;
-(double)fadeToBlackStartTime;
-(void)saveClipAssetToProject:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 excludedRenderingIntents:(id)arg3 ;
-(double)aspectSquare;
-(CGRect)adjustKBRect:(CGRect)arg1 toContainRect:(CGRect)arg2 withinImageSize:(CGSize)arg3 ;
-(unsigned long long)bytesNeededForExport:(id)arg1 ;
-(void)_enumerateMediaClipsUsingBlock:(/*^block*/id)arg1 ;
-(id)copyMediaClipsOmittingFirstClip:(BOOL)arg1 ;
-(id)mediaClipsInfoOmittingFirstClip:(BOOL)arg1 ;
-(void)markDirty;
-(void)setFilterEffect:(PVEffect *)arg1 ;
-(void)replaceClip:(id)arg1 withClip:(id)arg2 ;
-(void)removeClip:(id)arg1 releaseAnchor:(BOOL)arg2 ;
-(id)previousClipOfType:(int)arg1 beforeClip:(id)arg2 ;
-(id)clipBeforeClip:(id)arg1 ;
-(id)clipAfterClip:(id)arg1 ;
-(BOOL)exportAt60fps;
-(BOOL)playbackAt60fps;
-(BOOL)isMiro;
-(void)setEditList:(NSMutableArray *)arg1 ;
-(id)editListClipInUseAtTime:(int)arg1 ;
-(id)clipBeforeClip:(id)arg1 inClips:(id)arg2 ;
-(id)clipAfterClip:(id)arg1 inClips:(id)arg2 ;
-(void)setStabilizationDict:(NSDictionary *)arg1 ;
-(void)setUseThemeAudio:(BOOL)arg1 ;
-(void)setFadeInFromBlack:(BOOL)arg1 ;
-(void)setFadeOutToBlack:(BOOL)arg1 ;
-(void)setDefaultTransitionType:(NSString *)arg1 ;
-(void)setAllowsSplits:(BOOL)arg1 ;
-(void)setIsMiro:(BOOL)arg1 ;
-(void)appendVideoClip:(id)arg1 ;
-(int)editListDuration;
-(void)setDeletedMediaFiles:(NSMutableArray *)arg1 ;
-(void)setupUndo;
-(id)initWithValidState:(BOOL)arg1 ;
-(void)setLastArchiveNameAndDate:(NSArray *)arg1 ;
-(BOOL)useThemeAudio;
-(void)cleanupMalformedAudioPaths:(id)arg1 ;
-(void)convertPlistToCustomObjects:(id)arg1 ;
-(void)cleanupProjectDictionary:(id)arg1 ;
-(void)setProjectDictionary:(id)arg1 validate:(BOOL)arg2 ;
-(void)createSubDirectories;
-(void)checkForReadOnlyCookie;
-(void)updateModificationDate;
-(void)setModifiedSincePublish:(BOOL)arg1 ;
-(BOOL)usesOriginalNoneThemeMusic;
-(void)setAllowOriginalMusicForNoneTheme:(BOOL)arg1 ;
-(BOOL)isURL:(id)arg1 usedInList:(id)arg2 ;
-(void)cleanupUnusedMediaFiles;
-(void)setAssetManager:(ProjectAssetManager *)arg1 ;
-(NSString *)exportDirectory;
-(id)firstMovieClip;
-(id)usedTrackNames;
-(BOOL)allowOriginalMusicForNoneTheme;
-(NSString *)defaultTransitionType;
-(int)minimumClipDurationForValidation;
-(void)validateEditListTrack;
-(void)updateAnchors;
-(void)validateCutaways;
-(void)validateMusic;
-(void)validateForegroundAudioTracks;
-(void)validateBackgroundAudioTracks;
-(id)convertToPlist;
-(BOOL)use1080Pcontent:(BOOL)arg1 ;
-(BOOL)useHEVCcontent:(BOOL)arg1 ;
-(float)maxSourceFrameRate;
-(NSArray *)lastArchiveNameAndDate;
-(id)plistAsDataWithError:(id*)arg1 ;
-(void)setHasBeenModified:(BOOL)arg1 ;
-(void)trailerIsSavingToPath:(id)arg1 ;
-(NSString *)temporaryUniqueIdentifier;
-(BOOL)rename:(id)arg1 to:(id)arg2 withPath:(id)arg3 ;
-(void)updateTrailerMovieNameFieldsFromUnformattedString:(id)arg1 ;
-(id)saveAnchoredClipsInList:(id)arg1 ;
-(id)restoredAnchoredClips:(id)arg1 ;
-(void)setForegroundAudioClips:(NSMutableArray *)arg1 ;
-(void)setCutaways:(NSMutableArray *)arg1 ;
-(void)setBackgroundAudioClips:(NSMutableArray *)arg1 ;
-(int)movieOrKBDurationGoodFor60fps:(id)arg1 ;
-(int)clipDurationGoodFor60fps:(id)arg1 ;
-(BOOL)miroContainsSufficient60fpsContent;
-(BOOL)containsSufficient60fpsContent;
-(BOOL)has1080Content:(id)arg1 clipType:(int)arg2 onlyMovies:(BOOL)arg3 ;
-(BOOL)has2160PContent:(id)arg1 clipType:(int)arg2 onlyMovies:(BOOL)arg3 ;
-(BOOL)hasHEVCContent:(id)arg1 clipType:(int)arg2 onlyMovies:(BOOL)arg3 ;
-(void)sizeChanged;
-(int)minClipDurationForLeftEatDuration:(int)arg1 rightEatDuration:(int)arg2 totalDuration:(BOOL)arg3 ;
-(void)detachTransitions;
-(int)allowedTransitionDuration:(int)arg1 ;
-(void)reattachTransitions;
-(void)rebuildFingerprints:(BOOL)arg1 ;
-(void)deleteAllExportedFiles;
-(void)undoProjectChanges:(id)arg1 ;
-(void)noteClipsChangedInLog:(id)arg1 ;
-(int)startOffsetForEditListClip:(id)arg1 ;
-(long long)indexOfEditListClipAtTime:(int)arg1 ;
-(int)startOffsetForEditListIndex:(long long)arg1 ;
-(void)updateAnchorsForClip:(id)arg1 ;
-(id)anchoredSegmentsIgnoringClip:(id)arg1 clipType:(int)arg2 ;
-(void)endEditingOfTrailer;
-(id)addAutomaticTransitions;
-(unsigned)numberOfForegroundAudioTracks;
-(int)snapToGuideTimeWithinInEditListWithStartOrEndPointsWithin:(float)arg1 ofProjectTime:(int)arg2 ignoringClip:(id)arg3 ;
-(id)availableAnchoredRangesIgnoringClip:(id)arg1 clipType:(int)arg2 ;
-(NSRange)availableAnchoredRangeAtTime:(int)arg1 ignoringClip:(id)arg2 clipType:(int)arg3 ;
-(int)anchoredSlotAtTime:(int)arg1 duration:(int)arg2 inRange:(NSRange)arg3 ;
-(BOOL)isMovie:(id)arg1 usedInList:(id)arg2 ;
-(id)nonEditListClipsIn:(id)arg1 inUseAtTime:(int)arg2 ;
-(id)editListClipInUseAtTime:(int)arg1 timeFromPreviousEdit:(int*)arg2 ;
-(int)startOffsetForClip:(id)arg1 ;
-(id)keyframeTimesForEditListClips:(id)arg1 ;
-(id)keyframeTimesForClips:(id)arg1 ;
-(void)moveClipsInArray:(id)arg1 afterTime:(int)arg2 duration:(int)arg3 except:(id)arg4 ;
-(void)moveClipsInArray:(id)arg1 afterTime:(int)arg2 duration:(int)arg3 ;
-(id)audioClipsAnchoredToClip:(id)arg1 ;
-(id)cutawaysAnchoredToClip:(id)arg1 ;
-(void)removeAnchorForClip:(id)arg1 ;
-(BOOL)insertClip:(id)arg1 atTime:(int)arg2 ;
-(int)availableSpaceStartingAtTime:(int)arg1 ignoringClip:(id)arg2 clipType:(int)arg3 ;
-(BOOL)insertMovieClip:(id)arg1 afterClip:(id)arg2 ;
-(BOOL)moveClipsAfterTime:(int)arg1 duration:(int)arg2 ;
-(unsigned long long)clipIndexInArray:(id)arg1 atTime:(int)arg2 ;
-(BOOL)insertClip:(id)arg1 atTime:(int)arg2 adjustOtherClips:(BOOL)arg3 ;
-(BOOL)canMoveAudioToForegroundFromClip:(id)arg1 ;
-(void)deleteMediaFileAtURL:(id)arg1 ;
-(BOOL)allowsSplits;
-(void)audioOffsetBoundsForClip:(id)arg1 minStart:(int*)arg2 maxStart:(int*)arg3 minEnd:(int*)arg4 maxEnd:(int*)arg5 ;
-(id)localExportDirectory;
-(id)fileNameFromPreset:(id)arg1 ;
-(BOOL)hasKBOnly;
-(void)deleteExportedFile:(id)arg1 ;
-(id)trailerShotCacheDirectory;
-(id)thumbnailTrailerKeyForURL:(id)arg1 index:(int)arg2 time:(int)arg3 size:(CGSize)arg4 ;
-(void)assetTrailerShotCache;
-(void)updateClipsForCapriWithKonaProject:(id)arg1 ;
-(void)setFrameRateMode:(unsigned long long)arg1 ;
-(long long)compareModificationDates:(id)arg1 ;
-(BOOL)clipsOnlyHaveAudioCharacteristics;
-(NSMutableDictionary *)projectDictionary;
-(void)setProjectDictionary:(NSMutableDictionary *)arg1 ;
-(void)suspendMusicValidate;
-(void)resumeMusicValidate;
-(void)willBeginTrimmingClip:(id)arg1 ;
-(void)didFinishTrimmingClip;
-(int)numberOfNewsIntroTitlesUsed:(id)arg1 matchesClip:(BOOL*)arg2 ;
-(NSString *)projectVersion;
-(id)simpleEditInfo;
-(void)suspendSave;
-(BOOL)resumeSave;
-(void)flushMajorChanges;
-(id)firstClip;
-(id)lastClip;
-(id)nextClipOfType:(int)arg1 afterClip:(id)arg2 ;
-(BOOL)useClipWithRotation;
-(double)secondsFromProjectTime:(int)arg1 ;
-(double)durationSecondsFromFrameTime:(int)arg1 ;
-(int)minTotalDurationOfClip:(id)arg1 ;
-(int)maxAllowedDurationOfTransition:(id)arg1 simple:(int*)arg2 ;
-(void)suspendUpdateAnchors;
-(void)resumeUpdateAnchors;
-(void)updateAnchorsIfNeeded;
-(int)snapToGuideTimeWithin:(float)arg1 ofProjectTime:(int)arg2 ignoringClip:(id)arg3 forceSnap:(BOOL*)arg4 ;
-(int)timeForNearestEdgeOfClip:(id)arg1 projectTime:(int)arg2 ;
-(int)availableSpaceEndingAtTime:(int)arg1 ignoringClip:(id)arg2 clipType:(int)arg3 ;
-(int)nearestAnchoredSlotAtTime:(int)arg1 duration:(int)arg2 ignoringClip:(id)arg3 clipType:(int)arg4 ;
-(id)editedRangeList;
-(BOOL)isMovieUsed:(id)arg1 ;
-(id)clipsInUseAtTime:(int)arg1 ;
-(id)clipsOfType:(int)arg1 inUseAtTime:(int)arg2 ;
-(id)clipsOfType:(int)arg1 inUseFromTime:(int)arg2 toTime:(int)arg3 ;
-(int)convertClipStartTimeToProjectTime:(id)arg1 ;
-(id)editListClipInUseNearTime:(int)arg1 ;
-(id)foregroundAudioClipsInUseAtTime:(int)arg1 ;
-(id)clipBeforeTransitionClip:(id)arg1 ;
-(id)clipAfterTransitionClip:(id)arg1 ;
-(id)nonTransitionClipBeforeClip:(id)arg1 ;
-(BOOL)clip:(id)arg1 isInUseAtTime:(int)arg2 ;
-(id)keyframeTimes;
-(BOOL)canSplitClip:(id)arg1 atTime:(int)arg2 ;
-(id)splitClip:(id)arg1 atTime:(int)arg2 ;
-(id)moveTitleToBlack:(id)arg1 ;
-(BOOL)canDuplicateClip:(id)arg1 ;
-(id)duplicateClip:(id)arg1 ;
-(BOOL)canDetachAudioFromClip:(id)arg1 ;
-(id)detachMovieAudioFromClip:(id)arg1 ;
-(void)addForegroundAudioClips:(id)arg1 withAnchor:(id)arg2 ;
-(double)durationOfEditListClipInSeconds:(id)arg1 ;
-(void)audioRangeForClip:(id)arg1 start:(int*)arg2 end:(int*)arg3 ;
-(int)displayedDurationOfClip:(id)arg1 ;
-(void)setFilterEffectID:(NSString *)arg1 ;
-(NSString *)filterEffectID;
-(BOOL)hasAnyExportedFile;
-(id)exportPresetForATV;
-(id)exportPresetForPlugin;
-(id)thumbnailTrailerShotForURL:(id)arg1 index:(int)arg2 time:(int)arg3 size:(CGSize)arg4 ;
-(void)saveThumbnailTrailerShot:(id)arg1 forURL:(id)arg2 index:(int)arg3 time:(int)arg4 size:(CGSize)arg5 ;
-(void)flushThumbnailTrailerShot;
-(void)fixupShotThumbnailFileNameAfterImport;
-(BOOL)modifiedSincePublish;
-(int)projectID;
-(BOOL)hasBeenModified;
-(void)setDurationForAllAssets:(int)arg1 ;
-(TitleDefinition *)defaultTitle;
-(void)setDefaultTitle:(TitleDefinition *)arg1 ;
-(NSArray *)savedEditList;
-(void)setSavedEditList:(NSArray *)arg1 ;
-(void)setIsExportingPlist:(BOOL)arg1 ;
-(BOOL)isTrailer;
-(NSString *)assetsDirectory;
-(NSMutableArray *)foregroundAudioClips;
-(NSMutableArray *)cutaways;
-(id)editInfo;
-(id)replaceURL:(id)arg1 withURL:(id)arg2 ;
-(void)markDirty:(BOOL)arg1 ;
-(id)replaceURL:(id)arg1 inMovie:(id)arg2 andEditItem:(id)arg3 withURL:(id)arg4 ;
-(NSMutableDictionary *)trailerDict;
-(unsigned long long)estimatedBundleSizeIncludingExternalAssets:(BOOL)arg1 bundleSize:(unsigned long long*)arg2 externalMap:(id*)arg3 ;
-(void)replacePhotosToKenBurnsURLs;
-(BOOL)okToDeleteFile:(id)arg1 ;
-(void)audioOffsetsForClip:(id)arg1 startOffset:(int*)arg2 endOffset:(int*)arg3 ;
-(int)durationForAllAssets;
-(id)cacheKeyForAssetsLibraryURL:(id)arg1 renderingIntent:(int)arg2 ;
-(id)cacheKeyForPhotosIdentifierURL:(id)arg1 renderingIntent:(int)arg2 ;
-(id)cacheKeyForKenBurnsIdentifierURL:(id)arg1 renderingIntent:(int)arg2 ;
-(id)filePathForCacheKey:(id)arg1 ;
-(BOOL)shouldCopyImages;
-(BOOL)regenerateImagesIfNecessaryForIdentifierURL:(id)arg1 kbInfo:(id)arg2 exportOnly:(BOOL)arg3 ;
-(CGRect)horizontallyClampedKenBurnsRect:(CGRect)arg1 imageSize:(CGSize)arg2 ;
-(CGRect)verticallyClampedKenBurnsRect:(CGRect)arg1 imageSize:(CGSize)arg2 ;
-(id)imageForIdentifierURL:(id)arg1 renderingIntent:(int)arg2 ;
-(id)detectedFacesInKenBurnsClip:(id)arg1 ;
-(id)detectedFaceRectsInKenBurnsClip:(id)arg1 ;
-(void)_addPanAndZoomForKenBurnsClip:(id)arg1 image:(id)arg2 ;
-(void)nextKenBurnsStart:(SCD_Struct_Mi19*)arg1 end:(SCD_Struct_Mi19*)arg2 ;
-(CGRect)rectFromKenBurnsPosition:(SCD_Struct_Mi19)arg1 outputAspectRatio:(float)arg2 image:(id)arg3 ;
-(void)setKenBurnsImage:(id)arg1 forCacheKey:(id)arg2 renderingIntent:(int)arg3 ;
-(id)scaleDownOrRotateIfNeeded:(id)arg1 ;
-(id)markFacesInImage:(id)arg1 highAccuracy:(BOOL)arg2 ;
-(id)saveImageOfAssetRepresentation:(id)arg1 renderingIntent:(int)arg2 ;
-(id)saveImageOfAssetRepresentation:(id)arg1 ;
-(id)saveThumbnailOfAssetRepresentation:(id)arg1 ;
-(id)savePlaybackImageOfAssetRepresentation:(id)arg1 ;
-(void)adjustDurationForKBClip:(id)arg1 imageSize:(CGSize)arg2 ;
-(id)scaleAndSaveImageToProject:(id)arg1 cacheKey:(id)arg2 renderingIntent:(int)arg3 ;
-(id)cacheKeyForFileURL:(id)arg1 renderingIntent:(int)arg2 ;
-(id)imageMatchingCurrentDeviceSizeForIdentifierURL:(id)arg1 sourceSize:(CGSize)arg2 renderingIntent:(int)arg3 ;
-(void)regenerateKBimageFilesIfNecessary:(BOOL)arg1 ;
-(unsigned long long)numberOfDetectedFacesInKenBurnsClip:(id)arg1 ;
-(CGRect)rectEnclosingAllFacesInKenBurnsClip:(id)arg1 ;
-(void)addPanAndZoomForKenBurnsClip:(id)arg1 ;
-(void)removePanAndZoomForKenBurnsClip:(id)arg1 ;
-(void)zeroOutPanAndZoomForMultiUpClip:(id)arg1 ;
-(void)saveClipAssetToProject:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)md5StringFromData:(id)arg1 ;
-(void)saveClipImageToProject:(id)arg1 clip:(id)arg2 ;
-(NSMutableArray *)deletedMediaFiles;
-(id)timedStabilizationConfigInArray:(id)arg1 useNewMethod:(BOOL)arg2 forTime:(SCD_Struct_TV3)arg3 frameData:(CVBufferRef)arg4 irisMovieClip:(id)arg5 frameIndex:(out long long*)arg6 ;
-(BOOL)compareTimingMethodsForStabilizationConfigLookup:(id)arg1 forTime:(SCD_Struct_TV3)arg2 frameData:(CVBufferRef)arg3 irisMovieClip:(id)arg4 ;
-(unsigned long long)estimatedSizeOfPassThroughExport;
-(void)willStartExport:(id)arg1 ;
-(NSString *)themeID;
-(BOOL)renameTo:(id)arg1 ;
-(id)filePathForIdentifierURL:(id)arg1 renderingIntent:(int)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 validate:(BOOL)arg2 ;
-(id)hasExportedFileForFullScreen:(BOOL)arg1 ;
-(id)loadFromProjectData:(id)arg1 ;
-(void)setThemeID:(NSString *)arg1 ;
-(void)prepareForCloudPersistence;
-(ProjectAssetManager *)assetManager;
-(NSString *)persistedStorageName;
-(unsigned long long)bytesNeededForMultipleExports:(id)arg1 ;
-(BOOL)use2160Pcontent:(BOOL)arg1 ;
-(BOOL)fadeOutToBlack;
-(BOOL)fadeSongForce;
-(BOOL)isSimpleProject;
-(id)expandedEditList;
-(id)cutawaysInUseAtTime:(int)arg1 ;
-(unsigned long long)frameRateMode;
-(NSDictionary *)stabilizationDict;
-(PVEffect *)filterEffect;
-(unsigned)filterSeed;
-(id)cacheKeyForIdentifierURL:(id)arg1 renderingIntent:(int)arg2 ;
-(CGSize)applyAspectRatioTo16by9Size:(CGSize)arg1 ;
-(id)exportedFilePath:(id)arg1 ;
-(void)didExport;
-(id)clipsAnchoredToClip:(id)arg1 ;
-(id)saveBackgroundAudioClips;
-(id)saveForegroundAudioClips;
-(id)saveCutaways;
-(void)setTrailerDict:(NSMutableDictionary *)arg1 ;
-(void)restoreBackgroundAudioClips:(id)arg1 ;
-(void)restoreForegroundAudioClips:(id)arg1 ;
-(void)restoreCutaways:(id)arg1 ;
-(BOOL)isExportingPlist;
@end

