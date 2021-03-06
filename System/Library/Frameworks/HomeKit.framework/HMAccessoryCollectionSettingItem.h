/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSCopyingNSSecureCoding;
@class HMFUnfairLock, NSData, NSUUID, HMAccessoryCollectionSetting;

@interface HMAccessoryCollectionSettingItem : NSObject <NSCopying, NSSecureCoding> {

	HMFUnfairLock* _lock;
	id<NSObject><NSCopying><NSSecureCoding> _value;
	NSData* _serializedValue;
	NSUUID* _identifier;
	HMAccessoryCollectionSetting* _setting;

}

@property (__weak) HMAccessoryCollectionSetting * setting;                            //@synthesize setting=_setting - In the implementation block
@property (readonly) NSData * serializedValue;                                        //@synthesize serializedValue=_serializedValue - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) id<NSObject><NSCopying><NSSecureCoding> value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id<NSObject><NSCopying><NSSecureCoding>)value;
-(id)shortDescription;
-(id)initWithValue:(id)arg1 ;
-(HMAccessoryCollectionSetting *)setting;
-(void)setSetting:(HMAccessoryCollectionSetting *)arg1 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 value:(id)arg2 ;
-(NSData *)serializedValue;
@end

