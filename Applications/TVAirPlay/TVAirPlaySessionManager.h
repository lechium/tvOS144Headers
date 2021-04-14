//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVAirPlayMediaViewControllerDelegate-Protocol.h"

@class NSArray, NSMapTable, NSMutableArray, NSString, TVAirPlayMediaViewController, TVSStateMachine;

@interface TVAirPlaySessionManager : NSObject <TVAirPlayMediaViewControllerDelegate>
{
    NSMutableArray *_sessions;	// 8 = 0x8
    NSMapTable *_pendingCompletionHandlers;	// 16 = 0x10
    TVSStateMachine *_stateMachine;	// 24 = 0x18
    TVAirPlayMediaViewController *_mediaViewController;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010000ae20
- (void).cxx_destruct;	// IMP=0x000000010000cb10
- (void)_callPendingCompletionHandlersWithError:(id)arg1;	// IMP=0x000000010000c990
- (void)_updatePresentedViewController;	// IMP=0x000000010000c978
- (void)_updateForSessionChange;	// IMP=0x000000010000c91c
- (id)_sessionOfType:(long long)arg1 identifier:(id)arg2 activeOnly:(_Bool)arg3;	// IMP=0x000000010000c738
- (void)_requestMediaViewController;	// IMP=0x000000010000c4f4
- (id)_cleanupWithError:(id)arg1;	// IMP=0x000000010000c2dc
- (id)_handleForegroundUpdate;	// IMP=0x000000010000c0b8
- (id)_handleBackgroundSessionUpdate;	// IMP=0x000000010000be5c
- (void)_initializeStateMachine;	// IMP=0x000000010000bb18
- (void)mediaViewControllerDidDismiss:(id)arg1;	// IMP=0x000000010000ba34
- (void)mediaViewControllerDidBecomeReady:(id)arg1;	// IMP=0x000000010000b90c
@property(readonly, copy, nonatomic) NSArray *activeSessions;
- (id)APRKVideoSessionSession;	// IMP=0x000000010000b8d4
- (id)APRKPinSession;	// IMP=0x000000010000b868
- (id)urlSessionWithID:(id)arg1;	// IMP=0x000000010000b7d8
- (id)streamingSessionWithID:(id)arg1;	// IMP=0x000000010000b7c0
- (id)presentationSessionWithID:(id)arg1;	// IMP=0x000000010000b7a8
- (id)infoSessionWithID:(id)arg1;	// IMP=0x000000010000b6e8
- (id)pinSessionWithID:(id)arg1;	// IMP=0x000000010000b6d0
- (void)_removeSession:(id)arg1;	// IMP=0x000000010000b614
- (void)_deregisterLegacySession:(id)arg1 options:(long long)arg2;	// IMP=0x000000010000b2a0
- (void)deregisterSession:(id)arg1 options:(long long)arg2;	// IMP=0x000000010000b180
- (void)registerSession:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000afe4
- (void)dealloc;	// IMP=0x000000010000af6c
- (id)init;	// IMP=0x000000010000aec4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

