/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFGranularAccessResource.h>

@class NSArray;

@interface WFRemoteServerAccessResource : WFGranularAccessResource {

	NSArray* _requestedURLs;

}

@property (nonatomic,copy) NSArray * requestedURLs;              //@synthesize requestedURLs=_requestedURLs - In the implementation block
+(BOOL)isSystemResource;
+(Class)perWorkflowStateClass;
-(id)name;
-(id)icon;
-(void)setRequestedURLs:(NSArray *)arg1 ;
-(unsigned long long)globalLevelStatus;
-(id)requestedEntries;
-(id)localizedWorkflowLevelPromptTemplate;
-(id)localizedWorkflowLevelMessageTemplate;
-(id)localizedWorkflowLevelNotDeterminedStatusMessage;
-(id)localizedWorkflowLevelDeniedStatusMessage;
-(NSArray *)requestedURLs;
@end

