//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel;

@interface TVHCatalogueListViewSectionHeaderView : UICollectionReusableView
{
    UILabel *_titleLabel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100092084
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;	// IMP=0x0000000100091fc8
- (void)prepareForReuse;	// IMP=0x0000000100091f74
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100091c98

@end
