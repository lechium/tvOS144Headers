//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVPLabel.h"

@class CALayer, NSArray, _TVAnimatedImageView;

@interface TVPAnimatedLabel : TVPLabel
{
    _Bool _marqueeNeeded;	// 8 = 0x8
    _Bool _marqueeing;	// 9 = 0x9
    CALayer *_maskLayer;	// 16 = 0x10
    _Bool _animating;	// 24 = 0x18
    _Bool _paused;	// 25 = 0x19
    float _scrollRate;	// 28 = 0x1c
    double _marqueeDelay;	// 32 = 0x20
    double _replicationPadding;	// 40 = 0x28
    double _maskCapWidth;	// 48 = 0x30
    double _crossfadeDuration;	// 56 = 0x38
    NSArray *_attributedStrings;	// 64 = 0x40
    unsigned long long _currentAttributedStringIndex;	// 72 = 0x48
    double _underPosterOutset;	// 80 = 0x50
    _TVAnimatedImageView *_currentMarqueeView;	// 88 = 0x58
    _TVAnimatedImageView *_nextMarqueeView;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100049308
@property(readonly, nonatomic) __weak _TVAnimatedImageView *nextMarqueeView; // @synthesize nextMarqueeView=_nextMarqueeView;
@property(readonly, nonatomic) __weak _TVAnimatedImageView *currentMarqueeView; // @synthesize currentMarqueeView=_currentMarqueeView;
@property(nonatomic) double underPosterOutset; // @synthesize underPosterOutset=_underPosterOutset;
@property(readonly, nonatomic) unsigned long long currentAttributedStringIndex; // @synthesize currentAttributedStringIndex=_currentAttributedStringIndex;
@property(copy, nonatomic) NSArray *attributedStrings; // @synthesize attributedStrings=_attributedStrings;
@property(nonatomic) double crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
@property(nonatomic) float scrollRate; // @synthesize scrollRate=_scrollRate;
@property(nonatomic) double maskCapWidth; // @synthesize maskCapWidth=_maskCapWidth;
@property(nonatomic) double replicationPadding; // @synthesize replicationPadding=_replicationPadding;
@property(nonatomic) double marqueeDelay; // @synthesize marqueeDelay=_marqueeDelay;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x0000000100049170
- (void)_applicationWillResignActiveNotification:(id)arg1;	// IMP=0x0000000100049118
- (void)setMarqueeRunning:(_Bool)arg1;	// IMP=0x000000010004910c
- (void)setMarqueeEnabled:(_Bool)arg1;	// IMP=0x0000000100049108
- (void)_startMarqueeIfNeeded;	// IMP=0x0000000100047a58
- (_Bool)_shouldCycle;	// IMP=0x0000000100047a08
- (void)_clearLabelTextContents;	// IMP=0x000000010004785c
- (void)_prepareNextMarquee;	// IMP=0x0000000100047844
- (void)_nextAttributedString;	// IMP=0x00000001000473a4
- (id)_imageForText:(_Bool)arg1;	// IMP=0x00000001000471ac
- (void)drawTextInRect:(struct CGRect)arg1;	// IMP=0x0000000100046fb8
- (void)stopAndResetScrollWithDuration:(double)arg1;	// IMP=0x0000000100046874
- (void)stopAnimatingWithoutResetWithDuration:(double)arg1;	// IMP=0x00000001000467e4
- (void)stopAnimating;	// IMP=0x0000000100046728
- (void)setNeedsDisplay;	// IMP=0x0000000100046394
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000001000462bc
- (void)_clearAttributedStrings;	// IMP=0x0000000100046128
- (void)setAttributedText:(id)arg1;	// IMP=0x0000000100046068
- (void)setText:(id)arg1;	// IMP=0x0000000100045fe8
- (void)dealloc;	// IMP=0x0000000100045f70
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100045ccc

@end

