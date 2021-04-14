/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVSetupKit.framework/TVSetupKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <TVSetupKit/TVSKStepResult.h>

@class NSDictionary, NSString;

@interface TVSKBasicStepResult : NSObject <BSDescriptionProviding, TVSKStepResult> {

	BOOL _didExecutionSucceed;
	BOOL _wasSkippedDueToManagedConfiguration;
	unsigned long long _flowOptions;
	NSDictionary* _metricsPayload;

}

@property (assign,nonatomic) unsigned long long flowOptions;                          //@synthesize flowOptions=_flowOptions - In the implementation block
@property (nonatomic,copy) NSDictionary * metricsPayload;                             //@synthesize metricsPayload=_metricsPayload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL didExecutionSucceed;                              //@synthesize didExecutionSucceed=_didExecutionSucceed - In the implementation block
@property (nonatomic,readonly) BOOL wasSkippedDueToManagedConfiguration;              //@synthesize wasSkippedDueToManagedConfiguration=_wasSkippedDueToManagedConfiguration - In the implementation block
+(id)new;
+(id)successResult;
+(id)managedConfigurationSkipResult;
+(id)failureResult;
+(id)resultWithSuccess:(BOOL)arg1 ;
-(NSString *)description;
-(id)init;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)_initWithSuccess:(BOOL)arg1 skippedDueToManagedConfiguration:(BOOL)arg2 ;
-(BOOL)didExecutionSucceed;
-(BOOL)wasSkippedDueToManagedConfiguration;
-(unsigned long long)flowOptions;
-(NSDictionary *)metricsPayload;
-(void)setFlowOptions:(unsigned long long)arg1 ;
-(void)setMetricsPayload:(NSDictionary *)arg1 ;
@end

