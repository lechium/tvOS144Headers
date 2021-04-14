//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class UIView, UIVisualEffectView;

@interface HBFolderPresentationController : UIPresentationController
{
    UIVisualEffectView *_visualEffectView;	// 8 = 0x8
    UIView *_dimmingView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000468dc
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010004679c
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x000000010004672c
- (void)dismissalTransitionWillBegin;	// IMP=0x000000010004659c
- (void)presentationTransitionDidEnd:(_Bool)arg1;	// IMP=0x00000001000464c0
- (void)presentationTransitionWillBegin;	// IMP=0x0000000100046140

@end

