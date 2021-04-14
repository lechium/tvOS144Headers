//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class UIViewPropertyAnimator;

@interface PBAppCrossFadeAnimationTransaction : BSTransaction
{
    UIViewPropertyAnimator *_fadePropertyAnimator;	// 8 = 0x8
    CDStruct_a697a85d _context;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001ad5a8
@property(readonly, nonatomic) UIViewPropertyAnimator *fadePropertyAnimator; // @synthesize fadePropertyAnimator=_fadePropertyAnimator;
@property(readonly, nonatomic) CDStruct_a697a85d context; // @synthesize context=_context;
- (void)_startFadeAnimation;	// IMP=0x00000001001ad0e0
- (void)_willFailWithReason:(id)arg1;	// IMP=0x00000001001acf7c
- (void)_willInterruptWithReason:(id)arg1;	// IMP=0x00000001001ace18
- (void)_begin;	// IMP=0x00000001001acd00
- (_Bool)_canBeInterrupted;	// IMP=0x00000001001acce0
- (id)initWithSceneLayoutViewController:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;	// IMP=0x00000001001acb64

@end
