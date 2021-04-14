//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, TVHMediaEntityCollectionHeaderMetadataView, UIColor, UILabel;

@interface TVHMediaEntityCollectionHeaderView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subtitleLabel;	// 16 = 0x10
    TVHMediaEntityCollectionHeaderMetadataView *_metadataView;	// 24 = 0x18
    UIColor *_textColor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000082f4
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) TVHMediaEntityCollectionHeaderMetadataView *metadataView; // @synthesize metadataView=_metadataView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)_labelWithTextStyle:(unsigned long long)arg1 fontWeight:(long long)arg2;	// IMP=0x0000000100008170
- (void)layoutSubviews;	// IMP=0x0000000100008020
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100007f6c
@property(copy, nonatomic) NSArray *metadataStrings;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000079f0

@end

