//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDWalletUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface PDWalletValueAddedServiceTransactionUserNotification : PDWalletUserNotification <NSSecureCoding>
{
    NSString *_merchantIdentifier;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100144808
- (void).cxx_destruct;	// IMP=0x000000010014495c
@property(readonly, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
- (unsigned long long)notificationType;	// IMP=0x0000000100144944
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001448bc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100144810
- (id)initWithMerchantIdentifier:(id)arg1 localizedPassDescription:(id)arg2 passUniqueIdentifier:(id)arg3;	// IMP=0x00000001001445c0

@end

