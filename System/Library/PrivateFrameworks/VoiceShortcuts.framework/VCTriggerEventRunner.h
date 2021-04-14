/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFWorkflowRunCoordinatorObserver.h>

@protocol VCDatabaseProvider, VCTriggerEventRunnerDelegate;
@class WFWorkflowRunEvent, WFConfiguredTrigger, WFWorkflowRunningContext, WFWorkflowRunCoordinator, NSString;

@interface VCTriggerEventRunner : NSObject <WFWorkflowRunCoordinatorObserver> {

	id<VCDatabaseProvider> _databaseProvider;
	id<VCTriggerEventRunnerDelegate> _delegate;
	WFWorkflowRunEvent* _inProgressRunEvent;
	WFConfiguredTrigger* _inProgressTrigger;
	WFWorkflowRunningContext* _inProgressRunningContext;
	WFWorkflowRunCoordinator* _runCoordinator;

}

@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;                        //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,readonly) id<VCTriggerEventRunnerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WFWorkflowRunEvent * inProgressRunEvent;                          //@synthesize inProgressRunEvent=_inProgressRunEvent - In the implementation block
@property (nonatomic,retain) WFConfiguredTrigger * inProgressTrigger;                          //@synthesize inProgressTrigger=_inProgressTrigger - In the implementation block
@property (nonatomic,retain) WFWorkflowRunningContext * inProgressRunningContext;              //@synthesize inProgressRunningContext=_inProgressRunningContext - In the implementation block
@property (nonatomic,readonly) WFWorkflowRunCoordinator * runCoordinator;                      //@synthesize runCoordinator=_runCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<VCTriggerEventRunnerDelegate>)delegate;
-(id<VCDatabaseProvider>)databaseProvider;
-(void)runCoordinator:(id)arg1 didFinishRunningWorkflowWithError:(id)arg2 runningContext:(id)arg3 cancelled:(BOOL)arg4 ;
-(id)initWithDatabaseProvider:(id)arg1 delegate:(id)arg2 runCoordinator:(id)arg3 ;
-(BOOL)startRunningWorkflow:(id)arg1 forTrigger:(id)arg2 eventInfo:(id)arg3 ;
-(BOOL)isRunningWorkflowWithIdentifier:(id)arg1 ;
-(void)logPowerLogEventForConfiguredTrigger:(id)arg1 workflowReference:(id)arg2 ;
-(WFWorkflowRunEvent *)inProgressRunEvent;
-(void)setInProgressRunEvent:(WFWorkflowRunEvent *)arg1 ;
-(WFConfiguredTrigger *)inProgressTrigger;
-(void)setInProgressTrigger:(WFConfiguredTrigger *)arg1 ;
-(WFWorkflowRunningContext *)inProgressRunningContext;
-(void)setInProgressRunningContext:(WFWorkflowRunningContext *)arg1 ;
-(WFWorkflowRunCoordinator *)runCoordinator;
@end

