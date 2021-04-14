/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HKRemoteFeatureAvailabilityBaseRule.h>
#import <libobjc.A.dylib/HKRemoteFeatureAvailabilityRule.h>

@class NSString;

@interface HKRemoteFeatureAvailabilityWatchCompanionDevicePlatformEqualsRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule> {

	NSString* _devicePlatform;

}

@property (nonatomic,retain) NSString * devicePlatform;              //@synthesize devicePlatform=_devicePlatform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleIdentifier;
-(BOOL)evaluate;
-(void)processUserInfo:(id)arg1 ;
-(void)setDevicePlatform:(NSString *)arg1 ;
-(NSString *)devicePlatform;
@end

