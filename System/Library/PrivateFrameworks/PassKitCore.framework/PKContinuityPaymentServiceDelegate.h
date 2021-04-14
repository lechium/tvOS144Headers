/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKContinuityPaymentServiceDelegate <NSObject>
@optional
-(void)didReceiveUpdatedPaymentDevices:(id)arg1;
-(void)didReceivePaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
-(void)didReceivePaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
-(void)didReceivePayment:(id)arg1 forRemotePaymentRequest:(id)arg2;
-(void)didReceivePaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2;
-(void)didReceiveCancellationForRemotePaymentRequest:(id)arg1;

@end
