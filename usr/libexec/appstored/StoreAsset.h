//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSNumber, NSString, VariantDescriptor;

@interface StoreAsset : NSObject <NSCopying>
{
    _Bool _locallyCacheable;	// 8 = 0x8
    _Bool _zipStreamable;	// 9 = 0x9
    long long _archiveType;	// 16 = 0x10
    long long _assetType;	// 24 = 0x18
    NSString *_assetURL;	// 32 = 0x20
    NSNumber *_bytesTotal;	// 40 = 0x28
    NSArray *_clearHashes;	// 48 = 0x30
    NSData *_dpInfo;	// 56 = 0x38
    NSNumber *_expectedDiskspace;	// 64 = 0x40
    NSArray *_hashes;	// 72 = 0x48
    NSNumber *_hashType;	// 80 = 0x50
    NSNumber *_initialODRSize;	// 88 = 0x58
    NSString *_md5;	// 96 = 0x60
    NSNumber *_numberOfBytesToHash;	// 104 = 0x68
    NSArray *_priorVariantIdentifiers;	// 112 = 0x70
    NSNumber *_priorVersionEvid;	// 120 = 0x78
    NSData *_sinf;	// 128 = 0x80
    NSString *_variantID;	// 136 = 0x88
    VariantDescriptor *_variantDescriptor;	// 144 = 0x90
}

+ (id)selectAssetFromArray:(id)arg1 usingStategy:(long long)arg2 withDeltaForInstalledItem:(id)arg3;	// IMP=0x000000010011dc94
+ (id)selectAssetFromArray:(id)arg1 usingStategy:(long long)arg2;	// IMP=0x000000010011dacc
+ (id)deltaAssetsWithDictionary:(id)arg1;	// IMP=0x000000010011d8e4
+ (id)assetWithDictionary:(id)arg1;	// IMP=0x000000010011d890
- (void).cxx_destruct;	// IMP=0x000000010011ebfc
@property(readonly, getter=isZipStreamable) _Bool zipStreamable; // @synthesize zipStreamable=_zipStreamable;
@property(readonly) VariantDescriptor *variantDescriptor; // @synthesize variantDescriptor=_variantDescriptor;
@property(readonly) NSString *variantID; // @synthesize variantID=_variantID;
@property(readonly) NSData *sinf; // @synthesize sinf=_sinf;
@property(readonly) NSNumber *priorVersionEvid; // @synthesize priorVersionEvid=_priorVersionEvid;
@property(readonly) NSArray *priorVariantIdentifiers; // @synthesize priorVariantIdentifiers=_priorVariantIdentifiers;
@property(readonly) NSNumber *numberOfBytesToHash; // @synthesize numberOfBytesToHash=_numberOfBytesToHash;
@property(readonly, getter=isLocallyCacheable) _Bool locallyCacheable; // @synthesize locallyCacheable=_locallyCacheable;
@property(readonly) NSString *md5; // @synthesize md5=_md5;
@property(readonly) NSNumber *initialODRSize; // @synthesize initialODRSize=_initialODRSize;
@property(readonly) NSNumber *hashType; // @synthesize hashType=_hashType;
@property(readonly) NSArray *hashes; // @synthesize hashes=_hashes;
@property(readonly) NSNumber *expectedDiskspace; // @synthesize expectedDiskspace=_expectedDiskspace;
@property(readonly) NSData *dpInfo; // @synthesize dpInfo=_dpInfo;
@property(readonly) NSArray *clearHashes; // @synthesize clearHashes=_clearHashes;
@property(readonly) NSNumber *bytesTotal; // @synthesize bytesTotal=_bytesTotal;
@property(readonly) NSString *assetURL; // @synthesize assetURL=_assetURL;
@property(readonly) long long assetType; // @synthesize assetType=_assetType;
@property(readonly) long long archiveType; // @synthesize archiveType=_archiveType;
- (_Bool)_parseAssetDictionary:(id)arg1;	// IMP=0x000000010011e5fc
- (id)description;	// IMP=0x000000010011e548
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010011e330
- (_Bool)isApplicableUpdateWithInstalledItemContext:(id)arg1;	// IMP=0x000000010011dd78
@property(readonly, getter=isDelta) _Bool delta;
- (id)initWithDictionary:(id)arg1 assetType:(long long)arg2;	// IMP=0x000000010011da24
@property(readonly) NSData *sinfData;
@property(readonly) NSData *hashArrayData;

@end

