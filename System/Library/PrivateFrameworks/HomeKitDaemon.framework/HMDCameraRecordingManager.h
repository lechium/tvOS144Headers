/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDCameraRecordingSessionNotificationTriggerDelegate.h>
#import <libobjc.A.dylib/HMDCameraRecordingSettingsControlDelegate.h>
#import <libobjc.A.dylib/HMDDevicePreferenceDataSource.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDCameraRecordingSessionDelegate.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/HMDCameraClipManagerDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue, HMDDataStreamBulkSendSession;
@class NSUUID, HMDStreamDataChunkAssembler, HMDCameraRecordingResidentElector, HMDCameraRecordingBulkSendDataReadEvent, HMDCameraFeaturesDataSource, HMDCameraSignificantEventServer, NSObject, HMDCameraRecordingSessionNotificationTrigger, HMDCameraRecordingSettingsControl, HMDCameraRecordingManagerDependencyFactory, HMFMessageDispatcher, HMDHAPAccessory, HMDCameraProfile, HMDCameraRecordingBulkSendSessionInitiator, HMFTimer, HMDCameraRecordingSessionRetryContext, HMDCameraRecordingSession, NSMutableSet, NSString, NSDictionary, NSSet;

@interface HMDCameraRecordingManager : HMFObject <HMDCameraRecordingSessionNotificationTriggerDelegate, HMDCameraRecordingSettingsControlDelegate, HMDDevicePreferenceDataSource, HMFLogging, HMDCameraRecordingSessionDelegate, HMDHomeMessageReceiver, HMDCameraClipManagerDelegate, HMFTimerDelegate> {

	BOOL _didShutDown;
	BOOL _motionActive;
	NSUUID* _messageTargetUUID;
	HMDStreamDataChunkAssembler* _dataChunkAssembler;
	HMDCameraRecordingResidentElector* _recordingResidentElector;
	HMDCameraRecordingBulkSendDataReadEvent* _readEvent;
	HMDCameraFeaturesDataSource* _dataSource;
	HMDCameraSignificantEventServer* _significantEventServer;
	NSUUID* _cameraUUID;
	long long _bulkSendSessionReadTimeoutFactor;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDCameraRecordingSessionNotificationTrigger* _notificationTrigger;
	HMDCameraRecordingSettingsControl* _recordingSettingsControl;
	HMDCameraRecordingManagerDependencyFactory* _dependencyFactory;
	HMFMessageDispatcher* _msgDispatcher;
	HMDHAPAccessory* _accessory;
	HMDCameraProfile* _camera;
	id<HMDDataStreamBulkSendSession> _currentBulkSendSession;
	HMDCameraRecordingBulkSendSessionInitiator* _bulkSendSessionInitiator;
	HMFTimer* _readCallbackTimer;
	HMFTimer* _sessionRetryTimer;
	HMDCameraRecordingSessionRetryContext* _sessionRetryContext;
	HMDCameraRecordingSession* _currentRecordingSession;
	NSMutableSet* _activeRecordingSessions;

}

@property (retain) HMDStreamDataChunkAssembler * dataChunkAssembler;                                     //@synthesize dataChunkAssembler=_dataChunkAssembler - In the implementation block
@property (readonly) NSString * logIdentifier; 
@property (readonly) HMDCameraRecordingResidentElector * recordingResidentElector;                       //@synthesize recordingResidentElector=_recordingResidentElector - In the implementation block
@property (readonly) NSDictionary * homePresenceByPairingIdentity; 
@property (retain) HMDCameraRecordingBulkSendDataReadEvent * readEvent;                                  //@synthesize readEvent=_readEvent - In the implementation block
@property (assign) BOOL didShutDown;                                                                     //@synthesize didShutDown=_didShutDown - In the implementation block
@property (readonly) NSString * bulkSendSessionOpenReason; 
@property (readonly) HMDCameraFeaturesDataSource * dataSource;                                           //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) HMDCameraSignificantEventServer * significantEventServer;                           //@synthesize significantEventServer=_significantEventServer - In the implementation block
@property (copy,readonly) NSUUID * cameraUUID;                                                           //@synthesize cameraUUID=_cameraUUID - In the implementation block
@property (readonly) long long bulkSendSessionReadTimeoutFactor;                                         //@synthesize bulkSendSessionReadTimeoutFactor=_bulkSendSessionReadTimeoutFactor - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                             //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMDCameraRecordingSessionNotificationTrigger * notificationTrigger;                 //@synthesize notificationTrigger=_notificationTrigger - In the implementation block
@property (readonly) HMDCameraRecordingSettingsControl * recordingSettingsControl;                       //@synthesize recordingSettingsControl=_recordingSettingsControl - In the implementation block
@property (readonly) HMDCameraRecordingManagerDependencyFactory * dependencyFactory;                     //@synthesize dependencyFactory=_dependencyFactory - In the implementation block
@property (readonly) HMFMessageDispatcher * msgDispatcher;                                               //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (__weak,readonly) HMDHAPAccessory * accessory;                                                 //@synthesize accessory=_accessory - In the implementation block
@property (__weak,readonly) HMDCameraProfile * camera;                                                   //@synthesize camera=_camera - In the implementation block
@property (retain) id<HMDDataStreamBulkSendSession> currentBulkSendSession;                              //@synthesize currentBulkSendSession=_currentBulkSendSession - In the implementation block
@property (readonly) HMDCameraRecordingBulkSendSessionInitiator * bulkSendSessionInitiator;              //@synthesize bulkSendSessionInitiator=_bulkSendSessionInitiator - In the implementation block
@property (retain) HMFTimer * readCallbackTimer;                                                         //@synthesize readCallbackTimer=_readCallbackTimer - In the implementation block
@property (retain) HMFTimer * sessionRetryTimer;                                                         //@synthesize sessionRetryTimer=_sessionRetryTimer - In the implementation block
@property (retain) HMDCameraRecordingSessionRetryContext * sessionRetryContext;                          //@synthesize sessionRetryContext=_sessionRetryContext - In the implementation block
@property (getter=isMotionActive) BOOL motionActive;                                                     //@synthesize motionActive=_motionActive - In the implementation block
@property (retain) HMDCameraRecordingSession * currentRecordingSession;                                  //@synthesize currentRecordingSession=_currentRecordingSession - In the implementation block
@property (readonly) NSMutableSet * activeRecordingSessions;                                             //@synthesize activeRecordingSessions=_activeRecordingSessions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID;                                               //@synthesize messageTargetUUID=_messageTargetUUID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)start;
-(void)_start;
-(void)shutDown;
-(HMDCameraFeaturesDataSource *)dataSource;
-(HMDCameraProfile *)camera;
-(HMDHAPAccessory *)accessory;
-(NSString *)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)session:(id)arg1 didEndWithError:(id)arg2 ;
-(BOOL)supportsDeviceWithCapabilities:(id)arg1 ;
-(id)initWithCamera:(id)arg1 recordingManagementService:(id)arg2 dependencyFactory:(id)arg3 ;
-(HMDCameraRecordingResidentElector *)recordingResidentElector;
-(void)_shutDown;
-(BOOL)didShutDown;
-(void)setMotionActive:(BOOL)arg1 ;
-(HMDCameraRecordingSession *)currentRecordingSession;
-(void)_resetRetryContextWithReason:(id)arg1 ;
-(void)_coordinateRecordingSessionForTrigger:(unsigned long long)arg1 ;
-(void)_clipManagerDidStartUpCloudZone;
-(NSUUID *)cameraUUID;
-(void)_closeCurrentSessionsWithReason:(unsigned short)arg1 ;
-(BOOL)isMotionActive;
-(HMDCameraSignificantEventServer *)significantEventServer;
-(HMDCameraRecordingSettingsControl *)recordingSettingsControl;
-(HMDCameraRecordingBulkSendSessionInitiator *)bulkSendSessionInitiator;
-(HMDCameraRecordingSessionNotificationTrigger *)notificationTrigger;
-(void)handleStartRecordingSessionRequest:(id)arg1 ;
-(void)handleCameraSettingsDidChangeNotification:(id)arg1 ;
-(void)setDidShutDown:(BOOL)arg1 ;
-(NSString *)bulkSendSessionOpenReason;
-(NSDictionary *)homePresenceByPairingIdentity;
-(void)_startRecordingSessionForTrigger:(unsigned long long)arg1 homePresenceByPairingIdentity:(id)arg2 reason:(id)arg3 ;
-(void)_forwardRecordingSessionForTrigger:(unsigned long long)arg1 withSortedDevices:(id)arg2 withRetries:(long long)arg3 ;
-(HMDCameraRecordingManagerDependencyFactory *)dependencyFactory;
-(void)setCurrentRecordingSession:(HMDCameraRecordingSession *)arg1 ;
-(NSMutableSet *)activeRecordingSessions;
-(void)_startRecordingSessionForTrigger:(unsigned long long)arg1 homePresenceByPairingIdentity:(id)arg2 reason:(id)arg3 completionCallback:(/*^block*/id)arg4 ;
-(HMFTimer *)sessionRetryTimer;
-(id<HMDDataStreamBulkSendSession>)currentBulkSendSession;
-(void)_createRecordingSessionForTrigger:(unsigned long long)arg1 homePresenceByPairingIdentity:(id)arg2 ;
-(void)_resetCurrentRecordingSession:(id)arg1 ;
-(void)_handleBulkSendSessionCreated:(id)arg1 ;
-(void)setReadEvent:(HMDCameraRecordingBulkSendDataReadEvent *)arg1 ;
-(HMDCameraRecordingBulkSendDataReadEvent *)readEvent;
-(void)_submitReadEventWithStatus:(unsigned short)arg1 ;
-(void)_startBulkSendDataReadEvent;
-(long long)bulkSendSessionReadTimeoutFactor;
-(void)setReadCallbackTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)readCallbackTimer;
-(void)setCurrentBulkSendSession:(id<HMDDataStreamBulkSendSession>)arg1 ;
-(void)_readDataForCurrentSession;
-(void)_handleDataReceived:(id)arg1 ;
-(void)setSessionRetryTimer:(HMFTimer *)arg1 ;
-(HMDCameraRecordingSessionRetryContext *)sessionRetryContext;
-(HMDStreamDataChunkAssembler *)dataChunkAssembler;
-(void)setDataChunkAssembler:(HMDStreamDataChunkAssembler *)arg1 ;
-(void)_bulkSendReadDidReceiveStreamDataChunk:(id)arg1 ;
-(void)setSessionRetryContext:(HMDCameraRecordingSessionRetryContext *)arg1 ;
-(void)_startSessionRetryTimer;
-(unsigned short)_closeEventReasonForRecordingSessionError:(id)arg1 ;
-(void)notificationTrigger:(id)arg1 didObserveTriggerType:(unsigned long long)arg2 changeToActive:(BOOL)arg3 ;
-(void)recordingSettingsControlDidConfigure:(id)arg1 ;
-(void)clipManagerDidStartUpCloudZone:(id)arg1 ;
-(void)clipManagerDidStop:(id)arg1 ;
-(id)initWithCamera:(id)arg1 recordingManagementService:(id)arg2 ;
@end

