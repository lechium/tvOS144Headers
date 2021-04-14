//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class InstallAttributionPingback, NSArray, NSData, NSDictionary, NSError, NSNumber, NSString;

@interface StoreItemResponse : NSObject
{
    NSDictionary *_itemErrors;	// 8 = 0x8
    _Bool _isPreorder;	// 16 = 0x10
    _Bool _shouldCancelPurchaseBatch;	// 17 = 0x11
    _Bool _triggeredQueueCheck;	// 18 = 0x12
    NSNumber *_accountID;	// 24 = 0x18
    NSArray *_anonymousPings;	// 32 = 0x20
    NSArray *_clusterMappings;	// 40 = 0x28
    NSError *_error;	// 48 = 0x30
    NSArray *_items;	// 56 = 0x38
    NSData *_keybag;	// 64 = 0x40
    NSDictionary *_metrics;	// 72 = 0x48
    NSArray *_rangesToLoad;	// 80 = 0x50
    NSString *_clientID;	// 88 = 0x58
    InstallAttributionPingback *_installAttributionPingback;	// 96 = 0x60
}

+ (id)updateItemResponseWithDictionary:(id)arg1 installedItem:(id)arg2;	// IMP=0x00000001002a8950
+ (id)universalItemResponseWithDictionary:(id)arg1;	// IMP=0x00000001002a88f8
+ (id)errorItemResponseWithError:(id)arg1 accountID:(id)arg2;	// IMP=0x00000001002a8884
+ (id)defaultItemResponseWithDictionary:(id)arg1;	// IMP=0x00000001002a882c
+ (id)purchase_itemResponseWithError:(id)arg1 usingPurchaseInfo:(id)arg2;	// IMP=0x000000010018d190
+ (id)purchase_itemResponseFromDictionary:(id)arg1 usingPurchaseInfo:(id)arg2;	// IMP=0x000000010018cfd4
- (void).cxx_destruct;	// IMP=0x00000001002a9b10
@property(readonly) InstallAttributionPingback *installAttributionPingback; // @synthesize installAttributionPingback=_installAttributionPingback;
@property NSString *clientID; // @synthesize clientID=_clientID;
@property _Bool triggeredQueueCheck; // @synthesize triggeredQueueCheck=_triggeredQueueCheck;
@property _Bool shouldCancelPurchaseBatch; // @synthesize shouldCancelPurchaseBatch=_shouldCancelPurchaseBatch;
@property(readonly) NSArray *rangesToLoad; // @synthesize rangesToLoad=_rangesToLoad;
@property(readonly) _Bool isPreorder; // @synthesize isPreorder=_isPreorder;
@property(readonly) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(readonly) NSData *keybag; // @synthesize keybag=_keybag;
@property(readonly) NSArray *items; // @synthesize items=_items;
@property(retain) NSError *error; // @synthesize error=_error;
@property(readonly) NSArray *clusterMappings; // @synthesize clusterMappings=_clusterMappings;
@property(readonly) NSArray *anonymousPings; // @synthesize anonymousPings=_anonymousPings;
@property(readonly) NSNumber *accountID; // @synthesize accountID=_accountID;
- (id)_optimalDownloadWindowFromDictionary:(id)arg1;	// IMP=0x00000001002a9644
- (id)_errorWithFailureType:(id)arg1 customerMessage:(id)arg2;	// IMP=0x00000001002a9574
- (id)errorForItemID:(id)arg1;	// IMP=0x00000001002a9564
- (id)_initWithError:(id)arg1 accountID:(id)arg2;	// IMP=0x00000001002a94c0
- (id)_initWithDictionary:(id)arg1 applyingAssetStrategy:(long long)arg2 installedItem:(id)arg3;	// IMP=0x00000001002a89c8

@end
