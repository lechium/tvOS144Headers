/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSDecimalNumber;

@interface PKFeatureApplicationOfferDetails : NSObject <NSSecureCoding, NSCopying> {

	NSString* _offerTermsIdentifier;
	NSDate* _expiryDate;
	NSDecimalNumber* _creditLimit;
	NSDecimalNumber* _annualFee;
	NSDecimalNumber* _aprForPurchase;
	NSString* _currencyCode;

}

@property (nonatomic,copy) NSString * offerTermsIdentifier;               //@synthesize offerTermsIdentifier=_offerTermsIdentifier - In the implementation block
@property (nonatomic,copy) NSDate * expiryDate;                           //@synthesize expiryDate=_expiryDate - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * creditLimit;                 //@synthesize creditLimit=_creditLimit - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * annualFee;                   //@synthesize annualFee=_annualFee - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * aprForPurchase;              //@synthesize aprForPurchase=_aprForPurchase - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                       //@synthesize currencyCode=_currencyCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(NSDate *)expiryDate;
-(NSString *)offerTermsIdentifier;
-(void)setOfferTermsIdentifier:(NSString *)arg1 ;
-(NSDecimalNumber *)creditLimit;
-(void)setCreditLimit:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)annualFee;
-(void)setAnnualFee:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)aprForPurchase;
-(void)setAprForPurchase:(NSDecimalNumber *)arg1 ;
@end

