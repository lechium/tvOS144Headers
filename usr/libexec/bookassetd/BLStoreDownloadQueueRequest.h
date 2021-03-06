//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BLStoreDownloadQueueRequest : NSObject <NSCopying>
{
    NSNumber *_accountIdentifier;	// 8 = 0x8
    NSString *_queueIdentifier;	// 16 = 0x10
    NSNumber *_purchaseStoreIdentifier;	// 24 = 0x18
    _Bool _purchaseSuppressNetworkEvaluatorDialogs;	// 32 = 0x20
}

+ (id)_downloadKindQueueIdentifierMapping;	// IMP=0x000000010005a224
+ (void)initialize;	// IMP=0x000000010005a104
- (void).cxx_destruct;	// IMP=0x000000010005a360
@property(nonatomic) _Bool purchaseSuppressNetworkEvaluatorDialogs; // @synthesize purchaseSuppressNetworkEvaluatorDialogs=_purchaseSuppressNetworkEvaluatorDialogs;
@property(retain, nonatomic) NSNumber *purchaseStoreIdentifier; // @synthesize purchaseStoreIdentifier=_purchaseStoreIdentifier;
@property(copy, nonatomic) NSString *queueIdentifier; // @synthesize queueIdentifier=_queueIdentifier;
@property(retain, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010005a06c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100059e58
- (unsigned long long)hash;	// IMP=0x0000000100059e48
- (id)description;	// IMP=0x0000000100059db0
@property(readonly, nonatomic) NSString *queueCountURLBagKey;
@property(readonly, nonatomic) NSString *queueContentsURLBagKey;

@end

