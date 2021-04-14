//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;
@protocol OS_dispatch_queue;

@interface WiFiUserInteractionMonitor : NSObject
{
    _Bool _setupCompleted;	// 8 = 0x8
    _Bool _callInProgress;	// 9 = 0x9
    _Bool _navigating;	// 10 = 0xa
    int _overrideApplicationState;	// 12 = 0xc
    int _applicationState;	// 16 = 0x10
    NSSet *_cellularDataStatusMap;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSMutableSet *_activeApplications;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0000000100126144
@property(retain, nonatomic) NSMutableSet *activeApplications; // @synthesize activeApplications=_activeApplications;
@property(nonatomic) _Bool navigating; // @synthesize navigating=_navigating;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool callInProgress; // @synthesize callInProgress=_callInProgress;
@property(nonatomic) _Bool setupCompleted; // @synthesize setupCompleted=_setupCompleted;
@property(nonatomic) int applicationState; // @synthesize applicationState=_applicationState;
@property(nonatomic) int overrideApplicationState; // @synthesize overrideApplicationState=_overrideApplicationState;
@property(retain, nonatomic) NSSet *cellularDataStatusMap; // @synthesize cellularDataStatusMap=_cellularDataStatusMap;
- (void)_setupNavigationListenerWithQueue:(id)arg1;	// IMP=0x0000000100126e8c
- (void)_notifyCaptiveWithApplicationState:(int)arg1;	// IMP=0x0000000100126d58
- (_Bool)isInNonNetworkingApp;	// IMP=0x00000001001269f0
- (void)clearActiveApplications;	// IMP=0x00000001001269a0
- (void)addActiveApplicationBundleId:(id)arg1;	// IMP=0x0000000100126924
@property(readonly, nonatomic, getter=isInHomeScreen) _Bool inHomeScreen;
@property(readonly, nonatomic, getter=isForegroundNetworkingAppActive) _Bool foregroundNetworkingAppActive;
@property(readonly, nonatomic, getter=isRecommendationAllowed) _Bool recommendationAllowed;
@property(readonly, nonatomic, getter=isAskToJoinAllowed) _Bool askToJoinAllowed;
@property(readonly, nonatomic, getter=isCellularDataAvailable) _Bool cellularDataAvailable;
@property(readonly, nonatomic, getter=isUsingSustainedCellularData) _Bool usingSustainedCellularData;
- (void)resetOverrideStates;	// IMP=0x000000010012633c
- (void)dealloc;	// IMP=0x0000000100126214
- (id)_initPrivate;	// IMP=0x00000001001261b4

@end

