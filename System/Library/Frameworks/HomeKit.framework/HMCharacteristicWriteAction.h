/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HMAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@class HMCharacteristic, NSUUID, NSString;

@interface HMCharacteristicWriteAction : HMAction <NSSecureCoding, HMObjectMerge> {

	HMCharacteristic* _characteristic;
	id _targetValue;

}

@property (nonatomic,retain) HMCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,copy) id targetValue;                                   //@synthesize targetValue=_targetValue - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_actionWithInfo:(id)arg1 home:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(id)initWithUUID:(id)arg1 ;
-(BOOL)_handleUpdates:(id)arg1 ;
-(void)setCharacteristic:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)characteristic;
-(id)targetValue;
-(void)setTargetValue:(id)arg1 ;
-(id)_serializeForAdd;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(BOOL)requiresDeviceUnlock;
-(id)encodeAsProtoBuf;
-(id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2 ;
-(id)commonInitWith:(id)arg1 targetValue:(id)arg2 ;
-(void)__configureWithContext:(id)arg1 actionSet:(id)arg2 ;
-(void)_updateTargetValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)allowedTargetValueClasses;
-(id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2 uuid:(id)arg3 ;
-(BOOL)isKindOfAllowedTargetValueClass:(id)arg1 ;
-(void)updateTargetValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithProtoBuf:(id)arg1 home:(id)arg2 ;
@end
