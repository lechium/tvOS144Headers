/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, TVCKSyncingKeyValueStore, NSDate;

@interface TVCKBookmarkService : NSObject {

	NSMutableDictionary* _pending;
	BOOL _scheduledUpdate;
	BOOL _syncAfterUpdate;
	NSObject*<OS_dispatch_queue> _updateQueue;
	TVCKSyncingKeyValueStore* _keyValueStore;
	BOOL _syncInProgress;
	NSDate* _dateOfLastSyncCompletion;
	unsigned long long _numSyncsInProgress;

}

@property (nonatomic,retain) NSDate * dateOfLastSyncCompletion;                  //@synthesize dateOfLastSyncCompletion=_dateOfLastSyncCompletion - In the implementation block
@property (assign,nonatomic) unsigned long long numSyncsInProgress;              //@synthesize numSyncsInProgress=_numSyncsInProgress - In the implementation block
@property (assign,nonatomic) BOOL syncInProgress;                                //@synthesize syncInProgress=_syncInProgress - In the implementation block
@property (nonatomic,readonly) BOOL syncHasFinishedRecently; 
+(id)sharedInstance;
+(void)setupBookmarkService:(id)arg1 ;
+(id)_keyValueStoreKeyForBookmarkKey:(id)arg1 ;
+(id)_bookmarkFromKey:(id)arg1 kvsDictionary:(id)arg2 ;
+(id)bookmarkKeyForKeyValueStoreKey:(id)arg1 ;
+(id)_kvsDictionaryFromBookmark:(id)arg1 ;
-(void)dealloc;
-(void)synchronizeWithCompletion:(/*^block*/id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(BOOL)syncInProgress;
-(void)setSyncInProgress:(BOOL)arg1 ;
-(BOOL)syncHasFinishedRecently;
-(void)updateBookmark:(id)arg1 ;
-(id)bookmarkForKey:(id)arg1 ;
-(id)pendingBookmarkForKey:(id)arg1 ;
-(id)initWithKeyValueStore:(id)arg1 ;
-(void)_handleKeyValueStoreVersionDidChangeNotification;
-(void)_handleKeyValueStoreDidResetNotification;
-(void)_handleUPPRecordsDidChangeNotification;
-(void)_handleUPPClientDidResetNotification;
-(void)_nukePendingChangesAndNotify;
-(void)_updateBookmarks:(id)arg1 withBookmark:(id)arg2 ;
-(id)bookmarksForKeys:(id)arg1 ;
-(void)updateBookmark:(id)arg1 sync:(BOOL)arg2 ;
-(void)_batchUpdate;
-(unsigned long long)numSyncsInProgress;
-(void)setNumSyncsInProgress:(unsigned long long)arg1 ;
-(void)setDateOfLastSyncCompletion:(NSDate *)arg1 ;
-(NSDate *)dateOfLastSyncCompletion;
-(void)_writePendingToAppleTVKeyValueStore:(id)arg1 ;
-(void)fetchAllBookmarksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resetForRetailWithCompletion:(/*^block*/id)arg1 ;
@end

