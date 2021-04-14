//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKDisplayRenderOverlay.h"

@class CAContext, CALayer;

@interface BKDisplayRenderOverlayPinkForTesting : BKDisplayRenderOverlay
{
    CAContext *_context;	// 8 = 0x8
    CALayer *_layer;	// 16 = 0x10
}

+ (void)doItHide;	// IMP=0x0000000100040a3c
+ (void)doItShow;	// IMP=0x0000000100040964
+ (void)doItShowKernel;	// IMP=0x000000010004083c
+ (id)overlayWithLevel:(float)arg1 display:(id)arg2;	// IMP=0x0000000100040764
- (void).cxx_destruct;	// IMP=0x0000000100040724
- (_Bool)_applyProgressIndicatorPropertiesToKernelIfNecessary;	// IMP=0x00000001000403f0
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100040304
- (void)_dismissWithAnimationSettings:(id)arg1;	// IMP=0x00000001000402a0
- (void)_freeze;	// IMP=0x000000010004029c
- (_Bool)_presentWithAnimationSettings:(id)arg1;	// IMP=0x000000010003fea4
- (_Bool)disablesDisplayUpdates;	// IMP=0x000000010003fe9c
- (void)dealloc;	// IMP=0x000000010003fe44
- (id)initWithOverlayDescriptor:(id)arg1 level:(float)arg2;	// IMP=0x000000010003fde8

@end

