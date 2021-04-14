//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabase.h>

@interface CKDatabase (Subscription)
- (id)_getOperationConfiguration;	// IMP=0x0000000100007634
- (void)_addSubscriptionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000726c
- (void)addSubscriptionForDatabaseWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006e64
- (void)updateAuthRenewalForMediaService:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100011a78
- (void)removeMediaServices:(id)arg1 withUserInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001131c
- (void)getServiceConfigurationInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100010704
- (void)updateProperty:(id)arg1 propertyInfo:(id)arg2 withUserInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000fd08
- (void)_deleteRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000fa94
- (void)removeMediaService:(id)arg1 withUserInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000ebdc
- (void)getDefaultMediaService:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000df68
- (void)_updateDefaultService:(id)arg1 serviceID:(id)arg2 userInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000d8f8
- (void)updateDefaultMediaService:(id)arg1 withUserInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000d418
- (void)getAvailableServices:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000c8d0
- (void)addMediaService:(id)arg1 withUserInfo:(id)arg2 transaction:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000bb9c
- (id)_operationConfiguration;	// IMP=0x000000010003fa0c
- (void)_notifyObserversDataChanged:(id)arg1 cachedData:(id)arg2;	// IMP=0x000000010003f910
- (void)_checkShareStatusIfApplicable:(id)arg1;	// IMP=0x000000010003f400
- (void)_populateRecordZoneWithCachedInfo:(id)arg1 cachedInfo:(id)arg2;	// IMP=0x000000010003ea0c
- (void)_handleManateeLossOnPrivateDatabase:(id)arg1 homeUserID:(id)arg2;	// IMP=0x000000010003e368
- (void)_handleManateeLossOnSharedDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003e0ac
- (void)handleCKErrorMissingManateeIdentity:(id)arg1 homeUserID:(id)arg2;	// IMP=0x000000010003dd3c
- (void)handleCKErrorMissingManateeIdentity:(id)arg1 homeUserIDS:(id)arg2;	// IMP=0x000000010003d9dc
- (void)_handleCKErrorChangeTokenExpired:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010003d838
- (void)_updateServerChangeTokenMap:(id)arg1 serverChangeToken:(id)arg2;	// IMP=0x000000010003d5dc
- (id)_fetchRefreshTokenForRecordZoneID:(id)arg1;	// IMP=0x000000010003d268
- (id)_fetchPlaceholderRecordData:(id)arg1;	// IMP=0x000000010003cef8
- (void)modifyCKRecordWithRecordsToSave:(id)arg1 recordIDSToDelete:(id)arg2 missingManateeIdentity:(_Bool)arg3 withAttribution:(id)arg4 withOptions:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010003cb2c
- (void)deleteRecordWithID:(id)arg1 missingManateeIdentity:(_Bool)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010003c924
- (void)deleteRecord:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003c8b4
- (void)saveRecord:(id)arg1 withAttribution:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010003c644
- (void)saveRecord:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003c5d4
- (id)_handleChangesInChangedRecords:(id)arg1 withDataInLocalCopy:(id)arg2;	// IMP=0x000000010003b74c
- (id)_handleDeletedRecordIDS:(id)arg1 withDataInLocalCopy:(id)arg2;	// IMP=0x000000010003b2a0
- (id)_handleChangedRecords:(id)arg1 andDeletedRecordIDS:(id)arg2;	// IMP=0x000000010003b148
- (void)_saveRecordZone:(id)arg1 withAttribution:(id)arg2 andOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010003adfc
- (void)_purgeDeletedZonesFromDefaults:(id)arg1;	// IMP=0x000000010003a508
- (id)_handleRecordZonesChanged:(id)arg1 deletedRecordZones:(id)arg2;	// IMP=0x000000010003a1a4
- (void)fetchAllRecordsForRecordZoneID:(id)arg1 userInfo:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100039068
- (void)fetchRecordWithIDS:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100038e08
- (void)fetchRecordWithID:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100038b98
- (void)deleteRecordZone:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100038920
- (void)_updateUserInfoToRecordZoneIDMap:(id)arg1 userID:(id)arg2;	// IMP=0x00000001000387bc
- (id)_checkIfRecordZonePresentForUser:(id)arg1;	// IMP=0x00000001000386dc
- (void)fetchRecordZoneFor:(id)arg1 user:(id)arg2 withOptions:(id)arg3 withAttribution:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100036f9c
- (void)fetchRecordZoneFor:(id)arg1 user:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100036f08
- (void)refreshDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000368a4
@end
