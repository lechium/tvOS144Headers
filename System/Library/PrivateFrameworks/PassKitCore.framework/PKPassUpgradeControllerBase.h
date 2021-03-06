/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PassKitCore/PassKitCore-Structs.h>
@class NSMutableDictionary, PKPaymentWebService;

@interface PKPassUpgradeControllerBase : NSObject {

	/*^block*/id _addPaymentPassToLibrary;
	os_unfair_lock_s _pass_upgrade_lock;
	NSMutableDictionary* _pendingPassUpgrades;
	PKPaymentWebService* _paymentWebService;

}

@property (nonatomic,retain) PKPaymentWebService * paymentWebService;              //@synthesize paymentWebService=_paymentWebService - In the implementation block
-(id)init;
-(void)requestPassUpgrade:(id)arg1 pass:(id)arg2 diagnosticReason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(PKPaymentWebService *)paymentWebService;
-(void)setPaymentWebService:(PKPaymentWebService *)arg1 ;
-(id)initWithWebService:(id)arg1 addPaymentPassToLibrary:(/*^block*/id)arg2 ;
-(void)appletsDidUpdate;
-(void)downloadUpgradedPassForPassUniqueID:(id)arg1 atURL:(id)arg2 ;
-(void)completePassUpgradeForPassUniqueID:(id)arg1 withError:(id)arg2 ;
@end

