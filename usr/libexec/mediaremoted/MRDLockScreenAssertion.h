//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MROSTransaction, SBSLockScreenContentAssertion;

@interface MRDLockScreenAssertion : NSObject
{
    SBSLockScreenContentAssertion *_assertion;	// 8 = 0x8
    MROSTransaction *_transaction;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010005001c
@property(retain, nonatomic) MROSTransaction *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) SBSLockScreenContentAssertion *assertion; // @synthesize assertion=_assertion;
- (void)dealloc;	// IMP=0x000000010004ffb0
- (void)delayCreateAssertion;	// IMP=0x000000010004fed0
- (void)createAssertion;	// IMP=0x000000010004fc88
- (id)init;	// IMP=0x000000010004fb1c

@end
