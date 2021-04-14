//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PushMessageConsumer-Protocol.h"

@class NSString, StoreKitMessagesDatabaseStore;
@protocol OS_dispatch_queue;

@interface StoreKitMessagesManager : NSObject <PushMessageConsumer>
{
    StoreKitMessagesDatabaseStore *_databaseStore;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x0000000100084094
- (void).cxx_destruct;	// IMP=0x0000000100085a8c
- (void)_removeRevocationsForAccountID:(id)arg1 inApp:(id)arg2;	// IMP=0x00000001000859a8
- (void)_getRevocationsForAccountID:(id)arg1 inApp:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010008560c
- (void)addRevocationsForProductIdentifiers:(id)arg1 forBundleID:(id)arg2 forAccountID:(id)arg3;	// IMP=0x00000001000851e8
- (void)_checkServerForMessagesForAccount:(id)arg1 messageInfo:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000850c4
- (void)fetchRevocationsForOctaneWithBundleID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100085068
- (void)fetchRevocationsForAccount:(id)arg1 inApp:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100084f30
- (void)showMessage:(id)arg1 forAccount:(id)arg2 inApp:(id)arg3;	// IMP=0x0000000100084b64
- (void)messageURLForAccount:(id)arg1 inApp:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000847dc
- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x0000000100084294
- (id)init;	// IMP=0x0000000100084130

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

