//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDDatabaseManagerWebServicesDelegate-Protocol.h"
#import "PDNetworkTaskDelegate-Protocol.h"
#import "PDPushNotificationConsumer-Protocol.h"
#import "PDScheduledActivityClient-Protocol.h"

@class NSMutableDictionary, NSSet, NSString, PDCardFileManager, PDDatabaseManager, PDNetworkTaskManager, PDPushNotificationManager;

@interface PDWebServicesCoordinator : NSObject <PDNetworkTaskDelegate, PDDatabaseManagerWebServicesDelegate, PDPushNotificationConsumer, PDScheduledActivityClient>
{
    NSSet *_pushTopics;	// 8 = 0x8
    PDCardFileManager *_cardFileManager;	// 16 = 0x10
    PDDatabaseManager *_databaseManager;	// 24 = 0x18
    PDPushNotificationManager *_pushNotificationManager;	// 32 = 0x20
    PDNetworkTaskManager *_taskManager;	// 40 = 0x28
    NSMutableDictionary *_taskToHandlerMap;	// 48 = 0x30
}

+ (void)initialize;	// IMP=0x00000001000e5658
+ (void)initializeConfigurationDefaults;	// IMP=0x00000001001b19e8
- (void).cxx_destruct;	// IMP=0x00000001000e8820
@property(readonly, nonatomic) PDNetworkTaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(readonly, nonatomic) PDDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
- (void)_updatePassTypeIdentifier:(id)arg1;	// IMP=0x00000001000e844c
- (void)_scheduleUpdateForPassTypeIdentifier:(id)arg1 afterDate:(id)arg2;	// IMP=0x00000001000e81e8
- (void)_cancelWhatChangedTasksForPassTypeIdentifier:(id)arg1;	// IMP=0x00000001000e809c
- (void)_cancelAutomaticUpdateTasksForPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;	// IMP=0x00000001000e7f48
- (void)_cancelAllTasksForPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;	// IMP=0x00000001000e7dec
- (void)_personalizePassTask:(id)arg1 gotResult:(id)arg2;	// IMP=0x00000001000e7d04
- (void)_getPassTask:(id)arg1 gotResult:(id)arg2;	// IMP=0x00000001000e770c
- (void)_getSerialNumbersTask:(id)arg1 gotResult:(id)arg2;	// IMP=0x00000001000e7224
- (void)_whatChangedTaskSucceeded:(id)arg1;	// IMP=0x00000001000e71a8
- (void)_registrationTaskSucceeded:(id)arg1;	// IMP=0x00000001000e6f50
- (void)_registerWithSerialNumber:(id)arg1 authToken:(id)arg2 webService:(id)arg3;	// IMP=0x00000001000e6dcc
- (void)_recalculatePushTopics;	// IMP=0x00000001000e6d7c
- (void)_invokeAndClearHandlerForTask:(id)arg1 withResult:(_Bool)arg2;	// IMP=0x00000001000e6ce0
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x00000001000e6c44
- (void)task:(id)arg1 encounteredWarnings:(id)arg2;	// IMP=0x00000001000e6b74
- (void)task:(id)arg1 encounteredError:(id)arg2;	// IMP=0x00000001000e6a44
- (void)taskFailed:(id)arg1;	// IMP=0x00000001000e690c
- (void)taskSucceeded:(id)arg1;	// IMP=0x00000001000e6870
- (void)task:(id)arg1 willRetryAfterMinimumDelay:(double)arg2;	// IMP=0x00000001000e6708
- (void)task:(id)arg1 gotResult:(id)arg2;	// IMP=0x00000001000e6638
- (id)pushNotificationTopics;	// IMP=0x00000001000e65e8
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000001000e655c
- (void)applyPushNotificationToken:(id)arg1;	// IMP=0x00000001000e62a8
- (void)handlePushDisabled:(id)arg1 authToken:(id)arg2 webService:(id)arg3;	// IMP=0x00000001000e616c
- (void)handlePushEnabled:(id)arg1 authToken:(id)arg2 webService:(id)arg3;	// IMP=0x00000001000e60f0
- (void)handleModification:(id)arg1 webService:(id)arg2 pushEnabled:(_Bool)arg3 source:(long long)arg4;	// IMP=0x00000001000e5fec
- (void)handleDeletion:(id)arg1 authToken:(id)arg2 webService:(id)arg3 pushEnabled:(_Bool)arg4;	// IMP=0x00000001000e5f24
- (void)handleInsertion:(id)arg1 authToken:(id)arg2 webService:(id)arg3 pushEnabled:(_Bool)arg4 source:(long long)arg5;	// IMP=0x00000001000e5de4
- (void)nukeTasks;	// IMP=0x00000001000e5d58
- (void)personalizePassWithUniqueIdentifier:(id)arg1 contact:(id)arg2 personalizationToken:(id)arg3 requiredPersonalizationFields:(unsigned long long)arg4 personalizationSource:(unsigned long long)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00000001000e59f0
- (void)updatePassWithUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e5860
- (void)connect;	// IMP=0x00000001000e57cc
- (void)dealloc;	// IMP=0x00000001000e5764
- (id)initWithPushNotificationManager:(id)arg1 databaseManager:(id)arg2 cardFileManager:(id)arg3;	// IMP=0x00000001000e5664
- (id)_nextUpdateDateWithLastUpdateDate:(id)arg1 rateLimitLevel:(long long)arg2;	// IMP=0x00000001001b4774
- (long long)_rateLimitLevelForFrequencyScore:(double)arg1;	// IMP=0x00000001001b4384
- (double)_updatedFrequencyScoreForScore:(double)arg1 lastPushDate:(id)arg2 zeroInterval:(double)arg3;	// IMP=0x00000001001b4200
- (double)_zeroIntervalForPassTypeID:(id)arg1;	// IMP=0x00000001001b3ffc
- (id)_userNotificationParametersForPassTypeID:(id)arg1;	// IMP=0x00000001001b3928
- (void)_unregisterPassesOfType:(id)arg1;	// IMP=0x00000001001b3770
- (void)_presentUnregistrationAlertForPassTypeID:(id)arg1;	// IMP=0x00000001001b3584
- (void)_aggdLogWebServiceErrorCode:(long long)arg1 passTypeID:(id)arg2;	// IMP=0x00000001001b34f0
- (void)_aggdLogTaskErrorCode:(long long)arg1 passTypeID:(id)arg2;	// IMP=0x00000001001b345c
- (void)_aggdLogTaskWarningCode:(long long)arg1 passTypeID:(id)arg2;	// IMP=0x00000001001b33d0
- (void)reportWarnings:(id)arg1 webService:(id)arg2 logToService:(_Bool)arg3;	// IMP=0x00000001001b3110
- (void)reportError:(id)arg1 webService:(id)arg2 logToService:(_Bool)arg3;	// IMP=0x00000001001b2e50
- (void)reportAbandonedTask:(id)arg1 passTypeID:(id)arg2;	// IMP=0x00000001001b2cd8
- (void)reportUnchangedPassForPersonalizationTask:(id)arg1;	// IMP=0x00000001001b2c0c
- (void)reportMissingLastModifiedForSerialNumber:(id)arg1 webService:(id)arg2;	// IMP=0x00000001001b2b70
- (void)reportIgnoredIfModifiedSince:(id)arg1 forSerialNumber:(id)arg2 webService:(id)arg3;	// IMP=0x00000001001b2ab4
- (void)reportUnchangedPassForServerRequestedUpdateTask:(id)arg1;	// IMP=0x00000001001b28d0
- (void)reportPushWithNoSerialNumbersFromTasks:(id)arg1;	// IMP=0x00000001001b25b4
- (void)reportUnmodifiedTag:(id)arg1 withRequestedSerialNumbers:(id)arg2 forWebService:(id)arg3;	// IMP=0x00000001001b2488
- (void)reportMissingTagWithRequestedSerialNumbers:(id)arg1 forWebService:(id)arg2;	// IMP=0x00000001001b2374
- (void)reportUpdateRequestForNonPushEnabledSerialNumber:(id)arg1 forWebService:(id)arg2;	// IMP=0x00000001001b217c
- (void)reportPushRateLimitLevel:(long long)arg1 forPassTypeID:(id)arg2;	// IMP=0x00000001001b1e7c
- (void)resetPushFrequencyStateForPassTypeID:(id)arg1;	// IMP=0x00000001001b1e08
- (void)adjustStateForIncomingPushNotification:(id)arg1 andComputeNextUpdateDate:(id *)arg2;	// IMP=0x00000001001b1c24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

