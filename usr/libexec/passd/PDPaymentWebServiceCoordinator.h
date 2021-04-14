//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDAssertionObserver-Protocol.h"
#import "PDDatabaseManagerPaymentServicesDelegate-Protocol.h"
#import "PDPaymentWebServiceTargetDeviceDataSource-Protocol.h"
#import "PDPushNotificationConsumer-Protocol.h"
#import "PDScheduledActivityClient-Protocol.h"
#import "PDXPCEventStreamObserver-Protocol.h"
#import "PKPaymentVerificationObserverDelegate-Protocol.h"
#import "PKPaymentWebServiceBackgroundDelegate-Protocol.h"
#import "PKSecureElementConsistencyCheckerDelegate-Protocol.h"

@class NSHashTable, NSMutableArray, NSMutableSet, NSString, PDAccountManager, PDAppletSubcredentialManager, PDApplyManager, PDAssertionManager, PDCardFileManager, PDDatabaseManager, PDDefaultPassManager, PDDevicePasscodeManager, PDDeviceRegistrationServiceCoordinator, PDExpressPassManager, PDPassUpgradeController, PDPaymentWebServiceArchiver, PDPeerPaymentWebServiceCoordinator, PDPushNotificationManager, PDPushProvisioningManager, PDTransactionReceiptFileManager, PDUserNotificationManager, PKIDSManager, PKPaymentVerificationObserver, PKPaymentWebService, PKPaymentWebServiceContext, PKSecureElement;
@protocol OS_dispatch_queue, PKCloudStoreCoordinatorDelegate, PKTapToRadarDelegate;

@interface PDPaymentWebServiceCoordinator : NSObject <PDPushNotificationConsumer, PDXPCEventStreamObserver, PDDatabaseManagerPaymentServicesDelegate, PKPaymentWebServiceBackgroundDelegate, PKPaymentVerificationObserverDelegate, PKSecureElementConsistencyCheckerDelegate, PDAssertionObserver, PDScheduledActivityClient, PDPaymentWebServiceTargetDeviceDataSource>
{
    PDPushNotificationManager *_pushNotificationManager;	// 8 = 0x8
    PDDatabaseManager *_databaseManager;	// 16 = 0x10
    PDCardFileManager *_passStore;	// 24 = 0x18
    PKSecureElement *_secureElement;	// 32 = 0x20
    PDUserNotificationManager *_userNotificationManager;	// 40 = 0x28
    PKPaymentWebService *_sharedWebService;	// 48 = 0x30
    PDPaymentWebServiceArchiver *_archiver;	// 56 = 0x38
    PDAssertionManager *_assertionManager;	// 64 = 0x40
    PDPassUpgradeController *_upgradeController;	// 72 = 0x48
    PKPaymentVerificationObserver *_verificationObserver;	// 80 = 0x50
    id <PKCloudStoreCoordinatorDelegate> _cloudStoreCoordinatorDelegate;	// 88 = 0x58
    PDTransactionReceiptFileManager *_receiptFileManager;	// 96 = 0x60
    PDExpressPassManager *_expressPassManager;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_sharedWebServiceQueue;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_replyQueue;	// 120 = 0x78
    PKIDSManager *_idsManager;	// 128 = 0x80
    NSHashTable *_observers;	// 136 = 0x88
    NSMutableArray *_paymentSetupProductConfigurations;	// 144 = 0x90
    NSMutableArray *_pendingProductsUpdateBlocks;	// 152 = 0x98
    _Bool _isUpdatingProducts;	// 160 = 0xa0
    NSMutableArray *_deviceCheckInTasks;	// 168 = 0xa8
    _Bool _deviceCheckInRunning;	// 176 = 0xb0
    id <PKTapToRadarDelegate> _tapToRadarDelegate;	// 184 = 0xb8
    NSMutableSet *_fetchingReceiptUniqueIDs;	// 192 = 0xc0
    _Bool _isFetchingPaymentSetupFeatures;	// 200 = 0xc8
    NSMutableArray *_pendingPaymentSetupFeatureBlocks;	// 208 = 0xd0
    PDApplyManager *applyManager;	// 216 = 0xd8
    PDAccountManager *_accountManager;	// 224 = 0xe0
    PDAppletSubcredentialManager *_credentialManager;	// 232 = 0xe8
    PDPushProvisioningManager *_pushProvisioningManager;	// 240 = 0xf0
    PDDeviceRegistrationServiceCoordinator *_deviceRegistrationServiceCoordinator;	// 248 = 0xf8
    PDDefaultPassManager *_defaultPassManager;	// 256 = 0x100
    PDDevicePasscodeManager *_devicePasscodeManager;	// 264 = 0x108
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x000000010002dcdc
@property(retain, nonatomic) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator; // @synthesize peerPaymentWebServiceCoordinator=_peerPaymentWebServiceCoordinator;
@property(retain, nonatomic) PDDevicePasscodeManager *devicePasscodeManager; // @synthesize devicePasscodeManager=_devicePasscodeManager;
@property(retain, nonatomic) PDDefaultPassManager *defaultPassManager; // @synthesize defaultPassManager=_defaultPassManager;
@property(retain, nonatomic) PDDeviceRegistrationServiceCoordinator *deviceRegistrationServiceCoordinator; // @synthesize deviceRegistrationServiceCoordinator=_deviceRegistrationServiceCoordinator;
@property(nonatomic) __weak PDPushProvisioningManager *pushProvisioningManager; // @synthesize pushProvisioningManager=_pushProvisioningManager;
@property(nonatomic) __weak PDAppletSubcredentialManager *credentialManager; // @synthesize credentialManager=_credentialManager;
@property(retain, nonatomic) PDAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(readonly, nonatomic) PDApplyManager *applyManager; // @synthesize applyManager;
@property(readonly, nonatomic) PDPassUpgradeController *upgradeController;
@property(readonly, nonatomic) PDExpressPassManager *expressPassManager;
@property(readonly, nonatomic) PDAppletSubcredentialManager *subcredentialManager;
@property(readonly, nonatomic) PDPaymentWebServiceCoordinator *paymentWebServiceCoordinator;
@property(readonly, nonatomic) PDDatabaseManager *databaseManager;
@property(readonly, nonatomic) PDCardFileManager *cardFileManager;
- (void)receivedXPCEvent:(id)arg1 forEventStream:(id)arg2;	// IMP=0x000000010002dbb8
- (void)_queue_performContactInformationFetchTaskWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002db18
- (void)setDeviceUpgradeTasksContextBuildVersion:(id)arg1 upgradeTaskVersion:(long long)arg2 retryCount:(long long)arg3;	// IMP=0x000000010002d9e0
- (void)_runDeviceUpgradeTasks;	// IMP=0x000000010002d044
- (void)_queue_completeDeviceUpgradeTasks;	// IMP=0x000000010002cf88
- (void)unscheduleDeviceUpgradeTaskActivity;	// IMP=0x000000010002ce74
- (void)_scheduleDeviceUpgradeTaskActivityWithRandomizeStartDate:(_Bool)arg1;	// IMP=0x000000010002cb50
- (void)scheduleDeviceUpgradeTasksIfNecessaryWithRandomizeStartDate:(_Bool)arg1;	// IMP=0x000000010002c7d4
- (void)scheduleDeviceUpgradeTasksIfNecessary;	// IMP=0x000000010002c7c4
- (void)removeProductsCache;	// IMP=0x000000010002c6c4
- (void)_queue_removeNotificationForProduct:(id)arg1;	// IMP=0x000000010002c6c0
- (void)_queue_notifcationForNewProduct:(id)arg1 oldProduct:(id)arg2;	// IMP=0x000000010002c6bc
- (void)_queue_processPaymentSetupProductsResponse:(id)arg1 priorDirtyStateIdentifier:(id)arg2;	// IMP=0x000000010002ba6c
- (void)_queue_handleProductsResponse:(id)arg1 error:(id)arg2 priorDirtyStateIdentifier:(id)arg3 reason:(id)arg4 completionBlocks:(id)arg5;	// IMP=0x000000010002b7f0
- (void)_queue_updateProductsforReason:(id)arg1 completionBlocks:(id)arg2;	// IMP=0x000000010002b318
- (void)_queue_performNextProductsUpdateWithReason:(id)arg1;	// IMP=0x000000010002b27c
- (void)_queue_updateProductsForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002b1f8
- (void)_queue_provisionPushProvisioningSharingIdentifiersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002b124
- (void)_queue_recreateCloudStoreTransactionZoneWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002b104
- (void)_queue_markProductsDirty;	// IMP=0x000000010002af78
- (void)performProductActionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002abd0
- (void)cachedPaymentSetupProductsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002a618
- (void)productsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002a578
- (void)noteAccountChanged;	// IMP=0x000000010002a568
- (void)_queue_setupBackgroundWebServiceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002a4c8
- (void)_handleDownloadedPass:(id)arg1;	// IMP=0x000000010002a460
- (void)_checkVerificationStatusForUniqueID:(id)arg1;	// IMP=0x000000010002a1a0
- (void)_fetchPassesIfNecessaryForPushTopic:(id)arg1;	// IMP=0x0000000100029cc0
- (id)_userNotificationFromResponse:(id)arg1;	// IMP=0x0000000100029850
- (void)_performNotificationActionWithUserInfo:(id)arg1;	// IMP=0x000000010002962c
- (void)_processValueAddedServiceTransaction:(id)arg1;	// IMP=0x0000000100029174
- (void)_scheduleVerificationCheckForPass:(id)arg1 onDate:(id)arg2;	// IMP=0x0000000100028fb0
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x0000000100028b48
- (_Bool)shouldStartConsistencyCheck;	// IMP=0x0000000100028ac8
- (void)scheduleConsistencyCheck:(id)arg1 pluggedIn:(_Bool)arg2;	// IMP=0x000000010002879c
- (void)deviceStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000284e4
- (id)paymentPasses;	// IMP=0x0000000100028488
- (void)didDownloadPaymentPass:(id)arg1;	// IMP=0x00000001000283d0
- (_Bool)synchronizeWithTSM;	// IMP=0x00000001000281f0
- (void)registerCredentialsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100027d3c
- (void)revokeCredentialsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100027bdc
- (void)deleteCardsWithAIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100027b14
- (_Bool)allowAcquisitionOfAssertionOfType:(unsigned long long)arg1;	// IMP=0x0000000100027b04
- (_Bool)interestedInAssertionOfType:(unsigned long long)arg1;	// IMP=0x0000000100027af4
- (void)handleDeletionForPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;	// IMP=0x0000000100027a84
- (void)handleInsertionForPaymentPass:(id)arg1;	// IMP=0x000000010002790c
- (void)verificationObserverDidTimeout:(id)arg1;	// IMP=0x0000000100027908
- (void)verificationObserver:(id)arg1 didObserveVerificationCode:(id)arg2;	// IMP=0x0000000100027904
- (void)setDeviceCheckInContextBuildVersion:(id)arg1 outstandingAction:(long long)arg2 forRegion:(id)arg3;	// IMP=0x00000001000276cc
- (void)_handleDeviceCheckInAction:(long long)arg1 region:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100026b2c
- (void)_queue_handleCheckInForRegion:(id)arg1 action:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100026700
- (void)_queue_checkContextForDeviceCheckInAuthRequirment:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000261b8
- (void)_queue_completeDeviceCheckInTask:(id)arg1 success:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000100025e00
- (void)_performDeviceCheckInTask:(id)arg1;	// IMP=0x00000001000250b4
- (void)_queue_cancelAllDeviceCheckInTasks;	// IMP=0x0000000100024fa0
- (void)_queue_coeleaseDeviceCheckInCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100024ea8
- (void)_queue_enqueueDeviceCheckInTask:(id)arg1;	// IMP=0x0000000100024da8
- (void)performDeviceCheckInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100024b88
- (void)_queue_unscheduleDeviceCheckIn;	// IMP=0x0000000100024ae8
- (void)unscheduleDeviceCheckIn;	// IMP=0x0000000100024a64
- (double)_queue_deviceCheckInRepeatInterval;	// IMP=0x0000000100024980
- (_Bool)_queue_automaticDeviceCheckInRequiredForRegion:(id)arg1;	// IMP=0x0000000100024720
- (void)_queue_scheduleDeviceCheckInWithStartTimeOffset:(double)arg1 repeatInterval:(double)arg2 randomizeTimes:(_Bool)arg3;	// IMP=0x0000000100024484
- (void)scheduleDeviceCheckInWithStartTimeOffset:(double)arg1;	// IMP=0x0000000100024374
- (void)scheduleDeviceCheckInIfNecessary;	// IMP=0x0000000100023f40
- (void)_queue_registerDeviceAtBrokerURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100023b04
- (void)performPrimaryRegionRegistrationForced:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100023898
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;	// IMP=0x0000000100023894
- (void)paymentWebServiceBackgroundSessionDidBecomeInvalid:(id)arg1;	// IMP=0x00000001000236b8
- (void)paymentWebService:(id)arg1 didRegisterCredentialWithIdentifier:(id)arg2 response:(id)arg3 error:(id)arg4;	// IMP=0x0000000100023480
- (void)paymentWebService:(id)arg1 didDownloadSerialNumbersForInstalledPasses:(id)arg2 inRegion:(id)arg3;	// IMP=0x0000000100022e20
- (void)paymentWebService:(id)arg1 didDownloadPassRemoteAssets:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100022b60
- (void)paymentWebService:(id)arg1 didDownloadPass:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3;	// IMP=0x000000010002295c
- (void)paymentWebService:(id)arg1 didDownloadPass:(id)arg2;	// IMP=0x0000000100022908
- (void)passAdded:(id)arg1;	// IMP=0x0000000100022334
- (void)passWillBeRemoved:(id)arg1 withDiagnosticReason:(id)arg2;	// IMP=0x00000001000220fc
- (void)applyPushNotificationToken:(id)arg1;	// IMP=0x0000000100021b18
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000001000212a0
- (id)pushNotificationTopics;	// IMP=0x0000000100020e74
- (void)backgroundRegisterCredentialWithRequest:(id)arg1;	// IMP=0x0000000100020cf0
- (void)registerCredentialWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100020c10
- (void)setAccountAttestationAnonymizationSalt:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100020af4
- (void)accountAttestationAnonymizationSaltWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000209e4
- (void)_queue_handlePaymentSetupFeatureFetchCompleted:(id)arg1;	// IMP=0x00000001000207a4
- (void)paymentSetupFeaturesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001faa4
- (void)_validatePreconditionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001f9cc
- (void)paymentHardwareStatusWithType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f718
- (void)downloadReceiptForTransaction:(id)arg1;	// IMP=0x000000010001eba4
- (id)accountServicePushTopics;	// IMP=0x000000010001e9a8
- (id)applyServicePushTopics;	// IMP=0x000000010001e790
- (void)processValueAddedServiceTransaction:(id)arg1;	// IMP=0x000000010001e4e8
- (void)initiateDevicePassesDownload;	// IMP=0x000000010001e3c4
- (void)performConsistencyCheck;	// IMP=0x000000010001e1e8
- (void)initiateConsistencyCheck;	// IMP=0x000000010001e190
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forPass:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010001db38
- (void)updateSharedWebServiceContext:(id)arg1;	// IMP=0x000000010001d794
- (void)deleteSharedWebServiceWithDiagnosticReason:(id)arg1;	// IMP=0x000000010001d128
- (void)startTasksIfNecessary;	// IMP=0x000000010001d0f4
@property(readonly, nonatomic) PKPaymentWebServiceContext *sharedWebServiceContext;
- (void)performHandlerOnSharedWebServiceQueue:(CDUnknownBlockType)arg1;	// IMP=0x000000010001cf50
- (id)sharedWebService;	// IMP=0x000000010001ce70
- (void)_queue_updateWebServiceConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001ccb4
- (void)updateWebServiceConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001cc20
- (void)scheduleConsistencyCheckIfNecessary;	// IMP=0x000000010001cb04
- (void)connect;	// IMP=0x000000010001c9fc
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000010001c968
- (void)registerObserver:(id)arg1;	// IMP=0x000000010001c890
- (void)dealloc;	// IMP=0x000000010001c840
- (id)initWithPushNotificationManager:(id)arg1 databaseManager:(id)arg2 passStore:(id)arg3 userNotificationManager:(id)arg4 assertionManager:(id)arg5 cloudStoreCoordinatorDelegate:(id)arg6 idsManager:(id)arg7 tapToRadarDelegate:(id)arg8 receiptFileManager:(id)arg9 expressPassManager:(id)arg10;	// IMP=0x000000010001c230

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
