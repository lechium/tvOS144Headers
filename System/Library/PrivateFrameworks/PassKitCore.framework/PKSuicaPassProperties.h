/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKTransitPassProperties.h>

@class NSDecimalNumber, NSString;

@interface PKSuicaPassProperties : PKTransitPassProperties {

	BOOL _balanceAllowedForCommute;
	BOOL _lowBalanceGateNotificationEnabled;
	BOOL _greenCarTicketUsed;

}

@property (nonatomic,copy,readonly) NSDecimalNumber * transitBalance; 
@property (nonatomic,copy,readonly) NSString * transitBalanceCurrencyCode; 
@property (getter=isInStation,nonatomic,readonly) BOOL inStation; 
@property (getter=isInShinkansenStation,nonatomic,readonly) BOOL inShinkansenStation; 
@property (getter=isBalanceAllowedForCommute,nonatomic,readonly) BOOL balanceAllowedForCommute;                                //@synthesize balanceAllowedForCommute=_balanceAllowedForCommute - In the implementation block
@property (getter=isLowBalanceGateNotificationEnabled,nonatomic,readonly) BOOL lowBalanceGateNotificationEnabled;              //@synthesize lowBalanceGateNotificationEnabled=_lowBalanceGateNotificationEnabled - In the implementation block
@property (getter=isGreenCarTicketUsed,nonatomic,readonly) BOOL greenCarTicketUsed;                                            //@synthesize greenCarTicketUsed=_greenCarTicketUsed - In the implementation block
@property (getter=isBlacklisted,nonatomic,readonly) BOOL blacklisted; 
+(id)passPropertiesForPass:(id)arg1 ;
+(Class)equalityClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isInShinkansenStation;
-(BOOL)isGreenCarTicketUsed;
-(BOOL)isBalanceAllowedForCommute;
-(BOOL)isInStation;
-(BOOL)isLowBalanceGateNotificationEnabled;
-(id)_initWithProperties:(id)arg1 ;
@end

