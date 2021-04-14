//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFAnalyticsObservationService-Protocol.h"
#import "AFAnalyticsService-Protocol.h"

@class ADAnalyticsFuzzingInterval, ADAnalyticsStore, ADInstrumentationResolver, AFQueue, NSMutableDictionary, NSMutableSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ADAnalyticsService : NSObject <AFAnalyticsObservationService, AFAnalyticsService>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_houseKeepingTimer;	// 16 = 0x10
    NSMutableSet *_stagedEvents;	// 24 = 0x18
    NSMutableSet *_connections;	// 32 = 0x20
    long long _depthOfEventsGrouping;	// 40 = 0x28
    ADAnalyticsStore *_store;	// 48 = 0x30
    NSString *_streamUID;	// 56 = 0x38
    ADInstrumentationResolver *_instrumentationResolver;	// 64 = 0x40
    CDUnknownBlockType _observationCompletion;	// 72 = 0x48
    NSXPCConnection *_observerConnection;	// 80 = 0x50
    _Bool _isSuspended;	// 88 = 0x58
    _Bool _isFuzzing;	// 89 = 0x59
    _Bool _isBoostingEventProducers;	// 90 = 0x5a
    ADAnalyticsFuzzingInterval *_currentFuzzingInterval;	// 96 = 0x60
    AFQueue *_fuzzingIntervals;	// 104 = 0x68
    NSMutableDictionary *_connectionDisruptedObservers;	// 112 = 0x70
}

+ (id)sharedService;	// IMP=0x0000000100244b3c
- (void).cxx_destruct;	// IMP=0x0000000100248d88
- (void)_unlinkStoreForSysdiagnose;	// IMP=0x0000000100248b48
- (void)_linkStoreForSysdiagnose;	// IMP=0x000000010024873c
- (void)_endEventsFuzzingWithEndTime:(unsigned long long)arg1;	// IMP=0x00000001002484a8
- (void)_beginEventsFuzzingWithStartTime:(unsigned long long)arg1;	// IMP=0x0000000100248310
- (void)_houseKeeperArrived;	// IMP=0x00000001002482dc
- (void)_stopHouseKeepingTimer;	// IMP=0x00000001002482a0
- (void)_startHouseKeepingTimer;	// IMP=0x0000000100248144
- (void)_resumeEventsStaging;	// IMP=0x00000001002480f4
- (void)_suspendEventsStaging;	// IMP=0x00000001002480a4
- (void)_endEventsGrouping;	// IMP=0x0000000100248054
- (void)_beginEventsGrouping;	// IMP=0x0000000100248004
- (void)_processStagedEvents;	// IMP=0x00000001002479d4
- (id)_unstageEvents;	// IMP=0x000000010024798c
- (void)_stageEvents:(id)arg1;	// IMP=0x0000000100247954
- (void)_stageEvent:(id)arg1;	// IMP=0x000000010024791c
- (void)_executeDelegateBlockOnAllConnections:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010024718c
- (void)_enumerateConnectionsAsServiceDelegates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100246e84
- (void)_stopObservingConnectionDisrupted:(int)arg1 referenceId:(id)arg2;	// IMP=0x0000000100246d70
- (void)_observeConnectionDisrupted:(int)arg1 observer:(CDUnknownBlockType)arg2 referenceId:(id)arg3;	// IMP=0x0000000100246be8
- (void)_removeConnection:(id)arg1;	// IMP=0x0000000100246bd8
- (void)_signalConnectionDisruption:(id)arg1;	// IMP=0x0000000100246a4c
- (void)_addConnection:(id)arg1;	// IMP=0x0000000100246a3c
- (id)_store;	// IMP=0x000000010024690c
- (oneway void)flushWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100246840
- (oneway void)observeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100246764
- (void)storeGenericInstrumentation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100246268
- (void)boostAllConnections:(CDUnknownBlockType)arg1;	// IMP=0x0000000100245dbc
- (void)endEventsFuzzingWithEndTime:(unsigned long long)arg1;	// IMP=0x0000000100245d50
- (void)beginEventsFuzzingWithStartTime:(unsigned long long)arg1;	// IMP=0x0000000100245ce4
- (oneway void)logInstrumentationOfType:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;	// IMP=0x0000000100245bf4
- (oneway void)endEventsGrouping;	// IMP=0x0000000100245b8c
- (oneway void)beginEventsGrouping;	// IMP=0x0000000100245b24
- (oneway void)stageEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100245744
- (oneway void)stageEvents:(id)arg1;	// IMP=0x0000000100245734
- (oneway void)stageEvent:(id)arg1;	// IMP=0x0000000100245670
- (void)checkForMetricsUploadProblem;	// IMP=0x00000001002451f8
- (void)managedConfigurationEffectiveSettingsChanged;	// IMP=0x0000000100245080
- (void)resumeEventsStaging;	// IMP=0x0000000100245018
- (void)suspendEventsStaging;	// IMP=0x0000000100244fb0
- (void)setObserverConnection:(id)arg1;	// IMP=0x0000000100244eb8
- (void)accessStoreUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100244ddc
- (void)connectionDisconnected:(id)arg1;	// IMP=0x0000000100244d08
- (void)connectionInterrupted:(id)arg1;	// IMP=0x0000000100244c5c
- (void)connectionConnected:(id)arg1;	// IMP=0x0000000100244bb0
@property(readonly, copy, nonatomic) NSString *currentEventStreamUID;
- (void)dealloc;	// IMP=0x0000000100244af0
- (id)init;	// IMP=0x00000001002447dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
