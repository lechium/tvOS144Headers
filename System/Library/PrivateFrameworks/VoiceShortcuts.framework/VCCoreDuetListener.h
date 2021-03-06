/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, _CDUserContext, VCDatabaseProvider;
@class WFWorkflowRunCoordinator, NSObject, VCDaemonXPCEventHandler, VCTriggerEventQueue, NSMutableDictionary;

@interface VCCoreDuetListener : NSObject {

	WFWorkflowRunCoordinator* _runCoordinator;
	NSObject*<OS_dispatch_queue> _queue;
	id<_CDUserContext> _userContext;
	id<VCDatabaseProvider> _databaseProvider;
	VCDaemonXPCEventHandler* _eventHandler;
	VCTriggerEventQueue* _eventQueue;
	NSMutableDictionary* _registrations;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<_CDUserContext> userContext;                         //@synthesize userContext=_userContext - In the implementation block
@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;                //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,readonly) VCDaemonXPCEventHandler * eventHandler;                 //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,retain) VCTriggerEventQueue * eventQueue;                         //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * registrations;                    //@synthesize registrations=_registrations - In the implementation block
@property (nonatomic,readonly) WFWorkflowRunCoordinator * runCoordinator;              //@synthesize runCoordinator=_runCoordinator - In the implementation block
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<_CDUserContext>)userContext;
-(NSMutableDictionary *)registrations;
-(VCTriggerEventQueue *)eventQueue;
-(void)setEventQueue:(VCTriggerEventQueue *)arg1 ;
-(VCDaemonXPCEventHandler *)eventHandler;
-(id<VCDatabaseProvider>)databaseProvider;
-(void)unregisterTriggerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getConfiguredTriggerDescriptionsWithCompletion:(/*^block*/id)arg1 ;
-(void)checkTriggerStateWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)checkTriggerStateWithKeyPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteTriggerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(WFWorkflowRunCoordinator *)runCoordinator;
-(id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2 runCoordinator:(id)arg3 ;
-(void)deviceDidUnlockForFirstTime;
-(void)timezoneChangeDidOccur;
-(void)timeChangeDidOccur;
-(void)removeStalePendingNotifications;
-(id)databaseWithError:(id*)arg1 ;
-(BOOL)queue_registerAllTriggers:(id*)arg1 ;
-(BOOL)registerTrigger:(id)arg1 error:(id*)arg2 ;
-(void)handleCallbackForTriggerWithIdentifier:(id)arg1 info:(id)arg2 ;
-(void)unregisterAllTriggers;
-(BOOL)isCallbackRegisteredWithIdentifier:(id)arg1 ;
-(void)registerCallback:(id)arg1 withIdentifier:(id)arg2 ;
-(void)unregisterCallbackForIdentifier:(id)arg1 ;
-(void)registerSunriseSunsetCallbackIfNeeded;
-(void)handleSunriseSunsetChanged;
-(void)queue_fireTriggerWithIdentifier:(id)arg1 force:(BOOL)arg2 eventInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)registerAllTriggersWithCompletion:(/*^block*/id)arg1 ;
-(void)registerTriggerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fireTriggerWithIdentifier:(id)arg1 force:(BOOL)arg2 eventInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deleteTriggerWithIdentifier:(id)arg1 allowedDeletionClasses:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

