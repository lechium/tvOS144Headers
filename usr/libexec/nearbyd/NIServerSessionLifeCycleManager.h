//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NIServerSessionLifecycleSupervisor-Protocol.h"

@class NIServerAnalyticsManager, NSArray, NSHashTable, NSMutableDictionary, NSString, NSUUID;
@protocol NIServerSessionLifeCycleObserver, OS_dispatch_queue;

@interface NIServerSessionLifeCycleManager : NSObject <NIServerSessionLifecycleSupervisor>
{
    NSMutableDictionary *_nearbyObjectsCache;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_watchdogQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_updatesQueue;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
    duration_6174cf92 _cycleRate;	// 40 = 0x28
    _Bool _discoveryActive;	// 48 = 0x30
    _Bool _clientWantsSessionToRun;	// 49 = 0x31
    _Bool _postioningSensorActive;	// 50 = 0x32
    _Bool _tracking;	// 51 = 0x33
    _Bool _sessionInvalidated;	// 52 = 0x34
    struct unordered_map<std::__1::basic_string<char>, unsigned long long, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long long>>> _callCounter;	// 56 = 0x38
    NIServerAnalyticsManager *_analyticsManager;	// 96 = 0x60
    struct NIServerHandoffPerSessionCAManager _handoffCAManager;	// 104 = 0x68
    id <NIServerSessionLifeCycleObserver> _observer;	// 208 = 0xd0
    NSUUID *_sessionIdentifier;	// 216 = 0xd8
    double _maxInactivityBeforeTrackingBeganSeconds;	// 224 = 0xe0
    double _maxInactivityAfterTrackingBeganSeconds;	// 232 = 0xe8
}

+ (id)new;	// IMP=0x0000000100182ab8
- (id).cxx_construct;	// IMP=0x000000010018310c
- (void).cxx_destruct;	// IMP=0x000000010018307c
@property double maxInactivityAfterTrackingBeganSeconds; // @synthesize maxInactivityAfterTrackingBeganSeconds=_maxInactivityAfterTrackingBeganSeconds;
@property double maxInactivityBeforeTrackingBeganSeconds; // @synthesize maxInactivityBeforeTrackingBeganSeconds=_maxInactivityBeforeTrackingBeganSeconds;
@property(readonly, copy) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly) __weak id <NIServerSessionLifeCycleObserver> observer; // @synthesize observer=_observer;
- (void)_printStats;	// IMP=0x0000000100182ef0
- (_Bool)isSessionInvalidated;	// IMP=0x0000000100182e4c
- (void)setSessionInvalidated:(_Bool)arg1;	// IMP=0x0000000100182e20
- (_Bool)isTracking;	// IMP=0x0000000100182d7c
- (void)setTracking:(_Bool)arg1;	// IMP=0x0000000100182d50
- (_Bool)isPostioningSensorActive;	// IMP=0x0000000100182cac
- (void)setPostioningSensorActive:(_Bool)arg1;	// IMP=0x0000000100182c80
- (_Bool)doesClientWantSessionToRun;	// IMP=0x0000000100182bdc
- (void)setClientWantsSessionToRun:(_Bool)arg1;	// IMP=0x0000000100182bb0
- (_Bool)isDiscoveryActive;	// IMP=0x0000000100182b0c
- (void)setDiscoveryActive:(_Bool)arg1;	// IMP=0x0000000100182ae0
- (id)init;	// IMP=0x0000000100182a6c
- (void)_watchdogLoop;	// IMP=0x0000000100182278
- (void)_removeAllPeers;	// IMP=0x0000000100182248
- (void)_removePeer:(id)arg1;	// IMP=0x00000001001821e8
- (void)_startMonitoringPeersActivity:(id)arg1;	// IMP=0x0000000100181fb4
- (void)throttledRangingRateForDevice:(id)arg1 responseSkipRatio:(float)arg2 cycleRate:(duration_6174cf92)arg3;	// IMP=0x0000000100181e7c
- (void)regionUpdatedForDevice:(id)arg1 region:(id)arg2;	// IMP=0x0000000100181d48
- (void)stoppedRangingWithDevice:(id)arg1;	// IMP=0x0000000100181c5c
- (void)startedRangingWithDevice:(id)arg1 cycleRate:(duration_6174cf92)arg2;	// IMP=0x0000000100181b58
- (void)stoppedMonitoringRegions;	// IMP=0x0000000100181b28
- (void)startedMonitoringRegions;	// IMP=0x0000000100181af8
- (void)configureMonitoredRegions:(id)arg1 nominalRangingRate:(int)arg2;	// IMP=0x0000000100181a2c
- (_Bool)isTrackingPeer:(id)arg1;	// IMP=0x000000010018182c
- (void)peerHangupReceived:(id)arg1;	// IMP=0x00000001001816f4
- (void)measurementReceivedForToken:(id)arg1 contTimestamp:(double)arg2;	// IMP=0x00000001001814d4
- (void)positioningSensorSessionStopped;	// IMP=0x0000000100181338
- (void)positioningSensorSessionStarted;	// IMP=0x0000000100181198
- (void)peerLostCallbackReceived:(id)arg1;	// IMP=0x0000000100180f74
- (void)stoppedDiscoveringAllPeers;	// IMP=0x0000000100180dc8
- (void)stoppedDiscoveringPeersWithTokens:(id)arg1;	// IMP=0x0000000100180b6c
- (void)startedDiscoveringPeersWithTokens:(id)arg1;	// IMP=0x0000000100180994
- (void)failedToRemovePeer;	// IMP=0x0000000100180800
- (void)failedToAddPeer;	// IMP=0x000000010018066c
- (void)invalidateCalled;	// IMP=0x00000001001804ac
- (void)pauseCalled;	// IMP=0x00000001001802f0
- (void)runWithConfigurationCalled;	// IMP=0x00000001001800f4
@property(readonly) NSArray *peers;
- (void)removeObserver:(id)arg1;	// IMP=0x000000010017ff04
- (void)addObserver:(id)arg1;	// IMP=0x000000010017fe2c
- (void)dealloc;	// IMP=0x000000010017fdb0
- (id)initWithSessionIdentifier:(id)arg1 cycleRate:(duration_6174cf92)arg2 updatesQueue:(id)arg3 analyticsManager:(id)arg4;	// IMP=0x000000010017faac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

