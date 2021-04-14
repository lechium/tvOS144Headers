//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LSApplicationProxy, NSDate, NSError, NSMutableSet;

@interface AppReceiptTaskResult : NSObject
{
    NSMutableSet *_expiring;	// 8 = 0x8
    NSMutableSet *_refreshed;	// 16 = 0x10
    NSError *_resultingError;	// 24 = 0x18
    NSMutableSet *_revoked;	// 32 = 0x20
    LSApplicationProxy *_soonestExpiring;	// 40 = 0x28
    NSDate *_soonestExpirationDate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010006d9ac
@property(copy, nonatomic) NSDate *soonestExpirationDate; // @synthesize soonestExpirationDate=_soonestExpirationDate;
@property(copy, nonatomic) LSApplicationProxy *soonestExpiring; // @synthesize soonestExpiring=_soonestExpiring;
@property(readonly, nonatomic) NSMutableSet *revoked; // @synthesize revoked=_revoked;
@property(copy, nonatomic) NSError *resultingError; // @synthesize resultingError=_resultingError;
@property(readonly, nonatomic) NSMutableSet *refreshed; // @synthesize refreshed=_refreshed;
@property(readonly, nonatomic) NSMutableSet *expiring; // @synthesize expiring=_expiring;
- (void)addRefreshed:(id)arg1;	// IMP=0x000000010006d8e0
- (void)addRevoked:(id)arg1;	// IMP=0x000000010006d868
- (void)addExpiring:(id)arg1 expirationDate:(id)arg2;	// IMP=0x000000010006d75c

@end
