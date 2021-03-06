/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HKFeatureAvailabilityProviding.h>

@protocol HKFeatureAvailabilityProviding, HKFeatureAvailabilityCacheProviding, OS_os_log;
@class NSString, NSObject;

@interface HKFeatureAvailabilityDatabaseInaccessibilityCache : NSObject <HKFeatureAvailabilityProviding> {

	id<HKFeatureAvailabilityProviding> _featureAvailabilityProviding;
	id<HKFeatureAvailabilityCacheProviding> _cacheProviding;
	NSObject*<OS_os_log> _loggingCategory;

}

@property (nonatomic,copy,readonly) NSString * featureIdentifier; 
-(id)description;
-(NSString *)featureIdentifier;
-(void)unregisterObserver:(id)arg1 ;
-(id)_namespacedKeyForKey:(id)arg1 ;
-(id)_processResult:(id)arg1 resultType:(Class)arg2 error:(id)arg3 cacheKey:(id)arg4 ;
-(void)_setCachedObject:(id)arg1 forKey:(id)arg2 ;
-(id)_cachedObjectForKey:(id)arg1 ;
-(id)highestOnboardingVersionCompletedWithError:(id*)arg1 ;
-(id)_processNumber:(id)arg1 error:(id)arg2 cacheKey:(id)arg3 ;
-(id)isCurrentOnboardingVersionCompletedWithError:(id*)arg1 ;
-(void)isCurrentOnboardingVersionCompletedWithCompletion:(/*^block*/id)arg1 ;
-(id)earliestDateLowestOnboardingVersionCompletedWithError:(id*)arg1 ;
-(id)canCompleteOnboardingForCountryCode:(id)arg1 error:(id*)arg2 ;
-(id)canCompleteOnboardingForCountryCode:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(id)onboardedCountryCodeSupportedStateWithError:(id*)arg1 ;
-(id)onboardedCountryCodeSupportedStateForDevice:(id)arg1 error:(id*)arg2 ;
-(id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id*)arg1 ;
-(id)isFeatureCapabilitySupportedOnDevice:(id)arg1 error:(id*)arg2 ;
-(void)registerObserver:(id)arg1 queue:(id)arg2 ;
-(void)resetOnboardingWithCompletion:(/*^block*/id)arg1 ;
-(void)setCurrentOnboardingVersionCompletedForCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithFeatureAvailabilityProviding:(id)arg1 backedByCache:(id)arg2 loggingCategory:(id)arg3 ;
@end

