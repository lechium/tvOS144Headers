//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class _PBAppSwitcherLaunchAnimateTransaction;

@interface PBAppSwitcherToAppAnimationTransaction : BSTransaction
{
    _PBAppSwitcherLaunchAnimateTransaction *_launchAppTransaction;	// 8 = 0x8
    CDStruct_a697a85d _context;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100160b40
@property(readonly, nonatomic) _PBAppSwitcherLaunchAnimateTransaction *launchAppTransaction; // @synthesize launchAppTransaction=_launchAppTransaction;
@property(readonly, nonatomic) CDStruct_a697a85d context; // @synthesize context=_context;
- (void)_begin;	// IMP=0x0000000100160460
- (id)initWithSceneLayoutViewController:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;	// IMP=0x00000001001602e4

@end

