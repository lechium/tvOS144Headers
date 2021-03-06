/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVPAudioRoutingControllerDelegate;
@class TVPAudioRoute, NSArray, TVPAudioRouteVolume, NSMutableArray;

@interface TVPAudioRoutingController : NSObject {

	BOOL _volumeControlAvailable;
	BOOL _alternateRoutesAvailable;
	BOOL _fetchingRoutes;
	TVPAudioRoute* _defaultRouteOrNull;
	TVPAudioRoute* _selectedRouteOrNull;
	NSArray* _availableRoutes;
	NSArray* _knownRoutes;
	NSArray* _otherRoutes;
	id<TVPAudioRoutingControllerDelegate> _delegate;
	long long _discoveryMode;
	TVPAudioRouteVolume* _selectedRouteVolume;
	NSMutableArray* _fetchCompletionHandlers;

}

@property (nonatomic,retain) TVPAudioRouteVolume * selectedRouteVolume;                          //@synthesize selectedRouteVolume=_selectedRouteVolume - In the implementation block
@property (assign,nonatomic) BOOL volumeControlAvailable;                                        //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (assign,nonatomic) BOOL alternateRoutesAvailable;                                      //@synthesize alternateRoutesAvailable=_alternateRoutesAvailable - In the implementation block
@property (assign,nonatomic) BOOL fetchingRoutes;                                                //@synthesize fetchingRoutes=_fetchingRoutes - In the implementation block
@property (nonatomic,retain) NSMutableArray * fetchCompletionHandlers;                           //@synthesize fetchCompletionHandlers=_fetchCompletionHandlers - In the implementation block
@property (assign,nonatomic,__weak) id<TVPAudioRoutingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long discoveryMode;                                            //@synthesize discoveryMode=_discoveryMode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * availableRoutes;                                   //@synthesize availableRoutes=_availableRoutes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * knownRoutes;                                       //@synthesize knownRoutes=_knownRoutes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * otherRoutes;                                       //@synthesize otherRoutes=_otherRoutes - In the implementation block
@property (nonatomic,readonly) TVPAudioRoute * defaultRoute;                                     //@synthesize defaultRouteOrNull=_defaultRouteOrNull - In the implementation block
@property (nonatomic,readonly) TVPAudioRoute * selectedRoute;                                    //@synthesize selectedRouteOrNull=_selectedRouteOrNull - In the implementation block
+(void)_updateEffectiveDiscoveryMode;
+(id)_sharedSelectedRouteVolume;
+(unsigned)_MRDiscoveryModeForDiscoveryMode:(long long)arg1 ;
+(BOOL)automaticallyNotifiesObserversOfSelectedRouteVolume;
-(id)init;
-(void)dealloc;
-(id<TVPAudioRoutingControllerDelegate>)delegate;
-(void)setDelegate:(id<TVPAudioRoutingControllerDelegate>)arg1 ;
-(void)setDiscoveryMode:(long long)arg1 ;
-(long long)discoveryMode;
-(TVPAudioRoute *)defaultRoute;
-(void)_registerForNotifications;
-(NSArray *)availableRoutes;
-(void)fetchAvailableRoutesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_deregisterForNotifications;
-(void)setVolumeControlAvailable:(BOOL)arg1 ;
-(BOOL)volumeControlAvailable;
-(NSArray *)knownRoutes;
-(NSArray *)otherRoutes;
-(TVPAudioRoute *)selectedRoute;
-(BOOL)selectRoute:(id)arg1 withPassword:(id)arg2 ;
-(void)_updateAudioRoutesFromRouteDescriptions:(id)arg1 ;
-(id)_knownRoutesFromAvailableRoutes:(id)arg1 ;
-(void)_updateKnownRoutesWithRoute:(id)arg1 ;
-(void)serverDied:(id)arg1 ;
-(void)routesChanged:(id)arg1 ;
-(void)setAlternateRoutesAvailable:(BOOL)arg1 ;
-(void)_updateVolumeControl;
-(TVPAudioRouteVolume *)selectedRouteVolume;
-(void)setSelectedRouteVolume:(TVPAudioRouteVolume *)arg1 ;
-(BOOL)alternateRoutesAvailable;
-(BOOL)fetchingRoutes;
-(void)setFetchingRoutes:(BOOL)arg1 ;
-(NSMutableArray *)fetchCompletionHandlers;
-(void)setFetchCompletionHandlers:(NSMutableArray *)arg1 ;
@end

