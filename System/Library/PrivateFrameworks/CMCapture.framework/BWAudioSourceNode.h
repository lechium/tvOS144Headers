/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWSourceNode.h>
#import <libobjc.A.dylib/BWAudioSourceRecordingReadinessDelegate.h>
#import <libobjc.A.dylib/BWZoomCompletionDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class BWNodeOutput, NSDictionary, NSObject, NSArray, NSString;

@interface BWAudioSourceNode : BWSourceNode <BWAudioSourceRecordingReadinessDelegate, BWZoomCompletionDelegate> {

	BWNodeOutput* _outputsByMicSourcePosition[3];
	NSDictionary* _sourceRequirements;
	opaqueCMSessionRef _CMSession;
	CFStringRef _CMSessionAudioMode;
	BOOL _useDecoupledIO;
	BOOL _prefersNoInterruptionsByRingtonesAndAlerts;
	NSObject*<OS_dispatch_queue> _cmSessionSetRecordingRelatedPropertyQueue;
	BOOL _didBeginInterruption;
	BOOL _doEndInterruption;
	BOOL _isAppAudioSession;
	BOOL _configuresSession;
	SCD_Struct_Fi79 _clientAuditToken;
	int _clientPID;
	OpaqueCMClockRef _clock;
	opaqueCMFormatDescriptionRef _auOutputFormatDescription;
	unsigned _pullDuration;
	OpaqueAudioComponentInstanceRef _audioUnit;
	unsigned _auSubType;
	opaqueCMSimpleQueueRef _renderProcErrorQueue;
	opaqueCMSimpleQueueRef _inactiveBuffersQueue;
	opaqueCMSimpleQueueRef _activeBuffersQueue;
	unsigned long long _nextExpectedHostTime;
	SCD_Struct_BW7 _nextExpectedSampleTime;
	SCD_Struct_BW7 _ioprocTimeStampDeltaLimit;
	SCD_Struct_BW7 _prevPTS;
	unsigned _prevNumFrames;
	NSObject*<OS_dispatch_queue> _generateSamplesDispatchQueue;
	BOOL _streamStarted;
	BOOL _streamInterrupted;
	BOOL _levelMeteringEnabled;
	int _audioLevelUnits;
	SCD_Struct_BW7 _latencyOffset;
	NSObject*<OS_dispatch_source> _silenceTimer;
	long long _auRenderCount;
	long long _silenceFramesGeneratedSinceLastAURenderProc;
	TimestampedAudioBufferList* _currentSilenceBuffer;
	NSObject*<OS_dispatch_queue> _preparedToRecordHandlerCallbackQueue;
	BOOL _livePhotoCaptureEnabled;
	BOOL _stereoAudioCaptureEnabled;
	BOOL _videoRecordingEnabled;
	BOOL _isMultiCamSession;
	BOOL _flipStereoAudioCaptureChannels;
	float _stereoAudioCapturePairedCameraBaseFieldOfView;
	float _stereoAudioCapturePairedCameraZoomFactor;
	NSObject*<OS_dispatch_queue> _zoomHandlerQueue;
	long long _maxZoomFrequencyNanos;
	long long _nextZoomTime;
	NSObject*<OS_dispatch_source> _zoomTimer;
	float _nextZoomFactor;
	os_unfair_lock_s _zoomLock;

}

@property (nonatomic,readonly) NSArray * audioLevels; 
@property (nonatomic,readonly) BOOL didBeginInterruption;              //@synthesize didBeginInterruption=_didBeginInterruption - In the implementation block
@property (assign,nonatomic) BOOL interrupted;                         //@synthesize streamInterrupted=_streamInterrupted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)audioSourceNodeWithAttributes:(id)arg1 sessionPreset:(id)arg2 clock:(OpaqueCMClockRef)arg3 doConfigureAudio:(BOOL)arg4 CMSession:(opaqueCMSessionRef)arg5 doEndInterruption:(BOOL)arg6 clientAuditToken:(SCD_Struct_Fi79)arg7 clientVersionOfLinkedSDK:(unsigned)arg8 audioCaptureConnectionConfigurations:(id)arg9 isMultiCamSession:(BOOL)arg10 ;
-(void)dealloc;
-(OpaqueCMClockRef)clock;
-(BOOL)start:(id*)arg1 ;
-(BOOL)interrupted;
-(void)setInterrupted:(BOOL)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(BOOL)videoRecordingEnabled;
-(void)setVideoRecordingEnabled:(BOOL)arg1 ;
-(BOOL)livePhotoCaptureEnabled;
-(void)setLivePhotoCaptureEnabled:(BOOL)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)nodeSubType;
-(void)makeCurrentConfigurationLive;
-(BOOL)hasNonLiveConfigurationChanges;
-(void)prepareToStartRecordingWithOrientation:(int)arg1 recordingSettingsID:(long long)arg2 prefersNoInterruptionsByRingtonesAndAlerts:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)unprepareForRecording;
-(BOOL)didBeginInterruption;
-(void)setFlipStereoAudioCaptureChannels:(BOOL)arg1 ;
-(NSArray *)audioLevels;
-(void)makeOutputsLiveIfNeeded;
-(int)_setCMSessionAudioModeAndSelectMic:(BOOL*)arg1 ;
-(BOOL)_cmSessionBooleanPropertyIsTrue:(CFStringRef)arg1 ;
-(void)_updateAudioClockDeviceUID:(CFStringRef)arg1 ;
-(int)_updatePullFormatDescription;
-(int)_setCMSessionPropertyWithKey:(CFStringRef)arg1 value:(void*)arg2 ;
-(void)_generateSilenceIfNeeded;
-(void)_updateStereoAudioCapturePairedCameraZoomFactorAndStartTimer:(BOOL)arg1 ;
-(id)_initWithAttributes:(id)arg1 sessionPreset:(id)arg2 clock:(OpaqueCMClockRef)arg3 doConfigureAudio:(BOOL)arg4 CMSession:(opaqueCMSessionRef)arg5 doEndInterruption:(BOOL)arg6 clientAuditToken:(SCD_Struct_Fi79)arg7 clientVersionOfLinkedSDK:(unsigned)arg8 audioCaptureConnectionConfigurations:(id)arg9 isMultiCamSession:(BOOL)arg10 ;
-(int)_setupAudioUnit;
-(void)_setVADCameraParametersWithDirection:(int)arg1 zoomFactor:(float)arg2 forTime:(long long)arg3 ;
-(double)_desiredSampleRate:(BOOL*)arg1 ;
-(int)_deactivateCMSessionIfNecessary:(BOOL*)arg1 ;
-(int)_virtualAudioDeviceCameraMics;
-(void)_updateCMSessionAudioMode;
-(int)_configureCMSessionWithDefaultHardwareSampleRate:(double)arg1 didCallDoNotNotifyOtherSessionsOnNextInactive:(BOOL*)arg2 ;
-(int)_selectMicForAudioRoute:(id)arg1 ;
-(int)_getAudioDevicePullFrames:(unsigned*)arg1 ;
-(int)_generatePullBuffers;
-(unsigned)_audioCombinedLatency;
-(opaqueCMSampleBufferRef)_createSampleBufferForTimestampedAudioBufferList:(TimestampedAudioBufferList*)arg1 audioBufferIndex:(int)arg2 ;
-(void)_setupPrepareToRecordStateWithFlags:(unsigned)arg1 ;
-(void)zoomCommandHandler:(id)arg1 didApplyZoomFactor:(float)arg2 zoomFactorWithoutFudge:(float)arg3 rampComplete:(BOOL)arg4 rampCommandID:(int)arg5 ;
-(BOOL)levelMeteringEnabled;
-(void)setLevelMeteringEnabled:(BOOL)arg1 ;
-(BOOL)stereoAudioCaptureEnabled;
-(void)setStereoAudioCaptureEnabled:(BOOL)arg1 ;
-(BOOL)flipStereoAudioCaptureChannels;
-(id)outputForMicSourcePosition:(int)arg1 ;
-(float)stereoAudioCapturePairedCameraBaseFieldOfView;
-(void)setStereoAudioCapturePairedCameraBaseFieldOfView:(float)arg1 ;
-(float)stereoAudioCapturePairedCameraZoomFactor;
-(void)setStereoAudioCapturePairedCameraZoomFactor:(float)arg1 ;
-(void)_generateSamples;
@end

