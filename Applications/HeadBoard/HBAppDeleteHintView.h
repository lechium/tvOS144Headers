//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIVisualEffectView;

@interface HBAppDeleteHintView : UIView
{
    UIVisualEffectView *_effectView;	// 8 = 0x8
    UIImageView *_playPauseGlyphView;	// 16 = 0x10
    UILabel *_leftLabel;	// 24 = 0x18
    UILabel *_rightLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100034d88
- (void)_updateWithUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000100034c7c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100034bf8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100034b40
- (void)layoutSubviews;	// IMP=0x00000001000349a8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100034524

@end
