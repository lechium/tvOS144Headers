/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSFileManager, CNUserDefaults, NSString, NSNumber;

@interface CNEnvironment : NSObject {

	NSFileManager* _fileManager;
	CNUserDefaults* _userDefaults;
	NSString* _mainBundleIdentifier;
	NSNumber* _isInternalBuildStorage;
	NSNumber* _isCommLimitsEnabledStorage;
	NSNumber* _isCommLimitsPersistenceAccessibleStorage;

}

@property (nonatomic,readonly) NSFileManager * fileManager;                                      //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,readonly) CNUserDefaults * userDefaults;                                    //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,readonly) NSString * mainBundleIdentifier;                                  //@synthesize mainBundleIdentifier=_mainBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * isInternalBuildStorage;                                //@synthesize isInternalBuildStorage=_isInternalBuildStorage - In the implementation block
@property (nonatomic,readonly) NSNumber * isCommLimitsEnabledStorage;                            //@synthesize isCommLimitsEnabledStorage=_isCommLimitsEnabledStorage - In the implementation block
@property (nonatomic,readonly) NSNumber * isCommLimitsPersistenceAccessibleStorage;              //@synthesize isCommLimitsPersistenceAccessibleStorage=_isCommLimitsPersistenceAccessibleStorage - In the implementation block
+(id)currentEnvironment;
-(id)init;
-(NSFileManager *)fileManager;
-(CNUserDefaults *)userDefaults;
-(id)initWithFileManager:(id)arg1 userDefaults:(id)arg2 mainBundleIdentifier:(id)arg3 ;
-(BOOL)isInternalBuildImpl;
-(BOOL)isCommLimitsEnabledImpl;
-(BOOL)isInternalBuild;
-(BOOL)isCommLimitsEnabled;
-(NSString *)mainBundleIdentifier;
-(NSNumber *)isInternalBuildStorage;
-(NSNumber *)isCommLimitsEnabledStorage;
-(NSNumber *)isCommLimitsPersistenceAccessibleStorage;
@end

