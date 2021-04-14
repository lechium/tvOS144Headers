/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber;

@interface ASCDefaults : NSObject {

	NSString* _bundleID;

}

@property (nonatomic,copy,readonly) NSString * bundleID;                               //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * storefrontLocaleID; 
@property (assign,nonatomic) BOOL forceRightToLeftLayout; 
@property (assign,nonatomic) BOOL disableShutdownTimer; 
@property (assign,nonatomic) BOOL enableWebInspector; 
@property (nonatomic,copy) NSNumber * overlaysRateLimitRequestsPerSecond; 
@property (nonatomic,copy) NSNumber * overlaysRateLimitTimeWindow; 
@property (nonatomic,copy) NSNumber * overlaysLoadTimeout; 
@property (assign,nonatomic) BOOL forceStandaloneWatch; 
+(id)daemonDefaults;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSString *)bundleID;
-(id)initWithBundleID:(id)arg1 ;
-(NSNumber *)overlaysRateLimitRequestsPerSecond;
-(void)setOverlaysRateLimitRequestsPerSecond:(NSNumber *)arg1 ;
-(NSNumber *)overlaysRateLimitTimeWindow;
-(void)setOverlaysRateLimitTimeWindow:(NSNumber *)arg1 ;
-(NSNumber *)overlaysLoadTimeout;
-(void)setOverlaysLoadTimeout:(NSNumber *)arg1 ;
-(NSString *)storefrontLocaleID;
-(BOOL)forceRightToLeftLayout;
-(void)setStorefrontLocaleID:(NSString *)arg1 ;
-(void)setForceRightToLeftLayout:(BOOL)arg1 ;
-(BOOL)disableShutdownTimer;
-(void)setDisableShutdownTimer:(BOOL)arg1 ;
-(BOOL)enableWebInspector;
-(void)setEnableWebInspector:(BOOL)arg1 ;
-(BOOL)forceStandaloneWatch;
-(void)setForceStandaloneWatch:(BOOL)arg1 ;
@end

