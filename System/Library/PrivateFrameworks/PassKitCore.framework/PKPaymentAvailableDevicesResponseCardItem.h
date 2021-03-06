/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber;

@interface PKPaymentAvailableDevicesResponseCardItem : NSObject {

	BOOL _supportsInApp;
	NSString* _cardType;
	NSNumber* _cardTypeCode;
	NSString* _currentStatus;

}

@property (nonatomic,copy) NSString * cardType;                   //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,copy) NSNumber * cardTypeCode;               //@synthesize cardTypeCode=_cardTypeCode - In the implementation block
@property (nonatomic,copy) NSString * currentStatus;              //@synthesize currentStatus=_currentStatus - In the implementation block
@property (assign,nonatomic) BOOL supportsInApp;                  //@synthesize supportsInApp=_supportsInApp - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)cardType;
-(NSString *)currentStatus;
-(void)setCardType:(NSString *)arg1 ;
-(NSNumber *)cardTypeCode;
-(void)setCardTypeCode:(NSNumber *)arg1 ;
-(void)setCurrentStatus:(NSString *)arg1 ;
-(BOOL)supportsInApp;
-(void)setSupportsInApp:(BOOL)arg1 ;
@end

