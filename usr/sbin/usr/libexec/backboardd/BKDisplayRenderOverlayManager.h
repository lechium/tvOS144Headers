//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKDisplayBrightnessController, BKOrientationManager, CAWindowServer, NSMutableIndexSet, NSMutableSet;
@protocol OS_dispatch_queue;

@interface BKDisplayRenderOverlayManager : NSObject
{
    CAWindowServer *_windowServer;	// 8 = 0x8
    BKOrientationManager *_orientationManager;	// 16 = 0x10
    BKDisplayBrightnessController *_backlightManager;	// 24 = 0x18
    NSMutableSet *_activeOverlays;	// 32 = 0x20
    NSMutableSet *_overlaysDisablingUpdates;	// 40 = 0x28
    long long _lockedOrientation;	// 48 = 0x30
    _Bool _backlightLocked;	// 56 = 0x38
    NSMutableIndexSet *_frozenDisplayIDs;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x0000000100059bb8
- (void).cxx_destruct;	// IMP=0x000000010005920c
@property(readonly, nonatomic) long long lockedOrientation; // @synthesize lockedOrientation=_lockedOrientation;
@property(readonly, nonatomic) _Bool backlightLocked; // @synthesize backlightLocked=_backlightLocked;
@property(readonly, nonatomic) NSMutableSet *overlaysDisablingUpdates; // @synthesize overlaysDisablingUpdates=_overlaysDisablingUpdates;
- (id)_updateWindowServerUpdatesForOverlays:(id)arg1;	// IMP=0x0000000100059050
- (void)_queue_setBacklightLocked:(_Bool)arg1;	// IMP=0x0000000100058fc8
- (void)_queue_setLockedOrientation:(long long)arg1;	// IMP=0x0000000100058f48
- (void)_queue_updateStateForActiveOverlayChange;	// IMP=0x0000000100058e40
- (void)_queue_freezeOverlay:(id)arg1;	// IMP=0x0000000100058b74
- (void)_queue_setOverlaysDisablingUpdates:(id)arg1;	// IMP=0x0000000100058b18
- (_Bool)isShowingNonBootUIOverlays;	// IMP=0x0000000100058a88
- (void)prepareForRestart;	// IMP=0x0000000100058a30
- (_Bool)freezeOverlay:(id)arg1;	// IMP=0x0000000100058978
- (_Bool)removeOverlay:(id)arg1 withAnimationSettings:(id)arg2;	// IMP=0x0000000100058880
- (_Bool)applyOverlay:(id)arg1 withAnimationSettings:(id)arg2;	// IMP=0x0000000100058788
@property(readonly, nonatomic) NSMutableSet *activeOverlays; // @synthesize activeOverlays=_activeOverlays;
- (id)activeOverlayWithDescriptor:(id)arg1;	// IMP=0x00000001000585f8
- (id)description;	// IMP=0x0000000100058570
- (id)_initWithPersistenceCoordinator:(id)arg1 orientationManager:(id)arg2 backlightManager:(id)arg3 windowServer:(id)arg4;	// IMP=0x00000001000581c4

@end
