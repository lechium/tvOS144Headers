//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PDXPCService.h>

#import "PDInAppPaymentServiceExportedInterface-Protocol.h"

@class NSString, PDDatabaseManager, PDPaymentWebServiceCoordinator, PDRemoteInterfacePresenter, PKEntitlementWhitelist, PKIDSManager, PKSecureElement;
@protocol PDInAppPaymentServiceDelegate;

@interface PDInAppPaymentService : PDXPCService <PDInAppPaymentServiceExportedInterface>
{
    PKEntitlementWhitelist *_whitelist;	// 8 = 0x8
    PDRemoteInterfacePresenter *_remoteInterfacePresenter;	// 16 = 0x10
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 24 = 0x18
    PKIDSManager *_idsManager;	// 32 = 0x20
    PDDatabaseManager *_databaseManager;	// 40 = 0x28
    PKSecureElement *_secureElement;	// 48 = 0x30
    id <PDInAppPaymentServiceDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010016a560
@property(nonatomic) __weak id <PDInAppPaymentServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKSecureElement *secureElement; // @synthesize secureElement=_secureElement;
@property(retain, nonatomic) PDDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(retain, nonatomic) PKIDSManager *idsManager; // @synthesize idsManager=_idsManager;
@property(retain, nonatomic) PDPaymentWebServiceCoordinator *paymentWebServiceCoordinator; // @synthesize paymentWebServiceCoordinator=_paymentWebServiceCoordinator;
@property(retain, nonatomic) PDRemoteInterfacePresenter *remoteInterfacePresenter; // @synthesize remoteInterfacePresenter=_remoteInterfacePresenter;
- (long long)_AMPEnrollmentAccountStatus;	// IMP=0x000000010016a410
- (void)enrollPaymentPassWithUniqueIdentifier:(id)arg1 merchantSession:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100169c88
- (void)cardDataForMerchantIdentifier:(id)arg1 countryCode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001697e8
- (long long)_cardsAvailableForAMPWithCountryCode:(id)arg1;	// IMP=0x00000001001695b0
- (void)cardsAvailableForAMPWithCountryCode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100169460
- (_Bool)_hasValidSecureElement;	// IMP=0x0000000100169444
- (id)_paymentServicesMerchantURLForAPIType:(unsigned long long)arg1;	// IMP=0x00000001001692e8
- (void)paymentHardwareStatusWithType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100169198
- (void)secureElementStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100169130
- (void)paymentServicesMerchantURLForAPIType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100168e7c
- (void)merchantStatusCheck:(id)arg1 merchantDomain:(id)arg2 sourceApplicationSecondaryIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100168688
- (void)retrievePaymentListenerEndpointForHostIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001684cc
- (void)registerPaymentListenerEndpoint:(id)arg1 forHostIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001681d0
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg1 forHostIdentifier:(id)arg2 orientation:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100167d18
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000100167c78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

