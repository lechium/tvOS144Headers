//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface Pass : SQLiteEntity
{
}

+ (id)_propertySettersForGroupingProfile;	// IMP=0x0000000100077710
+ (id)_propertySettersForUpdateContext;	// IMP=0x000000010007743c
+ (id)_propertySettersForDisplayProfile;	// IMP=0x0000000100076fc0
+ (id)_propertySettersForPass;	// IMP=0x0000000100075aa4
+ (id)_propertiesForPass;	// IMP=0x0000000100075978
+ (id)_realPassInDatabase:(id)arg1 withProperties:(id)arg2 values:(id *)arg3 pID:(long long)arg4;	// IMP=0x0000000100075520
+ (id)predicateForAssociatedAccountIdentifier:(id)arg1;	// IMP=0x0000000100075500
+ (id)_predicateForIsCloudKitArchived:(_Bool)arg1;	// IMP=0x00000001000753bc
+ (id)predicateForIssuerCountryCodes:(id)arg1;	// IMP=0x000000010007539c
+ (id)_predicateForSerialNumber:(id)arg1;	// IMP=0x000000010007537c
+ (id)predicateForStyle:(long long)arg1;	// IMP=0x0000000100075308
+ (id)predicateForProvisioningCredentialHash:(id)arg1;	// IMP=0x00000001000752e8
+ (id)predicateForUniqueID:(id)arg1;	// IMP=0x00000001000752c8
+ (id)predicateForValidStyle;	// IMP=0x00000001000752a4
+ (id)predicateForGroup:(id)arg1;	// IMP=0x0000000100075218
+ (id)predicateForPassType:(id)arg1;	// IMP=0x000000010007518c
+ (id)predicateForPrimaryAccountIdentifier:(id)arg1;	// IMP=0x000000010007516c
+ (id)predicateForPaymentApplicationIdentifier:(id)arg1 withSecureElementIdentifiers:(id)arg2;	// IMP=0x0000000100075018
+ (id)predicateForPaymentApplicationIdentifier:(id)arg1 withSecureElementIdentifier:(id)arg2;	// IMP=0x0000000100074ec8
+ (id)predicateForTCIs:(id)arg1;	// IMP=0x0000000100074ea8
+ (id)predicateForPaymentType:(unsigned long long)arg1;	// IMP=0x0000000100074e34
+ (id)predicateForPaymentApplicationAppletDataFormatPrefix:(id)arg1;	// IMP=0x0000000100074e14
+ (id)predicateForPaymentApplicationNetworks:(id)arg1;	// IMP=0x0000000100074df4
+ (id)predicateForPaymentApplicationSupportsInAppPayment:(_Bool)arg1;	// IMP=0x0000000100074d80
+ (id)predicateForPaymentApplicationSupportsContactlessPayment:(_Bool)arg1;	// IMP=0x0000000100074d0c
+ (id)predicateForPrimaryPaymentApplication:(_Bool)arg1;	// IMP=0x0000000100074c94
+ (id)predicateForPaymentApplicationStates:(id)arg1;	// IMP=0x0000000100074ad8
+ (id)predicateForPaymentApplicationState:(long long)arg1;	// IMP=0x0000000100074a64
+ (id)predicateForPaymentApplicationSecureElementIdentifier:(id)arg1;	// IMP=0x0000000100074a44
+ (id)predicateForPaymentApplicationSecureElementIdentifiers:(id)arg1;	// IMP=0x0000000100074a24
+ (id)predicateForNotificationService:(id)arg1;	// IMP=0x0000000100074998
+ (id)predicateForAssociatedPassTypeIdentifierHash:(id)arg1;	// IMP=0x0000000100074978
+ (id)predicateForPassTypeIdentifierHash:(id)arg1;	// IMP=0x0000000100074958
+ (id)predicateForPaymentCardType:(long long)arg1;	// IMP=0x00000001000748e4
+ (id)predicateForWebService:(id)arg1;	// IMP=0x0000000100074858
+ (id)predicateForHasValidNFCPayload;	// IMP=0x0000000100074720
+ (id)predicateForHasAnyWebService;	// IMP=0x0000000100074704
+ (id)predicateForTransactionSourceWithPID:(unsigned long long)arg1;	// IMP=0x0000000100074690
+ (id)predicateForPersistentID:(long long)arg1;	// IMP=0x000000010007461c
+ (id)queryWithDatabase:(id)arg1 group:(id)arg2;	// IMP=0x00000001000740f4
+ (id)queryWithDatabase:(id)arg1 passType:(id)arg2;	// IMP=0x0000000100074068
+ (id)passesInDatabase:(id)arg1 isCloudKitArchived:(_Bool)arg2;	// IMP=0x0000000100073fd8
+ (id)anyInDatabase:(id)arg1 withAssociatedAccountIdentifier:(id)arg2;	// IMP=0x0000000100073f4c
+ (id)anyInDatabase:(id)arg1 withPrimaryAccountIdentifier:(id)arg2;	// IMP=0x0000000100073ec0
+ (id)anyInDatabase:(id)arg1 withApplicationIdentifier:(id)arg2 secureElementIdentifiers:(id)arg3;	// IMP=0x0000000100073e18
+ (id)anyInDatabase:(id)arg1 withApplicationIdentifier:(id)arg2 secureElementIdentifier:(id)arg3;	// IMP=0x0000000100073d70
+ (id)anyInDatabase:(id)arg1 withNotificationService:(id)arg2;	// IMP=0x0000000100073ce4
+ (id)anyInDatabase:(id)arg1 withWebService:(id)arg2 serialNumber:(id)arg3;	// IMP=0x0000000100073b90
+ (id)anyInDatabase:(id)arg1 withPassType:(id)arg2 serialNumber:(id)arg3;	// IMP=0x0000000100073a3c
+ (id)anyInDatabase:(id)arg1 withGroup:(id)arg2;	// IMP=0x00000001000739b0
+ (id)anyInDatabase:(id)arg1 withWebService:(id)arg2;	// IMP=0x0000000100073924
+ (id)anyInDatabase:(id)arg1 withPassType:(id)arg2;	// IMP=0x0000000100073898
+ (id)anyInDatabase:(id)arg1 withProvisioningCredentialHash:(id)arg2;	// IMP=0x000000010007380c
+ (id)anyInDatabase:(id)arg1 withUniqueID:(id)arg2;	// IMP=0x0000000100073780
+ (id)anyInDatabase:(id)arg1 withTransactionSourcePID:(unsigned long long)arg2;	// IMP=0x00000001000736f0
+ (id)anyInDatabase:(id)arg1 withPersistentID:(long long)arg2;	// IMP=0x0000000100073660
+ (void)enumeratePassesAndGroupingProfilesForQuery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000733fc
+ (void)enumerateOrganizationNamesForQuery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000732cc
+ (void)enumerateUpdateContextsForQuery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000730f0
+ (id)candidatePassesInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x0000000100071d88
+ (id)passUniqueIDsInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x0000000100071bbc
+ (id)passesInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x0000000100071af8
+ (id)_realPassesInDatabase:(id)arg1 predicate:(id)arg2 orderedBy:(id)arg3;	// IMP=0x0000000100071510
+ (id)_realPassPredicateForPredicate:(id)arg1;	// IMP=0x00000001000713dc
+ (id)insertPass:(id)arg1 withPassType:(id)arg2 webService:(id)arg3 transactionService:(id)arg4 messageService:(id)arg5 inDatabase:(id)arg6;	// IMP=0x0000000100070114
+ (id)_updateDictionaryWithPass:(id)arg1;	// IMP=0x000000010006f5ec
+ (id)_insertionDictionaryWithPass:(id)arg1 passType:(id)arg2;	// IMP=0x000000010006f414
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x000000010006f194
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x000000010006f0a4
+ (id)databaseTable;	// IMP=0x000000010006f098
- (_Bool)deleteFromDatabase;	// IMP=0x0000000100074180
- (id)transactionSourceIdentifier;	// IMP=0x0000000100073024
- (_Bool)auxiliaryCapabilityRegistered;	// IMP=0x0000000100072fd0
- (void)getPushRegistrationStatus:(unsigned long long *)arg1 date:(id *)arg2;	// IMP=0x0000000100072d6c
- (id)associatedApplicationIdentifiers;	// IMP=0x0000000100072d44
- (id)associatedPassTypeIdentifiers;	// IMP=0x0000000100072d1c
- (id)relevantDate;	// IMP=0x0000000100072cc8
- (id)primaryAccountIdentifier;	// IMP=0x0000000100072cb4
- (id)associatedAccountIdentifier;	// IMP=0x0000000100072ca0
- (_Bool)hasAssociatedPeerPaymentAccount;	// IMP=0x0000000100072c4c
- (id)authenticationToken;	// IMP=0x0000000100072c38
- (id)serialNumber;	// IMP=0x0000000100072c24
- (id)uniqueID;	// IMP=0x0000000100072c10
- (_Bool)revoked;	// IMP=0x0000000100072bbc
- (id)defaultPaymentApplication;	// IMP=0x0000000100072acc
- (id)group;	// IMP=0x00000001000729dc
- (id)passNotificationServiceForType:(unsigned long long)arg1;	// IMP=0x0000000100072994
- (id)passMessageService;	// IMP=0x00000001000728a4
- (id)passTransactionService;	// IMP=0x00000001000727b4
- (id)messageService;	// IMP=0x0000000100072760
- (id)transactionService;	// IMP=0x000000010007270c
- (id)webService;	// IMP=0x000000010007261c
- (unsigned long long)passFlavor;	// IMP=0x00000001000725c8
- (id)passType;	// IMP=0x00000001000724d8
- (id)groupingProfile;	// IMP=0x00000001000723a0
- (id)updateContext;	// IMP=0x0000000100072268
- (id)pass;	// IMP=0x000000010007225c
- (id)_realPass;	// IMP=0x00000001000718cc
- (_Bool)udpateWithAuxiliaryCapabilityRegistered:(_Bool)arg1;	// IMP=0x0000000100071374
- (void)updateWithRevocationStatus:(_Bool)arg1;	// IMP=0x0000000100071318
- (void)updateWithGroup:(id)arg1;	// IMP=0x00000001000712c8
- (void)updateWithAssociatedWebDomains:(id)arg1;	// IMP=0x0000000100071204
- (void)updateWithAssociatedPassTypeIdentifiers:(id)arg1;	// IMP=0x0000000100071140
- (void)updateWithAssociatedApplicationIdentifiers:(id)arg1;	// IMP=0x000000010007107c
- (void)_updateWithPassMessageService:(id)arg1;	// IMP=0x000000010007102c
- (void)_updateWithPassTransactionService:(id)arg1;	// IMP=0x0000000100070fdc
- (void)_updateWithMessageService:(id)arg1;	// IMP=0x0000000100070eec
- (void)_updateWithTransactionService:(id)arg1;	// IMP=0x0000000100070dfc
- (void)updateWithAssociatedAccountIdentifier:(id)arg1;	// IMP=0x0000000100070de8
- (void)updateWithTransactionSourcePID:(long long)arg1;	// IMP=0x0000000100070d8c
- (void)updateWithDefaultPaymentApplication:(id)arg1;	// IMP=0x0000000100070d3c
- (void)updateWithPaymentApplications:(id)arg1;	// IMP=0x0000000100070cbc
- (void)_updateWithWebService:(id)arg1;	// IMP=0x0000000100070c6c
- (void)updateWithBeacons:(id)arg1;	// IMP=0x0000000100070ba8
- (void)updateWithNFCPayload:(id)arg1;	// IMP=0x0000000100070ae0
- (void)updateTallCodeValueWithPass:(id)arg1;	// IMP=0x0000000100070a44
- (void)updateBackgroundColorWithPass:(id)arg1;	// IMP=0x000000010007093c
- (void)updateLocationsWithPass:(id)arg1;	// IMP=0x000000010007069c
- (void)updateWithLastModifiedSource:(long long)arg1;	// IMP=0x00000001000705d4
- (void)updateWithLastModifiedTag:(id)arg1;	// IMP=0x00000001000705c0
- (void)updateWithPushRegistrationStatus:(long long)arg1 date:(id)arg2;	// IMP=0x0000000100070494
- (void)updateWithPass:(id)arg1 webService:(id)arg2 transactionSevice:(id)arg3 messageService:(id)arg4;	// IMP=0x0000000100070208
- (id)initWithPass:(id)arg1 passType:(id)arg2 webService:(id)arg3 transactionService:(id)arg4 messageService:(id)arg5 inDatabase:(id)arg6;	// IMP=0x000000010006ffbc

@end

