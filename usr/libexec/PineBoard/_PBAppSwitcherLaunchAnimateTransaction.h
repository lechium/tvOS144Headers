//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class UIViewPropertyAnimator;

@interface _PBAppSwitcherLaunchAnimateTransaction : BSTransaction
{
    UIViewPropertyAnimator *_propertyAnimator;	// 8 = 0x8
    CDStruct_a697a85d _context;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001612ec
@property(readonly, nonatomic) UIViewPropertyAnimator *propertyAnimator; // @synthesize propertyAnimator=_propertyAnimator;
@property(readonly, nonatomic) CDStruct_a697a85d context; // @synthesize context=_context;
- (void)_begin;	// IMP=0x0000000100160d4c
- (id)initWithContext:(CDStruct_a697a85d)arg1;	// IMP=0x0000000100160bf4

@end

