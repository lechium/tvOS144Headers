//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileInstallation/MIStoreMetadata.h>

@interface MIStoreMetadata (Legacy)
+ (id)legacy_metadataWithActivity:(id)arg1;	// IMP=0x000000010015bdf4
+ (id)lib_metadataWithStoreItem:(id)arg1;	// IMP=0x00000001002f78c8
+ (id)lib_metadataFromDatabaseRepresentation:(id)arg1 error:(id *)arg2;	// IMP=0x00000001002f781c
+ (id)lib_metadataFromBundleContainerURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000001002f7778
+ (id)lib_metadataFromApplicationRecord:(id)arg1 error:(id *)arg2;	// IMP=0x00000001002f7650
+ (id)lib_metadataFromApplication:(id)arg1 error:(id *)arg2;	// IMP=0x00000001002f742c
- (void)legacy_setPropertiesWithActivity:(id)arg1;	// IMP=0x000000010015be48
- (_Bool)lib_updateMetadataForApplication:(id)arg1 error:(id *)arg2;	// IMP=0x00000001002f83a0
- (void)lib_setPropertiesWithStoreItem:(id)arg1;	// IMP=0x00000001002f7c90
- (void)lib_setPropertiesWithSINFData:(id)arg1 isVPP:(_Bool)arg2;	// IMP=0x00000001002f7b8c
- (void)lib_setPropertiesWithSINFData:(id)arg1;	// IMP=0x00000001002f7b7c
- (void)lib_setPropertiesWithPurchaseInfo:(id)arg1;	// IMP=0x00000001002f7a80
- (void)lib_setPropertiesWithAccount:(id)arg1;	// IMP=0x00000001002f79a4
- (id)lib_databaseRepresentationError:(id *)arg1;	// IMP=0x00000001002f791c
@end

