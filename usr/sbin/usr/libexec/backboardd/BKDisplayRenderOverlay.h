//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKSDisplayRenderOverlayDescribing-Protocol.h"
#import "BSDescriptionProviding-Protocol.h"

@class BKDisplayRenderOverlayPersistenceCoordinator, BKSDisplayProgressIndicatorProperties, BKSDisplayRenderOverlayDescriptor, CADisplay, NSString;

@interface BKDisplayRenderOverlay : NSObject <BKSDisplayRenderOverlayDescribing, BSDescriptionProviding>
{
    BKSDisplayRenderOverlayDescriptor *_descriptor;	// 8 = 0x8
    BKDisplayRenderOverlayPersistenceCoordinator *_persistenceCoordinator;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    float _level;	// 32 = 0x20
    _Bool _visible;	// 36 = 0x24
    _Bool _disablesDisplayUpdates;	// 37 = 0x25
    _Bool _animates;	// 38 = 0x26
    _Bool _frozen;	// 39 = 0x27
    double _scale;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010001c8ac
@property(nonatomic, getter=_scale, setter=_setScale:) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic, getter=_persistenceCoordinator, setter=_setPersistenceCoordinator:) BKDisplayRenderOverlayPersistenceCoordinator *persistenceCoordinator; // @synthesize persistenceCoordinator=_persistenceCoordinator;
@property(readonly, nonatomic) _Bool isFrozen; // @synthesize isFrozen=_frozen;
@property(nonatomic) _Bool animates; // @synthesize animates=_animates;
@property(readonly, nonatomic) _Bool disablesDisplayUpdates; // @synthesize disablesDisplayUpdates=_disablesDisplayUpdates;
@property(nonatomic, setter=_setType:) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) float level; // @synthesize level=_level;
@property(readonly, nonatomic) BKSDisplayRenderOverlayDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000010001c784
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000010001c730
- (id)succinctDescriptionBuilder;	// IMP=0x000000010001c6c4
- (id)succinctDescription;	// IMP=0x000000010001c670
@property(readonly, copy) NSString *description;
- (void)_wrapInCATransaction:(CDUnknownBlockType)arg1;	// IMP=0x000000010001c5f0
- (id)_persistenceData;	// IMP=0x000000010001c574
- (void)_cleanup;	// IMP=0x000000010001c570
- (void)_freeze;	// IMP=0x000000010001c56c
- (void)_dismissWithAnimationSettings:(id)arg1;	// IMP=0x000000010001c568
- (void)_stopAnimating;	// IMP=0x000000010001c564
- (void)_startAnimating;	// IMP=0x000000010001c560
- (_Bool)_presentWithAnimationSettings:(id)arg1;	// IMP=0x000000010001c558
- (void)dismissWithAnimationSettings:(id)arg1;	// IMP=0x000000010001c400
- (void)freeze;	// IMP=0x000000010001c274
- (_Bool)presentWithAnimationSettings:(id)arg1;	// IMP=0x000000010001c08c
@property(readonly, nonatomic, getter=isInterstitial) _Bool interstitial;
@property(readonly, nonatomic) BKSDisplayProgressIndicatorProperties *progressIndicatorProperties;
@property(readonly, nonatomic) _Bool lockBacklight;
@property(readonly, nonatomic) long long interfaceOrientation;
@property(readonly, retain, nonatomic) CADisplay *display;
@property(readonly, copy, nonatomic) NSString *name;
- (void)dealloc;	// IMP=0x000000010001bf1c
- (id)_initWithPersistenceData:(id)arg1;	// IMP=0x000000010001be60
- (id)initWithOverlayDescriptor:(id)arg1 level:(float)arg2;	// IMP=0x000000010001bcc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

