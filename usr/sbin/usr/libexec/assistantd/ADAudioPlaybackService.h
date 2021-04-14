//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADRequestLifecycleListening-Protocol.h"
#import "AFAudioPlaybackService-Protocol.h"
#import "AFMemoryPressureListening-Protocol.h"
#import "CSAudioSessionControllerDelegate-Protocol.h"

@class AVAudioSession, NSHashTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ADAudioPlaybackService : NSObject <AFMemoryPressureListening, ADRequestLifecycleListening, CSAudioSessionControllerDelegate, AFAudioPlaybackService>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_listeners;	// 16 = 0x10
    NSMutableDictionary *_activeSessionsByRequest;	// 24 = 0x18
    NSMutableDictionary *_reusableSessionsByRequest;	// 32 = 0x20
    unsigned int _audioSessionID;	// 40 = 0x28
    AVAudioSession *_audioSession;	// 48 = 0x30
}

+ (id)sharedService;	// IMP=0x000000010020fce0
- (void).cxx_destruct;	// IMP=0x0000000100212260
- (void)memoryPressureObserver:(id)arg1 didChangeFromCondition:(long long)arg2 toCondition:(long long)arg3;	// IMP=0x00000001002121bc
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerResetNotification:(id)arg2;	// IMP=0x0000000100212050
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerLostNotification:(id)arg2;	// IMP=0x0000000100211ee4
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;	// IMP=0x0000000100211d78
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;	// IMP=0x0000000100211c0c
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2;	// IMP=0x0000000100211984
- (id)_audioSession;	// IMP=0x0000000100211918
- (void)_setAudioSessionID:(unsigned int)arg1;	// IMP=0x00000001002118f4
- (unsigned int)_audioSessionID;	// IMP=0x0000000100211894
- (void)_evictAllReusableSessionsForReason:(id)arg1;	// IMP=0x0000000100211730
- (void)_enumerateListenersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100211674
- (void)_invalidate;	// IMP=0x0000000100211594
- (void)_stopAllRequestsSynchronously;	// IMP=0x0000000100211568
- (void)_stopAllRequests:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010021139c
- (void)_stopRequest:(id)arg1 immediately:(_Bool)arg2;	// IMP=0x000000010021134c
- (void)_handleFinalizationForSession:(id)arg1 error:(id)arg2;	// IMP=0x00000001002110b4
- (void)_handleExecutionForSession:(id)arg1;	// IMP=0x0000000100210f54
- (void)_handlePreparationForSession:(id)arg1;	// IMP=0x0000000100210df4
- (void)_startRequest:(id)arg1 options:(unsigned long long)arg2 preparationHandler:(CDUnknownBlockType)arg3 executionHandler:(CDUnknownBlockType)arg4 finalizationHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001002106f4
- (void)_prewarmRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002104c4
- (void)requestLifecycleObserver:(id)arg1 requestWillBeginWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00000001002104c0
- (void)requestLifecycleObserver:(id)arg1 requestWasCancelledWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00000001002104bc
- (void)requestLifecycleObserver:(id)arg1 requestDidEndWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00000001002104b8
- (void)requestLifecycleObserverRequestDidEnd:(id)arg1 origin:(long long)arg2 client:(id)arg3;	// IMP=0x00000001002104b4
- (void)requestLifecycleObserverRequestWillBegin:(id)arg1 origin:(long long)arg2 client:(id)arg3;	// IMP=0x00000001002103f4
- (void)stopAllRequestsSynchronously;	// IMP=0x000000010021038c
- (void)stopAllRequests:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002102e0
- (void)stopRequest:(id)arg1 immediately:(_Bool)arg2;	// IMP=0x0000000100210228
- (void)startRequest:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001002101c8
- (void)prewarmRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002100ac
- (void)removeAllListeners;	// IMP=0x0000000100210040
- (void)removeListener:(id)arg1;	// IMP=0x000000010020ff94
- (void)addListener:(id)arg1;	// IMP=0x000000010020fee8
- (void)startRequest:(id)arg1 options:(unsigned long long)arg2 preparationHandler:(CDUnknownBlockType)arg3 executionHandler:(CDUnknownBlockType)arg4 finalizationHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010020fd58
- (id)_init;	// IMP=0x000000010020fb0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
