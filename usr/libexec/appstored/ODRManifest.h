//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteMemoryEntity.h"

@class NSArray, NSDate, NSNumber, NSString;

@interface ODRManifest : SQLiteMemoryEntity
{
    NSArray *_assetPacks;	// 8 = 0x8
}

+ (id)defaultProperties;	// IMP=0x00000001002ced20
+ (Class)databaseEntityClass;	// IMP=0x00000001002ced14
- (void).cxx_destruct;	// IMP=0x00000001002cfa20
- (void)setAssetPacks:(id)arg1;	// IMP=0x00000001002cfa0c
- (id)copyDataWithError:(id *)arg1;	// IMP=0x00000001002cf990
- (id)assetPackForBundleKey:(id)arg1;	// IMP=0x00000001002cf804
- (id)allAssetPacks;	// IMP=0x00000001002cf7f4
- (id)allAssetPackIDs;	// IMP=0x00000001002cf664
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) NSString *thinningVariant;
@property(readonly, nonatomic) NSString *storageID;
@property(readonly, nonatomic, getter=isStoreBased) _Bool storeBased;
@property(readonly, nonatomic) long long source;
@property(readonly, nonatomic) NSNumber *itemID;
@property(readonly, nonatomic, getter=isLocalCache) _Bool localCache;
@property(readonly, nonatomic) NSDate *lastModificationDate;
@property(readonly, nonatomic) NSNumber *evid;
@property(readonly, nonatomic) NSString *bundleID;
- (id)initWithDictionary:(id)arg1 andBundleID:(id)arg2 fromSource:(long long)arg3;	// IMP=0x00000001002cef8c
- (id)initWithData:(id)arg1 andBundleID:(id)arg2 fromSource:(long long)arg3;	// IMP=0x00000001002ceec0
- (id)initWithContentsOfURL:(id)arg1 andBundleID:(id)arg2 error:(id *)arg3;	// IMP=0x00000001002cee08

@end

