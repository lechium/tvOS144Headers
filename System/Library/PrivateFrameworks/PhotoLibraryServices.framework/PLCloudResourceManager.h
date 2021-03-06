/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, PLCloudResourcePrefetchManager, PLCloudResourcePruneManager, NSDate;

@interface PLCloudResourceManager : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	PLCloudResourcePrefetchManager* _prefetchManager;
	PLCloudResourcePruneManager* _pruneManager;
	NSDate* _lastOperationDate;
	BOOL _enqueuedOperation;

}
-(id)init;
-(void)invalidate;
-(void)stop;
-(void)clearPrefetchState;
-(id)statusForDebug:(BOOL)arg1 ;
-(void)startAutomaticPrefetchAndPruneWithTimeout:(BOOL)arg1 ;
-(void)updateCacheDeletePurgeableAmount;
-(void)handleOptimizeModeChange;
-(id)initWithCPLManager:(id)arg1 library:(id)arg2 ;
-(void)_runOnWorkQueueWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
-(double)_minimumIntervalBetweenOperations;
@end

