/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXCMMInvitationsDataSourceManager.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, PXCMMMomentsInvitationsDataSourceState, NSMutableOrderedSet, NSString;

@interface PXCMMMomentsInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver> {

	NSObject*<OS_dispatch_queue> _workerQueue;
	BOOL _isLoading;
	BOOL _hasCreatedInitialDataSource;
	PXCMMMomentsInvitationsDataSourceState* __state;
	NSMutableOrderedSet* __remainingAssetCollectionObjectIDsToFetch;

}

@property (nonatomic,retain) PXCMMMomentsInvitationsDataSourceState * _state;                    //@synthesize _state=__state - In the implementation block
@property (retain) NSMutableOrderedSet * _remainingAssetCollectionObjectIDsToFetch;              //@synthesize _remainingAssetCollectionObjectIDsToFetch=__remainingAssetCollectionObjectIDsToFetch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)mockDataSourceManagerFromRecentLargeMoments;
-(id)init;
-(void)dealloc;
-(PXCMMMomentsInvitationsDataSourceState *)_state;
-(id)assetCollections;
-(id)createInitialDataSource;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2 ;
-(id)initWithAssetCollectionsFetchResult:(id)arg1 ;
-(void)startLoadingIfNeeded;
-(void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3 ;
-(void)set_state:(PXCMMMomentsInvitationsDataSourceState *)arg1 ;
-(id)_createInvitationsDataSourceFromCurrentState;
-(void)_workerQueue_fetchRemainingAssetCollectionsInBatches;
-(NSMutableOrderedSet *)_remainingAssetCollectionObjectIDsToFetch;
-(void)set_remainingAssetCollectionObjectIDsToFetch:(NSMutableOrderedSet *)arg1 ;
@end

