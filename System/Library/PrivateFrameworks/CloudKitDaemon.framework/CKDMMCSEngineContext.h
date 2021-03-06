/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class CKDMMCS, NSString, NSObject, NSRunLoop, NSMutableIndexSet;

@interface CKDMMCSEngineContext : NSObject {

	BOOL _stopMMCSThread;
	unsigned _maxChunkCountForSection;
	long long _refCount;
	long long _state;
	CKDMMCS* _MMCS;
	mmcs_engineRef _MMCSEngine;
	NSString* _applicationBundleID;
	NSString* _path;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSRunLoop* _runLoop;
	NSString* _runLoopMode;
	NSMutableIndexSet* _inMemoryItemsIDs;

}

@property (assign,nonatomic) long long refCount;                                      //@synthesize refCount=_refCount - In the implementation block
@property (assign,nonatomic) long long state;                                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL stopMMCSThread;                                     //@synthesize stopMMCSThread=_stopMMCSThread - In the implementation block
@property (assign,nonatomic,__weak) CKDMMCS * MMCS;                                   //@synthesize MMCS=_MMCS - In the implementation block
@property (assign,nonatomic) mmcs_engineRef MMCSEngine;                               //@synthesize MMCSEngine=_MMCSEngine - In the implementation block
@property (nonatomic,retain) NSString * applicationBundleID;                          //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,retain) NSString * path;                                         //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,retain) NSRunLoop * runLoop;                                     //@synthesize runLoop=_runLoop - In the implementation block
@property (nonatomic,retain) NSString * runLoopMode;                                  //@synthesize runLoopMode=_runLoopMode - In the implementation block
@property (assign,nonatomic) unsigned maxChunkCountForSection;                        //@synthesize maxChunkCountForSection=_maxChunkCountForSection - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * inMemoryItemsIDs;                    //@synthesize inMemoryItemsIDs=_inMemoryItemsIDs - In the implementation block
+(id)_appID;
+(id)sharedContextsQueue;
+(BOOL)tearDownMMCSEngineWithContext:(id)arg1 ;
+(BOOL)hasCachedCKDMMCSEngineContextForPath:(id)arg1 ;
+(id)setupMMCSEngineWithApplicationBundleID:(id)arg1 path:(id)arg2 wasCached:(BOOL*)arg3 error:(id*)arg4 ;
+(id)sharedContextsByPath;
-(id)description;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(long long)refCount;
-(NSRunLoop *)runLoop;
-(NSString *)applicationBundleID;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(id)CKPropertiesDescription;
-(void)setRunLoop:(NSRunLoop *)arg1 ;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(CKDMMCS *)MMCS;
-(void)setMMCS:(CKDMMCS *)arg1 ;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(mmcs_engineRef)MMCSEngine;
-(unsigned)maxChunkCountForSection;
-(void)performOnRunLoop:(/*^block*/id)arg1 ;
-(void)setStopMMCSThread:(BOOL)arg1 ;
-(void)_MMCSTreadAbort;
-(NSString *)runLoopMode;
-(BOOL)stopMMCSThread;
-(void)_MMCSThread;
-(void)setMMCSEngine:(mmcs_engineRef)arg1 ;
-(void)setMaxChunkCountForSection:(unsigned)arg1 ;
-(BOOL)_setupMMCSEngineWithError:(id*)arg1 ;
-(long long)incRefCount;
-(id)initWithApplicationBundleID:(id)arg1 path:(id)arg2 ;
-(BOOL)_setupMMCSEngineWithRetryCount:(unsigned long long)arg1 error:(id*)arg2 ;
-(long long)decRefCount;
-(void)_tearDownMMCSEngine;
-(void)cancelRequestWithContext:(void*)arg1 ;
-(unsigned long long)nextAvailableItemID;
-(void)stopTrackingItemID:(unsigned long long)arg1 ;
-(void)setRefCount:(long long)arg1 ;
-(void)setRunLoopMode:(NSString *)arg1 ;
-(NSMutableIndexSet *)inMemoryItemsIDs;
-(void)setInMemoryItemsIDs:(NSMutableIndexSet *)arg1 ;
@end

