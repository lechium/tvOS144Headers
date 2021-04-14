//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "INPushNotificationHandling-Protocol.h"

@class ACAccountStore, NSOperationQueue, NSString;

@interface INFamilyEventPushHandler : NSObject <INPushNotificationHandling>
{
    ACAccountStore *_accountStore;	// 8 = 0x8
    NSOperationQueue *_networkingQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000f4b0
- (id)_createUniqueNotificationID;	// IMP=0x000000010000f458
- (void)_deliverNotificationWithResponse:(id)arg1 pushMessage:(id)arg2;	// IMP=0x000000010000f454
- (void)handleIncomingPushNotification:(id)arg1;	// IMP=0x000000010000ef00
- (_Bool)isValidResponse:(id)arg1;	// IMP=0x000000010000ed5c
- (_Bool)ignoresPushEventsForSecondaryAccounts;	// IMP=0x000000010000ed54
- (id)initWithAccountStore:(id)arg1;	// IMP=0x000000010000ecc0
- (id)init;	// IMP=0x000000010000ec88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
