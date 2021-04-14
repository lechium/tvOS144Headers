/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WLKPlaybackSummary, NSMapTable, NSDate;

@interface VUIAppDocumentUpdateEventMonitor : NSObject {

	WLKPlaybackSummary* _pendingPlayActivity;
	BOOL _playbackIsActive;
	int _playbackReportToken;
	NSMapTable* _observerMapTable;
	NSDate* _lastProcesssedPlayActivity;
	NSDate* _lastAppDidBecomeActive;

}

@property (nonatomic,retain) NSMapTable * observerMapTable;                    //@synthesize observerMapTable=_observerMapTable - In the implementation block
@property (assign,nonatomic) int playbackReportToken;                          //@synthesize playbackReportToken=_playbackReportToken - In the implementation block
@property (nonatomic,retain) NSDate * lastProcesssedPlayActivity;              //@synthesize lastProcesssedPlayActivity=_lastProcesssedPlayActivity - In the implementation block
@property (nonatomic,retain) NSDate * lastAppDidBecomeActive;                  //@synthesize lastAppDidBecomeActive=_lastAppDidBecomeActive - In the implementation block
+(id)sharedMonitor;
+(BOOL)_isAppRefreshEventType:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)removeObserver:(id)arg1 ;
-(void)_handleAppDidEnterBackgroundNotification:(id)arg1 ;
-(void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1 ;
-(void)_handleSettingsDidChangeNotification:(id)arg1 ;
-(void)_handleAppLibraryDidChangeNotification:(id)arg1 ;
-(void)_handleUpNextRequestDidFinishNotification:(id)arg1 ;
-(void)_handlePurchaseFlowDidFinishNotification:(id)arg1 ;
-(void)_handleSubscriptionDidChangeNotification:(id)arg1 ;
-(void)_handleFavoritesRequestDidFinishNotification:(id)arg1 ;
-(void)_handleRemoveFromPlayHistoryRequestDidFinishNotification:(id)arg1 ;
-(void)_handleClearFromPlayHistoryRequestDidFinishNotification:(id)arg1 ;
-(void)_handleAccountDidChangeNotification:(id)arg1 ;
-(void)_handleRestrictionsDidChangeNotification:(id)arg1 ;
-(void)_handleUTSKDidChangeNotification:(id)arg1 ;
-(void)_handlePreferredVideoFormatDidChangeNotification:(id)arg1 ;
-(void)_handlePlayHistoryUpdatedNotification:(id)arg1 ;
-(void)_handleLocationAuthorizationDidChangeNotification:(id)arg1 ;
-(void)_handleLocationDidChangeNotification:(id)arg1 ;
-(void)_handleAppWillEnterForegroundNotification:(id)arg1 ;
-(void)_handlePurchaseRequestSucceededNotification:(id)arg1 ;
-(void)_handlePlaybackReportNotification:(id)arg1 ;
-(void)_handleFamilyUpdate:(id)arg1 ;
-(void)_handleAppDidBecomeActive:(id)arg1 ;
-(void)_handleNowPlayingWillStartNotification:(id)arg1 ;
-(void)_handleNowPlayingDidEndNotification:(id)arg1 ;
-(void)_handlePostPlayUpNextShouldUpdateNotification:(id)arg1 ;
-(void)_handleClearPlayHistoryNotification:(id)arg1 ;
-(void)_handleXPUpNextRequestDidFinishNotification:(id)arg1 ;
-(void)_handleXPPurchaseFlowDidFinishNotification:(id)arg1 ;
-(void)_handleTVSubscriptionEntitlementsChanged:(id)arg1 ;
-(void)addObserver:(id)arg1 forEventDescriptors:(id)arg2 viewController:(id)arg3 ;
-(NSMapTable *)observerMapTable;
-(void)_notifyObserver:(id)arg1 ofRefreshEvent:(id)arg2 ;
-(NSDate *)lastAppDidBecomeActive;
-(void)_notifyObserversOfEvent:(id)arg1 ;
-(void)setLastAppDidBecomeActive:(NSDate *)arg1 ;
-(void)_postPurchaseNotification:(id)arg1 error:(id)arg2 ;
-(void)_postSubscriptionNotification:(id)arg1 interruptedOfferDetails:(id)arg2 error:(id)arg3 ;
-(void)addObserver:(id)arg1 forEventDescriptors:(id)arg2 ;
-(void)_handleEntitlementsDidChangeNotification:(id)arg1 ;
-(void)_handleIAMMessageDidReceiveNotification:(id)arg1 ;
-(void)setObserverMapTable:(NSMapTable *)arg1 ;
-(int)playbackReportToken;
-(void)setPlaybackReportToken:(int)arg1 ;
-(NSDate *)lastProcesssedPlayActivity;
-(void)setLastProcesssedPlayActivity:(NSDate *)arg1 ;
@end

