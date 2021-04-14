//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteMemoryEntity.h"

@class AppInstallPolicy, NSArray, NSString;

@interface AppInstall : SQLiteMemoryEntity
{
    NSString *_logKey;	// 8 = 0x8
    NSArray *_packages;	// 16 = 0x10
}

+ (id)_valueDictionaryWithStoreItem:(id)arg1;	// IMP=0x00000001002b4d64
+ (id)defaultProperties;	// IMP=0x00000001002b4c0c
+ (id)legacy_installForActivity:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100134464
+ (id)purchase_installForStoreItem:(id)arg1 usingPurchaseInfo:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100280764
- (void).cxx_destruct;	// IMP=0x00000001002b5474
@property(copy) NSArray *packages; // @synthesize packages=_packages;
- (id)storeMetadataWithError:(id *)arg1;	// IMP=0x00000001002b4ab4
- (void)setValuesWithStoreItem:(id)arg1;	// IMP=0x00000001002b491c
- (long long)assetRequestReason;	// IMP=0x00000001002b482c
- (id)cellularDownloadForPackage:(id)arg1;	// IMP=0x00000001002b46a0
- (id)bestPackageOnConnection:(id)arg1 withProperties:(id)arg2;	// IMP=0x00000001002b45d8
- (id)bestPackageFromArray:(id)arg1;	// IMP=0x00000001002b43dc
@property(readonly) long long priority;
@property(copy) AppInstallPolicy *installPolicy;
@property(readonly) NSString *logKey;
@property(readonly, getter=isAutomatic) _Bool automatic;
- (id)initWithStoreItem:(id)arg1;	// IMP=0x00000001002b40e4
- (id)placeholderBuilderUsingPackage:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000100235044
- (id)coordinatorBuilderWithError:(id *)arg1;	// IMP=0x000000010028ce24
- (id)copyEvaluatorDownloadWithPackage:(id)arg1;	// IMP=0x00000001002aa2cc
- (id)copyEvaluatorDownloadUsingConnection:(id)arg1;	// IMP=0x00000001002aa1c4

@end
