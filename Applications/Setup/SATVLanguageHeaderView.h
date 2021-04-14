//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SATVHeaderView;

@interface SATVLanguageHeaderView : UIView
{
    SATVHeaderView *_visibleHeaderView;	// 8 = 0x8
    SATVHeaderView *_hiddenHeaderView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100078a94
@property(retain, nonatomic) SATVHeaderView *hiddenHeaderView; // @synthesize hiddenHeaderView=_hiddenHeaderView;
@property(retain, nonatomic) SATVHeaderView *visibleHeaderView; // @synthesize visibleHeaderView=_visibleHeaderView;
- (void)setTitle:(id)arg1 subtitle:(id)arg2 languageCode:(id)arg3 animated:(_Bool)arg4;	// IMP=0x00000001000781bc
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100078150
- (void)layoutSubviews;	// IMP=0x0000000100078058
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100077f14

@end

