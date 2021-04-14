//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PKSecureElement;

@protocol PKSecureElementObserver <NSObject>

@optional
- (void)secureElementPairingDidChangeForReason:(unsigned long long)arg1;
- (void)secureElementDidLeaveRestrictedMode:(PKSecureElement *)arg1;
- (void)secureElementDidEnterRestrictedMode:(PKSecureElement *)arg1;
- (void)secureElement:(PKSecureElement *)arg1 deletionOfAppletsDidFinishWithSuccess:(_Bool)arg2;
- (void)secureElement:(PKSecureElement *)arg1 deletionOfAppletsDidUpdateToProgress:(double)arg2;
@end
