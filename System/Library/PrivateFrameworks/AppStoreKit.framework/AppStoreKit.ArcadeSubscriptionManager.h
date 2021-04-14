/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SKPaymentTransactionObserver.h>
#import <libobjc.A.dylib/SKPaymentQueueClientDelegate.h>

@interface AppStoreKit.ArcadeSubscriptionManager : NSObject <SKPaymentTransactionObserver, SKPaymentQueueClientDelegate> {

	 paymentQueue;
	 dialogHandler;
	 activeStoreAccountProvider;
	 observers;
	 stateLock;
	 arcadeSubscriptionFamilyId;
	 subscriptionEntitlements;
	 subscriptionState;
	 paymentCallbacks;
	 logger;

}
-(void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)handleEngagementRequest:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)entitlementsDidChange;
@end

