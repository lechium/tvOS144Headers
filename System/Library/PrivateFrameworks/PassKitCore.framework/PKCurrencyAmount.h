/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber, NSString;

@interface PKCurrencyAmount : NSObject <NSCopying, NSSecureCoding> {

	NSDecimalNumber* _amount;
	NSString* _currency;
	long long _exponent;
	NSString* _preformattedString;

}

@property (nonatomic,copy) NSDecimalNumber * amount;                   //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * currency;                        //@synthesize currency=_currency - In the implementation block
@property (assign,nonatomic) long long exponent;                       //@synthesize exponent=_exponent - In the implementation block
@property (nonatomic,copy) NSString * preformattedString;              //@synthesize preformattedString=_preformattedString - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(long long)exponent;
-(void)setExponent:(long long)arg1 ;
-(id)formattedStringValue;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(id)initWithAmount:(id)arg1 currency:(id)arg2 exponent:(long long)arg3 ;
-(long long)compareToCurrencyCode:(id)arg1 amount:(id)arg2 ;
-(id)minimalFormattedStringValue;
-(id)initWithAmount:(id)arg1 exponent:(long long)arg2 preformattedString:(id)arg3 ;
-(NSString *)preformattedString;
-(BOOL)isCurrency;
-(void)setPreformattedString:(NSString *)arg1 ;
-(BOOL)isEqualToCurrencyAmount:(id)arg1 ;
-(id)minimalFormattedStringValueInLocale:(id)arg1 ;
-(id)initWithAmount:(id)arg1 currency:(id)arg2 ;
-(id)absoluteValue;
-(id)negativeValue;
@end

