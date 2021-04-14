//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class NSString, PKInstallmentPlan;

@interface PDInstallmentAddedUserNotification : PDUserNotification <NSSecureCoding>
{
    PKInstallmentPlan *_installmentPlan;	// 96 = 0x60
    NSString *_accountIdentifier;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100152928
- (void).cxx_destruct;	// IMP=0x0000000100152bc8
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x0000000100152a6c
- (unsigned long long)notificationType;	// IMP=0x0000000100152a64
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001529dc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100152930
- (id)initWithAccount:(id)arg1 installmentPlan:(id)arg2 passUniqueIdentifier:(id)arg3;	// IMP=0x00000001001526d4

@end
