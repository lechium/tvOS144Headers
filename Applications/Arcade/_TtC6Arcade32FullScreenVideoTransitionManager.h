//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC6Arcade32FullScreenVideoTransitionManager : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    MISSING_TYPE *presentingViewController;	// 8 = 0x8
    MISSING_TYPE *presentedViewController;	// 16 = 0x10
    MISSING_TYPE *originalTransitioningSuperview;	// 24 = 0x18
    MISSING_TYPE *transitionDirection;	// 32 = 0x20
    MISSING_TYPE *transitioningView;	// 40 = 0x28
    MISSING_TYPE *originalTransitioningViewFrame;	// 48 = 0x30
    MISSING_TYPE *activeTransitionContext;	// 88 = 0x58
    MISSING_TYPE *delegate;	// 96 = 0x60
    MISSING_TYPE *animationDuration;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000001000a2aa4
- (id)init;	// IMP=0x00000001000a2b1c
- (void)animateTransition:(id)arg1;	// IMP=0x00000001000a20d8
- (double)transitionDuration:(id)arg1;	// IMP=0x00000001000a1fac
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00000001000a1f9c
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x00000001000a1f00

@end

