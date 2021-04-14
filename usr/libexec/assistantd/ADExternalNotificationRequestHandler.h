//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADAudioPlaybackServiceListening-Protocol.h"
#import "ADRequestDelayManagerDelegate-Protocol.h"
#import "ADRequestLifecycleListening-Protocol.h"
#import "AFNotifyObserverDelegate-Protocol.h"

@class ADExternalNotificationRequest, ADRequestDelayManager, AFNotifyObserver, AFQueue, AFWatchdogTimer, NSString;
@protocol OS_dispatch_queue;

@interface ADExternalNotificationRequestHandler : NSObject <AFNotifyObserverDelegate, ADRequestLifecycleListening, ADRequestDelayManagerDelegate, ADAudioPlaybackServiceListening>
{
    AFWatchdogTimer *_currentNotificationTimer;	// 8 = 0x8
    AFWatchdogTimer *_stateTimer;	// 16 = 0x10
    AFWatchdogTimer *_triggerlessUserReplyTimer;	// 24 = 0x18
    _Bool _triggerlessUserReplyTimerTimedOut;	// 32 = 0x20
    long long _currentState;	// 40 = 0x28
    ADRequestDelayManager *_currentRequestDelayManager;	// 48 = 0x30
    AFNotifyObserver *_clientStateObserver;	// 56 = 0x38
    _Bool _triggerlessRequestEnteredListeningState;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    ADExternalNotificationRequest *_currentRequest;	// 80 = 0x50
    ADExternalNotificationRequest *_pendingRequest;	// 88 = 0x58
    AFQueue *_queuedNotificationRequests;	// 96 = 0x60
}

+ (id)sharedNotificationRequestHandler;	// IMP=0x0000000100285738
- (void).cxx_destruct;	// IMP=0x00000001002898f0
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;	// IMP=0x000000010028986c
- (void)audioPlaybackService:(id)arg1 didStopRequest:(id)arg2 error:(id)arg3;	// IMP=0x0000000100289868
- (void)audioPlaybackService:(id)arg1 didStartRequest:(id)arg2;	// IMP=0x0000000100289684
- (void)audioPlaybackService:(id)arg1 willStartRequest:(id)arg2;	// IMP=0x0000000100289680
- (void)requestDelayManager:(id)arg1 didStopUnexpectly:(_Bool)arg2;	// IMP=0x000000010028963c
- (void)requestDelayManager:(id)arg1 interruptedWithType:(long long)arg2;	// IMP=0x00000001002893d4
- (void)requestLifecycleObserver:(id)arg1 requestDidEndWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x0000000100288cdc
- (void)requestLifecycleObserver:(id)arg1 requestWasCancelledWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x0000000100288840
- (void)requestLifecycleObserver:(id)arg1 requestWillBeginWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00000001002883c0
- (void)_startTriggerlessFollowupRequestWithRequestDelayManager:(id)arg1 delayType:(long long)arg2;	// IMP=0x0000000100287e50
- (void)audioSessionDidEnd;	// IMP=0x0000000100287bb0
- (void)_clearCurrentNotificationTimer;	// IMP=0x0000000100287b7c
- (void)_startTimerToResetStateFrom:(long long)arg1;	// IMP=0x0000000100287a58
- (void)_startReadingNotification:(id)arg1;	// IMP=0x0000000100287300
- (void)_handleNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100286d04
- (void)handleNotificationRequestForNotification:(id)arg1 fromApp:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100285e14
- (void)_changeCurrentStateToState:(long long)arg1;	// IMP=0x0000000100285bf4
- (void)_clearTriggerlessUserReplyTimer;	// IMP=0x0000000100285b2c
- (void)_clearRequestState;	// IMP=0x0000000100285ac4
- (void)_completeNotificationsWithSuccess:(_Bool)arg1;	// IMP=0x0000000100285988
- (id)_queuedNotificationRequests;	// IMP=0x0000000100285944
- (id)_queue;	// IMP=0x000000010028593c
- (id)_pendingRequest;	// IMP=0x0000000100285934
- (void)_setCurrentRequest:(id)arg1;	// IMP=0x0000000100285928
- (id)_currentRequest;	// IMP=0x0000000100285920
- (long long)_currentState;	// IMP=0x0000000100285918
- (id)_sharedCommandCenter;	// IMP=0x0000000100285904
- (id)_init;	// IMP=0x00000001002857b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
