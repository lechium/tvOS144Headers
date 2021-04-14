/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMediaStream/MSASAssetTransferer.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface MSASAssetUploader : MSASAssetTransferer {

	BOOL _didEncounterNetworkConditionError;
	int _state;
	NSMutableArray* _itemsInFlight;
	NSMutableDictionary* _assetCollectionsToItemInFlightMap;
	NSMutableDictionary* _assetToAssetCollectionMap;
	NSMutableArray* _finishedAssetCollections;
	NSMutableSet* _assetCollectionsWithAuthorizationError;
	NSMutableDictionary* _assetCollectionGUIDToRequestorContext;

}

@property (assign,nonatomic) int state;                                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableArray * itemsInFlight;                                           //@synthesize itemsInFlight=_itemsInFlight - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetCollectionsToItemInFlightMap;                  //@synthesize assetCollectionsToItemInFlightMap=_assetCollectionsToItemInFlightMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetToAssetCollectionMap;                          //@synthesize assetToAssetCollectionMap=_assetToAssetCollectionMap - In the implementation block
@property (nonatomic,retain) NSMutableArray * finishedAssetCollections;                                //@synthesize finishedAssetCollections=_finishedAssetCollections - In the implementation block
@property (nonatomic,retain) NSMutableSet * assetCollectionsWithAuthorizationError;                    //@synthesize assetCollectionsWithAuthorizationError=_assetCollectionsWithAuthorizationError - In the implementation block
@property (assign,nonatomic) BOOL didEncounterNetworkConditionError;                                   //@synthesize didEncounterNetworkConditionError=_didEncounterNetworkConditionError - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetCollectionGUIDToRequestorContext;              //@synthesize assetCollectionGUIDToRequestorContext=_assetCollectionGUIDToRequestorContext - In the implementation block
@property (assign,nonatomic,__weak) id<MSASAssetUploaderDelegate> delegate; 
-(int)state;
-(void)setState:(int)arg1 ;
-(void)workQueueRetryOutstandingActivities;
-(id)_pathForPersonID:(id)arg1 ;
-(void)workQueueGoIdle;
-(void)_workQueueStop;
-(void)workQueueStop;
-(void)workQueueShutDownCompletionBlock:(/*^block*/id)arg1 ;
-(void)workQueueCancel;
-(id)_orphanedAssetCollectionError;
-(void)workQueueUploadNextBatch;
-(void)workQueueCancelAssetCollections:(id)arg1 ;
-(void)workQueueRegisterAssets:(id)arg1 index:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)workQueueRegisterAssetCollections:(id)arg1 index:(unsigned long long)arg2 results:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)registerAssetCollections:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)unregisterAssetCollections:(id)arg1 ;
-(void)unregisterAssetCollections:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)cancelAssetCollections:(id)arg1 ;
-(void)workQueueStopTrackingItem:(id)arg1 ;
-(void)workQueueDidFinishWithItem:(id)arg1 error:(id)arg2 ;
-(void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 putReceipt:(id)arg3 error:(id)arg4 ;
-(void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3 ;
-(void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4 ;
-(void)didFinishPuttingAllAssets;
-(void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4 ;
-(void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4 ;
-(void)didFinishGettingAllAssets;
-(NSMutableArray *)itemsInFlight;
-(void)setItemsInFlight:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)assetCollectionsToItemInFlightMap;
-(void)setAssetCollectionsToItemInFlightMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)assetToAssetCollectionMap;
-(void)setAssetToAssetCollectionMap:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)finishedAssetCollections;
-(void)setFinishedAssetCollections:(NSMutableArray *)arg1 ;
-(BOOL)didEncounterNetworkConditionError;
-(void)setDidEncounterNetworkConditionError:(BOOL)arg1 ;
-(NSMutableSet *)assetCollectionsWithAuthorizationError;
-(void)setAssetCollectionsWithAuthorizationError:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)assetCollectionGUIDToRequestorContext;
-(void)setAssetCollectionGUIDToRequestorContext:(NSMutableDictionary *)arg1 ;
@end

