//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHFocusRedirectView.h"

@class TVHProductCreditsView, TVHProductInfoView, _TVImageView;

@interface TVHProductBannerView : TVHFocusRedirectView
{
    unsigned long long _style;	// 8 = 0x8
    TVHProductInfoView *_infoView;	// 16 = 0x10
    _TVImageView *_imageView;	// 24 = 0x18
    TVHProductCreditsView *_creditsView;	// 32 = 0x20
}

+ (id)new;	// IMP=0x000000010006eb68
- (void).cxx_destruct;	// IMP=0x000000010006f22c
@property(readonly, nonatomic) TVHProductCreditsView *creditsView; // @synthesize creditsView=_creditsView;
@property(readonly, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) TVHProductInfoView *infoView; // @synthesize infoView=_infoView;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)layoutSubviews;	// IMP=0x000000010006ef8c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010006ef38
- (id)preferredFocusEnvironments;	// IMP=0x000000010006ee9c
- (id)initWithStyle:(unsigned long long)arg1;	// IMP=0x000000010006ed3c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010006ecb4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010006ec2c
- (id)init;	// IMP=0x000000010006eba4

@end
