//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface _TtC6Arcade18StoryCardMediaView : UIView
{
    MISSING_TYPE *state;	// 8 = 0x8
    MISSING_TYPE *artworkView;	// 16 = 0x10
    MISSING_TYPE *gridView;	// 24 = 0x18
    MISSING_TYPE *videoContainer;	// 32 = 0x20
    MISSING_TYPE *roundedCorners;	// 40 = 0x28
    MISSING_TYPE *config;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100179524
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001001793cc
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x0000000100179278
- (void)layoutSubviews;	// IMP=0x000000010017924c
@property(nonatomic, readonly) _Bool hasContent;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100179034
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100179014

@end

