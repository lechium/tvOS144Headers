//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class HBApp, NSString, UIView;

@interface HBFolderFadeResignItemAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _resignTransitionToLeft;	// 8 = 0x8
    HBApp *_transitioningApp;	// 16 = 0x10
    UIView *_transitioningView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100042530
@property(nonatomic) _Bool resignTransitionToLeft; // @synthesize resignTransitionToLeft=_resignTransitionToLeft;
@property(retain, nonatomic) UIView *transitioningView; // @synthesize transitioningView=_transitioningView;
@property(retain, nonatomic) HBApp *transitioningApp; // @synthesize transitioningApp=_transitioningApp;
- (void)animateTransition:(id)arg1;	// IMP=0x00000001000420a8
- (double)transitionDuration:(id)arg1;	// IMP=0x00000001000420a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

