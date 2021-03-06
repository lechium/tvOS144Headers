//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PDXPCService.h>

#import "PDPeerPaymentServiceExportedInterface-Protocol.h"
#import "PKSharingIDSManagerDelegate-Protocol.h"

@class NSString, PDDatabaseManager, PDPeerPaymentWebServiceCoordinator, PDRemoteInterfacePresenter, PKEntitlementWhitelist, PKSharingIDSManager;

@interface PDPeerPaymentService : PDXPCService <PDPeerPaymentServiceExportedInterface, PKSharingIDSManagerDelegate>
{
    PKEntitlementWhitelist *_whitelist;	// 8 = 0x8
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;	// 16 = 0x10
    PDRemoteInterfacePresenter *_remoteInterfacePresenter;	// 24 = 0x18
    PDDatabaseManager *_databaseManager;	// 32 = 0x20
    PKSharingIDSManager *_idsSharingManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010009d050
@property(retain, nonatomic) PKSharingIDSManager *idsSharingManager; // @synthesize idsSharingManager=_idsSharingManager;
@property(retain, nonatomic) PDDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(retain, nonatomic) PDRemoteInterfacePresenter *remoteInterfacePresenter; // @synthesize remoteInterfacePresenter=_remoteInterfacePresenter;
@property(retain, nonatomic) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator; // @synthesize peerPaymentWebServiceCoordinator=_peerPaymentWebServiceCoordinator;
- (void)didReceiveAppleCashSharingRecipientCapabilities:(id)arg1 forHandle:(id)arg2;	// IMP=0x000000010009cf4c
- (void)sendAppleCashCapabilitiesRequestForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010009cd28
- (void)remoteRegistrationRequest:(id)arg1 forHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010009cad4
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010009c8f0
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010009c70c
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010009c4e0
- (void)initalizeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010009c2fc
- (void)unregisterDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010009c118
- (void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 forceReregister:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010009bf20
- (void)registerDeviceWithForceReregister:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010009bd18
- (void)registerDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010009bb30
- (void)downloadPassIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010009b9b4
- (void)setLastUsedAlternateFundingSourcePassUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010009b720
- (void)lastUsedAlternateFundingSourcePassUniqueIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x000000010009b514
- (void)balanceForPass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010009b314
- (void)updateMessageReceivedDate:(id)arg1 forTransactionWithIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010009af58
- (void)receivedPeerPaymentMessageData:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010009abb0
- (void)noteAccountDeletedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010009a8ac
- (void)presentPeerPaymentTermsAndConditionsWithTermsURL:(id)arg1 termsIdentifier:(id)arg2 passUniqueID:(id)arg3 orientation:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010009a5a0
- (void)presentRegistrationFlowWithAccount:(id)arg1 amount:(id)arg2 state:(unsigned long long)arg3 senderAddress:(id)arg4 orientation:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010009a280
- (void)presentIdentityVerificationFlowWithResponseData:(id)arg1 orientation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100099e48
- (void)registrationStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100099c04
- (void)setPreferences:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100099984
- (void)deletePreferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100099744
- (void)deleteAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100099504
- (void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010009928c
- (void)updatePreferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100099048
- (void)updateAccountAndAssociatedAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100098e04
- (void)updateAssociatedAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100098bc0
- (void)updateAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010009897c
- (void)preferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100098738
- (void)accountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000984f0
- (void)setSharedPeerPaymentWebServiceContext:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000982fc
- (void)sharedPeerPaymentWebServiceContextWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010009809c
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000100097f74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

