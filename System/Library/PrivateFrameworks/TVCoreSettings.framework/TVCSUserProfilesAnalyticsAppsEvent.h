/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVCoreSettings/TVCSUserProfilesAnalyticsEvent.h>

@class NSString;

@interface TVCSUserProfilesAnalyticsAppsEvent : NSObject <TVCSUserProfilesAnalyticsEvent> {

	long long _appCount;
	long long _getCurrentUserAppCount;
	long long _runAsCurrentUserAppCount;

}

@property (assign,nonatomic) long long appCount;                              //@synthesize appCount=_appCount - In the implementation block
@property (assign,nonatomic) long long getCurrentUserAppCount;                //@synthesize getCurrentUserAppCount=_getCurrentUserAppCount - In the implementation block
@property (assign,nonatomic) long long runAsCurrentUserAppCount;              //@synthesize runAsCurrentUserAppCount=_runAsCurrentUserAppCount - In the implementation block
@property (nonatomic,readonly) NSString * eventName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)eventName;
-(void)setAppCount:(long long)arg1 ;
-(long long)appCount;
-(id)buildPayload;
-(long long)getCurrentUserAppCount;
-(void)setGetCurrentUserAppCount:(long long)arg1 ;
-(long long)runAsCurrentUserAppCount;
-(void)setRunAsCurrentUserAppCount:(long long)arg1 ;
@end

