//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDPassReminderUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface PDPassCommutePlanRenewalReminderUserNotification : PDPassReminderUserNotification <NSSecureCoding>
{
    NSString *_title;	// 96 = 0x60
    NSString *_message;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010014902c
- (void).cxx_destruct;	// IMP=0x0000000100149220
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)_messageString;	// IMP=0x00000001001491f0
- (id)_titleString;	// IMP=0x00000001001491e0
- (unsigned long long)notificationType;	// IMP=0x00000001001491d8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010014912c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100149034
- (id)initWithPaymentPass:(id)arg1 commutePlan:(id)arg2;	// IMP=0x0000000100148d0c

@end
