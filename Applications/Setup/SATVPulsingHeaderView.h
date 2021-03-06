//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SATVHeaderView.h"

#import "SATVPulsingView-Protocol.h"
#import "SATVPulsingViewImpl-Protocol.h"

@class NSString;
@protocol SATVPulsingAnimationDelegate;

@interface SATVPulsingHeaderView : SATVHeaderView <SATVPulsingViewImpl, SATVPulsingView>
{
    _Bool _opacityRunning;	// 8 = 0x8
    _Bool _scaleRunning;	// 9 = 0x9
    unsigned long long _mode;	// 16 = 0x10
    id <SATVPulsingAnimationDelegate> _animationDelegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010004233c
@property(nonatomic) _Bool scaleRunning; // @synthesize scaleRunning=_scaleRunning;
@property(nonatomic) _Bool opacityRunning; // @synthesize opacityRunning=_opacityRunning;
@property(nonatomic) __weak id <SATVPulsingAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000100042158
- (void)pulseAtBeginTime:(double)arg1;	// IMP=0x0000000100041b2c
- (void)layoutSubviews;	// IMP=0x0000000100041a24
- (id)initWithMode:(unsigned long long)arg1;	// IMP=0x00000001000419c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

