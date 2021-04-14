//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HBCloudSyncModelUtility : NSObject
{
}

+ (_Bool)_isAppProxyVisible:(id)arg1;	// IMP=0x00000001000515f0
+ (id)_unarchivedUserRecordZoneID;	// IMP=0x0000000100051454
+ (void)_rearrangeAndSaveAddedOrChangedItems:(id)arg1 deletedItems:(id)arg2;	// IMP=0x0000000100050f0c
+ (id)_newRootFolderFromFolder:(id)arg1;	// IMP=0x00000001000509a4
+ (_Bool)_isFolder:(id)arg1 eligibleForDeletionBasedOnModifiedRecords:(id)arg2 deletedRecordIDs:(id)arg3;	// IMP=0x00000001000503b0
+ (id)_appsFromDeviceFolder:(id)arg1 notPartOfCloudFolderAppsList:(id)arg2;	// IMP=0x00000001000500d0
+ (_Bool)_isCloudFolderWithApps:(id)arg1 supersetOfDeviceFolderWithApps:(id)arg2;	// IMP=0x000000010004fe0c
+ (id)_filteredRecordsAfterMergingFoldersFromChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2 deviceFolder:(id)arg3 changedItemsList:(id)arg4 previouslySyncedItemsToParentMapping:(id)arg5;	// IMP=0x000000010004e5e0
+ (id)_itemIDToItemMappingFromFolder:(id)arg1;	// IMP=0x000000010004e308
+ (void)_updateParentReferenceAndOrderInfoForItem:(id)arg1 fromRecord:(id)arg2 itemsMapping:(id)arg3;	// IMP=0x000000010004e044
+ (id)_deletedItemsFromModifiedRecords:(id)arg1 deletedRecords:(id)arg2 itemIDToItemMapping:(id)arg3 previouslySyncedItemsToParentMapping:(id)arg4;	// IMP=0x000000010004db34
+ (id)_appProxyFromCloudRecordIdentifier:(id)arg1 isNonRestorableApp:(_Bool)arg2;	// IMP=0x000000010004d7d4
+ (id)_updatedItemsFromAddedOrChangedRecords:(id)arg1 itemIDToItemMapping:(id)arg2;	// IMP=0x000000010004cb7c
+ (_Bool)_isSystemOrInternalApp:(id)arg1;	// IMP=0x000000010004ca54
+ (_Bool)_isXcodeInstall:(id)arg1;	// IMP=0x000000010004c988
+ (id)appsWithAlternateAppIconChangedFromChangedRecords:(id)arg1 syncedAppIdsToIconNames:(id)arg2;	// IMP=0x000000010004c4fc
+ (id)recordIdentifierToRecordMappingFromRecords:(id)arg1;	// IMP=0x000000010004c30c
+ (id)updatedRootFolderWithChangedRecordsFromCloud:(id)arg1 deletedRecordIDs:(id)arg2 currentFolder:(id)arg3 foldersNeedMerge:(_Bool)arg4 previouslySyncedItemsToParentMapping:(id)arg5;	// IMP=0x000000010004c0f4
+ (id)updatedRootFolderWithChangedRecordsFromCloud:(id)arg1 deletedRecordIDs:(id)arg2 currentFolder:(id)arg3;	// IMP=0x000000010004c054
+ (_Bool)isSideLoadedApp:(id)arg1;	// IMP=0x000000010004bf38
+ (_Bool)isNonRestorableApp:(id)arg1;	// IMP=0x000000010004be38
+ (void)initialize;	// IMP=0x000000010004bdd4

@end

