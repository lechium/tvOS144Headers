//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSMemoryEntity.h>

@class FinishDownloadAssetMemoryEntity, NSArray, NSNumber, NSString, StoreDownload;

@interface FinishDownloadMemoryEntity : SSMemoryEntity
{
    FinishDownloadAssetMemoryEntity *_mediaAsset;	// 8 = 0x8
    NSArray *_secondaryAssets;	// 16 = 0x10
    StoreDownload *_storeMetadata;	// 24 = 0x18
}

+ (id)defaultProperties;	// IMP=0x0000000100081d8c
+ (Class)databaseEntityClass;	// IMP=0x0000000100081d80
- (void).cxx_destruct;	// IMP=0x0000000100082090
@property(readonly, nonatomic) NSArray *secondaryAssets; // @synthesize secondaryAssets=_secondaryAssets;
@property(retain, nonatomic) StoreDownload *storeMetadata; // @synthesize storeMetadata=_storeMetadata;
@property(readonly, nonatomic) FinishDownloadAssetMemoryEntity *mediaAsset; // @synthesize mediaAsset=_mediaAsset;
@property(readonly, nonatomic) long long transactionID;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *storeXID;
@property(readonly, nonatomic) NSString *storeTransactionIdentifier;
@property(readonly, nonatomic) NSNumber *storeSagaIdentifier;
@property(readonly, nonatomic) NSNumber *storePublicationVersion;
@property(readonly, nonatomic) NSNumber *storeItemIdentifier;
@property(readonly, nonatomic) NSString *storeFrontIdentifier;
@property(readonly, nonatomic) NSNumber *storeCollectionIdentifier;
@property(readonly, nonatomic) NSString *storeAccountName;
@property(readonly, nonatomic) NSNumber *storeAccountIdentifier;
- (id)secondaryAssetForType:(id)arg1;	// IMP=0x0000000100081aac
@property(readonly, nonatomic) long long restoreState;
- (id)newITunesMetadataDictionary;	// IMP=0x0000000100081300
- (void)loadAssetsUsingSession:(id)arg1;	// IMP=0x0000000100080dbc
@property(readonly, nonatomic) id libraryItemIdentifier;
@property(readonly, nonatomic) NSString *ITunesMetadataDestinationPath;
@property(readonly, nonatomic, getter=isTvTemplate) _Bool tvTemplate;
@property(readonly, nonatomic, getter=isStoreDownload) _Bool storeDownload;
@property(readonly, nonatomic, getter=isSharedDownload) _Bool sharedDownload;
@property(readonly, nonatomic, getter=isSampleDownload) _Bool sampleDownload;
@property(readonly, nonatomic, getter=isRestoreDownload) _Bool restoreDownload;
@property(readonly, nonatomic, getter=isRentalDownload) _Bool rentalDownload;
@property(readonly, nonatomic, getter=isPodcastDownload) _Bool podcastDownload;
@property(readonly, nonatomic, getter=isHLS) _Bool HLS;
@property(readonly, nonatomic, getter=isDeviceBasedVPP) _Bool deviceBasedVPP;
@property(readonly, nonatomic) _Bool hasRestoreData;
@property(readonly, nonatomic) NSNumber *handlerIdentifier;
@property(readonly, nonatomic) NSString *genreName;
@property(readonly, nonatomic) NSNumber *durationInMilliseconds;
@property(readonly, nonatomic) NSString *downloadPermalink;
@property(readonly, nonatomic) NSString *downloadKind;
@property(readonly, nonatomic) NSString *documentTargetIdentifier;
- (id)destinationDirectoryPathForAsset:(id)arg1;	// IMP=0x00000001000807dc
@property(readonly, nonatomic) NSString *collectionName;
@property(readonly, nonatomic) NSString *clientIdentifier;
@property(readonly, nonatomic) long long priority;
@property(readonly, nonatomic) NSString *bundleVersion;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) long long automaticType;
@property(readonly, nonatomic) NSString *artworkTemplateName;
@property(readonly, nonatomic) NSString *artistName;

@end

