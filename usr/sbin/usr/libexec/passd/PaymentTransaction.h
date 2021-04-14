//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PaymentTransaction : SQLiteEntity
{
}

+ (id)_propertySettersForTransactionAuthenticationContext;	// IMP=0x000000010028e724
+ (id)_propertySettersForTransactionAuthenticationResult;	// IMP=0x000000010028e578
+ (id)_propertySettersForForeignExchangeInformation;	// IMP=0x000000010028e458
+ (id)_propertySettersForMerchant;	// IMP=0x000000010028dd20
+ (id)_propertySettersForPaymentTransaction;	// IMP=0x000000010028b874
+ (id)_closestTransactionInDatabase:(id)arg1 withTransactionDate:(id)arg2 withinWindow:(double)arg3 forTransactionSourceIdentifiers:(id)arg4 additionalPredicates:(id)arg5;	// IMP=0x000000010028b384
+ (id)_paymentTransactionsWithQuery:(id)arg1 regions:(id *)arg2 tags:(id *)arg3;	// IMP=0x0000000100289c0c
+ (id)_paymentTransactionsWithQuery:(id)arg1;	// IMP=0x0000000100289bf8
+ (void)_count:(unsigned long long *)arg1 totalAmount:(id *)arg2 currencyCode:(id)arg3 forPredicate:(id)arg4 inDatabase:(id)arg5;	// IMP=0x0000000100289a08
+ (id)_paymentTransactionsInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x0000000100289948
+ (id)_predicateForRewardsValue:(id)arg1 unit:(unsigned long long)arg2;	// IMP=0x0000000100289860
+ (id)_predicateForTransactionTag:(id)arg1;	// IMP=0x0000000100289840
+ (id)_predicateForAmount:(id)arg1 comparison:(long long)arg2;	// IMP=0x00000001002894f8
+ (id)_predicateForCurrencyCode:(id)arg1;	// IMP=0x00000001002894d8
+ (id)_predicateForWorldRegionIdentifier:(id)arg1;	// IMP=0x00000001002894b8
+ (id)_predicateForNoWorldRegion;	// IMP=0x000000010028949c
+ (id)_predicateForWorldRegion;	// IMP=0x0000000100289480
+ (id)_predicateForMerchant:(id)arg1;	// IMP=0x0000000100288cac
+ (id)_predicateForMerchantCategory:(long long)arg1;	// IMP=0x0000000100288974
+ (id)_predicateForMapsBrandCategory:(long long)arg1;	// IMP=0x0000000100288814
+ (id)_predicateForMapsMerchantCategory:(long long)arg1;	// IMP=0x00000001002886b4
+ (id)_predicateForFallbackCategory:(long long)arg1;	// IMP=0x0000000100288640
+ (id)_predicateForLastMerchantReprocessingDateBeforeDate:(id)arg1;	// IMP=0x00000001002884e4
+ (id)_predicateForMapsMatch;	// IMP=0x00000001002883d0
+ (id)_predicateForHasCityAndCountry;	// IMP=0x00000001002882bc
+ (id)_predicateForHasLocation;	// IMP=0x00000001002882a0
+ (id)_predicateForHasPOIMatch;	// IMP=0x0000000100288284
+ (id)_predicateForNoMapsMatch;	// IMP=0x0000000100288170
+ (id)_predicateForRequiresMerchantReprocessing:(_Bool)arg1;	// IMP=0x00000001002880fc
+ (id)_predicateForOriginatedOnDevice:(_Bool)arg1;	// IMP=0x0000000100288088
+ (id)_predicateForIsCloudKitArchived:(_Bool)arg1;	// IMP=0x0000000100288014
+ (id)_predicateForMapsBrandIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100287fa0
+ (id)_predicateForMapsIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100287f2c
+ (id)_predicateForLifecycleIdentifier:(id)arg1;	// IMP=0x0000000100287f0c
+ (id)_predicateForTransactionTypes:(id)arg1;	// IMP=0x0000000100287cf4
+ (id)_predicateForPeerPaymentSubType:(long long)arg1;	// IMP=0x0000000100287c80
+ (id)_predicateForTransactionType:(long long)arg1;	// IMP=0x0000000100287c0c
+ (id)_predicateForPeerPaymentCounterpartHandles:(id)arg1;	// IMP=0x0000000100287a3c
+ (id)_predicateForPeerPaymentCounterpartHandle:(id)arg1;	// IMP=0x0000000100287a1c
+ (id)_predicateForGreaterThanTransactionPID:(id)arg1;	// IMP=0x00000001002879fc
+ (id)_predicateForMapsBrandPID:(id)arg1;	// IMP=0x00000001002879dc
+ (id)_predicateForMapsMerchantPID:(id)arg1;	// IMP=0x00000001002879bc
+ (id)_predicateForSourcePID:(id)arg1;	// IMP=0x000000010028799c
+ (id)_predicateForMapsBrandName:(id)arg1;	// IMP=0x000000010028797c
+ (id)_predicateForMapsMerchantName:(id)arg1;	// IMP=0x000000010028795c
+ (id)_predicateForMerchantWebMerchantIdentifier:(id)arg1;	// IMP=0x000000010028793c
+ (id)_predicateForMerchantAdamIdentifier:(long long)arg1;	// IMP=0x00000001002878c8
+ (id)_predicateForMerchantRawCANL:(id)arg1;	// IMP=0x00000001002878a8
+ (id)_predicateForMerchantRawName:(id)arg1;	// IMP=0x0000000100287888
+ (id)_predicateForMerchantName:(id)arg1;	// IMP=0x0000000100287868
+ (id)_predicateForTransactionStatus:(long long)arg1;	// IMP=0x00000001002877f4
+ (id)_predicateForTransactionDateNewerThanDate:(id)arg1;	// IMP=0x0000000100287764
+ (id)_predicateForTransactionDate:(id)arg1 withinWindow:(double)arg2;	// IMP=0x00000001002875a0
+ (id)_predicateForPaymentHash:(id)arg1;	// IMP=0x00000001002872c0
+ (id)_predicateForUnansweredQuestions;	// IMP=0x00000001002870c4
+ (id)_predicateForAccountType:(long long)arg1;	// IMP=0x0000000100287050
+ (id)_predicateForAccountIdentifier:(id)arg1;	// IMP=0x0000000100287030
+ (id)_predicateForRedemptionType:(long long)arg1;	// IMP=0x0000000100286fbc
+ (id)_predicateForSuppressFromUI:(_Bool)arg1;	// IMP=0x0000000100286e38
+ (id)_predicateForReferenceIdentifier:(id)arg1;	// IMP=0x0000000100286e18
+ (id)_predicateForServiceIdentifier:(id)arg1;	// IMP=0x0000000100286df8
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x0000000100286dd8
+ (id)_predicateForWithNotificationServiceData:(unsigned long long)arg1;	// IMP=0x0000000100286d38
+ (id)_predicateForEndStatusChangedDate:(id)arg1;	// IMP=0x0000000100286ca8
+ (id)_predicateForStartStatusChangedDate:(id)arg1;	// IMP=0x0000000100286c18
+ (id)_predicateForRedemptionEndDate:(id)arg1;	// IMP=0x0000000100286b88
+ (id)_predicateForRedemptionStartDate:(id)arg1;	// IMP=0x0000000100286af8
+ (id)_predicateForEndDate:(id)arg1;	// IMP=0x0000000100286a68
+ (id)_predicateForStartDate:(id)arg1;	// IMP=0x00000001002869d8
+ (id)_predicateForWithBackingData:(unsigned long long)arg1;	// IMP=0x0000000100286784
+ (id)_predicateForWithTransactionSource:(unsigned long long)arg1 excludeCardType:(_Bool)arg2;	// IMP=0x0000000100286578
+ (id)_predicateForTransactionsWithTransactionSource:(unsigned long long)arg1 withBackingData:(unsigned long long)arg2;	// IMP=0x0000000100286444
+ (id)_predicateForTransactionSource:(unsigned long long)arg1;	// IMP=0x00000001002862bc
+ (id)_predicateForPID:(id)arg1;	// IMP=0x000000010028629c
+ (id)_predicateForTransactionSourceType:(unsigned long long)arg1;	// IMP=0x0000000100286228
+ (id)_predicateForTransactionSourceIdentifier:(id)arg1;	// IMP=0x00000001002861d0
+ (id)_predicateForTransactionSourceIdentifiers:(id)arg1;	// IMP=0x0000000100286000
+ (id)_predicateForTransactionSourcePID:(long long)arg1;	// IMP=0x0000000100285f8c
+ (unsigned long long)_countOfTransactionsWithMapsBrandPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100285ef0
+ (unsigned long long)_countOfTransactionsWithMapsMerchantPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100285e54
+ (id)authenticationContextFromProperties:(id)arg1 values:(id *)arg2;	// IMP=0x0000000100285d04
+ (id)foreignExchangeInformationFromProperties:(id)arg1 values:(id *)arg2;	// IMP=0x0000000100284fac
+ (id)merchantFromProperties:(id)arg1 values:(id *)arg2;	// IMP=0x00000001002849e4
+ (id)rewardsValuesForUnit:(unsigned long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010027fb3c
+ (id)tagsForTransactionPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010027f868
+ (void)setTags:(id)arg1 toTransactionWithIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x000000010027f4bc
+ (void)updateTransactionsWithTransactionSource:(id)arg1 toTransactionSource:(id)arg2 inDatabase:(id)arg3;	// IMP=0x000000010027f16c
+ (id)paymentTransactionsInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2;	// IMP=0x000000010027f0e0
+ (void)allPassTransactionIdentifiersInDatabase:(id)arg1 fromPID:(long long)arg2 batchHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010027eb54
+ (void)allPassTransactionIdentifiersInDatabase:(id)arg1 batchHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010027eafc
+ (id)transactionsInDatabase:(id)arg1 forInstallmentPlanIdentifier:(id)arg2;	// IMP=0x000000010027e930
+ (id)transactionsRequiringMerchantCleanupInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2 withLastReprocessingDateBeforeDate:(id)arg3 transactionDateWithinWindow:(double)arg4;	// IMP=0x000000010027e5c8
+ (_Bool)hasPaymentTransactionInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2 withTransactionSource:(unsigned long long)arg3;	// IMP=0x000000010027e44c
+ (id)_predicateForHasAssociatedReceipt;	// IMP=0x000000010027e33c
+ (id)transactionReceiptUniqueIDsInDatabase:(id)arg1;	// IMP=0x000000010027e068
+ (unsigned long long)numberOfPaymentTransactionsInDatabaseWithAssociatedReceipt:(id)arg1;	// IMP=0x000000010027dfe8
+ (unsigned long long)numberOfPaymentTransactionsInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2 withNotificationServiceData:(unsigned long long)arg3 newerThanDate:(id)arg4;	// IMP=0x000000010027de3c
+ (id)paymentTransactionsInDatabase:(id)arg1 originatedOnDevice:(_Bool)arg2 forTransactionSourceIdentifiers:(id)arg3;	// IMP=0x000000010027dca4
+ (id)_predicateForWorldRegionType:(unsigned long long)arg1;	// IMP=0x000000010027dc30
+ (id)_predicateForWorldRegionLocaleIdentifier:(id)arg1;	// IMP=0x000000010027dc10
+ (id)_predicateForWorldRegionNamePattern:(id)arg1;	// IMP=0x000000010027da34
+ (id)_predicateForWorldRegionLocalizedContent;	// IMP=0x000000010027da10
+ (id)regionIdentifiersInDatabase:(id)arg1 matchingName:(id)arg2 types:(id)arg3 localeIdentifier:(id)arg4 withRequest:(id)arg5 limit:(unsigned long long)arg6;	// IMP=0x000000010027d4d8
+ (id)_predicateForTransactionsMissingWorldRegionOnlyEligibleForProcessing:(_Bool)arg1;	// IMP=0x000000010027cf4c
+ (id)paymentTransactionsForTokenizedTransactionsWithRegionsInDatabase:(id)arg1;	// IMP=0x000000010027cc74
+ (_Bool)hasTransactionsMissingWorldRegionEligibleForProcessingInDatabase:(id)arg1;	// IMP=0x000000010027cbb4
+ (id)paymentTransactionsInDatabase:(id)arg1 missingWorldRegionWithLimit:(unsigned long long)arg2 onlyEligibleForProcessing:(_Bool)arg3;	// IMP=0x000000010027caac
+ (id)paymentTransactionsThatAreCloudKitArchived:(_Bool)arg1 forTransactionSourceIdentifiers:(id)arg2 inDatabase:(id)arg3;	// IMP=0x000000010027c8b0
+ (id)paymentTransactionsInDatabaseRequiringCloudKitArchiving:(id)arg1;	// IMP=0x000000010027c898
+ (id)paymentTransactionsRequiringReviewInDatabase:(id)arg1 forAccountIdentifier:(id)arg2;	// IMP=0x000000010027c680
+ (id)installmentTransactionsInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2 installmentPlan:(id)arg3 withRedemptionType:(long long)arg4 startDate:(id)arg5 endDate:(id)arg6;	// IMP=0x000000010027c23c
+ (id)installmentPlanTransactionsInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2;	// IMP=0x000000010027c090
+ (id)_predicateForTransactionSourceIdentifiers:(id)arg1 transactionTypes:(id)arg2 transactionSources:(id)arg3 transactionStatuses:(id)arg4 peerPaymentSubType:(long long)arg5 matchingMerchant:(id)arg6 merchantCategory:(long long)arg7 inRegions:(id)arg8 tags:(id)arg9 startDate:(id)arg10 endDate:(id)arg11 currencyCode:(id)arg12 amount:(id)arg13 amountComparison:(long long)arg14 rewardsValueUnit:(unsigned long long)arg15 rewardsValue:(id)arg16;	// IMP=0x000000010027b314
+ (id)_predicateForRequest:(id)arg1;	// IMP=0x000000010027b060
+ (void)totalAmount:(id *)arg1 forTransactionsWithRequest:(id)arg2 count:(unsigned long long *)arg3 inDatabase:(id)arg4;	// IMP=0x000000010027af88
+ (id)paymentTransactionsInDatabase:(id)arg1 forPredicate:(id)arg2 limit:(long long)arg3;	// IMP=0x000000010027ad00
+ (unsigned long long)countInDatabase:(id)arg1 forRequest:(id)arg2;	// IMP=0x000000010027ac68
+ (id)paymentTransactionsInDatabase:(id)arg1 forRequest:(id)arg2;	// IMP=0x000000010027aa98
+ (id)paymentTransactionsInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2 withRedemptionType:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5;	// IMP=0x000000010027a788
+ (id)paymentTransactionsInDatabase:(id)arg1 withTransactionType:(long long)arg2 forTransactionSourceIdentifiers:(id)arg3 withTransactionSource:(unsigned long long)arg4 withBackingData:(unsigned long long)arg5 startDate:(id)arg6 endDate:(id)arg7 limit:(long long)arg8;	// IMP=0x000000010027a40c
+ (id)paymentTransactionsInDatabase:(id)arg1 withMerchantCategory:(long long)arg2 forTransactionSourceIdentifiers:(id)arg3 withTransactionSource:(unsigned long long)arg4 withBackingData:(unsigned long long)arg5 startDate:(id)arg6 endDate:(id)arg7 limit:(long long)arg8;	// IMP=0x000000010027a090
+ (id)peerPaymentCounterpartHandlesforSource:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100279de0
+ (unsigned long long)countInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2 withPeerPaymentCounterpartHandles:(id)arg3 startDate:(id)arg4 endDate:(id)arg5;	// IMP=0x0000000100279b28
+ (id)paymentTransactionsInDatabase:(id)arg1 matchingMerchant:(id)arg2 forTransactionSourceIdentifiers:(id)arg3 withTransactionSource:(unsigned long long)arg4 withBackingData:(unsigned long long)arg5 limit:(long long)arg6;	// IMP=0x00000001002797d4
+ (id)paymentTransactionsInDatabase:(id)arg1 matchingMapsMerchantIdentifierWithoutRegion:(unsigned long long)arg2 limit:(unsigned long long)arg3;	// IMP=0x0000000100279614
+ (id)paymentTransactionsInDatabase:(id)arg1 matchingMapsMerchantIdentifier:(unsigned long long)arg2 forTransactionSourceIdentifiers:(id)arg3;	// IMP=0x0000000100279460
+ (id)paymentTransactionsInDatabase:(id)arg1 matchingMapsBrandIdentifier:(unsigned long long)arg2 forTransactionSourceIdentifiers:(id)arg3;	// IMP=0x00000001002792ac
+ (id)paymentTransactionsInDatabase:(id)arg1 matchingPeerPaymentCounterpartHandles:(id)arg2 forTransactionSourceIdentifiers:(id)arg3 withTransactionSource:(unsigned long long)arg4 withBackingData:(unsigned long long)arg5 limit:(long long)arg6;	// IMP=0x0000000100278f70
+ (id)paymentTransactionsInDatabase:(id)arg1 withTransactionTypes:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5;	// IMP=0x0000000100278d4c
+ (id)paymentTransactionsInDatabase:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4;	// IMP=0x0000000100278b88
+ (long long)countInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6;	// IMP=0x0000000100278aac
+ (id)pendingPaymentTransactionsInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 orderedByDate:(long long)arg7 limit:(long long)arg8;	// IMP=0x00000001002786c0
+ (id)approvedPaymentTransactionsInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 orderedByDate:(long long)arg7 limit:(long long)arg8;	// IMP=0x0000000100278358
+ (id)paymentTransactionsInDatabase:(id)arg1 forTransactionSourceIdentifiers:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 orderedByDate:(long long)arg7 limit:(long long)arg8;	// IMP=0x0000000100278140
+ (id)_predicateForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5;	// IMP=0x0000000100277f5c
+ (id)paymentTransactionsInDatabase:(id)arg1 withServiceIdentifier:(id)arg2;	// IMP=0x0000000100277e70
+ (id)closestPendingTransactionInDatabase:(id)arg1 fromTransactionDate:(id)arg2 withNotificationServiceData:(unsigned long long)arg3 forMerchantName:(id)arg4 forTransactionSourceIdentifiers:(id)arg5;	// IMP=0x0000000100277cb8
+ (id)closestTransactionInDatabase:(id)arg1 fromTransaction:(id)arg2 forTransactionSourceIdentifiers:(id)arg3;	// IMP=0x0000000100277320
+ (id)paymentTransactionsInDatabase:(id)arg1 withIdentifiers:(id)arg2 regions:(id *)arg3 tags:(id *)arg4;	// IMP=0x00000001002770e0
+ (id)anyInDatabase:(id)arg1 withPaymentHash:(id)arg2 withTransactionSource:(unsigned long long)arg3 withNotificationServiceData:(unsigned long long)arg4 transactionSourceIdentifiers:(id)arg5;	// IMP=0x0000000100276ed0
+ (id)mostRecentActiveTransactionInDatabase:(id)arg1;	// IMP=0x0000000100276b80
+ (_Bool)hasAnyTransactionsInDatabase:(id)arg1;	// IMP=0x0000000100276ac4
+ (id)anyInDatabase:(id)arg1 withReferenceIdentifier:(id)arg2;	// IMP=0x0000000100276a38
+ (id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00000001002769ac
+ (id)anyInDatabase:(id)arg1 withServiceIdentifier:(id)arg2 forTransactionSourceIdentifier:(id)arg3;	// IMP=0x0000000100276840
+ (id)anyInDatabase:(id)arg1 withServiceIdentifier:(id)arg2 accountIdentifier:(id)arg3 accountType:(long long)arg4;	// IMP=0x000000010027669c
+ (id)anyInDatabase:(id)arg1 withTransactionSourceIdentifier:(id)arg2;	// IMP=0x0000000100276610
+ (id)anyInDatabase:(id)arg1 withPID:(id)arg2;	// IMP=0x0000000100276584
+ (void)deleteEntitiesForTransactionSource:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001002760c4
+ (void)truncateEntitiesForTransactionSourceIdentifiers:(id)arg1 withNotificationServiceData:(unsigned long long)arg2 suppressedFromUI:(unsigned long long)arg3 inDatabase:(id)arg4 toCount:(long long)arg5;	// IMP=0x0000000100275d40
+ (id)insertPaymentTransaction:(id)arg1 withTransactionSource:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100275cb0
+ (id)disambiguatedSQLForProperty:(id)arg1;	// IMP=0x0000000100275c18
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x000000010027590c
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0000000100275894
+ (id)databaseTable;	// IMP=0x0000000100275888
- (void)_createPaymentTransactionAuthentication;	// IMP=0x000000010028b7fc
- (_Bool)_hasValidMerchantData;	// IMP=0x000000010028b774
- (id)_transactionSourceIdentifierObject;	// IMP=0x0000000100285da8
- (id)transactionAuthenticationContext;	// IMP=0x0000000100285b94
- (id)transactionAuthenticationResult;	// IMP=0x00000001002859ec
- (long long)accountType;	// IMP=0x0000000100285998
- (id)passUniqueIdentifier;	// IMP=0x00000001002858c0
- (unsigned long long)mapsMerchantIdentifier;	// IMP=0x000000010028586c
- (long long)transactionType;	// IMP=0x0000000100285818
- (id)transactionSourceIdentifier;	// IMP=0x00000001002857c4
- (id)paymentApplication;	// IMP=0x000000010028571c
- (id)accountIdentifier;	// IMP=0x0000000100285708
- (id)serviceIdentifier;	// IMP=0x00000001002856f4
- (id)identifier;	// IMP=0x00000001002856e0
- (id)foreignExchangeInformation;	// IMP=0x0000000100285260
- (id)merchant;	// IMP=0x0000000100284c24
- (id)paymentTransaction;	// IMP=0x00000001002838e8
- (void)updateWithPaymentTransactionAmountModifiers:(id)arg1;	// IMP=0x0000000100283840
- (void)updateWithPaymentTransactionAwards:(id)arg1;	// IMP=0x0000000100283798
- (void)removeMapsDataForIssueReportIdentifier:(id)arg1;	// IMP=0x0000000100283724
- (void)updateWithMapsBrand:(id)arg1;	// IMP=0x00000001002833b8
- (void)updateWithMapsMerchant:(id)arg1;	// IMP=0x000000010028304c
- (void)updateWithPaymentTransactionQuestions:(id)arg1;	// IMP=0x0000000100282fcc
- (void)updateWithPaymentTransactionRewards:(id)arg1;	// IMP=0x0000000100282f4c
- (void)updateWithPaymentTransactionFees:(id)arg1;	// IMP=0x0000000100282ecc
- (void)updateWithPaymentAmounts:(id)arg1;	// IMP=0x0000000100282e24
- (void)updateWithMerchant:(id)arg1;	// IMP=0x000000010028284c
- (void)updateRedemptionType:(unsigned long long)arg1;	// IMP=0x00000001002827f0
- (void)updateSuppressBehavior:(unsigned long long)arg1;	// IMP=0x0000000100282794
- (void)updateWithPaymentTransaction:(id)arg1;	// IMP=0x000000010027ffd4
- (void)replaceWithPaymentTransaction:(id)arg1;	// IMP=0x000000010027fda4
- (void)_applyRewardsValuesToDictionary:(id)arg1 forTransaction:(id)arg2;	// IMP=0x000000010027fa24
- (_Bool)deleteFromDatabase;	// IMP=0x000000010027618c
- (id)initWithPaymentTransaction:(id)arg1 transactionSource:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001002737bc

@end

