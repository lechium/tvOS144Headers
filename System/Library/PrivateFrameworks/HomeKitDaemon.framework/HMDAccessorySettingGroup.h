/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMDSettingGroup.h>

@class NSMutableSet, NSUUID, NSString, NSArray;

@interface HMDAccessorySettingGroup : HMFObject <HMFLogging, NSSecureCoding, HMDSettingGroup> {

	os_unfair_lock_s _lock;
	NSMutableSet* _settings;
	NSMutableSet* _groups;
	HMDAccessorySettingGroup* _mediaSystemSettingGroup;
	NSUUID* _parentIdentifier;
	NSString* _keyPath;
	NSUUID* _identifier;
	NSString* _name;

}

@property (copy) NSUUID * parentIdentifier;                                         //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSArray * settings; 
@property (copy,readonly) NSArray * groups; 
@property (__weak) HMDAccessorySettingGroup * mediaSystemSettingGroup;              //@synthesize mediaSystemSettingGroup=_mediaSystemSettingGroup - In the implementation block
@property (copy,readonly) NSString * keyPath;                                       //@synthesize keyPath=_keyPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)supportedSettingsClasses;
+(id)supportedGroupsClasses;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)keyPath;
-(NSArray *)groups;
-(NSArray *)settings;
-(id)fullDescription;
-(id)initWithModel:(id)arg1 ;
-(NSUUID *)parentIdentifier;
-(void)setParentIdentifier:(NSUUID *)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)logIdentifier;
-(void)addGroup:(id)arg1 ;
-(void)addSetting:(id)arg1 ;
-(void)removeSetting:(id)arg1 ;
-(void)removeGroup:(id)arg1 ;
-(id)settingWithIdentifier:(id)arg1 ;
-(id)groupWithIdentifier:(id)arg1 ;
-(HMDAccessorySettingGroup *)mediaSystemSettingGroup;
-(BOOL)compareSettingsTree:(id)arg1 ;
-(id)copyReplica;
-(void)intersectSettingGroup:(id)arg1 groupMetadata:(id)arg2 shouldAddMissingItems:(BOOL)arg3 ;
-(id)copyIdentical;
-(id)initWithName:(id)arg1 identifier:(id)arg2 parentIdentifier:(id)arg3 ;
-(void)_setParentGroup:(id)arg1 ;
-(void)_reevaluateParentGroup:(id)arg1 ;
-(BOOL)shouldEncodeForCoder:(id)arg1 ;
-(BOOL)isPrivateToDevice;
-(void)setMediaSystemSettingGroup:(HMDAccessorySettingGroup *)arg1 ;
@end

