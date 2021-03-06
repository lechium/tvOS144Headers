/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDate, NSDecimalNumber, NSData, NSArray, NSString;

@interface PKTransitAppletHistoryRecord : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _transitModifiers;
	NSNumber* _historySequenceNumber;
	unsigned long long _type;
	unsigned long long _subtype;
	unsigned long long _detail;
	NSDate* _time;
	NSDecimalNumber* _balance;
	NSNumber* _loyaltyBalance;
	NSDecimalNumber* _amount;
	NSNumber* _loyaltyAmount;
	NSNumber* _cityCode;
	NSData* _startStation;
	NSData* _endStation;
	NSArray* _amounts;
	NSString* _transitDetail;
	long long _recordType;

}

@property (nonatomic,readonly) long long paymentTransactionType; 
@property (nonatomic,readonly) long long transitTransactionSubtype; 
@property (nonatomic,readonly) unsigned long long transitTransactionModifier; 
@property (nonatomic,copy) NSNumber * historySequenceNumber;                               //@synthesize historySequenceNumber=_historySequenceNumber - In the implementation block
@property (nonatomic,copy) NSString * transitDetail;                                       //@synthesize transitDetail=_transitDetail - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long subtype;                                   //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) unsigned long long detail;                                    //@synthesize detail=_detail - In the implementation block
@property (nonatomic,copy) NSDate * time;                                                  //@synthesize time=_time - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * balance;                                      //@synthesize balance=_balance - In the implementation block
@property (nonatomic,copy) NSNumber * loyaltyBalance;                                      //@synthesize loyaltyBalance=_loyaltyBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;                                       //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSNumber * loyaltyAmount;                                       //@synthesize loyaltyAmount=_loyaltyAmount - In the implementation block
@property (nonatomic,copy) NSData * startStation;                                          //@synthesize startStation=_startStation - In the implementation block
@property (nonatomic,copy) NSData * endStation;                                            //@synthesize endStation=_endStation - In the implementation block
@property (nonatomic,copy) NSNumber * cityCode;                                            //@synthesize cityCode=_cityCode - In the implementation block
@property (assign,nonatomic) long long recordType;                                         //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,copy) NSArray * amounts;                                              //@synthesize amounts=_amounts - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)time;
-(unsigned long long)subtype;
-(long long)recordType;
-(void)setRecordType:(long long)arg1 ;
-(void)setTime:(NSDate *)arg1 ;
-(void)setSubtype:(unsigned long long)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(unsigned long long)detail;
-(void)setDetail:(unsigned long long)arg1 ;
-(NSDecimalNumber *)balance;
-(void)setBalance:(NSDecimalNumber *)arg1 ;
-(NSNumber *)historySequenceNumber;
-(void)setHistorySequenceNumber:(NSNumber *)arg1 ;
-(NSData *)endStation;
-(NSData *)startStation;
-(NSNumber *)loyaltyBalance;
-(void)setLoyaltyBalance:(NSNumber *)arg1 ;
-(id)concreteTransactionWithCurrency:(id)arg1 balanceLabels:(id)arg2 unitDictionary:(id)arg3 ;
-(BOOL)isEqualToTransitAppletHistoryRecord:(id)arg1 ;
-(long long)paymentTransactionType;
-(long long)transitTransactionSubtype;
-(unsigned long long)transitTransactionModifier;
-(id)_transactionAmountsWithBalanceLabels:(id)arg1 unitDictionary:(id)arg2 ;
-(void)_setTransactionHistoryDetailsFromString:(id)arg1 ;
-(NSNumber *)loyaltyAmount;
-(void)setLoyaltyAmount:(NSNumber *)arg1 ;
-(NSNumber *)cityCode;
-(void)setCityCode:(NSNumber *)arg1 ;
-(void)setStartStation:(NSData *)arg1 ;
-(void)setEndStation:(NSData *)arg1 ;
-(NSArray *)amounts;
-(void)setAmounts:(NSArray *)arg1 ;
-(NSString *)transitDetail;
-(void)setTransitDetail:(NSString *)arg1 ;
-(id)felicaHistoryRecord;
@end

