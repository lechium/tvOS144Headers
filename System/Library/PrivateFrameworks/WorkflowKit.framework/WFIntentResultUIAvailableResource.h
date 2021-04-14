/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFResource.h>

@class INIntentExecutionInfo;

@interface WFIntentResultUIAvailableResource : WFResource {

	BOOL _eligibleForWidgets;
	BOOL _hasSuccessResponseWithDialog;
	INIntentExecutionInfo* _executionInfo;

}

@property (nonatomic,readonly) INIntentExecutionInfo * executionInfo;                            //@synthesize executionInfo=_executionInfo - In the implementation block
@property (getter=isEligibleForWidgets,nonatomic,readonly) BOOL eligibleForWidgets;              //@synthesize eligibleForWidgets=_eligibleForWidgets - In the implementation block
@property (nonatomic,readonly) BOOL hasSuccessResponseWithDialog;                                //@synthesize hasSuccessResponseWithDialog=_hasSuccessResponseWithDialog - In the implementation block
+(BOOL)mustBeAvailableForDisplay;
-(BOOL)isEligibleForWidgets;
-(id)initWithDefinition:(id)arg1 ;
-(void)refreshAvailability;
-(INIntentExecutionInfo *)executionInfo;
-(id)initWithDefinition:(id)arg1 intentExecutionInfo:(id)arg2 isEligibleForWidgets:(BOOL)arg3 hasSuccessResponseWithDialog:(BOOL)arg4 ;
-(BOOL)hasSuccessResponseWithDialog;
@end

