/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFNotifyObserverDelegate.h>

@protocol OS_dispatch_queue;
@class AFWatchdogTimer, NSObject, AFQueue, AFNotifyObserver, NSString;

@interface AFMyriadMonitor : NSObject <AFNotifyObserverDelegate> {

	long long _state;
	AFWatchdogTimer* _timer;
	AFWatchdogTimer* _fetchRepostedMyriadDecisionTimer;
	NSObject*<OS_dispatch_queue> _myriadMonitorQueue;
	AFQueue* _completions;
	AFNotifyObserver* _beginObserver;
	AFNotifyObserver* _wonObserver;
	AFNotifyObserver* _lostObserver;
	AFNotifyObserver* _repostedWonObserver;
	double _myriadEventMonitorTimeout;
	BOOL _isRegisteredForMyriadEventNotification;
	BOOL _ignoreMyriadEvents;
	BOOL _isMonitoring;
	BOOL _ignoreRepostMyriadNotification;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMonitor;
-(id)init;
-(void)dealloc;
-(void)stopMonitoring;
-(BOOL)isMonitoring;
-(void)_enqueueBlock:(/*^block*/id)arg1 forReason:(id)arg2 ;
-(id)_myriadStateToString:(long long)arg1 ;
-(void)_registerForMyriadEvents;
-(void)_setDecisionIsPending;
-(void)_cancelRepostedMyriadDecisionTimer;
-(id)_fetchCurrentMyriadDecisionWithWaitTime:(double)arg1 ;
-(void)_deregisterFromRepostedDecisionResultsObservers;
-(void)_dequeueBlocksWithSignal:(long long)arg1 ;
-(void)_deregisterFromMyriadEventNotifications;
-(void)_clear;
-(void)_resultSeenWithValue:(BOOL)arg1 ;
-(void)_flushCompletions:(BOOL)arg1 ;
-(void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2 ;
-(void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(void)waitForMyriadDecisionWithCompletion:(/*^block*/id)arg1 ;
-(void)waitForMyriadDecisionForReason:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)startMonitoringWithTimeoutInterval:(double)arg1 ;
-(void)ignoreMyriadEvents:(BOOL)arg1 ;
-(void)dequeueBlocksWaitingForMyriadDecision;
-(BOOL)didWin;
-(void)_ignoreRepostMyriadNotification:(BOOL)arg1 ;
@end

