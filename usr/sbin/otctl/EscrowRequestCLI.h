//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SecEscrowRequest;

@interface EscrowRequestCLI : NSObject
{
    SecEscrowRequest *_escrowRequest;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100004124
@property(retain) SecEscrowRequest *escrowRequest; // @synthesize escrowRequest=_escrowRequest;
- (long long)storePrerecordsInEscrow;	// IMP=0x0000000100004034
- (long long)reset;	// IMP=0x0000000100003f68
- (long long)status;	// IMP=0x0000000100003cec
- (long long)trigger;	// IMP=0x0000000100003c18
- (id)initWithEscrowRequest:(id)arg1;	// IMP=0x0000000100003ba0

@end
