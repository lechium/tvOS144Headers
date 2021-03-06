//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface PDAccountPaymentDueUserNotification : PDUserNotification <NSSecureCoding>
{
    _Bool _useGenericMessaging;	// 96 = 0x60
    unsigned long long _featureIdentifier;	// 104 = 0x68
    NSString *_messageString;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010014d0d8
- (void).cxx_destruct;	// IMP=0x000000010014dc54
@property(readonly, nonatomic) NSString *messageString; // @synthesize messageString=_messageString;
@property(readonly, nonatomic) _Bool useGenericMessaging; // @synthesize useGenericMessaging=_useGenericMessaging;
@property(readonly, nonatomic) unsigned long long featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (unsigned long long)notificationType;	// IMP=0x000000010014dc1c
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x000000010014db1c
- (_Bool)isValid;	// IMP=0x000000010014da9c
- (id)_messageString;	// IMP=0x000000010014da14
- (id)_messageStringForAccount:(id)arg1 amount:(id)arg2 reminderOffset:(unsigned long long)arg3 fireDate:(id)arg4;	// IMP=0x000000010014d2f4
- (id)_titleString;	// IMP=0x000000010014d2a8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010014d1d8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010014d0e0
- (id)initWithAccount:(id)arg1 estimatedRemainingMinimumPayment:(id)arg2 reminderOffset:(unsigned long long)arg3;	// IMP=0x000000010014c924

@end

