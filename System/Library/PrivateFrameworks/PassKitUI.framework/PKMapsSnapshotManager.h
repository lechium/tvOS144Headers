/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <PassKitUI/PassKitUI-Structs.h>
@class NSURL, NSFileManager, NSMutableArray, NSMutableDictionary, NSObject;

@interface PKMapsSnapshotManager : NSObject {

	NSURL* _cacheURL;
	NSFileManager* _fileManager;
	NSMutableArray* _snapshotsKeysToPerform;
	NSMutableDictionary* _snapshotOptionsByKey;
	NSMutableDictionary* _completionBlockByKey;
	NSMutableArray* _snapshotCacheKeys;
	NSMutableDictionary* _snapshotCache;
	BOOL _isSnapshotting;
	os_unfair_lock_s _cacheLock;
	os_unfair_lock_s _fileLock;
	NSObject*<OS_dispatch_queue> _snapshotQueue;

}
-(id)init;
-(void)_processNextRequest;
-(id)snapshotForDisplayRegion:(SCD_Struct_PK20)arg1 size:(CGSize)arg2 traitCollection:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_iconForCacheKey:(id)arg1 ;
-(id)_iconFromDiskForCacheKey:(id)arg1 ;
@end

