/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFOutOfProcessWorkflowControllerDelegate.h>

@class WFOutOfProcessWorkflowController, WFHomeWorkflow, NSString;

@interface WFHomeWorkflowController : NSObject <WFOutOfProcessWorkflowControllerDelegate> {

	WFOutOfProcessWorkflowController* _workflowController;
	WFHomeWorkflow* _workflow;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) WFOutOfProcessWorkflowController * workflowController;              //@synthesize workflowController=_workflowController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) WFHomeWorkflow * workflow;                                          //@synthesize workflow=_workflow - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cancel;
-(BOOL)isRunning;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(WFHomeWorkflow *)workflow;
-(id)initWithWorkflow:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(WFOutOfProcessWorkflowController *)workflowController;
-(void)outOfProcessWorkflowController:(id)arg1 didFinishWithError:(id)arg2 cancelled:(BOOL)arg3 reference:(id)arg4 dialogAttribution:(id)arg5 ;
@end

