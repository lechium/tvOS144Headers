/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/HKHealthRecordsStoreInterface.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKTaskServerProxyProvider, HKHealthStore, HKObserverSet, NSString;

@interface HKHealthRecordsStore : NSObject <HKHealthRecordsStoreInterface, _HKXPCExportable> {

	os_unfair_lock_s _ivarLock;
	HKTaskServerProxyProvider* _proxyProvider;
	long long _lastKnownIngestionState;
	HKHealthStore* _healthStore;
	HKObserverSet* _ingestionStateChangeObservers;
	HKObserverSet* _accountStateChangeObservers;
	HKObserverSet* _chrSupportedStateChangeObservers;
	/*^block*/id _unitTesting_didCallReestablishProxyConnectionIfObserversArePresent;

}

@property (nonatomic,retain) HKObserverSet * ingestionStateChangeObservers;                                    //@synthesize ingestionStateChangeObservers=_ingestionStateChangeObservers - In the implementation block
@property (nonatomic,retain) HKObserverSet * accountStateChangeObservers;                                      //@synthesize accountStateChangeObservers=_accountStateChangeObservers - In the implementation block
@property (nonatomic,retain) HKObserverSet * chrSupportedStateChangeObservers;                                 //@synthesize chrSupportedStateChangeObservers=_chrSupportedStateChangeObservers - In the implementation block
@property (nonatomic,copy) id unitTesting_didCallReestablishProxyConnectionIfObserversArePresent;              //@synthesize unitTesting_didCallReestablishProxyConnectionIfObserversArePresent=_unitTesting_didCallReestablishProxyConnectionIfObserversArePresent - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;                                                    //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) long long currentIngestionState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(NSString *)description;
-(id)exportedInterface;
-(id)accountWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)connectionInvalidated;
-(HKHealthStore *)healthStore;
-(id)remoteInterface;
-(id)initWithHealthStore:(id)arg1 ;
-(/*^block*/id)_actionCompletionOnClientQueue:(/*^block*/id)arg1 ;
-(/*^block*/id)_objectCompletionOnClientQueue:(/*^block*/id)arg1 ;
-(void)_reestablishProxyConnectionIfObserversArePresentWithPluginServerProxy:(id)arg1 ;
-(void)_getSynchronousHealthRecordsPluginServerProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_fetchHealthRecordsPluginServerProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(/*^block*/id)_actionCompletionWithObjectOnClientQueue:(/*^block*/id)arg1 ;
-(void)ingestHealthRecordsWithFHIRDocumentHandle:(id)arg1 accountIdentifier:(id)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_establishProxyConnectionIfNoObserversArePresent;
-(void)_establishProxyConnection;
-(void)_executeCheapCallOnPluginServerProxy:(id)arg1 ;
-(void)clientRemote_updateIngestionState:(long long)arg1 ;
-(void)clientRemote_accountDidChange:(id)arg1 changeType:(long long)arg2 ;
-(void)clientRemote_healthRecordsSupportedDidChangeTo:(BOOL)arg1 ;
-(id)allAccountsWithError:(id*)arg1 ;
-(void)fetchAllAccountsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchAccountsForGateways:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAccountForSource:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAccountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAccountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidateCredentialForAccountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasHealthRecordsAccount;
-(void)beginInitialLoginSessionForGateway:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginReloginSessionForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)endLoginSessionWithState:(id)arg1 code:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)pruneAuthenticationDataWithCompletion:(/*^block*/id)arg1 ;
-(void)replaceAccountWithNewAccountForAccountWithIdentifier:(id)arg1 usingCredentialWithPersistentID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateAccountCredentialStateForAccountWithIdentifier:(id)arg1 state:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)ingestHealthRecordsWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)ingestHealthRecordsWithFHIRDocumentHandle:(id)arg1 accountIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)resetHealthRecordsLastExtractedRowIDWithCompletion:(/*^block*/id)arg1 ;
-(void)getHealthRecordsIngestionFrequencyWithCompletion:(/*^block*/id)arg1 ;
-(void)setHealthRecordsIngestionFrequency:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchRawSourceStringForHealthRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchExportedPropertiesForHealthRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchFHIRJSONDocumentWithAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stringifyExtractionFailureReasonsForRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)triggerClinicalOptInDataCollectionForReason:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetClinicalOptInDataCollectionAnchorsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchClinicalOptInDataCollectionFilePathsWithCompletion:(/*^block*/id)arg1 ;
-(void)triggerClinicalContentAnalyticsForReason:(long long)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)triggerHealthCloudUploadWithCompletion:(/*^block*/id)arg1 ;
-(void)resetClinicalContentAnalyticsAnchorsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchRemoteSearchResultsPageForQuery:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 from:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)cancelInFlightSearchQueriesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchRemoteProviderWithExternalID:(id)arg1 batchID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchRemoteGatewayWithExternalID:(id)arg1 batchID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchLogoDataForBrand:(id)arg1 scaleKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchLogoDataForFeaturedBrandsAtScaleKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addIngestionStateListener:(id)arg1 ;
-(long long)currentIngestionState;
-(void)addAccountStateChangeListener:(id)arg1 ;
-(void)removeAccountStateChangeListener:(id)arg1 ;
-(void)addHealthRecordsSupportedChangeListener:(id)arg1 ;
-(void)removeHealthRecordsSupportedChangeListener:(id)arg1 ;
-(void)createStaticAccountWithTitle:(id)arg1 subtitle:(id)arg2 description:(id)arg3 countryCode:(id)arg4 fhirVersion:(id)arg5 onlyIfNeededForSimulatedGatewayID:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)badgeForNewHealthRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)notifyForNewHealthRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)registerAppSourceForClinicalUnlimitedAuthorizationModeConfirmation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deregisterAppSourceFromClinicalUnlimitedAuthorizationModeConfirmation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HKObserverSet *)ingestionStateChangeObservers;
-(void)setIngestionStateChangeObservers:(HKObserverSet *)arg1 ;
-(HKObserverSet *)accountStateChangeObservers;
-(void)setAccountStateChangeObservers:(HKObserverSet *)arg1 ;
-(HKObserverSet *)chrSupportedStateChangeObservers;
-(void)setChrSupportedStateChangeObservers:(HKObserverSet *)arg1 ;
-(id)unitTesting_didCallReestablishProxyConnectionIfObserversArePresent;
-(void)setUnitTesting_didCallReestablishProxyConnectionIfObserversArePresent:(id)arg1 ;
-(void)_hk_shouldPromptForOptInClinicalDataCollection:(/*^block*/id)arg1 ;
@end

