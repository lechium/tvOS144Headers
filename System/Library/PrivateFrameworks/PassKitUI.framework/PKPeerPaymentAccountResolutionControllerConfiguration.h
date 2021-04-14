/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PKCurrencyAmount, NSString;

@interface PKPeerPaymentAccountResolutionControllerConfiguration : NSObject {

	BOOL _manuallyTriggered;
	BOOL _graduation;
	PKCurrencyAmount* _currencyAmount;
	unsigned long long _registrationFlowState;
	NSString* _senderAddress;

}

@property (nonatomic,retain) PKCurrencyAmount * currencyAmount;                     //@synthesize currencyAmount=_currencyAmount - In the implementation block
@property (assign,nonatomic) unsigned long long registrationFlowState;              //@synthesize registrationFlowState=_registrationFlowState - In the implementation block
@property (nonatomic,copy) NSString * senderAddress;                                //@synthesize senderAddress=_senderAddress - In the implementation block
@property (assign,nonatomic) BOOL manuallyTriggered;                                //@synthesize manuallyTriggered=_manuallyTriggered - In the implementation block
@property (assign,getter=isGraduation,nonatomic) BOOL graduation;                   //@synthesize graduation=_graduation - In the implementation block
-(id)description;
-(PKCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(NSString *)senderAddress;
-(void)setSenderAddress:(NSString *)arg1 ;
-(BOOL)manuallyTriggered;
-(void)setManuallyTriggered:(BOOL)arg1 ;
-(void)setRegistrationFlowState:(unsigned long long)arg1 ;
-(unsigned long long)registrationFlowState;
-(BOOL)isGraduation;
-(void)setGraduation:(BOOL)arg1 ;
@end

