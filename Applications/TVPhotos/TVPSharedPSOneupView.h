//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVPOneupView.h"

@class UIView;

@interface TVPSharedPSOneupView : TVPOneupView
{
    UIView *_commentsBubbleView;	// 8 = 0x8
    UIView *_itemContainerView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010003eafc
@property(retain, nonatomic) UIView *itemContainerView; // @synthesize itemContainerView=_itemContainerView;
@property(retain, nonatomic) UIView *commentsBubbleView; // @synthesize commentsBubbleView=_commentsBubbleView;
- (id)_getSecondaryCommentsViewFromParentView;	// IMP=0x000000010003e968
- (void)_setFrameForSecondaryView:(id)arg1 itemViewFrame:(struct CGRect)arg2;	// IMP=0x000000010003e898
- (void)_performPushTransitionToView:(id)arg1 atNewIndex:(long long)arg2;	// IMP=0x000000010003e48c
- (void)_addAllSubviews;	// IMP=0x000000010003e348
- (void)_menuAction:(id)arg1;	// IMP=0x000000010003e2d0
- (void)_transitionToItemAtIndex:(long long)arg1;	// IMP=0x000000010003e094
- (void)_configureSupplementaryView;	// IMP=0x000000010003df44
- (void)_configureItemView:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000010003ddbc
- (void)_transitionToFullScreenMode;	// IMP=0x000000010003db9c
- (void)_transitionToCaptionMode;	// IMP=0x000000010003d720
- (void)_longPressAction:(id)arg1;	// IMP=0x000000010003d4e8
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000010003d4e0
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000010003d37c
- (id)preferredFocusEnvironments;	// IMP=0x000000010003d1c4
- (_Bool)canBecomeFocused;	// IMP=0x000000010003d1bc
- (void)switchToOneupCaptionView;	// IMP=0x000000010003d1b0

@end
