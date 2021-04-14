/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUIAction.h>

@class NSString, NSDictionary, IKAppContext;

@interface VUIActionCommerceTransaction : VUIAction {

	NSString* _commerceActionRef;
	NSDictionary* _contextData;
	IKAppContext* _appContext;

}

@property (nonatomic,retain) NSString * commerceActionRef;                  //@synthesize commerceActionRef=_commerceActionRef - In the implementation block
@property (nonatomic,copy) NSDictionary * contextData;                      //@synthesize contextData=_contextData - In the implementation block
@property (assign,nonatomic,__weak) IKAppContext * appContext;              //@synthesize appContext=_appContext - In the implementation block
+(void)displayConfirmationUIWithTitle:(id)arg1 andBody:(id)arg2 ;
+(BOOL)isTransactionInProgressForBuyParams:(id)arg1 ;
+(id)extractSalableAdamIDFromBuyParams:(id)arg1 ;
+(BOOL)_useAMSPurchase;
+(void)displayConfirmationUIWithTitle:(id)arg1 andBody:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)_extractCanonicalIDFromTransactionOffer:(id)arg1 ;
+(void)_addTransaction:(id)arg1 forBuyParams:(id)arg2 ;
+(void)_saveInterruptedPurchaseTransactionContextInfo:(id)arg1 canonicalID:(id)arg2 error:(id)arg3 ;
+(void)_removeTransactionForBuyParams:(id)arg1 ;
-(IKAppContext *)appContext;
-(void)setAppContext:(IKAppContext *)arg1 ;
-(void)setContextData:(NSDictionary *)arg1 ;
-(NSDictionary *)contextData;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithActionRef:(id)arg1 contextData:(id)arg2 appContext:(id)arg3 ;
-(void)_postPurchaseNotification:(id)arg1 error:(id)arg2 ;
-(void)setCommerceActionRef:(NSString *)arg1 ;
-(void)_startTransactionOfOffer:(id)arg1 withAppContext:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
-(void)_startPurchaseFlowForOffer:(id)arg1 playWhenDone:(BOOL)arg2 appContext:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_startSubscribeFlowForOffer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_preflightManagerForTransactionOffer:(id)arg1 ;
-(void)_notifyDidStartPurchaseType:(long long)arg1 transactionOffer:(id)arg2 ;
-(void)_notifyDidEndPurchaseType:(long long)arg1 transactionOffer:(id)arg2 withError:(id)arg3 ;
-(void)_handleSubscriptionCompletionForOffer:(id)arg1 shouldInitiateFamilySetup:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_handleBuyCompletionForOffer:(id)arg1 appContext:(id)arg2 shouldPlayWhenDone:(BOOL)arg3 serverResponse:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_showUIConfirmationForSubTransaction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_recordLog:(id)arg1 withBuyParams:(id)arg2 ;
-(void)_postTransactionDidStartNotificationWithBuyParams:(id)arg1 ;
-(void)_postSubscriptionNotificationWithChannelName:(id)arg1 buyParams:(id)arg2 error:(id)arg3 ;
-(NSString *)commerceActionRef;
@end

