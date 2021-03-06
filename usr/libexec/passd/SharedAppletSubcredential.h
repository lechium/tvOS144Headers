//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface SharedAppletSubcredential : SQLiteEntity
{
}

+ (id)databaseTable;	// IMP=0x000000010001bdf8
+ (id)_propertySetters;	// IMP=0x000000010001bc24
+ (id)_predicateForSharedCredentialsWithAppletSubcredentialPID:(long long)arg1;	// IMP=0x000000010001bbb0
+ (id)sharedCredentialWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010001baf4
+ (id)dictionaryFromSharedCredential:(id)arg1 appletSubcredentialPID:(long long)arg2;	// IMP=0x000000010001b4f8
+ (id)insertOrUpdateSharedCredential:(id)arg1 withAppletSubcredential:(id)arg2 inDatabase:(id)arg3;	// IMP=0x000000010001b064
+ (_Bool)deleteEntitiesInDatabase:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x000000010001afe4
+ (_Bool)deleteEntitiesInDatabase:(id)arg1 forAppletSubcredential:(id)arg2;	// IMP=0x000000010001af2c
+ (id)setState:(long long)arg1 onSharedCredentialWithIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x000000010001ae7c
+ (id)markPendingDeleteOnSharedCredentialWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010001adf8
+ (id)sharedCredentialsInDatabase:(id)arg1 forSubcredentialPID:(long long)arg2;	// IMP=0x000000010001abb0
- (id)sharedCredential;	// IMP=0x000000010001b900
- (long long)appletSubcredentialPID;	// IMP=0x000000010001b8ac
- (void)updateWithSharedCredential:(id)arg1 appletSubcredentialPID:(long long)arg2;	// IMP=0x000000010001b6dc
- (id)initWithSharedCredential:(id)arg1 forAppletSubcredentialPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010001b198

@end

