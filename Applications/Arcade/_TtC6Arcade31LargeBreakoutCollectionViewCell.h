//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC6Arcade22BaseCollectionViewCell.h"

@class MISSING_TYPE, NSArray, UIColor;

@interface _TtC6Arcade31LargeBreakoutCollectionViewCell : _TtC6Arcade22BaseCollectionViewCell
{
    MISSING_TYPE *isFeatured;	// 176 = 0xb0
    MISSING_TYPE *focusGuide;	// 184 = 0xb8
    MISSING_TYPE *videoContainer;	// 192 = 0xc0
    MISSING_TYPE *artworkView;	// 200 = 0xc8
    MISSING_TYPE *backgroundArtwork;	// 208 = 0xd0
    MISSING_TYPE *detailsView;	// 216 = 0xd8
    MISSING_TYPE *detailPosition;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x000000010004f50c
- (void)prepareForReuse;	// IMP=0x000000010004f454
- (void)layoutSubviews;	// IMP=0x000000010004f344
- (void)didUpdateFocusWithNotification:(id)arg1;	// IMP=0x000000010004f014
- (void)didMoveToWindow;	// IMP=0x000000010004efe8
@property(nonatomic, readonly) _Bool canBecomeFocused;
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property(nonatomic, retain) UIColor *backgroundColor;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010004ebc0

@end

