/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HKProxyProvider.h>

@class NSString;

@interface HKPluginProxyProvider : HKProxyProvider

@property (nonatomic,readonly) NSString * pluginIdentifier; 
-(NSString *)pluginIdentifier;
-(void)fetchProxyServiceEndpointForIdentifier:(id)arg1 healthStore:(id)arg2 endpointHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(id)initWithHealthStore:(id)arg1 pluginIdentifier:(id)arg2 exportedObject:(id)arg3 ;
-(void)fetchPluginProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
@end

