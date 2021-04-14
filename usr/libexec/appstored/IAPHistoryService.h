//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDIAPHistoryServiceProtocol-Protocol.h"

@interface IAPHistoryService : NSObject <ASDIAPHistoryServiceProtocol>
{
}

+ (id)defaultService;	// IMP=0x00000001001a83dc
- (void)getAppStoreConsumedIntroOfferFamilyIdsWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a99a4
- (void)getCachedSubscriptionEntitlementsForSegment:(unsigned long long)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a96d0
- (void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(_Bool)arg2 requestingBundleId:(id)arg3 withReplyHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001a9368
- (void)getSubscriptionEntitlementsIgnoreCaches:(_Bool)arg1 forActiveAccountWithReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a908c
- (void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2 segment:(unsigned long long)arg3;	// IMP=0x00000001001a8e78
- (void)refreshIAPsForActiveAccountWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a8be4
- (void)getIAPsForActiveAccountWithAdamIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a86f8
- (void)getAllIAPsForActiveAccountWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a8448

@end

