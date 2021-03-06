/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSString, NSObject;

@interface AMSLogConfig : NSObject <NSCopying, NSMutableCopying> {

	NSString* _category;
	NSString* _subsystem;
	NSObject*<OS_os_log> _backingOSLogObject;
	NSObject*<OS_dispatch_queue> _propertyAccessQueue;

}

@property (nonatomic,retain) NSObject*<OS_os_log> backingOSLogObject;                       //@synthesize backingOSLogObject=_backingOSLogObject - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyAccessQueue;              //@synthesize propertyAccessQueue=_propertyAccessQueue - In the implementation block
@property (nonatomic,copy) NSString * category;                                             //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * subsystem;                                            //@synthesize subsystem=_subsystem - In the implementation block
@property (nonatomic,readonly) BOOL debugLogsEnabled; 
@property (nonatomic,readonly) NSObject*<OS_os_log> OSLogObject; 
+(id)ask_generalLogConfig;
+(id)sharedConfig;
+(id)sharedPrivacyConfig;
+(id)sharedAccountsConfig;
+(id)sharedAccountsStorefrontConfig;
+(id)sharedAccountsMigrationConfig;
+(id)sharedAccountsCookiesConfig;
+(id)sharedBagCacheConfig;
+(id)sharedFollowUpConfig;
+(id)_createLogConfigWithSubsystem:(id)arg1 category:(id)arg2 ;
+(id)_createLogConfigWithBaseConfig:(id)arg1 subystem:(id)arg2 category:(id)arg3 ;
+(id)sharedBagConfig;
+(BOOL)_debugLogsEnabled:(id)arg1 ;
+(id)sharedAccountsLogoutConfig;
+(id)sharedAccountsMigrationConfigOversize;
+(id)sharedPushNotificationConfig;
+(id)sharedAccountsNotificationPluginConfig;
+(id)sharedAccountsOversizeConfig;
+(id)sharedAccountsAuthenticationPluginConfig;
+(id)sharedAnisetteConfig;
+(id)sharedAttestationConfig;
+(id)sharedConfigOversize;
+(id)sharedDataMigrationConfig;
+(id)sharedPurchaseConfig;
+(id)sharedAccountsDaemonConfig;
+(id)sharedKeychainConfig;
+(id)sharedMediaConfig;
+(id)sharedDeviceOffersConfig;
+(id)sharedAccountsMultiUserConfig;
+(id)sharedAccountsSyncPluginConfig;
+(id)sharedMarketingItemConfig;
+(id)sharedRatingsProviderConfig;
+(id)sharedUserNotificationConfig;
+(id)sharedMediaServiceOwnerConfig;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)subsystem;
-(NSObject*<OS_os_log>)OSLogObject;
-(BOOL)debugLogsEnabled;
-(void)setSubsystem:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyAccessQueue;
-(NSObject*<OS_os_log>)backingOSLogObject;
-(void)setBackingOSLogObject:(NSObject*<OS_os_log>)arg1 ;
-(void)setPropertyAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

