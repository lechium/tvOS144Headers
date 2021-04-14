//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class APSTopicGroup, NSMutableSet, NSString, PCPersistentTimer;
@protocol APSTopicManagerDelegate;

@interface APSTopicManager : NSObject
{
    APSTopicGroup *_groups[3];	// 8 = 0x8
    NSMutableSet *_alsInhibitedTopics;	// 32 = 0x20
    PCPersistentTimer *_pendingFilterTimer;	// 40 = 0x28
    id <APSTopicManagerDelegate> _delegate;	// 48 = 0x30
    _Bool _isPowerEfficientToSendFilter;	// 56 = 0x38
    _Bool _globalALSBudgetSaturated;	// 57 = 0x39
    _Bool _pendingServerUpdate;	// 58 = 0x3a
}

- (void).cxx_destruct;	// IMP=0x00000001000447ec
@property(nonatomic) __weak id <APSTopicManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) NSString *logString;
- (id)logStringForCategory:(long long)arg1;	// IMP=0x00000001000444a8
- (void)performFilterBlock:(CDUnknownBlockType)arg1 forCategory:(long long)arg2;	// IMP=0x0000000100044268
- (void)_scheduleServerUpdate:(_Bool)arg1 withTimer:(_Bool)arg2;	// IMP=0x0000000100044258
- (void)_scheduleServerUpdate:(_Bool)arg1 withTimer:(_Bool)arg2 shortInterval:(_Bool)arg3;	// IMP=0x0000000100043f48
- (void)_pendingFilterTimerFired;	// IMP=0x0000000100043e68
- (void)_processPendingChangeIfNeeded;	// IMP=0x0000000100043d98
- (void)_clearPendingFilterTimer;	// IMP=0x0000000100043d60
- (void)_processTopicChangeImmediately:(_Bool)arg1 alertDelegate:(_Bool)arg2;	// IMP=0x0000000100043764
- (void)removeFromALSInhibitedTopics:(id)arg1;	// IMP=0x0000000100043610
- (void)addToALSInhibitedTopics:(id)arg1;	// IMP=0x00000001000434a4
- (void)setGlobalALSBudgetSaturated:(_Bool)arg1;	// IMP=0x000000010004339c
- (void)setIsPowerEfficientToSendFilter:(_Bool)arg1;	// IMP=0x0000000100043290
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 nonWakingTopics:(id)arg4 forCategory:(long long)arg5;	// IMP=0x00000001000431f4
- (long long)_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 nonWakingTopics:(id)arg4 forCategory:(long long)arg5 pretend:(_Bool)arg6;	// IMP=0x0000000100042de8
- (_Bool)_categoryShouldTriggerUpdate:(long long)arg1;	// IMP=0x0000000100042dd8
@property(readonly, nonatomic) _Bool hasListeningTopics;
- (id)hasTopicHash:(id)arg1;	// IMP=0x0000000100042c14
- (id)hasOpportunisticTopicHash:(id)arg1 forCategory:(long long)arg2;	// IMP=0x0000000100042b6c
- (id)hasNonWakingTopicHash:(id)arg1;	// IMP=0x0000000100042abc
- (id)hasOpportunisticTopicHash:(id)arg1;	// IMP=0x0000000100042a0c
- (id)hasRecentlyRemovedTopicHash:(id)arg1;	// IMP=0x000000010004295c
- (id)hasIgnoredTopicHash:(id)arg1;	// IMP=0x00000001000428ac
- (id)hasEnabledTopicHash:(id)arg1;	// IMP=0x00000001000427fc
- (void)dealloc;	// IMP=0x0000000100042754
- (id)initWithEnvironment:(id)arg1;	// IMP=0x000000010004269c

@end
