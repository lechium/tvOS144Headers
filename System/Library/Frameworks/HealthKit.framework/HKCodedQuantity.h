/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HKMedicalCoding, NSNumber;

@interface HKCodedQuantity : NSObject <NSSecureCoding, NSCopying> {

	NSString* _rawValue;
	HKMedicalCoding* _comparatorCoding;
	HKMedicalCoding* _unitCoding;

}

@property (nonatomic,copy,readonly) NSString * value; 
@property (nonatomic,copy,readonly) NSString * rawValue;                             //@synthesize rawValue=_rawValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedValue; 
@property (nonatomic,copy,readonly) NSNumber * numberValue; 
@property (nonatomic,readonly) double doubleValue; 
@property (nonatomic,copy,readonly) HKMedicalCoding * comparatorCoding;              //@synthesize comparatorCoding=_comparatorCoding - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalCoding * unitCoding;                    //@synthesize unitCoding=_unitCoding - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_numberFormatter;
+(id)codedQuantityWithValue:(id)arg1 comparatorCoding:(id)arg2 unitCoding:(id)arg3 ;
+(id)codedQuantityWithValue:(id)arg1 unitCoding:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(double)doubleValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)value;
-(NSString *)rawValue;
-(NSNumber *)numberValue;
-(NSString *)localizedValue;
-(id)initWithRawValue:(id)arg1 comparatorCoding:(id)arg2 unitCoding:(id)arg3 ;
-(HKMedicalCoding *)comparatorCoding;
-(HKMedicalCoding *)unitCoding;
-(id)quantityRepresentationWithUCUMConverter:(id)arg1 error:(id*)arg2 ;
@end

