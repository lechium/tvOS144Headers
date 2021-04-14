/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopyingNSSecureCodingNSObject;
@class NSString, NSNumber;

@interface HKConceptAttribute : NSObject <NSSecureCoding, NSCopying> {

	long long _identifier;
	long long _type;
	long long _valueType;
	id<NSCopying><NSSecureCoding><NSObject> _value;

}

@property (nonatomic,readonly) long long identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long type;                                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long valueType;                                             //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,copy,readonly) id<NSCopying><NSSecureCoding><NSObject> value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,copy,readonly) NSNumber * numberValue; 
@property (nonatomic,readonly) BOOL boolValue; 
@property (nonatomic,readonly) long long longLongValue; 
+(BOOL)supportsSecureCoding;
+(id)attributeWithIdentifier:(long long)arg1 type:(long long)arg2 valueType:(long long)arg3 value:(id)arg4 ;
+(id)attributeWithIdentifier:(long long)arg1 type:(long long)arg2 stringValue:(id)arg3 ;
+(id)attributeWithIdentifier:(long long)arg1 type:(long long)arg2 numberValue:(id)arg3 ;
+(id)attributeWithIdentifier:(long long)arg1 type:(long long)arg2 boolValue:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(long long)longLongValue;
-(BOOL)boolValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(long long)type;
-(long long)identifier;
-(id<NSCopying><NSSecureCoding><NSObject>)value;
-(long long)valueType;
-(NSNumber *)numberValue;
-(id)initWithIdentifier:(long long)arg1 type:(long long)arg2 valueType:(long long)arg3 value:(id)arg4 ;
@end

