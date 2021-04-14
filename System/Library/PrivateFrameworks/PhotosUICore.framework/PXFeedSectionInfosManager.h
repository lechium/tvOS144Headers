/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLCloudFeedEntriesObserver.h>
#import <libobjc.A.dylib/PLCloudCommentsChangeObserver.h>
#import <libobjc.A.dylib/PLAssetChangeObserver.h>
#import <libobjc.A.dylib/PLPhotoLibraryShouldReloadObserver.h>
#import <libobjc.A.dylib/PXConfigurableFeedSectionInfosManager.h>

@protocol PXFeedSectionInfosManagerDelegate;
@class NSDate, PLPhotoLibrary, NSMutableArray, NSMutableDictionary;

@interface PXFeedSectionInfosManager : NSObject <PLCloudFeedEntriesObserver, PLCloudCommentsChangeObserver, PLAssetChangeObserver, PLPhotoLibraryShouldReloadObserver, PXConfigurableFeedSectionInfosManager> {

	PLPhotoLibrary* _photoLibrary;
	NSMutableArray* _sectionInfos;
	NSMutableDictionary* _sectionInfosByCloudFeedEntry;
	NSMutableArray* _pendingFeedEntriesChangeNotifications;
	NSMutableArray* _pendingCommentsChangeNotifications;
	NSMutableArray* _pendingAssetsChangeNotifications;
	long long _entryFilter;
	NSDate* _earliestDate;
	unsigned long long _fetchLimit;
	id<PXFeedSectionInfosManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PXFeedSectionInfosManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long entryFilter;                                              //@synthesize entryFilter=_entryFilter - In the implementation block
@property (nonatomic,retain) NSDate * earliestDate;                                              //@synthesize earliestDate=_earliestDate - In the implementation block
@property (assign,nonatomic) unsigned long long fetchLimit;                                      //@synthesize fetchLimit=_fetchLimit - In the implementation block
+(id)mostRecentCreationDate;
-(void)dealloc;
-(id<PXFeedSectionInfosManagerDelegate>)delegate;
-(void)setDelegate:(id<PXFeedSectionInfosManagerDelegate>)arg1 ;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(unsigned long long)fetchLimit;
-(void)shouldReload:(id)arg1 ;
-(void)assetsDidChange:(id)arg1 ;
-(void)cloudFeedEntriesDidChange:(id)arg1 ;
-(void)cloudCommentsDidChange:(id)arg1 ;
-(long long)entryFilter;
-(void)setEntryFilter:(long long)arg1 ;
-(NSDate *)earliestDate;
-(void)setEarliestDate:(NSDate *)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 configurationBlock:(/*^block*/id)arg2 ;
-(long long)numberOfSectionInfos;
-(BOOL)hasEnoughCloudFeedAssetEntriesToDisplay;
-(id)sectionInfoAtIndex:(long long)arg1 ;
-(id)sectionInfosAtIndexes:(id)arg1 ;
-(long long)indexOfSectionInfo:(id)arg1 ;
-(id)sectionInfoWithIdentifier:(id)arg1 ;
-(long long)indexOfSectionInfoForCloudFeedEntry:(id)arg1 ;
-(id)indexesOfUnloadedSectionInfosAtIndexes:(id)arg1 ;
-(void)loadSectionInfosAtIndexes:(id)arg1 ;
-(void)reconfigure:(/*^block*/id)arg1 ;
-(BOOL)reconfigureToIncludeCloudFeedEntry:(id)arg1 ;
-(long long)numberOfInvitationsReceived;
-(id)indexesOfInvitationsReceivedSectionInfos;
-(void)_rebuildSectionInfos;
-(void)_getEarliestDate:(out id*)arg1 mostRecentEntries:(out id*)arg2 forBatchWithLatestDate:(id)arg3 ;
-(void)_didFinishPostingNotifications:(id)arg1 ;
-(BOOL)_shouldPerformFullReloadForFeedEntriesChangeNotifications:(id)arg1 commentsChangeNotifications:(id)arg2 ;
-(void)_updateSectionInfosForFeedEntriesChangeNotifications:(id)arg1 commentsChangeNotifications:(id)arg2 assetsChangeNotifications:(id)arg3 ;
-(/*^block*/id)_sectionInfoSortingComparator;
-(id)initWithPhotoLibraryForTesting:(id)arg1 filter:(long long)arg2 ;
@end

