//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol OS_voucher;

@protocol NIServerClientVoucherHolding <NSObject>
- (_Bool)releaseVoucher;
- (_Bool)adoptVoucher;
- (void)setClientVoucher:(NSObject<OS_voucher> *)arg1;
@end

