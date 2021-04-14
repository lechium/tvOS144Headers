/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFWorkflow, WFContentCollection, NSDictionary, WFWorkflowRunningContext, NSString;

@interface WFWorkflowControllerState : NSObject <NSSecureCoding> {

	WFWorkflow* _workflow;
	WFContentCollection* _currentInput;
	NSDictionary* _currentProcessedParameters;
	NSDictionary* _variables;
	unsigned long long _currentActionIndex;
	WFWorkflowRunningContext* _runningContext;
	long long _numberOfDialogsPresented;
	NSString* _currentRunSource;

}

@property (nonatomic,readonly) NSDictionary * variables;                               //@synthesize variables=_variables - In the implementation block
@property (nonatomic,readonly) unsigned long long currentActionIndex;                  //@synthesize currentActionIndex=_currentActionIndex - In the implementation block
@property (nonatomic,readonly) WFWorkflowRunningContext * runningContext;              //@synthesize runningContext=_runningContext - In the implementation block
@property (nonatomic,readonly) long long numberOfDialogsPresented;                     //@synthesize numberOfDialogsPresented=_numberOfDialogsPresented - In the implementation block
@property (nonatomic,readonly) NSString * currentRunSource;                            //@synthesize currentRunSource=_currentRunSource - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow;                                  //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,readonly) WFContentCollection * currentInput;                     //@synthesize currentInput=_currentInput - In the implementation block
@property (nonatomic,readonly) NSDictionary * currentProcessedParameters;              //@synthesize currentProcessedParameters=_currentProcessedParameters - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)getStateFromURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(WFWorkflow *)workflow;
-(NSDictionary *)variables;
-(long long)numberOfDialogsPresented;
-(WFWorkflowRunningContext *)runningContext;
-(id)initWithWorkflow:(id)arg1 variables:(id)arg2 currentActionIndex:(unsigned long long)arg3 runningContext:(id)arg4 currentInput:(id)arg5 currentProcessedParameters:(id)arg6 currentRunSource:(id)arg7 numberOfDialogsPresented:(long long)arg8 ;
-(WFContentCollection *)currentInput;
-(NSDictionary *)currentProcessedParameters;
-(unsigned long long)currentActionIndex;
-(NSString *)currentRunSource;
@end
