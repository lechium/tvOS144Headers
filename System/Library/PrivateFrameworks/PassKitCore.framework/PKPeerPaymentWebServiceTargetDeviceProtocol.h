/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKPeerPaymentWebServiceTargetDeviceProtocol <NSObject>
@optional
-(id)deviceClass;
-(id)preferences;
-(id)deviceRegion;
-(void)setPreferences:(id)arg1 completion:(/*^block*/id)arg2;
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1;
-(void)renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1;
-(id)appleAccountInformation;
-(void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 peerPaymentWebService:(id)arg2 credential:(id)arg3 completion:(/*^block*/id)arg4;
-(void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 peerPaymentWebService:(id)arg3 completion:(/*^block*/id)arg4;
-(void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 completion:(/*^block*/id)arg3;

@required
-(id)account;
-(void)updateAccountWithCompletion:(/*^block*/id)arg1;
-(void)downloadPassIfNecessaryWithCompletion:(/*^block*/id)arg1;
-(void)cloudStoreStatusWithCompletion:(/*^block*/id)arg1;
-(id)secureElementIdentifiers;
-(id)bridgedClientInfo;
-(BOOL)userHasDisabledPeerPayment;
-(void)setUserHasDisabledPeerPayment:(BOOL)arg1;
-(void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3;

@end

