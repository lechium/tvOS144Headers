/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureFileOutput.h>

@class AVCaptureMovieFileOutputInternal, NSArray;

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput {

	AVCaptureMovieFileOutputInternal* _internal;

}

@property (assign,nonatomic) SCD_Struct_AV0 movieFragmentInterval; 
@property (nonatomic,copy) NSArray * metadata; 
@property (nonatomic,readonly) NSArray * availableVideoCodecTypes; 
+(void)initialize;
+(id)new;
+(long long)uniqueID;
+(BOOL)consolidateMovieFragmentsInFile:(id)arg1 error:(id*)arg2 ;
+(BOOL)updateMovieMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(void)dealloc;
-(NSArray *)metadata;
-(void)setMetadata:(NSArray *)arg1 ;
-(void)stopRecording;
-(BOOL)isRecording;
-(void)removeConnection:(id)arg1 ;
-(id)outputFileURL;
-(void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2 ;
-(BOOL)isRecordingPaused;
-(void)pauseRecording;
-(void)resumeRecording;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(CGSize)outputSizeForSourceFormat:(id)arg1 ;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(NSArray *)availableVideoCodecTypes;
-(BOOL)_recordingInProgress;
-(id)outputSettingsForConnection:(id)arg1 ;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(SCD_Struct_AV0)movieFragmentInterval;
-(id)bravoCameraSelectionBehaviorForRecording;
-(void)_updateSupportedPropertiesForSourceDevice:(id)arg1 ;
-(void)_startRecording:(id)arg1 ;
-(int)_stopRecording;
-(void)handleDidStopRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2 demoof:(BOOL)arg3 addMetadata:(BOOL)arg4 ;
-(id)_avErrorUserInfoDictionaryForError:(int)arg1 wrapper:(id)arg2 payload:(id)arg3 ;
-(void)_removeRecordingDelegateWrapper:(id)arg1 ;
-(void)handleDidStartRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2 ;
-(void)handleDidPauseRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2 ;
-(void)handleDidResumeRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2 ;
-(void)_updateAvailableVideoCodecTypesForSourceDevice:(id)arg1 ;
-(void)_updateBravoCameraSelectionBehaviorForSourceDevice:(id)arg1 ;
-(void)setMovieFragmentInterval:(SCD_Struct_AV0)arg1 ;
-(void)setSendsLastVideoPreviewFrame:(BOOL)arg1 ;
-(BOOL)sendsLastVideoPreviewFrame;
-(void)setBravoCameraSelectionBehaviorForRecording:(id)arg1 ;
-(void)setOutputSettings:(id)arg1 forConnection:(id)arg2 ;
-(BOOL)recordsVideoOrientationAndMirroringChangesAsMetadataTrackForConnection:(id)arg1 ;
-(void)setRecordsVideoOrientationAndMirroringChanges:(BOOL)arg1 asMetadataTrackForConnection:(id)arg2 ;
-(void)setConnectionsActive:(BOOL)arg1 ;
@end

