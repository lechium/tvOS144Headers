/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXMemoriesDataSourceManager.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, PXMemoriesDataSourceState, NSMutableOrderedSet, PHFetchResult, NSString;

@interface PXFetchResultBasedMemoriesDataSourceManager : PXMemoriesDataSourceManager <PXPhotoLibraryUIChangeObserver> {

	NSObject*<OS_dispatch_queue> _workerQueue;
	BOOL _isWorking;
	BOOL _hasCreatedInitialDataSource;
	BOOL _loadFromEnd;
	PXMemoriesDataSourceState* __state;
	NSMutableOrderedSet* __remainingMemoriesToFetch;

}

@property (setter=_setState:,nonatomic,retain) PXMemoriesDataSourceState * _state;                                    //@synthesize _state=__state - In the implementation block
@property (setter=_setRemainingMemoriesToFetch:,retain) NSMutableOrderedSet * _remainingMemoriesToFetch;              //@synthesize _remainingMemoriesToFetch=__remainingMemoriesToFetch - In the implementation block
@property (nonatomic,readonly) PHFetchResult * memories; 
@property (assign,nonatomic) BOOL loadFromEnd;                                                                        //@synthesize loadFromEnd=_loadFromEnd - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXMemoriesDataSourceState *)_state;
-(void)_setState:(id)arg1 ;
-(id)createInitialDataSource;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2 ;
-(PHFetchResult *)memories;
-(void)startLoadingIfNeeded;
-(void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3 ;
-(id)initWithMemoriesFetchResult:(id)arg1 ;
-(void)_workerQueue_fetchRemainingMemoriesInBatchesFromTheEnd:(BOOL)arg1 ;
-(id)_createMemoriesDataSourceFromCurrentState;
-(BOOL)loadFromEnd;
-(void)setLoadFromEnd:(BOOL)arg1 ;
-(NSMutableOrderedSet *)_remainingMemoriesToFetch;
-(void)_setRemainingMemoriesToFetch:(id)arg1 ;
@end

