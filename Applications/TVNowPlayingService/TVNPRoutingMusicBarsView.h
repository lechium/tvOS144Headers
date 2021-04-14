//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface TVNPRoutingMusicBarsView : UIView
{
    _Bool _canAnimate;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    unsigned long long _internalState;	// 24 = 0x18
    NSArray *_barViews;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100016214
@property(readonly, copy, nonatomic) NSArray *barViews; // @synthesize barViews=_barViews;
@property(nonatomic) unsigned long long internalState; // @synthesize internalState=_internalState;
@property(nonatomic) _Bool canAnimate; // @synthesize canAnimate=_canAnimate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)_removeAnimations;	// IMP=0x0000000100016080
- (void)_addAnimationsWithRepeatCount:(float)arg1;	// IMP=0x0000000100015da8
- (void)_setBarHeights:(double)arg1;	// IMP=0x0000000100015c34
- (void)_setSubviewsHidden:(_Bool)arg1;	// IMP=0x0000000100015b0c
- (void)_updateInternalState;	// IMP=0x0000000100015adc
- (void)tintColorDidChange;	// IMP=0x0000000100015808
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000100015780
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000155a0

@end

