//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PDAssertion, PDAssertionManager;

@protocol PDAssertionObserver <NSObject>
- (_Bool)allowAcquisitionOfAssertionOfType:(unsigned long long)arg1;
- (_Bool)interestedInAssertionOfType:(unsigned long long)arg1;

@optional
- (void)assertionManager:(PDAssertionManager *)arg1 didInvalidateAssertion:(PDAssertion *)arg2;
- (void)assertionManager:(PDAssertionManager *)arg1 didAcquireAssertion:(PDAssertion *)arg2;
@end
