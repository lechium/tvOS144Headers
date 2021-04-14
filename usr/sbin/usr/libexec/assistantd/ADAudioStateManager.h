//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADAudioStateAnnouncing-Protocol.h"
#import "CSAudioSessionControllerDelegate-Protocol.h"

@class AFAudioState, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface ADAudioStateManager : NSObject <CSAudioSessionControllerDelegate, ADAudioStateAnnouncing>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableSet *_listenerProxies;	// 16 = 0x10
    AFAudioState *_currentAudioState;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x000000010025cb08
- (void).cxx_destruct;	// IMP=0x000000010025dae0
- (void)_didChangeAudioStateFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000010025d8e8
- (void)_updateAudioSessionID:(unsigned int)arg1;	// IMP=0x000000010025d798
- (unsigned int)_fetchAudioSessionID;	// IMP=0x000000010025d6a8
- (void)_removeListenerProxiesWithListener:(id)arg1;	// IMP=0x000000010025d4fc
- (id)_currentAudioState;	// IMP=0x000000010025d4dc
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerResetNotification:(id)arg2;	// IMP=0x000000010025d394
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerLostNotification:(id)arg2;	// IMP=0x000000010025d274
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;	// IMP=0x000000010025d12c
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;	// IMP=0x000000010025d00c
- (void)removeAllListeners;	// IMP=0x000000010025cfa0
- (void)removeListener:(id)arg1;	// IMP=0x000000010025cec8
- (void)addListener:(id)arg1;	// IMP=0x000000010025cdc4
- (void)updateAudioSessionID:(unsigned int)arg1;	// IMP=0x000000010025cd50
- (void)getAudioStateWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010025cb74
- (id)init;	// IMP=0x000000010025c9c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
