/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDCameraStreamControlManager.h>
#import <libobjc.A.dylib/HMDStreamingManagerDelegate.h>
#import <libobjc.A.dylib/HMDCameraIDSSessionInitiatorDelegate.h>
#import <libobjc.A.dylib/HMDCameraIDSDeviceConnectionSenderDelegate.h>
#import <libobjc.A.dylib/HMDCameraStreamControlManagerProtocol.h>

@class HMDCameraLocalStreamSession, HMDCameraMediaConfigGenerator, HMDCameraSupportedConfigurationCache, NSString, HMDCameraStreamMetrics;

@interface HMDCameraLocalStreamControlManager : HMDCameraStreamControlManager <HMDStreamingManagerDelegate, HMDCameraIDSSessionInitiatorDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraStreamControlManagerProtocol> {

	HMDCameraLocalStreamSession* _streamSession;
	HMDCameraMediaConfigGenerator* _configGenerator;
	HMDCameraSupportedConfigurationCache* _supportedConfigCache;

}

@property (nonatomic,retain) HMDCameraLocalStreamSession * streamSession;                              //@synthesize streamSession=_streamSession - In the implementation block
@property (nonatomic,retain) HMDCameraMediaConfigGenerator * configGenerator;                          //@synthesize configGenerator=_configGenerator - In the implementation block
@property (nonatomic,retain) HMDCameraSupportedConfigurationCache * supportedConfigCache;              //@synthesize supportedConfigCache=_supportedConfigCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HMDCameraStreamMetrics * streamMetrics; 
+(id)logCategory;
-(void)dealloc;
-(void)startStream:(id)arg1 ;
-(void)_startStream:(id)arg1 ;
-(void)updateAudioSetting:(unsigned long long)arg1 ;
-(void)updateAudioVolume:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)streamingManager:(id)arg1 didStartStream:(id)arg2 slotIdentifier:(id)arg3 ;
-(void)streamingManagerDidReceiveFirstFrame:(id)arg1 audioStreamSetting:(unsigned long long)arg2 aspectRatio:(id)arg3 slotIdentifier:(id)arg4 ;
-(void)streamingManagerDidStartRelay:(id)arg1 ;
-(void)streamingManagerDidStopStream:(id)arg1 error:(id)arg2 ;
-(void)streamingManagerDidNetworkImprove:(id)arg1 ;
-(void)streamingManagerDidNetworkDeteriorate:(id)arg1 ;
-(void)streamingManagerDidUpdateConfiguration:(id)arg1 ;
-(void)sessionInitiator:(id)arg1 didSetup:(id)arg2 ;
-(void)sessionInitiator:(id)arg1 didEndSession:(id)arg2 ;
-(void)setStreamSession:(HMDCameraLocalStreamSession *)arg1 ;
-(void)_stopCurrentStreamSession:(id)arg1 ;
-(HMDCameraLocalStreamSession *)streamSession;
-(void)_negotiateStream;
-(void)_cleanUpStreamSession:(id)arg1 ;
-(HMDCameraMediaConfigGenerator *)configGenerator;
-(void)_streamStarted;
-(void)_reconfigureStream:(id)arg1 ;
-(void)_reconfigureStreams;
-(void)_sendUpdatedConfiguration;
-(void)deviceConnectionSender:(id)arg1 didSetup:(id)arg2 ;
-(void)deviceConnectionSender:(id)arg1 didEndSession:(id)arg2 ;
-(void)negotiateStream;
-(void)reconfigureStream:(id)arg1 ;
-(void)stopStream:(id)arg1 ;
-(void)remoteSetup:(id)arg1 ;
-(void)setConfigGenerator:(HMDCameraMediaConfigGenerator *)arg1 ;
-(HMDCameraSupportedConfigurationCache *)supportedConfigCache;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 reachabilityPath:(unsigned long long)arg4 device:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 accessory:(id)arg8 streamManagementService:(id)arg9 remoteCapabilities:(id)arg10 supportedConfigCache:(id)arg11 streamPreference:(id)arg12 ;
-(void)_writeSetupEndPoint;
-(void)_getSupportedConfigurations;
-(void)_handleSupportedParameters:(id)arg1 ;
-(void)_sendSetupEndPointRead;
-(void)_handleSetupEndPointRead:(id)arg1 ;
-(BOOL)_validateSetupEndPointReadWithWrite;
-(id)_calculateMTU;
-(void)_startStreamingManager;
-(void)_writeStopConfig:(id)arg1 ;
-(void)_writeSelectConfig:(id)arg1 reconfigure:(BOOL)arg2 ;
-(void)_writeStartConfig;
-(void)_writeReselectConfig;
-(void)setSupportedConfigCache:(HMDCameraSupportedConfigurationCache *)arg1 ;
@end

