/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFOutOfProcessWorkflowControllerHost.h>
#import <libobjc.A.dylib/WFTimerHandler.h>

@protocol WFOutOfProcessWorkflowControllerDelegate, WFUserInterfaceHost;
@class WFWorkflowRunningContext, NSExtension, NSUUID, WFActionUserInterfaceListener, WFWorkflowReference, NSString, WFDialogAttribution, WFTimer;

@interface WFOutOfProcessWorkflowController : NSObject <WFOutOfProcessWorkflowControllerHost, WFTimerHandler> {

	BOOL _isPersonalAutomation;
	id<WFOutOfProcessWorkflowControllerDelegate> _delegate;
	long long _presentationMode;
	WFWorkflowRunningContext* _runningContext;
	long long _environment;
	NSExtension* _extension;
	NSUUID* _extensionRequestIdentifier;
	id<WFUserInterfaceHost> _userInterfaceHost;
	WFActionUserInterfaceListener* _actionInterfaceListener;
	WFWorkflowReference* _workflowReference;
	long long _state;
	NSString* _currentWorkflowName;
	WFDialogAttribution* _currentDialogAttribution;
	WFTimer* _timer;

}

@property (nonatomic,readonly) long long environment;                                                   //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                                   //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) NSUUID * extensionRequestIdentifier;                                       //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (nonatomic,retain) id<WFUserInterfaceHost> userInterfaceHost;                                 //@synthesize userInterfaceHost=_userInterfaceHost - In the implementation block
@property (nonatomic,retain) WFActionUserInterfaceListener * actionInterfaceListener;                   //@synthesize actionInterfaceListener=_actionInterfaceListener - In the implementation block
@property (nonatomic,retain) WFWorkflowReference * workflowReference;                                   //@synthesize workflowReference=_workflowReference - In the implementation block
@property (assign,nonatomic) long long state;                                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * currentWorkflowName;                                              //@synthesize currentWorkflowName=_currentWorkflowName - In the implementation block
@property (nonatomic,copy) WFDialogAttribution * currentDialogAttribution;                              //@synthesize currentDialogAttribution=_currentDialogAttribution - In the implementation block
@property (nonatomic,retain) WFTimer * timer;                                                           //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) BOOL isPersonalAutomation;                                                 //@synthesize isPersonalAutomation=_isPersonalAutomation - In the implementation block
@property (assign,nonatomic,__weak) id<WFOutOfProcessWorkflowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long presentationMode;                                                //@synthesize presentationMode=_presentationMode - In the implementation block
@property (nonatomic,copy,readonly) WFWorkflowRunningContext * runningContext;                          //@synthesize runningContext=_runningContext - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<WFOutOfProcessWorkflowControllerDelegate>)delegate;
-(void)setDelegate:(id<WFOutOfProcessWorkflowControllerDelegate>)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)stop;
-(long long)environment;
-(void)reset;
-(BOOL)isRunning;
-(void)setTimer:(WFTimer *)arg1 ;
-(WFTimer *)timer;
-(id)extensionContext;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(void)setPresentationMode:(long long)arg1 ;
-(long long)presentationMode;
-(void)setExtensionRequestIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)extensionRequestIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(id)extensionInterface;
-(void)createSleepWorkflow:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleXPCConnectionInterruption;
-(id)initWithEnvironment:(long long)arg1 runningContext:(id)arg2 presentationMode:(long long)arg3 ;
-(void)stopExtension;
-(void)populateSleepWorkflowsFromWorkflowReferences:(id)arg1 completion:(/*^block*/id)arg2 ;
-(WFWorkflowRunningContext *)runningContext;
-(BOOL)resumeRunningWithError:(out id*)arg1 ;
-(BOOL)runWorkflowWithRequest:(id)arg1 error:(out id*)arg2 ;
-(id<WFUserInterfaceHost>)userInterfaceHost;
-(void)workflowDidStartFromWorkflowReference:(id)arg1 attribution:(id)arg2 ;
-(void)workflowDidFinishRunningWithError:(id)arg1 cancelled:(BOOL)arg2 reference:(id)arg3 ;
-(void)pauseWorkflowAndWriteStateToDisk;
-(void)handleIncomingFileForRemoteExecutionWithURL:(id)arg1 withIdentifier:(id)arg2 ;
-(BOOL)timerShouldStart:(id)arg1 ;
-(BOOL)runActionWithRunRequestData:(id)arg1 error:(out id*)arg2 ;
-(void)findExtensionInterface:(/*^block*/id)arg1 error:(out id*)arg2 ;
-(void)reportFinishToDelegateWithError:(id)arg1 cancelled:(BOOL)arg2 reference:(id)arg3 dialogAttribution:(id)arg4 ;
-(void)setUserInterfaceHost:(id<WFUserInterfaceHost>)arg1 ;
-(WFActionUserInterfaceListener *)actionInterfaceListener;
-(void)setActionInterfaceListener:(WFActionUserInterfaceListener *)arg1 ;
-(WFWorkflowReference *)workflowReference;
-(void)setWorkflowReference:(WFWorkflowReference *)arg1 ;
-(NSString *)currentWorkflowName;
-(void)setCurrentWorkflowName:(NSString *)arg1 ;
-(WFDialogAttribution *)currentDialogAttribution;
-(void)setCurrentDialogAttribution:(WFDialogAttribution *)arg1 ;
-(BOOL)isPersonalAutomation;
-(void)setIsPersonalAutomation:(BOOL)arg1 ;
@end

