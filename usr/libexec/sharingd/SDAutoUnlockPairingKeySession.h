//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDAutoUnlockPairingSession.h"

@class NSData, SDUnlockSetupRequest;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockPairingKeySession : SDAutoUnlockPairingSession
{
    _Bool _waitingForUnlock;	// 8 = 0x8
    _Bool _waitingForLTK;	// 9 = 0x9
    _Bool _requestedLTKForRemote;	// 10 = 0xa
    _Bool _companionViewNotSyncing;	// 11 = 0xb
    _Bool _companionNeedsUnlock;	// 12 = 0xc
    _Bool _companionCurrentlySyncing;	// 13 = 0xd
    _Bool _canceled;	// 14 = 0xe
    NSData *_requestData;	// 16 = 0x10
    SDUnlockSetupRequest *_request;	// 24 = 0x18
    NSData *_longTermKey;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010004ba50
@property(retain, nonatomic) NSData *longTermKey; // @synthesize longTermKey=_longTermKey;
@property(retain) SDUnlockSetupRequest *request; // @synthesize request=_request;
@property _Bool canceled; // @synthesize canceled=_canceled;
@property _Bool companionCurrentlySyncing; // @synthesize companionCurrentlySyncing=_companionCurrentlySyncing;
@property _Bool companionNeedsUnlock; // @synthesize companionNeedsUnlock=_companionNeedsUnlock;
@property _Bool companionViewNotSyncing; // @synthesize companionViewNotSyncing=_companionViewNotSyncing;
@property _Bool requestedLTKForRemote; // @synthesize requestedLTKForRemote=_requestedLTKForRemote;
@property _Bool waitingForLTK; // @synthesize waitingForLTK=_waitingForLTK;
@property _Bool waitingForUnlock; // @synthesize waitingForUnlock=_waitingForUnlock;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
- (void)transport:(id)arg1 didReceivePayload:(id)arg2 type:(unsigned short)arg3 deviceID:(id)arg4;	// IMP=0x000000010004b798
- (void)sendSetupCreateEscrowRecordStepData:(id)arg1 error:(id)arg2;	// IMP=0x000000010004b4a0
- (void)sendSetupSessionCreatedWithLocalKey:(id)arg1 stepData:(id)arg2 error:(id)arg3 failureReason:(unsigned int)arg4 ltkSyncing:(id)arg5;	// IMP=0x000000010004add0
- (void)sendKeyDeviceLocked;	// IMP=0x000000010004ac44
- (void)handleCreateEscrowSecret:(id)arg1;	// IMP=0x000000010004a688
- (void)handleSetupRequest;	// IMP=0x000000010004a684
- (void)notifyDelegateWithError:(id)arg1;	// IMP=0x000000010004a548
- (void)watchLTKsChanged:(id)arg1;	// IMP=0x000000010004a074
- (void)keyBagLockStateChange:(id)arg1;	// IMP=0x000000010004a070
- (void)addObservers;	// IMP=0x0000000100049fac
- (void)handleTimerFired;	// IMP=0x0000000100049dac
- (_Bool)ltkHashMatches;	// IMP=0x0000000100049c48
- (_Bool)canCreatePairing;	// IMP=0x0000000100049c40
- (void)onqueue_cancel;	// IMP=0x0000000100049b20
- (void)cancel;	// IMP=0x0000000100049a94
- (void)onqueue_start;	// IMP=0x00000001000499fc
- (void)start;	// IMP=0x0000000100049970
- (void)invalidate;	// IMP=0x0000000100049828
- (id)initWithDevice:(id)arg1 sessionID:(id)arg2;	// IMP=0x00000001000497a4

@end

