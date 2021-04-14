//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteMemoryEntity.h"

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface ODRAssetPack : SQLiteMemoryEntity
{
}

+ (id)defaultProperties;	// IMP=0x00000001002b7858
+ (Class)databaseEntityClass;	// IMP=0x00000001002b784c
+ (id)_metadataFromURL:(id)arg1;	// IMP=0x0000000100289504
+ (id)_metadataURLForURL:(id)arg1;	// IMP=0x00000001002894a4
+ (_Bool)writeMetadata:(id)arg1 forAssetPackAtURL:(id)arg2;	// IMP=0x00000001002893b8
+ (id)legacyPathPrefixForApplication:(id)arg1;	// IMP=0x0000000100288bf0
+ (_Bool)isOnDeviceAtURL:(id)arg1 withValidMetadata:(id)arg2;	// IMP=0x00000001002889cc
+ (_Bool)deleteAssetPackOnDiskAtURL:(id)arg1;	// IMP=0x00000001002880b8
- (void)removeDownloadRequestUUID:(id)arg1;	// IMP=0x00000001002b8b78
- (_Bool)isOnDevice;	// IMP=0x00000001002b8ac4
- (id)integrityHashingDictionary;	// IMP=0x00000001002b8904
- (id)description;	// IMP=0x00000001002b8860
- (void)addDownloadRequestUUID:(id)arg1;	// IMP=0x00000001002b87bc
@property(copy, nonatomic) NSURL *URL;
@property(nonatomic) long long purgeReason;
@property(nonatomic) _Bool purgeable;
@property(nonatomic) long long pinCount;
@property(retain, nonatomic) NSURL *localURL;
- (void)setLastUsedDate:(id)arg1;	// IMP=0x00000001002b8560
@property(nonatomic) double effectivePreservationPriority;
@property(nonatomic) _Bool effectiveAlwaysPreserve;
@property(copy, nonatomic) NSArray *downloadRequestUUIDs;
@property(copy, nonatomic) NSNumber *downloadIdentifier;
@property(readonly, nonatomic) NSNumber *uncompressedSize;
@property(readonly, nonatomic) NSString *SHA;
@property(readonly, nonatomic) NSDictionary *primaryContentHash;
@property(readonly, nonatomic) NSString *MD5;
@property(readonly, nonatomic, getter=isStreamable) NSNumber *streamable;
@property(readonly, nonatomic) NSArray *knownContentHashes;
@property(readonly, nonatomic) NSArray *hashes;
@property(readonly, nonatomic) NSNumber *fileSize;
@property(readonly, nonatomic) NSNumber *downloadPriority;
@property(readonly, nonatomic) NSNumber *chunkSize;
@property(readonly, nonatomic) NSString *bundleKey;
@property(readonly, nonatomic) NSString *applicationBundleID;
- (id)initWithDictionary:(id)arg1 andBundleID:(id)arg2;	// IMP=0x00000001002b79f4
- (unsigned long long)tagStatus;	// IMP=0x00000001001b992c
- (id)humanReadablePurgeReason;	// IMP=0x00000001001b9884
- (double)downloadPercentageComplete;	// IMP=0x00000001001b97c4
- (id)_suggestedLocalFilename;	// IMP=0x0000000100289584
- (_Bool)writeMetadata;	// IMP=0x00000001002892f0
- (id)suggestedDestinationPathWithStorageID:(id)arg1;	// IMP=0x0000000100288f20
- (_Bool)purgeWithReason:(long long)arg1;	// IMP=0x0000000100288d08
- (id)contentHash;	// IMP=0x0000000100288058

@end

