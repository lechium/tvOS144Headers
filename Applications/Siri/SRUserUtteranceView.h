//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SRTapToEditView, SUICStreamingTextView;

@interface SRUserUtteranceView : UIView
{
    struct NSDirectionalEdgeInsets _edgeInsets;	// 8 = 0x8
    SUICStreamingTextView *_clonedStreamingTextView;	// 40 = 0x28
    SUICStreamingTextView *_streamingTextView;	// 48 = 0x30
    _Bool _blendEffectEnabled;	// 56 = 0x38
    SRTapToEditView *_tapToEditView;	// 64 = 0x40
    _Bool _chevronHasBeenShown;	// 72 = 0x48
    _Bool _editable;	// 73 = 0x49
}

+ (double)insertionAnimatedZPosition;	// IMP=0x000000010006d170
- (void).cxx_destruct;	// IMP=0x000000010006e11c
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
- (double)_scaledSiriTapToEditViewLeading;	// IMP=0x000000010006e09c
- (double)_indentWidth;	// IMP=0x000000010006e068
- (double)_streamingTextMaxYToTapToEditOriginDistance;	// IMP=0x000000010006df84
- (void)layoutSubviews;	// IMP=0x000000010006dd1c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010006dc30
@property(nonatomic, getter=isBlendEffectEnabled) _Bool blendEffectEnabled;
@property(copy, nonatomic) NSString *text;
- (double)baselineOffsetFromBottom;	// IMP=0x000000010006d1d8
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x000000010006d17c
- (void)setChevronHidden:(_Bool)arg1;	// IMP=0x000000010006d114
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010006cf3c

@end

