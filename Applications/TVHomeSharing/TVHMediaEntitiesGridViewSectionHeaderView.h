//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSLayoutConstraint, NSString, UILabel;

@interface TVHMediaEntitiesGridViewSectionHeaderView : UICollectionReusableView
{
    double _titleTopOffset;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    NSLayoutConstraint *_titleLabelTopAnchor;	// 24 = 0x18
}

+ (double)defaultTitleTopOffset;	// IMP=0x0000000100084d50
- (void).cxx_destruct;	// IMP=0x0000000100084e34
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTopAnchor; // @synthesize titleLabelTopAnchor=_titleLabelTopAnchor;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double titleTopOffset; // @synthesize titleTopOffset=_titleTopOffset;
- (void)updateConstraints;	// IMP=0x0000000100084d58
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010008498c

@end
