/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _HKAppURLSpecification : NSObject
+(BOOL)isClinicalOnboardingURL:(id)arg1 ;
+(BOOL)isClinicalLoginRedirectURL:(id)arg1 ;
+(BOOL)parseClinicalOnboardingURL:(id)arg1 resultHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
+(BOOL)parseClinicalLoginRedirectURL:(id)arg1 resultHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
+(BOOL)isAtrialFibrillationEventURL:(id)arg1 ;
+(BOOL)isViewHealthRecordsURL:(id)arg1 ;
+(BOOL)isHealthRecordsProviderSearchURL:(id)arg1 ;
@end

