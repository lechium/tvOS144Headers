//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDExpressTransactionEvent.h"

@class NSString;

@interface PDExpressTransactionEventNotFound : PDExpressTransactionEvent
{
    NSString *_applicationIdentifier;	// 16 = 0x10
    NSString *_keyIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010006efd8
@property(copy, nonatomic) NSString *keyIdentifier; // @synthesize keyIdentifier=_keyIdentifier;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)init;	// IMP=0x000000010006ef68
- (id)_initWithType:(long long)arg1;	// IMP=0x000000010006ef50

@end

