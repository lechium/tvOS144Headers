//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _PBPIPPresentationRequest, _PBPIPSwapAnimation;

@interface _PBPIPSwapContext : NSObject
{
    _PBPIPPresentationRequest *_startingRequest;	// 8 = 0x8
    _PBPIPPresentationRequest *_stoppingRequest;	// 16 = 0x10
    _PBPIPSwapAnimation *_swapAnimation;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001ae178
@property(retain, nonatomic) _PBPIPSwapAnimation *swapAnimation; // @synthesize swapAnimation=_swapAnimation;
@property(retain, nonatomic) _PBPIPPresentationRequest *stoppingRequest; // @synthesize stoppingRequest=_stoppingRequest;
@property(retain, nonatomic) _PBPIPPresentationRequest *startingRequest; // @synthesize startingRequest=_startingRequest;

@end
