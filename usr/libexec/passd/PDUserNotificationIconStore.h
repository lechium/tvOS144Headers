//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, PDDatabaseManager;

@interface PDUserNotificationIconStore : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    NSFileManager *_fileManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001ce3e8
- (id)_filePathForAssetType:(long long)arg1 passUniqueIdentifier:(id)arg2;	// IMP=0x00000001001ce32c
- (id)_imageForAssetType:(long long)arg1 passUniqueIdentifier:(id)arg2;	// IMP=0x00000001001ce228
- (_Bool)_removeAssetsForPassUniqueIdentifier:(id)arg1;	// IMP=0x00000001001ce194
- (_Bool)_assetExists:(long long)arg1 passUniqueIdentifier:(id)arg2;	// IMP=0x00000001001ce13c
- (_Bool)_storeImage:(id)arg1 assetType:(long long)arg2 passUniqueIdentifier:(id)arg3;	// IMP=0x00000001001cdf90
- (_Bool)removeAssetsForPassUniqueIdentifier:(id)arg1;	// IMP=0x00000001001cdf84
- (id)fileURLForAsset:(long long)arg1 passUniqueIdentifier:(id)arg2;	// IMP=0x00000001001cdd24
- (id)initWithDatabaseManager:(id)arg1;	// IMP=0x00000001001cdc80

@end
