//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCATModernMenuBackgroundContainerView, UIVisualEffectView;

@interface SCATModernMenuBackgroundView : UIView
{
    struct CGPath *_menuBorderPath;	// 8 = 0x8
    _Bool _shouldRoundMenuCorners;	// 16 = 0x10
    SCATModernMenuBackgroundContainerView *_containerView;	// 24 = 0x18
    UIVisualEffectView *_backdropView;	// 32 = 0x20
    long long _tip;	// 40 = 0x28
    double _normalizedHorizontalTipCenter;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100025fc4
@property(nonatomic) _Bool shouldRoundMenuCorners; // @synthesize shouldRoundMenuCorners=_shouldRoundMenuCorners;
@property(nonatomic) double normalizedHorizontalTipCenter; // @synthesize normalizedHorizontalTipCenter=_normalizedHorizontalTipCenter;
@property(nonatomic) long long tip; // @synthesize tip=_tip;
@property(retain, nonatomic) UIVisualEffectView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) SCATModernMenuBackgroundContainerView *containerView; // @synthesize containerView=_containerView;
- (id)scatOverrideCursorTheme;	// IMP=0x0000000100025f30
- (_Bool)scatPerformAction:(int)arg1;	// IMP=0x0000000100025e70
- (_Bool)scatSupportsAction:(int)arg1;	// IMP=0x0000000100025e64
- (struct CGPath *)scatPath;	// IMP=0x0000000100025e58
- (id)scatSpeakableDescription;	// IMP=0x0000000100025e4c
- (struct CGPath *)_copyMenuPathWithNoTipForRect:(struct CGRect)arg1;	// IMP=0x0000000100025d28
- (struct CGPath *)_copyMenuPathWithTipForRect:(struct CGRect)arg1;	// IMP=0x0000000100025964
- (double)_adjustedXAnchorPositionToClearCornersOfRect:(struct CGRect)arg1;	// IMP=0x00000001000258b4
- (void)_updateBackdropWithPath:(struct CGPath *)arg1;	// IMP=0x0000000100025808
- (double)_menuTipBaseCornerRadius;	// IMP=0x0000000100025800
- (double)_menuTipCornerRadius;	// IMP=0x00000001000257f8
- (double)_menuTipHeight;	// IMP=0x00000001000257f0
- (double)_menuTipBase;	// IMP=0x00000001000257e8
- (double)_menuCornerRadius;	// IMP=0x00000001000257bc
- (void)layoutSubviews;	// IMP=0x0000000100025658
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100025604
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 includeTip:(_Bool)arg2;	// IMP=0x0000000100025574
@property(nonatomic) struct CGPath *menuBorderPath;
- (void)dealloc;	// IMP=0x0000000100025454
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100025344

@end

