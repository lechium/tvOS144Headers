/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFMerging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSCopyingNSSecureCoding, _HMAccesorySettingDelegate;
@class HMFUnfairLock, NSMutableOrderedSet, NSUUID, NSString, HMAccessorySettings, _HMContext, NSArray;

@interface _HMAccessorySetting : NSObject <HMFLogging, HMFMessageReceiver, HMFMerging, NSSecureCoding> {

	HMFUnfairLock* _lock;
	NSMutableOrderedSet* _constraints;
	BOOL _reflected;
	id<NSCopying><NSSecureCoding> _value;
	id<_HMAccesorySettingDelegate> _delegate;
	NSUUID* _identifier;
	long long _type;
	unsigned long long _properties;
	NSString* _name;
	HMAccessorySettings* _accessorySettings;
	_HMContext* _context;

}

@property (assign,nonatomic,__weak) HMAccessorySettings * accessorySettings;                  //@synthesize accessorySettings=_accessorySettings - In the implementation block
@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (__weak) id<_HMAccesorySettingDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) long long type;                                                          //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long properties;                                           //@synthesize properties=_properties - In the implementation block
@property (copy,readonly) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSArray * constraints; 
@property (copy) id<NSCopying><NSSecureCoding> value;                                         //@synthesize value=_value - In the implementation block
@property (getter=isReflected,readonly) BOOL reflected;                                       //@synthesize reflected=_reflected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)logCategory;
+(id)supportedValueClasses;
+(id)_encodedConstraintsToRemove:(id)arg1 ;
+(id)_encodedConstraintsToAdd:(id)arg1 ;
+(id)_replaceConstraintsPayloadWithAdditions:(id)arg1 removals:(id)arg2 ;
+(id)supportedConstraintClasses;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(NSString *)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<_HMAccesorySettingDelegate>)delegate;
-(void)setDelegate:(id<_HMAccesorySettingDelegate>)arg1 ;
-(long long)type;
-(NSUUID *)identifier;
-(id<NSCopying><NSSecureCoding>)value;
-(void)setValue:(id<NSCopying><NSSecureCoding>)arg1 ;
-(unsigned long long)properties;
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(id)shortDescription;
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)addConstraint:(id)arg1 ;
-(void)removeConstraint:(id)arg1 ;
-(void)updateValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)logIdentifier;
-(BOOL)mergeObject:(id)arg1 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)_registerNotificationHandlers;
-(id)messageDestination;
-(void)configureWithAccessorySettings:(id)arg1 context:(id)arg2 ;
-(void)setAccessorySettings:(HMAccessorySettings *)arg1 ;
-(HMAccessorySettings *)accessorySettings;
-(BOOL)isReflected;
-(void)_handleUpdatedValue:(id)arg1 ;
-(void)_handleAddedConstraint:(id)arg1 ;
-(void)_handleRemovedConstraint:(id)arg1 ;
-(void)notifyDelegateOfAddedConstraint:(id)arg1 ;
-(void)notifyDelegateOfRemovedConstraint:(id)arg1 ;
-(BOOL)mergeConstraints:(id)arg1 ;
-(id)initWithType:(long long)arg1 properties:(unsigned long long)arg2 name:(id)arg3 constraints:(id)arg4 ;
-(id)constraintWithType:(long long)arg1 ;
-(void)addConstraint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeConstraint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setReflected:(BOOL)arg1 ;
-(void)replaceConstraints:(id)arg1 withConstraints:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateConstraints:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

