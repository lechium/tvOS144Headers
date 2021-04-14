/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMDSettingGroup.h>
@class NSArray, NSString;


@protocol HMDSettingGroup <HMDSettingBaseProtocol>
@property (copy,readonly) NSArray * settings; 
@property (copy,readonly) NSArray * groups; 
@property (copy,readonly) NSString * keyPath; 
@required
-(NSString *)keyPath;
-(NSArray *)groups;
-(NSArray *)settings;

@end


@class NSArray, NSString, NSUUID, NSMutableSet;

@interface HMDSettingGroup : NSObject <HMDSettingGroup> {

	NSUUID* _identifier;
	NSUUID* _parentIdentifier;
	NSString* _name;
	NSString* _keyPath;
	NSMutableSet* _settingsInternal;
	NSMutableSet* _groupsInternal;

}

@property (retain) NSMutableSet * settingsInternal;                 //@synthesize settingsInternal=_settingsInternal - In the implementation block
@property (retain) NSMutableSet * groupsInternal;                   //@synthesize groupsInternal=_groupsInternal - In the implementation block
@property (copy,readonly) NSUUID * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSUUID * parentIdentifier;                //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSArray * settings; 
@property (copy,readonly) NSArray * groups; 
@property (copy) NSString * keyPath;                                //@synthesize keyPath=_keyPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)keyPath;
-(NSArray *)groups;
-(NSArray *)settings;
-(void)setKeyPath:(NSString *)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(NSUUID *)parentIdentifier;
-(void)addGroup:(id)arg1 ;
-(void)addSetting:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 name:(id)arg3 groups:(id)arg4 settings:(id)arg5 ;
-(NSMutableSet *)settingsInternal;
-(NSMutableSet *)groupsInternal;
-(void)setSettingsInternal:(NSMutableSet *)arg1 ;
-(void)setGroupsInternal:(NSMutableSet *)arg1 ;
@end
