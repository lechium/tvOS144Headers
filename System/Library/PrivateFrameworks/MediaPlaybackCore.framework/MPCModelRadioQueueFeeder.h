/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPQueueFeeder.h>
#import <libobjc.A.dylib/MPRTCReportingItemSessionContaining.h>
#import <libobjc.A.dylib/MPAVItemObserver.h>
#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>
#import <libobjc.A.dylib/MPCQueueControllerDataSource.h>

@protocol MPMutableIdentifierListSection, OS_dispatch_queue;
@class MPCModelRadioPlaybackQueue, MPCModelRadioPlaybackContext, NSObject, MPAVItem, NSString, MPCModelRadioPersonalizationResponse, MPCPlaybackRequestEnvironment, ICUserIdentityStore, ICStoreRequestContext, ICPlayActivityController, NSDictionary;

@interface MPCModelRadioQueueFeeder : MPQueueFeeder <MPRTCReportingItemSessionContaining, MPAVItemObserver, ICEnvironmentMonitorObserver, MPCQueueControllerDataSource> {

	id<MPMutableIdentifierListSection> _section;
	MPCModelRadioPlaybackQueue* _playbackQueue;
	MPCModelRadioPlaybackContext* _playbackContext;
	BOOL _needsSectionUpdate;
	NSObject*<OS_dispatch_queue> _diffQueue;
	unsigned long long _backgroundTaskIdentifier;
	unsigned long long _backgroundTasks;
	MPAVItem* _currentItem;
	BOOL _hasReachedTracklistEnd;
	BOOL _supportsLoadingAdditionalItems;
	NSString* _lastCleanPlayedIdentifier;
	NSString* _lastPlayedIdentifier;
	MPCModelRadioPersonalizationResponse* _lastResponse;
	BOOL _mayHaveRestrictedContent;
	MPCPlaybackRequestEnvironment* _playbackRequestEnvironment;
	long long _queueGeneration;
	NSString* _siriAssetInfo;
	ICUserIdentityStore* _observedIdentityStore;
	ICStoreRequestContext* _storeRequestContext;
	ICPlayActivityController* _playActivityController;
	/*^block*/id _finalTracklistLoadingCompletionHandler;

}

@property (nonatomic,copy,readonly) NSString * rtcReportingPlayQueueSourceIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * rtcReportingSessionAdditionalUserInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL containsLiveStream; 
@property (nonatomic,readonly) BOOL containsTransportableContent; 
+(id)sharedQueue;
-(id)init;
-(void)dealloc;
-(long long)itemCount;
-(void)environmentMonitorDidChangeNetworkType:(id)arg1 ;
-(id)modelPlayEvent;
-(long long)supplementalPlaybackContextBehavior;
-(id)supplementalPlaybackContextWithReason:(long long)arg1 ;
-(void)getRepresentativeMetadataForPlaybackContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_beginBackgroundTaskAssertion;
-(void)_endBackgroundTaskAssertion;
-(NSString *)rtcReportingPlayQueueSourceIdentifier;
-(NSDictionary *)rtcReportingSessionAdditionalUserInfo;
-(void)reloadSection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didSignificantlyChangeItem:(id)arg1 ;
-(BOOL)containsTransportableContent;
-(BOOL)canSkipItem:(id)arg1 ;
-(BOOL)section:(id)arg1 supportsShuffleType:(long long)arg2 ;
-(void)loadPlaybackContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)itemForItem:(id)arg1 inSection:(id)arg2 ;
-(BOOL)supportsAutoPlayForItem:(id)arg1 inSection:(id)arg2 ;
-(BOOL)containsLiveStream;
-(void)itemDidBeginPlayback:(id)arg1 ;
-(BOOL)shouldRequestAdditionalItemsWhenReachingTailOfSection:(id)arg1 ;
-(long long)prefetchThresholdForSection:(id)arg1 ;
-(void)loadAdditionalItemsWithRequest:(id)arg1 forSection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)placeholderItemForLoadingAdditionalItemsInSection:(id)arg1 ;
-(id)updatedPlaybackContext;
-(void)_allowCellularStreamingDidChangeNotification:(id)arg1 ;
-(void)_updateAdditionalLoadingSupport;
-(void)_endObservingIdentityStoreForSignOut;
-(id)_defaultGetTracksRequestWithContext:(id)arg1 radioStation:(id)arg2 ;
-(void)_loadTracksWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_detectSignOutForIdentityStore:(id)arg1 ;
-(void)_responseDidInvalidate;
-(void)_detectSignOutForIdentityStoreChangeNotification:(id)arg1 ;
-(id)_errorForRequest:(id)arg1 withError:(id)arg2 ;
-(void)_handlePersonalizationResponse:(id)arg1 personalizationError:(id)arg2 fromRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_observePersonalizationResponse:(id)arg1 ;
-(void)_savePlaybackHistoryWithCurrentIndex:(long long)arg1 ;
-(void)_beginObservingIdentityStoreForSignOut;
-(void)_handleGetTracksResponse:(id)arg1 getTracksError:(id)arg2 fromRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_responseDidInvalidateNotification:(id)arg1 ;
-(void)_removeRestrictedTracks;
-(void)_repersonalizeCurrentTracks;
-(BOOL)_isTransientLoadingError:(id)arg1 ;
@end

