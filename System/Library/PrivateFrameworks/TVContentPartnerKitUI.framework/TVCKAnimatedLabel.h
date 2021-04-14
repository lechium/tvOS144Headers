/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <TVContentPartnerKitUI/TVCKLabel.h>

@class CALayer, NSArray, _TVAnimatedImageView;

@interface TVCKAnimatedLabel : TVCKLabel {

	BOOL _marqueeNeeded;
	BOOL _marqueeing;
	CALayer* _maskLayer;
	BOOL _animating;
	BOOL _paused;
	float _scrollRate;
	double _marqueeDelay;
	double _replicationPadding;
	double _maskCapWidth;
	double _crossfadeDuration;
	NSArray* _attributedStrings;
	unsigned long long _currentAttributedStringIndex;
	double _underPosterOutset;
	_TVAnimatedImageView* _currentMarqueeView;
	_TVAnimatedImageView* _nextMarqueeView;

}

@property (nonatomic,__weak,readonly) _TVAnimatedImageView * currentMarqueeView;              //@synthesize currentMarqueeView=_currentMarqueeView - In the implementation block
@property (nonatomic,__weak,readonly) _TVAnimatedImageView * nextMarqueeView;                 //@synthesize nextMarqueeView=_nextMarqueeView - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                               //@synthesize animating=_animating - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                     //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) double marqueeDelay;                                             //@synthesize marqueeDelay=_marqueeDelay - In the implementation block
@property (assign,nonatomic) double replicationPadding;                                       //@synthesize replicationPadding=_replicationPadding - In the implementation block
@property (assign,nonatomic) double maskCapWidth;                                             //@synthesize maskCapWidth=_maskCapWidth - In the implementation block
@property (assign,nonatomic) float scrollRate;                                                //@synthesize scrollRate=_scrollRate - In the implementation block
@property (assign,nonatomic) double crossfadeDuration;                                        //@synthesize crossfadeDuration=_crossfadeDuration - In the implementation block
@property (nonatomic,copy) NSArray * attributedStrings;                                       //@synthesize attributedStrings=_attributedStrings - In the implementation block
@property (nonatomic,readonly) unsigned long long currentAttributedStringIndex;               //@synthesize currentAttributedStringIndex=_currentAttributedStringIndex - In the implementation block
@property (assign,nonatomic) double underPosterOutset;                                        //@synthesize underPosterOutset=_underPosterOutset - In the implementation block
-(void)dealloc;
-(BOOL)isPaused;
-(void)setText:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)setNeedsDisplay;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)stopAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)isAnimating;
-(void)setMarqueeRunning:(BOOL)arg1 ;
-(void)setMarqueeEnabled:(BOOL)arg1 ;
-(double)crossfadeDuration;
-(void)setCrossfadeDuration:(double)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)setMarqueeDelay:(double)arg1 ;
-(double)marqueeDelay;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(void)setAttributedStrings:(NSArray *)arg1 ;
-(_TVAnimatedImageView *)currentMarqueeView;
-(_TVAnimatedImageView *)nextMarqueeView;
-(void)_startMarqueeIfNeeded;
-(double)replicationPadding;
-(unsigned long long)currentAttributedStringIndex;
-(NSArray *)attributedStrings;
-(BOOL)_shouldCycle;
-(float)scrollRate;
-(void)_clearAttributedStrings;
-(void)stopAnimatingWithoutResetWithDuration:(double)arg1 ;
-(void)stopAndResetScrollWithDuration:(double)arg1 ;
-(void)setReplicationPadding:(double)arg1 ;
-(double)maskCapWidth;
-(void)setMaskCapWidth:(double)arg1 ;
-(void)setScrollRate:(float)arg1 ;
-(double)underPosterOutset;
-(void)setUnderPosterOutset:(double)arg1 ;
-(id)_imageForText:(BOOL)arg1 ;
-(void)_prepareNextMarquee;
-(void)_clearLabelTextContents;
-(void)_nextAttributedString;
@end

