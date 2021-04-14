/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/VEiOSSharedObject.h>

@class FMSongLibrary, NSSet, MiroAutoEditLogger, NSArray;

@interface MiroSmartMusicRequestManager : VEiOSSharedObject {

	BOOL _moodIsDownloading[12];
	BOOL _allowsDownloads;
	BOOL _didLogSongs;
	FMSongLibrary* _library;
	NSSet* _moodIDSet;
	double _initTime;
	MiroAutoEditLogger* _logger;
	NSArray* _observers;

}

@property (nonatomic,readonly) FMSongLibrary * library;                //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) NSSet * moodIDSet;                        //@synthesize moodIDSet=_moodIDSet - In the implementation block
@property (assign,nonatomic) double initTime;                          //@synthesize initTime=_initTime - In the implementation block
@property (assign,nonatomic) BOOL didLogSongs;                         //@synthesize didLogSongs=_didLogSongs - In the implementation block
@property (nonatomic,retain) MiroAutoEditLogger * logger;              //@synthesize logger=_logger - In the implementation block
@property (retain) NSArray * observers;                                //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL allowsDownloads;                     //@synthesize allowsDownloads=_allowsDownloads - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_setup;
-(MiroAutoEditLogger *)logger;
-(FMSongLibrary *)library;
-(NSArray *)observers;
-(void)setObservers:(NSArray *)arg1 ;
-(void)setLogger:(MiroAutoEditLogger *)arg1 ;
-(id)fetchAllSongs;
-(id)songLibrary;
-(id)bestLocalSongUIDForKeywords:(id)arg1 musicGenreDistribution:(id)arg2 moodID:(id)arg3 excludingSongs:(id)arg4 ;
-(BOOL)hasEnoughLocalSongsForMoodID:(id)arg1 ;
-(id)recommendSongUIDForKeywords:(id)arg1 musicGenreDistribution:(id)arg2 moodID:(id)arg3 excludingSongs:(id)arg4 ;
-(id)fetchSongWithUID:(id)arg1 ;
-(id)fetchFeaturedSongsForMoodTag:(id)arg1 ;
-(id)genreIDsForSong:(id)arg1 ;
-(BOOL)songHasSpecialKeyword:(id)arg1 ;
-(id)moodIDForSong:(id)arg1 ;
-(void)_removeObserversOnLibrary;
-(void)setAllowsDownloads:(BOOL)arg1 ;
-(void)setMoodIDSet:(NSSet *)arg1 ;
-(void)_downloadInProgressChanged:(id)arg1 ;
-(unsigned long long)_indexForMoodID:(id)arg1 ;
-(id)_moodIDforSongUID:(id)arg1 ;
-(void)storeDatePlayedForSongID:(id)arg1 ;
-(id)nextFeaturedSongToDownload;
-(void)_requestDownloadForMoodID:(id)arg1 ;
-(BOOL)_isDownloadingforMoodID:(id)arg1 ;
-(BOOL)allowsDownloads;
-(id)bestSongToDownloadForMoodID:(id)arg1 ;
-(void)_setDownloding:(BOOL)arg1 forMoodID:(id)arg2 ;
-(void)setInitTime:(double)arg1 ;
-(id)_addObserversOnSongLibrary:(id)arg1 indicateNetworkActivity:(BOOL)arg2 ;
-(double)initTime;
-(id)_featuredSongPredicateForMoodTag:(id)arg1 ;
-(id)_featuredSongSortDescriptor;
-(id)_featuredSongPredicate;
-(NSSet *)moodIDSet;
-(id)allSongsScoredForKeywords:(id)arg1 musicGenreDistribution:(id)arg2 moodID:(id)arg3 excludingSongs:(id)arg4 localOptions:(int)arg5 ;
-(BOOL)didLogSongs;
-(double)scoreSong:(id)arg1 withKeywords:(id)arg2 ;
-(double)scoreSong:(id)arg1 forSpecialKeywords:(id)arg2 ;
-(double)scoreSong:(id)arg1 withRegionID:(id)arg2 ;
-(double)scoreLocalityForSong:(id)arg1 ;
-(double)scoreSong:(id)arg1 withMusicGenreDistribution:(id)arg2 ;
-(double)scoreSong:(id)arg1 withDateLastSelected:(double)arg2 ;
-(double)scoreSong:(id)arg1 withMoodID:(id)arg2 ;
-(void)setDidLogSongs:(BOOL)arg1 ;
-(BOOL)_isDownloadingAnything;
-(void)markSongUIDAsRequested:(id)arg1 ;
-(void)logSongLibraryInitTimeWithLogger:(id)arg1 ;
-(void)tearDownSongLibrary;
-(void)purgeAllLocalCachedAssets;
@end

