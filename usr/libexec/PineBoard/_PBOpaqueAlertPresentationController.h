//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class UIView;

@interface _PBOpaqueAlertPresentationController : UIPresentationController
{
    UIView *_opaqueView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100270754
@property(readonly, nonatomic) UIView *opaqueView; // @synthesize opaqueView=_opaqueView;
- (void)_animateWithCoordinator:(id)arg1 isPresenting:(_Bool)arg2;	// IMP=0x00000001002703f4
- (void)_configureSubviews;	// IMP=0x00000001002702d0
- (void)dismissalTransitionWillBegin;	// IMP=0x0000000100270220
- (void)presentationTransitionWillBegin;	// IMP=0x0000000100270170

@end
