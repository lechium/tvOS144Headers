/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMCharacteristicEventProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol NSCopying;
@class HMCharacteristic, NSString;

@interface HMCharacteristicEvent : HMEvent <NSSecureCoding, HMCharacteristicEventProtocol, NSCopying, NSMutableCopying> {

	id<NSCopying> _triggerValue;
	HMCharacteristic* _characteristic;

}

@property (nonatomic,copy) id<NSCopying> triggerValue;                         //@synthesize triggerValue=_triggerValue - In the implementation block
@property (nonatomic,readonly) HMCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)createWithDictionary:(id)arg1 home:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCharacteristic:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)characteristic;
-(void)setTriggerValue:(id<NSCopying>)arg1 ;
-(id<NSCopying>)triggerValue;
-(id)_serializeForAdd;
-(void)_handleEventUpdatedNotification:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(id)initWithDict:(id)arg1 characteristic:(id)arg2 triggerValue:(id)arg3 ;
-(void)_updateTriggerValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithCharacteristic:(id)arg1 triggerValue:(id)arg2 ;
-(void)updateTriggerValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

