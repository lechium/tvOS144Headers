//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC8AppStore15TitleHeaderView : UICollectionReusableView
{
    MISSING_TYPE *eyebrowText;	// 8 = 0x8
    MISSING_TYPE *eyebrowLabel;	// 24 = 0x18
    MISSING_TYPE *eyebrowArtwork;	// 32 = 0x20
    MISSING_TYPE *eyebrowArtworkView;	// 40 = 0x28
    MISSING_TYPE *titleLabel;	// 48 = 0x30
    MISSING_TYPE *titleArtwork;	// 56 = 0x38
    MISSING_TYPE *titleArtworkView;	// 64 = 0x40
    MISSING_TYPE *detailLabel;	// 72 = 0x48
    MISSING_TYPE *style;	// 4182240981 = 0xf947eed5
    MISSING_TYPE *accessoryView;	// 2483492628 = 0x94071714
    MISSING_TYPE *accessoryFocusGuide;	// 0 = 0x0
    MISSING_TYPE *accessory;	// 2432713696 = 0x910043e0
    MISSING_TYPE *accessoryAction;	// 2657551329 = 0x9e6703e1
    MISSING_TYPE *separatorLineView;	// 2657551331 = 0x9e6703e3
    MISSING_TYPE *separatorInset;	// 2483492608 = 0x94071700
    MISSING_TYPE *avoidanceRegion;	// 4182153960 = 0xf9469ae8
}

- (void).cxx_destruct;	// IMP=0x000000010013ee40
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property(nonatomic, readonly) _Bool canBecomeFocused;
- (id)_accessibilitySupplementaryFooterViews;	// IMP=0x000000010013ec3c
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic) _Bool isAccessibilityElement;
@property(nonatomic, copy) NSString *accessibilityLabel;
- (void)prepareForReuse;	// IMP=0x000000010013e4cc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010013e290
- (void)layoutSubviews;	// IMP=0x000000010013e264
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010013cc0c
- (void)didTapWithAccessoryView:(id)arg1;	// IMP=0x000000010013c868
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010013ba00
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010013b9e0

@end

