/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSNumber, NSData;

@interface PKBarcodeEventSignatureRequest : NSObject <NSSecureCoding> {

	NSString* _deviceAccountIdentifier;
	NSString* _transactionIdentifier;
	NSString* _barcodeIdentifier;
	NSString* _rawMerchantName;
	NSString* _merchantName;
	NSDate* _transactionDate;
	NSString* _currencyCode;
	NSNumber* _amount;
	NSString* _transactionStatus;
	NSData* _partialSignature;

}

@property (nonatomic,copy) NSString * deviceAccountIdentifier;              //@synthesize deviceAccountIdentifier=_deviceAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * transactionIdentifier;                //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * barcodeIdentifier;                    //@synthesize barcodeIdentifier=_barcodeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * rawMerchantName;                      //@synthesize rawMerchantName=_rawMerchantName - In the implementation block
@property (nonatomic,copy) NSString * merchantName;                         //@synthesize merchantName=_merchantName - In the implementation block
@property (nonatomic,retain) NSDate * transactionDate;                      //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                         //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,retain) NSNumber * amount;                             //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * transactionStatus;                    //@synthesize transactionStatus=_transactionStatus - In the implementation block
@property (nonatomic,copy) NSData * partialSignature;                       //@synthesize partialSignature=_partialSignature - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(NSNumber *)amount;
-(void)setAmount:(NSNumber *)arg1 ;
-(void)setTransactionStatus:(NSString *)arg1 ;
-(NSString *)transactionStatus;
-(NSString *)merchantName;
-(void)setMerchantName:(NSString *)arg1 ;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(NSString *)transactionIdentifier;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(NSString *)deviceAccountIdentifier;
-(void)setDeviceAccountIdentifier:(NSString *)arg1 ;
-(NSString *)barcodeIdentifier;
-(NSData *)partialSignature;
-(id)initWithPaymentTransaction:(id)arg1 deviceAccountIdentifier:(id)arg2 ;
-(void)setBarcodeIdentifier:(NSString *)arg1 ;
-(NSString *)rawMerchantName;
-(void)setRawMerchantName:(NSString *)arg1 ;
-(void)setPartialSignature:(NSData *)arg1 ;
@end

