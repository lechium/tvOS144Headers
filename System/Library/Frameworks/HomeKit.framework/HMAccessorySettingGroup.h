/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HMSettingGroup.h>
#import <libobjc.A.dylib/_HMAccesorySettingGroupDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMFUnfairLock, NSMutableSet, _HMAccessorySettingGroup, NSString, NSArray;

@interface HMAccessorySettingGroup : HMSettingGroup <_HMAccesorySettingGroupDelegate, HMFLogging> {

	HMFUnfairLock* _lock;
	NSMutableSet* _settings;
	NSMutableSet* _groups;
	_HMAccessorySettingGroup* _internal;
	HMAccessorySettingGroup* _group;

}

@property (readonly) _HMAccessorySettingGroup * internal;              //@synthesize internal=_internal - In the implementation block
@property (__weak) HMAccessorySettingGroup * group;                    //@synthesize group=_group - In the implementation block
@property (copy,readonly) NSString * keyPath; 
@property (copy,readonly) NSString * localizedTitle; 
@property (copy,readonly) NSArray * settings; 
@property (copy,readonly) NSArray * groups; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)setGroup:(HMAccessorySettingGroup *)arg1 ;
-(id)initWithKeyPath:(id)arg1 ;
-(NSString *)keyPath;
-(HMAccessorySettingGroup *)group;
-(NSArray *)groups;
-(NSArray *)settings;
-(NSString *)localizedTitle;
-(_HMAccessorySettingGroup *)internal;
-(id)logIdentifier;
-(void)addGroup:(id)arg1 ;
-(void)addSetting:(id)arg1 ;
-(id)initWithInternal:(id)arg1 ;
-(BOOL)isReflectedEqual:(id)arg1 ;
-(void)mergeReflected:(id)arg1 ;
-(void)_settingGroup:(id)arg1 didAddSetting:(id)arg2 ;
-(void)_settingGroup:(id)arg1 didRemoveSetting:(id)arg2 ;
-(void)removeSetting:(id)arg1 ;
-(void)_settingGroup:(id)arg1 didAddSettingGroup:(id)arg2 ;
-(void)_settingGroup:(id)arg1 didRemoveSettingGroup:(id)arg2 ;
-(void)removeGroup:(id)arg1 ;
-(void)_notifyClientOfAddedSetting:(id)arg1 ;
-(void)_notifyClientOfRemovedSetting:(id)arg1 ;
-(void)_notifyClientOfAddedGroup:(id)arg1 ;
-(void)_notifyClientOfRemovedGroup:(id)arg1 ;
-(void)addSetting:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeSetting:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addGroup:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeGroup:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

