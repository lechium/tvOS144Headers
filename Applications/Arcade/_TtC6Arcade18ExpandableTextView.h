//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, _TtC6Arcade19DynamicTypeTextView;

@interface _TtC6Arcade18ExpandableTextView : UIView
{
    MISSING_TYPE *textLabel;	// 8 = 0x8
    MISSING_TYPE *moreButton;	// 16 = 0x10
    MISSING_TYPE *hasMoreButton;	// 24 = 0x18
    MISSING_TYPE *automaticallyAdjustTextColors;	// 25 = 0x19
    MISSING_TYPE *alwaysShowsMoreButtonWhenCollapsed;	// 26 = 0x1a
    MISSING_TYPE *collapsedNumberOfLines;	// 32 = 0x20
    MISSING_TYPE *isCollapsed;	// 40 = 0x28
    MISSING_TYPE *moreTapHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010001c074
@property(nonatomic, readonly) _TtC6Arcade19DynamicTypeTextView *accessibilityTextLabel;
- (void)moreFrom:(id)arg1;	// IMP=0x000000010001be38
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010001bd64
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x000000010001bac0
- (void)layoutSubviews;	// IMP=0x000000010001b81c
@property(nonatomic) struct CGRect frame;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010001b244
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010001b224

@end

