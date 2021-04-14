/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKMedicalCodingSystem, NSString;

@interface HKMedicalCoding : NSObject <NSSecureCoding, NSCopying> {

	HKMedicalCodingSystem* _codingSystem;
	NSString* _codingVersion;
	NSString* _code;
	NSString* _displayString;

}

@property (nonatomic,copy,readonly) HKMedicalCodingSystem * codingSystem;              //@synthesize codingSystem=_codingSystem - In the implementation block
@property (nonatomic,copy,readonly) NSString * codingVersion;                          //@synthesize codingVersion=_codingVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * code;                                   //@synthesize code=_code - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayString;                          //@synthesize displayString=_displayString - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)medicalCodingWithSystem:(id)arg1 codingVersion:(id)arg2 code:(id)arg3 displayString:(id)arg4 ;
+(id)ucum_codingWithCode:(id)arg1 displayString:(id)arg2 ;
+(id)ucum_meterUnitCoding;
+(id)ucum_centimeterUnitCoding;
+(id)loinc_diastolicBloodPressureCoding;
+(id)loinc_systolicBloodPressureCoding;
+(id)RxNormCodingWithCode:(id)arg1 displayString:(id)arg2 ;
+(id)RxNormCodingWithCode:(id)arg1 ;
+(id)text_codingWithDisplayString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSString *)code;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayString;
-(BOOL)isEquivalent:(id)arg1 ;
-(HKMedicalCodingSystem *)codingSystem;
-(id)_validateConfiguration;
-(id)synthesizedIdentifier;
-(NSString *)codingVersion;
-(id)initWithCodingSystem:(id)arg1 codingVersion:(id)arg2 code:(id)arg3 displayString:(id)arg4 ;
@end
