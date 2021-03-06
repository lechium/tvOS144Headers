/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RTPersistenceMetricsDelegate.h>
#import <libobjc.A.dylib/RTPersistenceDelegate.h>
#import <libobjc.A.dylib/RTPurgable.h>

@protocol OS_dispatch_queue, OS_os_transaction, RTPersistenceMetricsDelegate;
@class RTPersistenceManager, RTDataProtectionManager, RTAccountManager, RTPlatform, RTKeychainManager, RTDefaultsManager, RTLifeCycleManager, NSObject, RTAccount, RTPersistenceResetSyncContext, RTDarwinNotificationHelper, NSString;

@interface RTPersistenceDriver : NSObject <RTPersistenceMetricsDelegate, RTPersistenceDelegate, RTPurgable> {

	BOOL _requiresDirtyTransaction;
	BOOL _requiresSetupTransaction;
	RTPersistenceManager* _persistenceManager;
	RTDataProtectionManager* _dataProtectionManager;
	RTAccountManager* _accountManager;
	RTPlatform* _currentPlatform;
	RTKeychainManager* _keychainManager;
	RTDefaultsManager* _defaultsManager;
	RTLifeCycleManager* _lifecycleManager;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_os_transaction> _setupTransaction;
	long long _cloudSyncAuthorization;
	long long _encryptedDataAvailability;
	RTAccount* _currentAccount;
	id<RTPersistenceMetricsDelegate> _metricsDelegate;
	RTPersistenceResetSyncContext* _resetSyncContext;
	RTDarwinNotificationHelper* _notificationHelper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (retain) NSObject*<OS_os_transaction> setupTransaction;                  //@synthesize setupTransaction=_setupTransaction - In the implementation block
@property (assign) BOOL requiresDirtyTransaction;                                  //@synthesize requiresDirtyTransaction=_requiresDirtyTransaction - In the implementation block
@property (assign) BOOL requiresSetupTransaction;                                  //@synthesize requiresSetupTransaction=_requiresSetupTransaction - In the implementation block
@property (assign) long long cloudSyncAuthorization;                               //@synthesize cloudSyncAuthorization=_cloudSyncAuthorization - In the implementation block
@property (assign) long long encryptedDataAvailability;                            //@synthesize encryptedDataAvailability=_encryptedDataAvailability - In the implementation block
@property (retain) RTAccount * currentAccount;                                     //@synthesize currentAccount=_currentAccount - In the implementation block
@property (__weak) id<RTPersistenceMetricsDelegate> metricsDelegate;               //@synthesize metricsDelegate=_metricsDelegate - In the implementation block
@property (retain) RTPersistenceResetSyncContext * resetSyncContext;               //@synthesize resetSyncContext=_resetSyncContext - In the implementation block
@property (retain) RTDarwinNotificationHelper * notificationHelper;                //@synthesize notificationHelper=_notificationHelper - In the implementation block
@property (readonly) RTPersistenceManager * persistenceManager;                    //@synthesize persistenceManager=_persistenceManager - In the implementation block
@property (readonly) RTDataProtectionManager * dataProtectionManager;              //@synthesize dataProtectionManager=_dataProtectionManager - In the implementation block
@property (readonly) RTAccountManager * accountManager;                            //@synthesize accountManager=_accountManager - In the implementation block
@property (readonly) RTPlatform * currentPlatform;                                 //@synthesize currentPlatform=_currentPlatform - In the implementation block
@property (readonly) RTKeychainManager * keychainManager;                          //@synthesize keychainManager=_keychainManager - In the implementation block
@property (retain) RTDefaultsManager * defaultsManager;                            //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (retain) RTLifeCycleManager * lifecycleManager;                          //@synthesize lifecycleManager=_lifecycleManager - In the implementation block
-(id)init;
-(void)dealloc;
-(void)start;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)shutdown;
-(RTPlatform *)currentPlatform;
-(RTKeychainManager *)keychainManager;
-(void)_shutdown;
-(RTAccountManager *)accountManager;
-(RTAccount *)currentAccount;
-(void)setMetricsDelegate:(id<RTPersistenceMetricsDelegate>)arg1 ;
-(id<RTPersistenceMetricsDelegate>)metricsDelegate;
-(void)setCurrentAccount:(RTAccount *)arg1 ;
-(RTDefaultsManager *)defaultsManager;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(id)initWithPersistenceManager:(id)arg1 dataProtectionManager:(id)arg2 accountManager:(id)arg3 platform:(id)arg4 keychainManager:(id)arg5 defaultsManager:(id)arg6 lifecycleManager:(id)arg7 ;
-(void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(RTDarwinNotificationHelper *)notificationHelper;
-(void)setNotificationHelper:(RTDarwinNotificationHelper *)arg1 ;
-(void)onCloudSyncAuthorizationChange:(id)arg1 ;
-(RTPersistenceManager *)persistenceManager;
-(void)persistenceStore:(id)arg1 encounteredCriticalError:(id)arg2 ;
-(BOOL)persistenceMirroringManagerDidFinishZonePurge:(id)arg1 store:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(void)_onCloudSyncAuthorizationChange:(id)arg1 ;
-(id)mirroringOptionsForStoreWithType:(unsigned long long)arg1 ;
-(void)persistenceStore:(id)arg1 failedWithError:(id)arg2 ;
-(void)persistenceMigrator:(id)arg1 didStartMigratingStore:(id)arg2 withModelProvider:(id)arg3 ;
-(void)persistenceMigrator:(id)arg1 didFinishMigratingStore:(id)arg2 withModelProvider:(id)arg3 ;
-(BOOL)store:(id)arg1 validateAppleIDs:(id)arg2 ;
-(BOOL)prepareStore:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)backupPersistenceStore:(id)arg1 error:(id*)arg2 ;
-(id)appleIDsForStore:(id)arg1 ;
-(BOOL)importSourceStore:(id)arg1 sourceCoordinator:(id)arg2 destinationStore:(id)arg3 destinationCoordinator:(id)arg4 managedObjectModel:(id)arg5 configuration:(id)arg6 error:(id*)arg7 ;
-(RTDataProtectionManager *)dataProtectionManager;
-(void)onDataProtectionChange:(id)arg1 ;
-(void)onAccountChange:(id)arg1 ;
-(void)onDailyMetricsNotification:(id)arg1 ;
-(void)setSetupTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)_onDataProtectionChange:(id)arg1 ;
-(void)setEncryptedDataAvailability:(long long)arg1 ;
-(long long)encryptedDataAvailability;
-(void)_evaluteDirtyTransactionAfterConfigurationChange:(long long)arg1 ;
-(long long)cloudSyncAuthorization;
-(void)_setupPersistenceAfterConfigurationChange:(long long)arg1 cloudSyncAuthorization:(long long)arg2 account:(id)arg3 ;
-(void)setCloudSyncAuthorization:(long long)arg1 ;
-(void)_onAccountChange:(id)arg1 ;
-(void)setRequiresDirtyTransaction:(BOOL)arg1 ;
-(void)evaluateTransactions;
-(void)setRequiresSetupTransaction:(BOOL)arg1 ;
-(BOOL)requiresDirtyTransaction;
-(BOOL)requiresSetupTransaction;
-(NSObject*<OS_os_transaction>)setupTransaction;
-(unsigned long long)persistenceDeviceClassForPlatform;
-(id)persistCurrentDeviceWithIdentifier:(id)arg1 inStore:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(void)_updatePersistenceContexts:(id)arg1 deviceObjectID:(id)arg2 ;
-(void)cleanupOlderPersistentStores;
-(BOOL)persistCurrentDeviceRecordInStore:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(void)persistenceStore:(id)arg1 didPrepareWithContext:(id)arg2 ;
-(void)persistenceStoreFailedWithError:(id)arg1 ;
-(RTLifeCycleManager *)lifecycleManager;
-(void)_updatePersistenceStoresWithDeviceObjectID:(id)arg1 ;
-(void)setResetSyncContext:(RTPersistenceResetSyncContext *)arg1 ;
-(RTPersistenceResetSyncContext *)resetSyncContext;
-(void)persistenceStoreResetSyncWithUserInfo:(id)arg1 ;
-(BOOL)_evaluatePersistentHistoryForDeletedDeviceDuringResetSync:(BOOL*)arg1 resetSyncContext:(id)arg2 managedObjectContext:(id)arg3 error:(id*)arg4 ;
-(id)_repersistPreviousDeviceWithResetSyncContext:(id)arg1 persistenceManager:(id)arg2 managedObjectContext:(id)arg3 ;
-(BOOL)_purgeLocalEntityRowsUsingModel:(id)arg1 managedObjectContext:(id)arg2 persistenceManager:(id)arg3 error:(id*)arg4 ;
-(void)persistenceDriver:(id)arg1 persistenceMigrator:(id)arg2 didStartMigratingStore:(id)arg3 withModelProvider:(id)arg4 ;
-(void)persistenceDriver:(id)arg1 persistenceMigrator:(id)arg2 didFinishMigratingStore:(id)arg3 withModelProvider:(id)arg4 ;
-(void)persistenceManagerWillStartResetSync:(id)arg1 userInfo:(id)arg2 context:(id)arg3 ;
-(void)persistenceManagerDidFinishResetSync:(id)arg1 userInfo:(id)arg2 ;
-(id)optionsForStoreWithType:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)remoteServerOptionsForStoreWithType:(unsigned long long)arg1 ;
-(void)persistenceManager:(id)arg1 didFinishSetup:(BOOL)arg2 ;
-(id)prepareForDatabaseRekey:(id*)arg1 ;
-(void)setLifecycleManager:(RTLifeCycleManager *)arg1 ;
-(id)latestCloudManagedObjectWithEntityDescription:(id)arg1 predicate:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(id)earliestCloudManagedObjectWithEntityDescription:(id)arg1 predicate:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)countOfCloudManagedObjectWithEntityDescription:(id)arg1 predicate:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(id)cloudManagedObjectWithEntityDescription:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
@end

