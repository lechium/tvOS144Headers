//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIContentUnavailableView.h>

@class MISSING_TYPE;

@interface _TtC8AppStore22ContentUnavailableView : _UIContentUnavailableView
{
    MISSING_TYPE *backgroundEffectView;	// 8 = 0x8
    MISSING_TYPE *appliesBackgroundEffect;	// 16 = 0x10
    MISSING_TYPE *_canBecomeFocused;	// 17 = 0x11
}

- (void).cxx_destruct;	// IMP=0x00000001000e7858
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000e78c0
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 style:(unsigned long long)arg3 includeBackdrop:(_Bool)arg4;	// IMP=0x00000001000e7894
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 style:(unsigned long long)arg3;	// IMP=0x00000001000e7868
- (id)_buttonBackgroundImageForStyle:(unsigned long long)arg1 controlState:(unsigned long long)arg2;	// IMP=0x00000001000e781c
- (id)_flatTextColor;	// IMP=0x00000001000e7778
- (double)_buttonVerticalSpacing;	// IMP=0x00000001000e776c
- (double)_labelVerticalSpacing;	// IMP=0x00000001000e7760
- (struct CGSize)_buttonSize;	// IMP=0x00000001000e774c
- (double)_buttonAlpha;	// IMP=0x00000001000e7744
- (double)_labelAlpha;	// IMP=0x00000001000e773c
- (id)_buttonFont;	// IMP=0x00000001000e7bf8
- (id)_titleFont;	// IMP=0x00000001000e7700
@property(nonatomic) _Bool canBecomeFocused;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000e7578
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000e7550

@end
